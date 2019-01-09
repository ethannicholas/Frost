#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/core/Panda.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/regex/RegexParser.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Immutable.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "org/pandalanguage/regex/RegexLexer.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$arrayLiteral$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeSpecifiers$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn56)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn61)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn73)(panda$collections$CollectionView*);
typedef void (*$fn96)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn113)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn136)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn145)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn151)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn156)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn240)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn254)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn269)(panda$collections$CollectionView*);
typedef void (*$fn282)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn286)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn293)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn305)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn320)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn332)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn367)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn375)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn417)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn515)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn560)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn574)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn689)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn703)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn793)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn800)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn808)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn815)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn837)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn848)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn872)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn917)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn933)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn1024)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1032)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1043)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1060)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1096)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1104)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1123)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn1141)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1754)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1758)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1774)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1778)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn1800)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn1811)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2129)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn2280)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2289)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn2331)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn2388)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2480)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2671)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn2825)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2977)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3088)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3099)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3111)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3150)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3329)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3382)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3866)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3891)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn3932)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3949)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4286)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4375)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4383)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Bit (*$fn4708)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4741)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4752)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4877)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4899)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4920)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4980)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn5053)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn5079)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5144)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn5242)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5272)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn5454)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5567)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5585)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5660)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5770)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5789)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 115, 3267958933078468177, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x6f\x72\x6d\x61\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, -6104022719463629235, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x53\x74\x72\x69\x6e\x67\x28\x73\x74\x61\x72\x74\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 150, 5596123724125244779, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0d", 1, 114, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x09", 1, 110, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x72\x65\x6e\x74\x68\x65\x73\x69\x7a\x65\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 130, -3528500452895244303, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5b\x27", 3, 1437370, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, -447243349616865045, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x67\x65\x74\x43\x6c\x61\x73\x73\x4e\x61\x6d\x65\x28\x65\x78\x70\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 143, 3966034510964126636, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 102, 4113279969965127102, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x66\x75\x6e\x63\x74\x69\x6f\x6e\x4f\x72\x54\x75\x70\x6c\x65\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 126, 1133438859089359542, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x61\x6c\x6c\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, 4799290866155849891, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x72\x65\x66\x69\x78\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 123, 7025835381767841785, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x75\x6c\x74\x69\x70\x6c\x69\x63\x61\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 131, 1288059034360540827, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x64\x64\x69\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -6498999101577693159, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x61\x6e\x67\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4989268421802719344, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5520043150958930526, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 120, -4330199518315084178, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 1041864171980171049, NULL };
static panda$core$String $s3936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s4020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 3710200635956915444, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, -6217056272548492480, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, 5346443027079530942, NULL };
static panda$core$String $s4257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -5695239785840128988, NULL };
static panda$core$String $s4432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s5008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s5040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s5060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, 5129060284430572773, NULL };
static panda$core$String $s5548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -2097092122738507249, NULL };
static panda$core$String $s5804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

void org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$pandac$parser$Parser* param0, panda$threads$MessageQueue* param1) {

// line 35
org$pandalanguage$pandac$parser$Lexer* $tmp2 = (org$pandalanguage$pandac$parser$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class);
org$pandalanguage$pandac$parser$Lexer$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$pandac$parser$Lexer** $tmp3 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
org$pandalanguage$pandac$parser$Lexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.pandac.parser.Lexer)
// line 45
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp7 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp9 = &param0->pushbackBuffer;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($15:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
// line 47
panda$collections$Stack* $tmp10 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
panda$collections$Stack$init($tmp10);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$collections$Stack** $tmp11 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp12 = *$tmp11;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$collections$Stack** $tmp13 = &param0->commaSeparatedExpressionContext;
*$tmp13 = $tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($29:panda.collections.Stack<panda.core.Bit>)
// line 49
panda$core$Bit $tmp14 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp15 = &param0->inSpeculative;
*$tmp15 = $tmp14;
// line 51
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp16 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp17 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp19 = &param0->speculativeBuffer;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($48:panda.collections.SpecializedArray<org.pandalanguage.pandac.parser.Token>)
// line 53
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp21 = &param0->allowLambdas;
*$tmp21 = $tmp20;
// line 55
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp23 = &param0->reportErrors;
*$tmp23 = $tmp22;
// line 60
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$threads$MessageQueue** $tmp24 = &param0->errors;
panda$threads$MessageQueue* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$threads$MessageQueue** $tmp26 = &param0->errors;
*$tmp26 = param1;
// line 61
panda$collections$Stack** $tmp27 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp28 = *$tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit$wrapper* $tmp30;
$tmp30 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp30->value = $tmp29;
panda$collections$Stack$push$panda$collections$Stack$T($tmp28, ((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($83:panda.collections.Stack.T)
// line 62
org$pandalanguage$regex$RegexParser* $tmp31 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp31, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
org$pandalanguage$regex$RegexParser** $tmp32 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
org$pandalanguage$regex$RegexParser** $tmp34 = &param0->regexParser;
*$tmp34 = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($89:org.pandalanguage.regex.RegexParser)
return;

}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, panda$io$File* param1, panda$core$String* param2) {

// line 66
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp36 = &param0->reportErrors;
*$tmp36 = $tmp35;
// line 67
org$pandalanguage$pandac$parser$Lexer** $tmp37 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp38 = *$tmp37;
org$pandalanguage$pandac$parser$Lexer$start$panda$core$String($tmp38, param2);
// line 68
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp39 = &param0->path;
panda$io$File* $tmp40 = *$tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$io$File** $tmp41 = &param0->path;
*$tmp41 = param1;
// line 69
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp42 = &param0->source;
panda$core$String* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$String** $tmp44 = &param0->source;
*$tmp44 = param2;
// line 70
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp45 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp46 = *$tmp45;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp46);
// line 71
org$pandalanguage$regex$RegexParser** $tmp47 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp48 = *$tmp47;
org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String($tmp48, param1, param2);
// line 72
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp49 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp50 = *$tmp49;
panda$core$Bit $tmp51 = panda$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block2;
block1:;
// line 73
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp53 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp54 = *$tmp53;
$fn56 $tmp55 = ($fn56) $tmp54->$class->vtable[2];
$tmp55($tmp54);
goto block2;
block2:;
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$parser$Token local2;
panda$core$Bit local3;
// line 78
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp57 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp58 = *$tmp57;
ITable* $tmp59 = ((panda$collections$CollectionView*) $tmp58)->$class->itable;
while ($tmp59->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp59 = $tmp59->next;
}
$fn61 $tmp60 = $tmp59->methods[0];
panda$core$Int64 $tmp62 = $tmp60(((panda$collections$CollectionView*) $tmp58));
panda$core$Int64 $tmp63 = (panda$core$Int64) {0};
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 != $tmp65;
panda$core$Bit $tmp67 = (panda$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block1; else goto block2;
block1:;
// line 79
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp69 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp70 = *$tmp69;
ITable* $tmp71 = ((panda$collections$CollectionView*) $tmp70)->$class->itable;
while ($tmp71->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
panda$core$Int64 $tmp74 = $tmp72(((panda$collections$CollectionView*) $tmp70));
panda$core$Int64 $tmp75 = (panda$core$Int64) {1};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76 - $tmp77;
panda$core$Int64 $tmp79 = (panda$core$Int64) {$tmp78};
*(&local0) = $tmp79;
// line 80
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp80 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp81 = *$tmp80;
panda$core$Int64 $tmp82 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp83 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp81, $tmp82);
*(&local1) = $tmp83;
// line 81
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp84 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp85 = *$tmp84;
panda$core$Int64 $tmp86 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp87 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp85, $tmp86);
// line 82
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp88 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp89 = *$tmp88;
panda$core$Bit $tmp90 = panda$core$Bit$init$builtin_bit($tmp89 != NULL);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block3; else goto block4;
block3:;
// line 83
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp92 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp93 = *$tmp92;
org$pandalanguage$pandac$parser$Token $tmp94 = *(&local1);
$fn96 $tmp95 = ($fn96) $tmp93->$class->vtable[6];
$tmp95($tmp93, $tmp94);
goto block4;
block4:;
// line 85
org$pandalanguage$pandac$parser$Token $tmp97 = *(&local1);
return $tmp97;
block2:;
// line 87
org$pandalanguage$pandac$parser$Lexer** $tmp98 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp99 = *$tmp98;
org$pandalanguage$pandac$parser$Token $tmp100 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token($tmp99);
*(&local2) = $tmp100;
// line 88
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp101 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp102 = *$tmp101;
panda$core$Bit $tmp103 = panda$core$Bit$init$builtin_bit($tmp102 != NULL);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block5; else goto block6;
block5:;
// line 89
org$pandalanguage$pandac$parser$Token $tmp105 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp106 = $tmp105.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp107;
$tmp107 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp107->value = $tmp106;
panda$core$Int64 $tmp108 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp109 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp108);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp110;
$tmp110 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp110->value = $tmp109;
ITable* $tmp111 = ((panda$core$Equatable*) $tmp107)->$class->itable;
while ($tmp111->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
panda$core$Bit $tmp114 = $tmp112(((panda$core$Equatable*) $tmp107), ((panda$core$Equatable*) $tmp110));
bool $tmp115 = $tmp114.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp110)));
// unreffing REF($73:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp107)));
// unreffing REF($69:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp115) goto block7; else goto block8;
block7:;
// line 90
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp116 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp117 = *$tmp116;
panda$collections$Stack** $tmp118 = &$tmp117->stack;
panda$collections$Stack* $tmp119 = *$tmp118;
panda$core$Int64 $tmp120 = panda$collections$Stack$get_count$R$panda$core$Int64($tmp119);
panda$core$Int64 $tmp121 = (panda$core$Int64) {0};
panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp120, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block11; else goto block12;
block11:;
*(&local3) = $tmp122;
goto block13;
block12:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp124 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp125 = *$tmp124;
panda$collections$Stack** $tmp126 = &$tmp125->stack;
panda$collections$Stack* $tmp127 = *$tmp126;
panda$core$Int64 $tmp128 = (panda$core$Int64) {0};
panda$core$Object* $tmp129 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp127, $tmp128);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp130;
$tmp130 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp130->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp129)->value;
panda$core$Int64 $tmp131 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp132 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp131);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp133;
$tmp133 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp133->value = $tmp132;
ITable* $tmp134 = ((panda$core$Equatable*) $tmp130)->$class->itable;
while ($tmp134->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
panda$core$Bit $tmp137 = $tmp135(((panda$core$Equatable*) $tmp130), ((panda$core$Equatable*) $tmp133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp133)));
// unreffing REF($111:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp130)));
// unreffing REF($107:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
// unreffing REF($105:panda.collections.Stack.T)
*(&local3) = $tmp137;
goto block13;
block13:;
panda$core$Bit $tmp138 = *(&local3);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block9; else goto block14;
block9:;
// line 92
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp140 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp141 = *$tmp140;
panda$core$Int64 $tmp142 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp143 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp142);
$fn145 $tmp144 = ($fn145) $tmp141->$class->vtable[3];
$tmp144($tmp141, $tmp143);
goto block10;
block14:;
// line 1
// line 95
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp146 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp147 = *$tmp146;
panda$core$Int64 $tmp148 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp149 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp148);
$fn151 $tmp150 = ($fn151) $tmp147->$class->vtable[4];
$tmp150($tmp147, $tmp149);
goto block10;
block10:;
goto block8;
block8:;
// line 98
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp152 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp153 = *$tmp152;
org$pandalanguage$pandac$parser$Token $tmp154 = *(&local2);
$fn156 $tmp155 = ($fn156) $tmp153->$class->vtable[6];
$tmp155($tmp153, $tmp154);
goto block6;
block6:;
// line 100
panda$core$Bit* $tmp157 = &param0->inSpeculative;
panda$core$Bit $tmp158 = *$tmp157;
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block15; else goto block16;
block15:;
// line 101
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp160 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp161 = *$tmp160;
org$pandalanguage$pandac$parser$Token $tmp162 = *(&local2);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp161, $tmp162);
goto block16;
block16:;
// line 103
org$pandalanguage$pandac$parser$Token $tmp163 = *(&local2);
return $tmp163;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
// line 107
goto block1;
block1:;
// line 108
org$pandalanguage$pandac$parser$Token $tmp164 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp164;
// line 109
org$pandalanguage$pandac$parser$Token $tmp165 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp166 = $tmp165.kind;
panda$core$Int64 $tmp167 = $tmp166.$rawValue;
panda$core$Int64 $tmp168 = (panda$core$Int64) {13};
panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block4; else goto block5;
block4:;
// line 111
goto block1;
block5:;
panda$core$Int64 $tmp171 = (panda$core$Int64) {9};
panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block6; else goto block7;
block6:;
// line 114
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp174 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp175 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp176 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp175);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp174, param0, $tmp176);
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp177 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
*(&local1) = $tmp174;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($20:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
// line 115
goto block8;
block8:;
// line 116
org$pandalanguage$pandac$parser$Token $tmp178 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp178;
// line 117
org$pandalanguage$pandac$parser$Token $tmp179 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp180 = $tmp179.kind;
panda$core$Int64 $tmp181 = $tmp180.$rawValue;
panda$core$Int64 $tmp182 = (panda$core$Int64) {13};
panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp181, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block11; else goto block12;
block11:;
// line 119
org$pandalanguage$pandac$parser$Token $tmp185 = *(&local2);
panda$core$String* $tmp186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp185);
panda$core$Bit $tmp187 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp186, &$s188);
bool $tmp189 = $tmp187.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp186));
// unreffing REF($49:panda.core.String)
if ($tmp189) goto block13; else goto block14;
block13:;
// line 120
goto block9;
block14:;
goto block10;
block12:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {0};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp181, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block15; else goto block10;
block15:;
// line 124
org$pandalanguage$pandac$parser$Token $tmp193 = *(&local2);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp194 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp193;
block10:;
goto block8;
block9:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp195 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing auto
*(&local1) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block7:;
panda$core$Int64 $tmp196 = (panda$core$Int64) {10};
panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block16; else goto block17;
block16:;
// line 130
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp199 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp200 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp201 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp200);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp199, param0, $tmp201);
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp202 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
*(&local3) = $tmp199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing REF($83:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
// line 131
goto block18;
block18:;
// line 132
org$pandalanguage$pandac$parser$Token $tmp203 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp203;
// line 133
org$pandalanguage$pandac$parser$Token $tmp204 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp205 = $tmp204.kind;
panda$core$Int64 $tmp206 = $tmp205.$rawValue;
panda$core$Int64 $tmp207 = (panda$core$Int64) {11};
panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block21; else goto block22;
block21:;
// line 135
goto block19;
block22:;
panda$core$Int64 $tmp210 = (panda$core$Int64) {0};
panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block23; else goto block20;
block23:;
// line 138
org$pandalanguage$pandac$parser$Token $tmp213 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp213, &$s214);
// line 139
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp216 = &param0->reportErrors;
*$tmp216 = $tmp215;
// line 140
org$pandalanguage$pandac$parser$Token $tmp217 = *(&local4);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp218 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp217;
block20:;
goto block18;
block19:;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp219 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing auto
*(&local3) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
goto block3;
block17:;
// line 146
org$pandalanguage$pandac$parser$Token $tmp220 = *(&local0);
return $tmp220;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit(false);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp223 = (panda$core$Int64) {106};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s224, $tmp223, &$s225);
abort(); // unreachable
block24:;
abort(); // unreachable

}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 153
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp226 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp227 = *$tmp226;
panda$core$Bit $tmp228 = panda$core$Bit$init$builtin_bit($tmp227 != NULL);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 154
goto block3;
block3:;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp230 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp231 = *$tmp230;
panda$collections$Array** $tmp232 = &$tmp231->tokens;
panda$collections$Array* $tmp233 = *$tmp232;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp234 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp235 = *$tmp234;
panda$collections$Array** $tmp236 = &$tmp235->tokens;
panda$collections$Array* $tmp237 = *$tmp236;
ITable* $tmp238 = ((panda$collections$CollectionView*) $tmp237)->$class->itable;
while ($tmp238->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
panda$core$Int64 $tmp241 = $tmp239(((panda$collections$CollectionView*) $tmp237));
panda$core$Int64 $tmp242 = (panda$core$Int64) {1};
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243 - $tmp244;
panda$core$Int64 $tmp246 = (panda$core$Int64) {$tmp245};
panda$core$Object* $tmp247 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp233, $tmp246);
panda$core$Object** $tmp248 = &((org$pandalanguage$pandac$Pair*) $tmp247)->first;
panda$core$Object* $tmp249 = *$tmp248;
panda$core$String* $tmp250 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp249)->value);
panda$core$String* $tmp251 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, param1);
ITable* $tmp252 = ((panda$core$Equatable*) $tmp250)->$class->itable;
while ($tmp252->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[1];
panda$core$Bit $tmp255 = $tmp253(((panda$core$Equatable*) $tmp250), ((panda$core$Equatable*) $tmp251));
bool $tmp256 = $tmp255.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp247);
// unreffing REF($28:panda.collections.Array.T)
if ($tmp256) goto block4; else goto block5;
block4:;
// line 156
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp257 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp258 = *$tmp257;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp259 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp260 = *$tmp259;
panda$collections$Array** $tmp261 = &$tmp260->tokens;
panda$collections$Array* $tmp262 = *$tmp261;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp263 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp264 = *$tmp263;
panda$collections$Array** $tmp265 = &$tmp264->tokens;
panda$collections$Array* $tmp266 = *$tmp265;
ITable* $tmp267 = ((panda$collections$CollectionView*) $tmp266)->$class->itable;
while ($tmp267->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp267 = $tmp267->next;
}
$fn269 $tmp268 = $tmp267->methods[0];
panda$core$Int64 $tmp270 = $tmp268(((panda$collections$CollectionView*) $tmp266));
panda$core$Int64 $tmp271 = (panda$core$Int64) {1};
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271.value;
int64_t $tmp274 = $tmp272 - $tmp273;
panda$core$Int64 $tmp275 = (panda$core$Int64) {$tmp274};
panda$core$Object* $tmp276 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp262, $tmp275);
panda$core$Object** $tmp277 = &((org$pandalanguage$pandac$Pair*) $tmp276)->first;
panda$core$Object* $tmp278 = *$tmp277;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp258, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp278)->value);
panda$core$Panda$unref$panda$core$Object$Q($tmp276);
// unreffing REF($74:panda.collections.Array.T)
// line 158
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp279 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp280 = *$tmp279;
$fn282 $tmp281 = ($fn282) $tmp280->$class->vtable[7];
$tmp281($tmp280);
goto block3;
block5:;
// line 160
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp283 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp284 = *$tmp283;
$fn286 $tmp285 = ($fn286) $tmp284->$class->vtable[7];
$tmp285($tmp284);
goto block2;
block2:;
// line 162
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp287 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp288 = *$tmp287;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp288, param1);
return;

}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* param0) {

// line 166
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp289 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp290 = *$tmp289;
ITable* $tmp291 = ((panda$collections$CollectionView*) $tmp290)->$class->itable;
while ($tmp291->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp291 = $tmp291->next;
}
$fn293 $tmp292 = $tmp291->methods[0];
panda$core$Int64 $tmp294 = $tmp292(((panda$collections$CollectionView*) $tmp290));
panda$core$Int64 $tmp295 = (panda$core$Int64) {0};
panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp294, $tmp295);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block1; else goto block2;
block1:;
// line 167
org$pandalanguage$pandac$parser$Token $tmp298 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp298);
goto block2;
block2:;
// line 169
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp299 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp300 = *$tmp299;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp301 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp302 = *$tmp301;
ITable* $tmp303 = ((panda$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
panda$core$Int64 $tmp306 = $tmp304(((panda$collections$CollectionView*) $tmp302));
panda$core$Int64 $tmp307 = (panda$core$Int64) {1};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
panda$core$Int64 $tmp311 = (panda$core$Int64) {$tmp310};
org$pandalanguage$pandac$parser$Token $tmp312 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp300, $tmp311);
return $tmp312;

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1) {

org$pandalanguage$pandac$parser$Token local0;
// line 173
org$pandalanguage$pandac$parser$Token $tmp313 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp313;
// line 174
org$pandalanguage$pandac$parser$Token $tmp314 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp315 = $tmp314.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp316;
$tmp316 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp316->value = $tmp315;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp317;
$tmp317 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp317->value = param1;
ITable* $tmp318 = ((panda$core$Equatable*) $tmp316)->$class->itable;
while ($tmp318->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
panda$core$Bit $tmp321 = $tmp319(((panda$core$Equatable*) $tmp316), ((panda$core$Equatable*) $tmp317));
bool $tmp322 = $tmp321.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp317)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp316)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp322) goto block1; else goto block2;
block1:;
// line 175
org$pandalanguage$pandac$parser$Token $tmp323 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp323, true });
block2:;
// line 177
org$pandalanguage$pandac$parser$Token $tmp324 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp324);
// line 178
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token$Kind param1, panda$core$String* param2) {

org$pandalanguage$pandac$parser$Token local0;
// line 182
org$pandalanguage$pandac$parser$Token $tmp325 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp325;
// line 183
org$pandalanguage$pandac$parser$Token $tmp326 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp327 = $tmp326.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp328;
$tmp328 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp328->value = $tmp327;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp329;
$tmp329 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp329->value = param1;
ITable* $tmp330 = ((panda$core$Equatable*) $tmp328)->$class->itable;
while ($tmp330->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[0];
panda$core$Bit $tmp333 = $tmp331(((panda$core$Equatable*) $tmp328), ((panda$core$Equatable*) $tmp329));
bool $tmp334 = $tmp333.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp329)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp328)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp334) goto block1; else goto block2;
block1:;
// line 184
org$pandalanguage$pandac$parser$Token $tmp335 = *(&local0);
return ((org$pandalanguage$pandac$parser$Token$nullable) { $tmp335, true });
block2:;
// line 186
org$pandalanguage$pandac$parser$Token $tmp336 = *(&local0);
panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, param2);
panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s340);
org$pandalanguage$pandac$parser$Token $tmp341 = *(&local0);
panda$core$String* $tmp342 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp341);
panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, $tmp342);
panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s345);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp336, $tmp344);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($25:panda.core.String)
// line 187
return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });

}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1, panda$core$String* param2) {

panda$core$Bit local0;
// line 191
panda$core$Bit* $tmp346 = &param0->inSpeculative;
panda$core$Bit $tmp347 = *$tmp346;
panda$core$Bit $tmp348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block3; else goto block4;
block3:;
panda$core$Bit* $tmp350 = &param0->reportErrors;
panda$core$Bit $tmp351 = *$tmp350;
*(&local0) = $tmp351;
goto block5;
block4:;
*(&local0) = $tmp348;
goto block5;
block5:;
panda$core$Bit $tmp352 = *(&local0);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block1; else goto block2;
block1:;
// line 192
panda$threads$MessageQueue** $tmp354 = &param0->errors;
panda$threads$MessageQueue* $tmp355 = *$tmp354;
org$pandalanguage$pandac$Compiler$Error* $tmp356 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp357 = &param0->path;
panda$io$File* $tmp358 = *$tmp357;
org$pandalanguage$pandac$Position $tmp359 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp356, $tmp358, $tmp359, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp355, ((panda$core$Immutable*) $tmp356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($19:org.pandalanguage.pandac.Compiler.Error)
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 197
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp360 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp361 = *$tmp360;
panda$core$Bit $tmp362 = panda$core$Bit$init$builtin_bit($tmp361 != NULL);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block1; else goto block2;
block1:;
// line 198
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp364 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp365 = *$tmp364;
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[3];
$tmp366($tmp365, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param1) {

// line 203
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp368 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp369 = *$tmp368;
panda$core$Bit $tmp370 = panda$core$Bit$init$builtin_bit($tmp369 != NULL);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block1; else goto block2;
block1:;
// line 204
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp372 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp373 = *$tmp372;
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[4];
$tmp374($tmp373, param1);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp376 = &param0->inSpeculative;
panda$core$Bit $tmp377 = *$tmp376;
panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp380 = (panda$core$Int64) {210};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s381, $tmp380, &$s382);
abort(); // unreachable
block1:;
// line 211
panda$core$Bit* $tmp383 = &param0->inSpeculative;
panda$core$Bit $tmp384 = *$tmp383;
panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp387 = (panda$core$Int64) {211};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s388, $tmp387);
abort(); // unreachable
block3:;
// line 212
panda$core$Bit $tmp389 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp390 = &param0->inSpeculative;
*$tmp390 = $tmp389;
// line 213
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp391 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp392 = *$tmp391;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear($tmp392);
// line 214
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp393 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp394 = *$tmp393;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp395 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp396 = *$tmp395;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT($tmp394, ((panda$collections$CollectionView*) $tmp396));
return;

}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Bit* $tmp397 = &param0->inSpeculative;
panda$core$Bit $tmp398 = *$tmp397;
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp400 = (panda$core$Int64) {219};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s401, $tmp400, &$s402);
abort(); // unreachable
block1:;
// line 220
panda$core$Bit $tmp403 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp404 = &param0->inSpeculative;
*$tmp404 = $tmp403;
return;

}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
panda$core$Bit* $tmp405 = &param0->inSpeculative;
panda$core$Bit $tmp406 = *$tmp405;
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp408 = (panda$core$Int64) {225};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block1:;
// line 226
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp412 = &param0->inSpeculative;
*$tmp412 = $tmp411;
// line 227
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp413 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp414 = *$tmp413;
ITable* $tmp415 = ((panda$collections$CollectionView*) $tmp414)->$class->itable;
while ($tmp415->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
panda$core$Int64 $tmp418 = $tmp416(((panda$collections$CollectionView*) $tmp414));
panda$core$Int64 $tmp419 = (panda$core$Int64) {1};
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419.value;
int64_t $tmp422 = $tmp420 - $tmp421;
panda$core$Int64 $tmp423 = (panda$core$Int64) {$tmp422};
panda$core$Int64 $tmp424 = (panda$core$Int64) {0};
panda$core$Int64 $tmp425 = (panda$core$Int64) {18446744073709551615};
panda$core$Bit $tmp426 = panda$core$Bit$init$builtin_bit(true);
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp427 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp423, $tmp424, $tmp425, $tmp426);
panda$core$Int64 $tmp428 = $tmp427.start;
*(&local0) = $tmp428;
panda$core$Int64 $tmp429 = $tmp427.end;
panda$core$Int64 $tmp430 = $tmp427.step;
panda$core$UInt64 $tmp431 = panda$core$Int64$convert$R$panda$core$UInt64($tmp430);
panda$core$Int64 $tmp432 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp430);
panda$core$UInt64 $tmp433 = panda$core$Int64$convert$R$panda$core$UInt64($tmp432);
panda$core$Bit $tmp434 = $tmp427.inclusive;
bool $tmp435 = $tmp434.value;
panda$core$Int64 $tmp436 = (panda$core$Int64) {0};
int64_t $tmp437 = $tmp430.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 >= $tmp438;
panda$core$Bit $tmp440 = (panda$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block6; else goto block7;
block6:;
if ($tmp435) goto block8; else goto block9;
block8:;
int64_t $tmp442 = $tmp428.value;
int64_t $tmp443 = $tmp429.value;
bool $tmp444 = $tmp442 <= $tmp443;
panda$core$Bit $tmp445 = (panda$core$Bit) {$tmp444};
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block3; else goto block4;
block9:;
int64_t $tmp447 = $tmp428.value;
int64_t $tmp448 = $tmp429.value;
bool $tmp449 = $tmp447 < $tmp448;
panda$core$Bit $tmp450 = (panda$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block3; else goto block4;
block7:;
if ($tmp435) goto block10; else goto block11;
block10:;
int64_t $tmp452 = $tmp428.value;
int64_t $tmp453 = $tmp429.value;
bool $tmp454 = $tmp452 >= $tmp453;
panda$core$Bit $tmp455 = (panda$core$Bit) {$tmp454};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block3; else goto block4;
block11:;
int64_t $tmp457 = $tmp428.value;
int64_t $tmp458 = $tmp429.value;
bool $tmp459 = $tmp457 > $tmp458;
panda$core$Bit $tmp460 = (panda$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block3; else goto block4;
block3:;
// line 228
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp462 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp463 = *$tmp462;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp464 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp465 = *$tmp464;
panda$core$Int64 $tmp466 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp467 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token($tmp465, $tmp466);
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token($tmp463, $tmp467);
goto block5;
block5:;
panda$core$Int64 $tmp468 = *(&local0);
if ($tmp441) goto block13; else goto block14;
block13:;
int64_t $tmp469 = $tmp429.value;
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469 - $tmp470;
panda$core$Int64 $tmp472 = (panda$core$Int64) {$tmp471};
panda$core$UInt64 $tmp473 = panda$core$Int64$convert$R$panda$core$UInt64($tmp472);
if ($tmp435) goto block15; else goto block16;
block15:;
uint64_t $tmp474 = $tmp473.value;
uint64_t $tmp475 = $tmp431.value;
bool $tmp476 = $tmp474 >= $tmp475;
panda$core$Bit $tmp477 = (panda$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block12; else goto block4;
block16:;
uint64_t $tmp479 = $tmp473.value;
uint64_t $tmp480 = $tmp431.value;
bool $tmp481 = $tmp479 > $tmp480;
panda$core$Bit $tmp482 = (panda$core$Bit) {$tmp481};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block12; else goto block4;
block14:;
int64_t $tmp484 = $tmp468.value;
int64_t $tmp485 = $tmp429.value;
int64_t $tmp486 = $tmp484 - $tmp485;
panda$core$Int64 $tmp487 = (panda$core$Int64) {$tmp486};
panda$core$UInt64 $tmp488 = panda$core$Int64$convert$R$panda$core$UInt64($tmp487);
if ($tmp435) goto block17; else goto block18;
block17:;
uint64_t $tmp489 = $tmp488.value;
uint64_t $tmp490 = $tmp433.value;
bool $tmp491 = $tmp489 >= $tmp490;
panda$core$Bit $tmp492 = (panda$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block12; else goto block4;
block18:;
uint64_t $tmp494 = $tmp488.value;
uint64_t $tmp495 = $tmp433.value;
bool $tmp496 = $tmp494 > $tmp495;
panda$core$Bit $tmp497 = (panda$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block12; else goto block4;
block12:;
int64_t $tmp499 = $tmp468.value;
int64_t $tmp500 = $tmp430.value;
int64_t $tmp501 = $tmp499 + $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {$tmp501};
*(&local0) = $tmp502;
goto block3;
block4:;
return;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

// line 233
panda$core$String** $tmp503 = &param0->source;
panda$core$String* $tmp504 = *$tmp503;
panda$core$String$Index $tmp505 = param1.start;
panda$core$String$Index $tmp506 = param1.end;
panda$core$Bit $tmp507 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp508 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp505, $tmp506, $tmp507);
panda$core$String* $tmp509 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp504, $tmp508);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
// unreffing REF($7:panda.core.String)
return $tmp509;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$ASTNode* param2) {

// line 237
panda$core$Bit $tmp510 = panda$core$Bit$init$builtin_bit(param1 == NULL);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 238
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
return param2;
block2:;
// line 240
org$pandalanguage$pandac$ASTNode* $tmp512 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp513 = (panda$core$Int64) {5};
$fn515 $tmp514 = ($fn515) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp516 = $tmp514(param1);
panda$core$Int64 $tmp517 = (panda$core$Int64) {52};
org$pandalanguage$pandac$parser$Token$Kind $tmp518 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp517);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp512, $tmp513, $tmp516, param1, $tmp518, param2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing REF($10:org.pandalanguage.pandac.ASTNode)
return $tmp512;

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$core$String* local4 = NULL;
panda$core$Char8 local5;
// line 244
panda$core$MutableString* $tmp519 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp519);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
panda$core$MutableString* $tmp520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
*(&local0) = $tmp519;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing REF($1:panda.core.MutableString)
// line 245
goto block1;
block1:;
// line 246
org$pandalanguage$pandac$parser$Token $tmp521 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp521;
// line 247
org$pandalanguage$pandac$parser$Token $tmp522 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp523 = $tmp522.kind;
panda$core$Int64 $tmp524 = $tmp523.$rawValue;
panda$core$Int64 $tmp525 = (panda$core$Int64) {13};
panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block4; else goto block5;
block4:;
// line 249
org$pandalanguage$pandac$parser$Token $tmp528 = *(&local1);
panda$core$String* $tmp529 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp528);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
panda$core$String* $tmp530 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
*(&local2) = $tmp529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
// unreffing REF($28:panda.core.String)
// line 250
panda$core$String* $tmp531 = *(&local2);
panda$core$Bit $tmp532 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp531, &$s533);
bool $tmp534 = $tmp532.value;
if ($tmp534) goto block6; else goto block7;
block6:;
// line 251
org$pandalanguage$pandac$parser$Token $tmp535 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp535, &$s536);
// line 252
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp537 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp538 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block7:;
// line 254
panda$core$MutableString* $tmp539 = *(&local0);
panda$core$String* $tmp540 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp539, $tmp540);
panda$core$String* $tmp541 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
goto block3;
block5:;
panda$core$Int64 $tmp542 = (panda$core$Int64) {0};
panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block8; else goto block9;
block8:;
// line 257
org$pandalanguage$pandac$parser$Token $tmp545 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp545, &$s546);
// line 258
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp547 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp548 = (panda$core$Int64) {107};
panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block10; else goto block11;
block10:;
// line 261
org$pandalanguage$pandac$parser$Token $tmp551 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp551;
// line 262
org$pandalanguage$pandac$parser$Token $tmp552 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp553 = $tmp552.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp554;
$tmp554 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp554->value = $tmp553;
panda$core$Int64 $tmp555 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp556 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp555);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp557;
$tmp557 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp557->value = $tmp556;
ITable* $tmp558 = ((panda$core$Equatable*) $tmp554)->$class->itable;
while ($tmp558->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp558 = $tmp558->next;
}
$fn560 $tmp559 = $tmp558->methods[0];
panda$core$Bit $tmp561 = $tmp559(((panda$core$Equatable*) $tmp554), ((panda$core$Equatable*) $tmp557));
bool $tmp562 = $tmp561.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp557)));
// unreffing REF($101:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp554)));
// unreffing REF($97:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp562) goto block12; else goto block13;
block12:;
// line 263
org$pandalanguage$pandac$parser$Token $tmp563 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp563, &$s564);
// line 264
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp565 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 266
org$pandalanguage$pandac$parser$Token $tmp566 = *(&local3);
panda$core$String* $tmp567 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp566);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
panda$core$String* $tmp568 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
*(&local4) = $tmp567;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing REF($126:panda.core.String)
// line 267
panda$core$String* $tmp569 = *(&local4);
panda$collections$ListView* $tmp570 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp569);
panda$core$Int64 $tmp571 = (panda$core$Int64) {0};
ITable* $tmp572 = $tmp570->$class->itable;
while ($tmp572->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp572 = $tmp572->next;
}
$fn574 $tmp573 = $tmp572->methods[0];
panda$core$Object* $tmp575 = $tmp573($tmp570, $tmp571);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp575)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp575);
// unreffing REF($143:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
// unreffing REF($139:panda.collections.ListView<panda.core.Char8>)
// line 268
panda$core$Char8 $tmp576 = *(&local5);
panda$core$UInt8 $tmp577 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp578 = panda$core$Char8$init$panda$core$UInt8($tmp577);
panda$core$Bit $tmp579 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block15; else goto block16;
block15:;
// line 269
panda$core$MutableString* $tmp581 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp581, &$s582);
goto block14;
block16:;
panda$core$UInt8 $tmp583 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp584 = panda$core$Char8$init$panda$core$UInt8($tmp583);
panda$core$Bit $tmp585 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block17; else goto block18;
block17:;
// line 270
panda$core$MutableString* $tmp587 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp587, &$s588);
goto block14;
block18:;
panda$core$UInt8 $tmp589 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp590 = panda$core$Char8$init$panda$core$UInt8($tmp589);
panda$core$Bit $tmp591 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp590);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block19; else goto block20;
block19:;
// line 271
panda$core$MutableString* $tmp593 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp593, &$s594);
goto block14;
block20:;
panda$core$UInt8 $tmp595 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp596 = panda$core$Char8$init$panda$core$UInt8($tmp595);
panda$core$Bit $tmp597 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block21; else goto block22;
block21:;
// line 272
panda$core$MutableString* $tmp599 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp599, &$s600);
goto block14;
block22:;
panda$core$UInt8 $tmp601 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp602 = panda$core$Char8$init$panda$core$UInt8($tmp601);
panda$core$Bit $tmp603 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block23; else goto block24;
block23:;
// line 273
panda$core$MutableString* $tmp605 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp605, &$s606);
goto block14;
block24:;
panda$core$UInt8 $tmp607 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp608 = panda$core$Char8$init$panda$core$UInt8($tmp607);
panda$core$Bit $tmp609 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block25; else goto block26;
block25:;
// line 274
panda$core$MutableString* $tmp611 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp611, &$s612);
goto block14;
block26:;
panda$core$UInt8 $tmp613 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp614 = panda$core$Char8$init$panda$core$UInt8($tmp613);
panda$core$Bit $tmp615 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp576, $tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block27; else goto block28;
block27:;
// line 275
panda$core$MutableString* $tmp617 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp617, &$s618);
goto block14;
block28:;
// line 277
org$pandalanguage$pandac$parser$Token $tmp619 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp619, &$s620);
// line 278
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp621 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp622 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block14:;
// line 281
panda$core$MutableString* $tmp623 = *(&local0);
panda$core$String* $tmp624 = *(&local4);
panda$core$String* $tmp625 = *(&local4);
panda$core$String* $tmp626 = *(&local4);
panda$core$String$Index $tmp627 = panda$core$String$get_start$R$panda$core$String$Index($tmp626);
panda$core$String$Index $tmp628 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp625, $tmp627);
panda$core$Bit $tmp629 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp630 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp628, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp629);
panda$core$String* $tmp631 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp624, $tmp630);
panda$core$MutableString$append$panda$core$String($tmp623, $tmp631);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing REF($244:panda.core.String)
panda$core$String* $tmp632 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
goto block3;
block11:;
panda$core$Int64 $tmp633 = (panda$core$Int64) {101};
panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp524, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block29; else goto block30;
block29:;
// line 284
org$pandalanguage$pandac$parser$Token $tmp636 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp636);
// line 285
panda$core$MutableString* $tmp637 = *(&local0);
panda$core$String* $tmp638 = panda$core$MutableString$finish$R$panda$core$String($tmp637);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing REF($264:panda.core.String)
panda$core$MutableString* $tmp639 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp638;
block30:;
// line 288
panda$core$MutableString* $tmp640 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp641 = *(&local1);
panda$core$String* $tmp642 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp641);
panda$core$MutableString$append$panda$core$String($tmp640, $tmp642);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
// unreffing REF($280:panda.core.String)
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp643 = panda$core$Bit$init$builtin_bit(false);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp645 = (panda$core$Int64) {243};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s646, $tmp645, &$s647);
abort(); // unreachable
block31:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$parser$Token param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$core$String* local4 = NULL;
panda$core$Char8 local5;
// line 295
panda$core$MutableString* $tmp648 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp648);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$MutableString* $tmp649 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
*(&local0) = $tmp648;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// unreffing REF($1:panda.core.MutableString)
// line 296
goto block1;
block1:;
// line 297
org$pandalanguage$pandac$parser$Token $tmp650 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp650;
// line 298
org$pandalanguage$pandac$parser$Token $tmp651 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp652 = $tmp651.kind;
panda$core$Int64 $tmp653 = $tmp652.$rawValue;
panda$core$Int64 $tmp654 = (panda$core$Int64) {13};
panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp654);
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block4; else goto block5;
block4:;
// line 300
org$pandalanguage$pandac$parser$Token $tmp657 = *(&local1);
panda$core$String* $tmp658 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp657);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
panda$core$String* $tmp659 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
*(&local2) = $tmp658;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing REF($28:panda.core.String)
// line 301
panda$core$String* $tmp660 = *(&local2);
panda$core$Bit $tmp661 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp660, &$s662);
bool $tmp663 = $tmp661.value;
if ($tmp663) goto block6; else goto block7;
block6:;
// line 302
org$pandalanguage$pandac$parser$Token $tmp664 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp664, &$s665);
// line 303
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp666 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp667 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block7:;
// line 305
panda$core$MutableString* $tmp668 = *(&local0);
panda$core$String* $tmp669 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp668, $tmp669);
panda$core$String* $tmp670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing str
*(&local2) = ((panda$core$String*) NULL);
goto block3;
block5:;
panda$core$Int64 $tmp671 = (panda$core$Int64) {0};
panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block8; else goto block9;
block8:;
// line 308
org$pandalanguage$pandac$parser$Token $tmp674 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp674, &$s675);
// line 309
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block9:;
panda$core$Int64 $tmp677 = (panda$core$Int64) {107};
panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block10; else goto block11;
block10:;
// line 312
org$pandalanguage$pandac$parser$Token $tmp680 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp680;
// line 313
org$pandalanguage$pandac$parser$Token $tmp681 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp682 = $tmp681.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp683;
$tmp683 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp683->value = $tmp682;
panda$core$Int64 $tmp684 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp685 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp684);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp686;
$tmp686 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp686->value = $tmp685;
ITable* $tmp687 = ((panda$core$Equatable*) $tmp683)->$class->itable;
while ($tmp687->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp687 = $tmp687->next;
}
$fn689 $tmp688 = $tmp687->methods[0];
panda$core$Bit $tmp690 = $tmp688(((panda$core$Equatable*) $tmp683), ((panda$core$Equatable*) $tmp686));
bool $tmp691 = $tmp690.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp686)));
// unreffing REF($101:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp683)));
// unreffing REF($97:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp691) goto block12; else goto block13;
block12:;
// line 314
org$pandalanguage$pandac$parser$Token $tmp692 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp692, &$s693);
// line 315
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$MutableString* $tmp694 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block13:;
// line 317
org$pandalanguage$pandac$parser$Token $tmp695 = *(&local3);
panda$core$String* $tmp696 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp695);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$String* $tmp697 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
*(&local4) = $tmp696;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
// unreffing REF($126:panda.core.String)
// line 318
panda$core$String* $tmp698 = *(&local4);
panda$collections$ListView* $tmp699 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp698);
panda$core$Int64 $tmp700 = (panda$core$Int64) {0};
ITable* $tmp701 = $tmp699->$class->itable;
while ($tmp701->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[0];
panda$core$Object* $tmp704 = $tmp702($tmp699, $tmp700);
*(&local5) = ((panda$core$Char8$wrapper*) $tmp704)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp704);
// unreffing REF($143:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing REF($139:panda.collections.ListView<panda.core.Char8>)
// line 319
panda$core$Char8 $tmp705 = *(&local5);
panda$core$UInt8 $tmp706 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp707 = panda$core$Char8$init$panda$core$UInt8($tmp706);
panda$core$Bit $tmp708 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block15; else goto block16;
block15:;
// line 320
panda$core$MutableString* $tmp710 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp710, &$s711);
goto block14;
block16:;
panda$core$UInt8 $tmp712 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp713 = panda$core$Char8$init$panda$core$UInt8($tmp712);
panda$core$Bit $tmp714 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block17; else goto block18;
block17:;
// line 321
panda$core$MutableString* $tmp716 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp716, &$s717);
goto block14;
block18:;
panda$core$UInt8 $tmp718 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp719 = panda$core$Char8$init$panda$core$UInt8($tmp718);
panda$core$Bit $tmp720 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block19; else goto block20;
block19:;
// line 322
panda$core$MutableString* $tmp722 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp722, &$s723);
goto block14;
block20:;
panda$core$UInt8 $tmp724 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp725 = panda$core$Char8$init$panda$core$UInt8($tmp724);
panda$core$Bit $tmp726 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp725);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block21; else goto block22;
block21:;
// line 323
panda$core$MutableString* $tmp728 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp728, &$s729);
goto block14;
block22:;
panda$core$UInt8 $tmp730 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp731 = panda$core$Char8$init$panda$core$UInt8($tmp730);
panda$core$Bit $tmp732 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp731);
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block23; else goto block24;
block23:;
// line 324
panda$core$MutableString* $tmp734 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp734, &$s735);
goto block14;
block24:;
panda$core$UInt8 $tmp736 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp737 = panda$core$Char8$init$panda$core$UInt8($tmp736);
panda$core$Bit $tmp738 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp737);
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block25; else goto block26;
block25:;
// line 325
panda$core$MutableString* $tmp740 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp740, &$s741);
goto block14;
block26:;
panda$core$UInt8 $tmp742 = (panda$core$UInt8) {58};
panda$core$Char8 $tmp743 = panda$core$Char8$init$panda$core$UInt8($tmp742);
panda$core$Bit $tmp744 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block27; else goto block28;
block27:;
// line 326
panda$core$MutableString* $tmp746 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp746, &$s747);
goto block14;
block28:;
panda$core$UInt8 $tmp748 = (panda$core$UInt8) {125};
panda$core$Char8 $tmp749 = panda$core$Char8$init$panda$core$UInt8($tmp748);
panda$core$Bit $tmp750 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp705, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block29; else goto block30;
block29:;
// line 327
panda$core$MutableString* $tmp752 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp752, &$s753);
goto block14;
block30:;
// line 329
org$pandalanguage$pandac$parser$Token $tmp754 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp754, &$s755);
// line 330
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp756 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp757 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$String*) NULL);
block14:;
// line 333
panda$core$MutableString* $tmp758 = *(&local0);
panda$core$String* $tmp759 = *(&local4);
panda$core$String* $tmp760 = *(&local4);
panda$core$String* $tmp761 = *(&local4);
panda$core$String$Index $tmp762 = panda$core$String$get_start$R$panda$core$String$Index($tmp761);
panda$core$String$Index $tmp763 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp760, $tmp762);
panda$core$Bit $tmp764 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp765 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp763, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp764);
panda$core$String* $tmp766 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp759, $tmp765);
panda$core$MutableString$append$panda$core$String($tmp758, $tmp766);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing REF($253:panda.core.String)
panda$core$String* $tmp767 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing escapeText
*(&local4) = ((panda$core$String*) NULL);
goto block3;
block11:;
panda$core$Int64 $tmp768 = (panda$core$Int64) {96};
panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp768);
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block31; else goto block32;
block31:;
// line 336
org$pandalanguage$pandac$parser$Token $tmp771 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp771);
// line 337
panda$core$MutableString* $tmp772 = *(&local0);
panda$core$String* $tmp773 = panda$core$MutableString$finish$R$panda$core$String($tmp772);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing REF($273:panda.core.String)
panda$core$MutableString* $tmp774 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp773;
block32:;
panda$core$Int64 $tmp775 = (panda$core$Int64) {101};
panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block33; else goto block34;
block33:;
// line 340
org$pandalanguage$pandac$parser$Token $tmp778 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp778);
// line 341
panda$core$MutableString* $tmp779 = *(&local0);
panda$core$String* $tmp780 = panda$core$MutableString$finish$R$panda$core$String($tmp779);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
// unreffing REF($295:panda.core.String)
panda$core$MutableString* $tmp781 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp780;
block34:;
// line 344
panda$core$MutableString* $tmp782 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp783 = *(&local1);
panda$core$String* $tmp784 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp783);
panda$core$MutableString$append$panda$core$String($tmp782, $tmp784);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing REF($311:panda.core.String)
goto block3;
block3:;
goto block1;
block2:;
panda$core$Bit $tmp785 = panda$core$Bit$init$builtin_bit(false);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block35; else goto block36;
block36:;
panda$core$Int64 $tmp787 = (panda$core$Int64) {294};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s788, $tmp787, &$s789);
abort(); // unreachable
block35:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 352
org$pandalanguage$pandac$ASTNode* $tmp790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp791 = (panda$core$Int64) {16};
$fn793 $tmp792 = ($fn793) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp794 = $tmp792(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp790, $tmp791, $tmp794, param1, &$s795);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
org$pandalanguage$pandac$ASTNode* $tmp796 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
*(&local0) = $tmp790;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode)
// line 353
org$pandalanguage$pandac$ASTNode* $tmp797 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp798 = (panda$core$Int64) {9};
$fn800 $tmp799 = ($fn800) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp801 = $tmp799(param1);
org$pandalanguage$pandac$ASTNode* $tmp802 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp803 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp803);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp797, $tmp798, $tmp801, $tmp802, $tmp803);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
org$pandalanguage$pandac$ASTNode* $tmp804 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp804));
*(&local1) = $tmp797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing REF($22:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
// unreffing REF($17:org.pandalanguage.pandac.ASTNode)
// line 354
org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp806 = (panda$core$Int64) {44};
$fn808 $tmp807 = ($fn808) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp809 = $tmp807(param1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp805, $tmp806, $tmp809, &$s810);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
org$pandalanguage$pandac$ASTNode* $tmp811 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
*(&local2) = $tmp805;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
// unreffing REF($40:org.pandalanguage.pandac.ASTNode)
// line 355
org$pandalanguage$pandac$ASTNode* $tmp812 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp813 = (panda$core$Int64) {5};
$fn815 $tmp814 = ($fn815) param1->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp816 = $tmp814(param1);
org$pandalanguage$pandac$ASTNode* $tmp817 = *(&local1);
panda$core$Int64 $tmp818 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp819 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp818);
org$pandalanguage$pandac$ASTNode* $tmp820 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp812, $tmp813, $tmp816, $tmp817, $tmp819, $tmp820);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($56:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp821 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing stringType
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp822 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
// unreffing call
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp823 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing dot
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp812;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$core$Bit local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$core$MutableString* local4 = NULL;
org$pandalanguage$pandac$parser$Token local5;
panda$core$String* local6 = NULL;
org$pandalanguage$pandac$parser$Token local7;
panda$core$String* local8 = NULL;
panda$core$Char8 local9;
panda$core$Bit local10;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$core$String* local12 = NULL;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$collections$Array* local17 = NULL;
org$pandalanguage$pandac$ASTNode* local18 = NULL;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
panda$collections$Array* local20 = NULL;
panda$core$String* local21 = NULL;
panda$core$Bit local22;
// line 360
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp824 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
panda$core$Int64 $tmp825 = (panda$core$Int64) {10};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp826 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp825);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp824, param0, $tmp826);
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp827 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
*(&local0) = $tmp824;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing REF($1:org.pandalanguage.pandac.parser.Parser.AutoSyntaxHighlight)
// line 361
org$pandalanguage$pandac$parser$Token $tmp828 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp828;
// line 362
org$pandalanguage$pandac$parser$Token $tmp829 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp830 = $tmp829.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp831;
$tmp831 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp831->value = $tmp830;
panda$core$Int64 $tmp832 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$Kind $tmp833 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp832);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp834;
$tmp834 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp834->value = $tmp833;
ITable* $tmp835 = ((panda$core$Equatable*) $tmp831)->$class->itable;
while ($tmp835->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp835 = $tmp835->next;
}
$fn837 $tmp836 = $tmp835->methods[1];
panda$core$Bit $tmp838 = $tmp836(((panda$core$Equatable*) $tmp831), ((panda$core$Equatable*) $tmp834));
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block3; else goto block4;
block3:;
org$pandalanguage$pandac$parser$Token $tmp840 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp841 = $tmp840.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp842;
$tmp842 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp842->value = $tmp841;
panda$core$Int64 $tmp843 = (panda$core$Int64) {7};
org$pandalanguage$pandac$parser$Token$Kind $tmp844 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp843);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp845;
$tmp845 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp845->value = $tmp844;
ITable* $tmp846 = ((panda$core$Equatable*) $tmp842)->$class->itable;
while ($tmp846->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp846 = $tmp846->next;
}
$fn848 $tmp847 = $tmp846->methods[1];
panda$core$Bit $tmp849 = $tmp847(((panda$core$Equatable*) $tmp842), ((panda$core$Equatable*) $tmp845));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp845)));
// unreffing REF($36:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp842)));
// unreffing REF($32:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local2) = $tmp849;
goto block5;
block4:;
*(&local2) = $tmp838;
goto block5;
block5:;
panda$core$Bit $tmp850 = *(&local2);
bool $tmp851 = $tmp850.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp834)));
// unreffing REF($25:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp831)));
// unreffing REF($21:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp851) goto block1; else goto block2;
block1:;
// line 363
org$pandalanguage$pandac$parser$Token $tmp852 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp853 = *(&local1);
panda$core$String* $tmp854 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp853);
panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s856, $tmp854);
panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, &$s858);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp852, $tmp857);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// unreffing REF($63:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($62:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp854));
// unreffing REF($61:panda.core.String)
// line 364
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp859 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 366
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp860 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 367
panda$core$MutableString* $tmp861 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp861);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
panda$core$MutableString* $tmp862 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp862));
*(&local4) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing REF($92:panda.core.MutableString)
// line 368
goto block6;
block6:;
// line 369
org$pandalanguage$pandac$parser$Token $tmp863 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp863;
// line 370
org$pandalanguage$pandac$parser$Token $tmp864 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp865 = $tmp864.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp866;
$tmp866 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp866->value = $tmp865;
org$pandalanguage$pandac$parser$Token $tmp867 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp868 = $tmp867.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp869;
$tmp869 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp869->value = $tmp868;
ITable* $tmp870 = ((panda$core$Equatable*) $tmp866)->$class->itable;
while ($tmp870->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp870 = $tmp870->next;
}
$fn872 $tmp871 = $tmp870->methods[0];
panda$core$Bit $tmp873 = $tmp871(((panda$core$Equatable*) $tmp866), ((panda$core$Equatable*) $tmp869));
bool $tmp874 = $tmp873.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp869)));
// unreffing REF($116:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp866)));
// unreffing REF($112:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp874) goto block8; else goto block9;
block8:;
// line 371
goto block7;
block9:;
// line 373
org$pandalanguage$pandac$parser$Token $tmp875 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp876 = $tmp875.kind;
panda$core$Int64 $tmp877 = $tmp876.$rawValue;
panda$core$Int64 $tmp878 = (panda$core$Int64) {13};
panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp878);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block11; else goto block12;
block11:;
// line 375
org$pandalanguage$pandac$parser$Token $tmp881 = *(&local5);
panda$core$String* $tmp882 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp881);
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
panda$core$String* $tmp883 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
*(&local6) = $tmp882;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// unreffing REF($139:panda.core.String)
// line 376
panda$core$String* $tmp884 = *(&local6);
panda$core$Bit $tmp885 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp884, &$s886);
bool $tmp887 = $tmp885.value;
if ($tmp887) goto block13; else goto block14;
block13:;
// line 377
org$pandalanguage$pandac$parser$Token $tmp888 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp888, &$s889);
// line 378
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp890 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp891 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp892 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp893 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 380
panda$core$MutableString* $tmp894 = *(&local4);
panda$core$String* $tmp895 = *(&local6);
panda$core$MutableString$append$panda$core$String($tmp894, $tmp895);
panda$core$String* $tmp896 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp896));
// unreffing str
*(&local6) = ((panda$core$String*) NULL);
goto block10;
block12:;
panda$core$Int64 $tmp897 = (panda$core$Int64) {0};
panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp897);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block15; else goto block16;
block15:;
// line 383
org$pandalanguage$pandac$parser$Token $tmp900 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp900, &$s901);
// line 384
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp902 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp902));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp903 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp904 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
panda$core$Int64 $tmp905 = (panda$core$Int64) {107};
panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp877, $tmp905);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block17; else goto block18;
block17:;
// line 387
org$pandalanguage$pandac$parser$Token $tmp908 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local7) = $tmp908;
// line 388
org$pandalanguage$pandac$parser$Token $tmp909 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind $tmp910 = $tmp909.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp911;
$tmp911 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp911->value = $tmp910;
panda$core$Int64 $tmp912 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp913 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp912);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp914;
$tmp914 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp914->value = $tmp913;
ITable* $tmp915 = ((panda$core$Equatable*) $tmp911)->$class->itable;
while ($tmp915->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[0];
panda$core$Bit $tmp918 = $tmp916(((panda$core$Equatable*) $tmp911), ((panda$core$Equatable*) $tmp914));
bool $tmp919 = $tmp918.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp914)));
// unreffing REF($232:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp911)));
// unreffing REF($228:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp919) goto block19; else goto block20;
block19:;
// line 389
org$pandalanguage$pandac$parser$Token $tmp920 = *(&local1);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp920, &$s921);
// line 390
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp922 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp923 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp924 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 392
org$pandalanguage$pandac$parser$Token $tmp925 = *(&local7);
panda$core$String* $tmp926 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp925);
*(&local8) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
panda$core$String* $tmp927 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
*(&local8) = $tmp926;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing REF($267:panda.core.String)
// line 393
panda$core$String* $tmp928 = *(&local8);
panda$collections$ListView* $tmp929 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT($tmp928);
panda$core$Int64 $tmp930 = (panda$core$Int64) {0};
ITable* $tmp931 = $tmp929->$class->itable;
while ($tmp931->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp931 = $tmp931->next;
}
$fn933 $tmp932 = $tmp931->methods[0];
panda$core$Object* $tmp934 = $tmp932($tmp929, $tmp930);
*(&local9) = ((panda$core$Char8$wrapper*) $tmp934)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp934);
// unreffing REF($284:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing REF($280:panda.collections.ListView<panda.core.Char8>)
// line 394
panda$core$Char8 $tmp935 = *(&local9);
panda$core$UInt8 $tmp936 = (panda$core$UInt8) {110};
panda$core$Char8 $tmp937 = panda$core$Char8$init$panda$core$UInt8($tmp936);
panda$core$Bit $tmp938 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block22; else goto block23;
block22:;
// line 395
panda$core$MutableString* $tmp940 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp940, &$s941);
goto block21;
block23:;
panda$core$UInt8 $tmp942 = (panda$core$UInt8) {114};
panda$core$Char8 $tmp943 = panda$core$Char8$init$panda$core$UInt8($tmp942);
panda$core$Bit $tmp944 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp943);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block24; else goto block25;
block24:;
// line 396
panda$core$MutableString* $tmp946 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp946, &$s947);
goto block21;
block25:;
panda$core$UInt8 $tmp948 = (panda$core$UInt8) {116};
panda$core$Char8 $tmp949 = panda$core$Char8$init$panda$core$UInt8($tmp948);
panda$core$Bit $tmp950 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp949);
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block26; else goto block27;
block26:;
// line 397
panda$core$MutableString* $tmp952 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp952, &$s953);
goto block21;
block27:;
panda$core$UInt8 $tmp954 = (panda$core$UInt8) {39};
panda$core$Char8 $tmp955 = panda$core$Char8$init$panda$core$UInt8($tmp954);
panda$core$Bit $tmp956 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp955);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block28; else goto block29;
block28:;
// line 398
panda$core$MutableString* $tmp958 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp958, &$s959);
goto block21;
block29:;
panda$core$UInt8 $tmp960 = (panda$core$UInt8) {34};
panda$core$Char8 $tmp961 = panda$core$Char8$init$panda$core$UInt8($tmp960);
panda$core$Bit $tmp962 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp961);
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block30; else goto block31;
block30:;
// line 399
panda$core$MutableString* $tmp964 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp964, &$s965);
goto block21;
block31:;
panda$core$UInt8 $tmp966 = (panda$core$UInt8) {92};
panda$core$Char8 $tmp967 = panda$core$Char8$init$panda$core$UInt8($tmp966);
panda$core$Bit $tmp968 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp967);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block32; else goto block33;
block32:;
// line 400
panda$core$MutableString* $tmp970 = *(&local4);
panda$core$MutableString$append$panda$core$String($tmp970, &$s971);
goto block21;
block33:;
panda$core$UInt8 $tmp972 = (panda$core$UInt8) {123};
panda$core$Char8 $tmp973 = panda$core$Char8$init$panda$core$UInt8($tmp972);
panda$core$Bit $tmp974 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($tmp935, $tmp973);
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block34; else goto block35;
block34:;
// line 403
panda$core$Bit* $tmp976 = &param0->allowLambdas;
panda$core$Bit $tmp977 = *$tmp976;
*(&local10) = $tmp977;
// line 404
panda$core$Bit $tmp978 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp979 = &param0->allowLambdas;
*$tmp979 = $tmp978;
// line 405
org$pandalanguage$pandac$ASTNode* $tmp980 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
org$pandalanguage$pandac$ASTNode* $tmp981 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
*(&local11) = $tmp980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// unreffing REF($363:org.pandalanguage.pandac.ASTNode?)
// line 406
panda$core$Bit $tmp982 = *(&local10);
panda$core$Bit* $tmp983 = &param0->allowLambdas;
*$tmp983 = $tmp982;
// line 407
org$pandalanguage$pandac$ASTNode* $tmp984 = *(&local11);
panda$core$Bit $tmp985 = panda$core$Bit$init$builtin_bit($tmp984 == NULL);
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block36; else goto block37;
block36:;
// line 408
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp988 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp989 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp989));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp990 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp991 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
// line 410
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp992 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
*(&local12) = ((panda$core$String*) NULL);
// line 411
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp993 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
*(&local13) = ((panda$core$String*) NULL);
// line 412
panda$core$Int64 $tmp994 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp995 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp994);
org$pandalanguage$pandac$parser$Token$nullable $tmp996 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp995);
panda$core$Bit $tmp997 = panda$core$Bit$init$builtin_bit($tmp996.nonnull);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block38; else goto block39;
block38:;
// line 413
org$pandalanguage$pandac$parser$Token $tmp999 = *(&local1);
panda$core$String* $tmp1000 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp999);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
panda$core$String* $tmp1001 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
*(&local12) = $tmp1000;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing REF($439:panda.core.String?)
goto block39;
block39:;
// line 415
panda$core$Int64 $tmp1002 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1003 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1002);
org$pandalanguage$pandac$parser$Token$nullable $tmp1004 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1003);
panda$core$Bit $tmp1005 = panda$core$Bit$init$builtin_bit($tmp1004.nonnull);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block40; else goto block41;
block40:;
// line 416
org$pandalanguage$pandac$parser$Token $tmp1007 = *(&local1);
panda$core$String* $tmp1008 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(param0, $tmp1007);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
panda$core$String* $tmp1009 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
*(&local13) = $tmp1008;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// unreffing REF($460:panda.core.String?)
// line 417
panda$core$String* $tmp1010 = *(&local13);
panda$core$Bit $tmp1011 = panda$core$Bit$init$builtin_bit($tmp1010 == NULL);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block42; else goto block43;
block42:;
// line 418
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1013 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1014 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1015 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1016 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1017 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1018 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1019 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 420
org$pandalanguage$pandac$ASTNode* $tmp1020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1021 = (panda$core$Int64) {44};
org$pandalanguage$pandac$ASTNode* $tmp1022 = *(&local11);
$fn1024 $tmp1023 = ($fn1024) $tmp1022->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1025 = $tmp1023($tmp1022);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1020, $tmp1021, $tmp1025, &$s1026);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
org$pandalanguage$pandac$ASTNode* $tmp1027 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1027));
*(&local14) = $tmp1020;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
// unreffing REF($516:org.pandalanguage.pandac.ASTNode)
// line 422
org$pandalanguage$pandac$ASTNode* $tmp1028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1029 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode* $tmp1030 = *(&local11);
$fn1032 $tmp1031 = ($fn1032) $tmp1030->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1033 = $tmp1031($tmp1030);
org$pandalanguage$pandac$ASTNode* $tmp1034 = *(&local11);
panda$core$Int64 $tmp1035 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp1036 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1035);
org$pandalanguage$pandac$ASTNode* $tmp1037 = *(&local14);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1028, $tmp1029, $tmp1033, $tmp1034, $tmp1036, $tmp1037);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
org$pandalanguage$pandac$ASTNode* $tmp1038 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
*(&local15) = $tmp1028;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($534:org.pandalanguage.pandac.ASTNode)
// line 424
org$pandalanguage$pandac$ASTNode* $tmp1039 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1040 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp1041 = *(&local11);
$fn1043 $tmp1042 = ($fn1043) $tmp1041->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1044 = $tmp1042($tmp1041);
org$pandalanguage$pandac$ASTNode* $tmp1045 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1039, $tmp1040, $tmp1044, $tmp1045, &$s1046);
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
org$pandalanguage$pandac$ASTNode* $tmp1047 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
*(&local16) = $tmp1039;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
// unreffing REF($557:org.pandalanguage.pandac.ASTNode)
// line 425
panda$collections$Array* $tmp1048 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1048);
*(&local17) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
panda$collections$Array* $tmp1049 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
*(&local17) = $tmp1048;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing REF($576:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 426
panda$collections$Array* $tmp1050 = *(&local17);
org$pandalanguage$pandac$ASTNode* $tmp1051 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1052 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token $tmp1053 = *(&local1);
org$pandalanguage$pandac$Position $tmp1054 = $tmp1053.position;
panda$core$String* $tmp1055 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1051, $tmp1052, $tmp1054, $tmp1055);
panda$collections$Array$add$panda$collections$Array$T($tmp1050, ((panda$core$Object*) $tmp1051));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing REF($592:org.pandalanguage.pandac.ASTNode)
// line 427
org$pandalanguage$pandac$ASTNode* $tmp1056 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1057 = (panda$core$Int64) {9};
org$pandalanguage$pandac$ASTNode* $tmp1058 = *(&local11);
$fn1060 $tmp1059 = ($fn1060) $tmp1058->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1061 = $tmp1059($tmp1058);
org$pandalanguage$pandac$ASTNode* $tmp1062 = *(&local16);
panda$collections$Array* $tmp1063 = *(&local17);
org$pandalanguage$pandac$FixedArray* $tmp1064 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1063);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1056, $tmp1057, $tmp1061, $tmp1062, $tmp1064);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
org$pandalanguage$pandac$ASTNode* $tmp1065 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
*(&local11) = $tmp1056;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
// unreffing REF($614:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
// unreffing REF($605:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp1066 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1066));
// unreffing callArgs
*(&local17) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1067 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
// unreffing dot
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1068 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
// unreffing cast
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1069 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
// unreffing formattable
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block41:;
// line 430
panda$core$Int64 $tmp1070 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp1071 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1070);
org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1071, &$s1073);
panda$core$Bit $tmp1074 = panda$core$Bit$init$builtin_bit(!$tmp1072.nonnull);
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block44; else goto block45;
block44:;
// line 431
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1076 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1077 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1078 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1079 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1080 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1081 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1082 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 433
panda$core$String* $tmp1083 = *(&local12);
panda$core$Bit $tmp1084 = panda$core$Bit$init$builtin_bit($tmp1083 != NULL);
bool $tmp1085 = $tmp1084.value;
if ($tmp1085) goto block46; else goto block47;
block46:;
// line 434
panda$core$String* $tmp1086 = *(&local13);
panda$core$Bit $tmp1087 = panda$core$Bit$init$builtin_bit($tmp1086 == NULL);
bool $tmp1088 = $tmp1087.value;
if ($tmp1088) goto block48; else goto block49;
block48:;
// line 435
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1090 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1089);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
org$pandalanguage$pandac$ASTNode* $tmp1091 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
*(&local11) = $tmp1090;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
// unreffing REF($713:org.pandalanguage.pandac.ASTNode)
goto block49;
block49:;
// line 437
org$pandalanguage$pandac$ASTNode* $tmp1092 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1093 = (panda$core$Int64) {44};
org$pandalanguage$pandac$ASTNode* $tmp1094 = *(&local11);
$fn1096 $tmp1095 = ($fn1096) $tmp1094->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1097 = $tmp1095($tmp1094);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1092, $tmp1093, $tmp1097, &$s1098);
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
org$pandalanguage$pandac$ASTNode* $tmp1099 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
*(&local18) = $tmp1092;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// unreffing REF($726:org.pandalanguage.pandac.ASTNode)
// line 438
org$pandalanguage$pandac$ASTNode* $tmp1100 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1101 = (panda$core$Int64) {16};
org$pandalanguage$pandac$ASTNode* $tmp1102 = *(&local11);
$fn1104 $tmp1103 = ($fn1104) $tmp1102->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1105 = $tmp1103($tmp1102);
org$pandalanguage$pandac$ASTNode* $tmp1106 = *(&local18);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1100, $tmp1101, $tmp1105, $tmp1106, &$s1107);
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
org$pandalanguage$pandac$ASTNode* $tmp1108 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
*(&local19) = $tmp1100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// unreffing REF($744:org.pandalanguage.pandac.ASTNode)
// line 439
panda$collections$Array* $tmp1109 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1109);
*(&local20) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
panda$collections$Array* $tmp1110 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
*(&local20) = $tmp1109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// unreffing REF($763:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 440
panda$collections$Array* $tmp1111 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1112 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1111, ((panda$core$Object*) $tmp1112));
// line 441
panda$collections$Array* $tmp1113 = *(&local20);
org$pandalanguage$pandac$ASTNode* $tmp1114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1115 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token $tmp1116 = *(&local1);
org$pandalanguage$pandac$Position $tmp1117 = $tmp1116.position;
panda$core$String* $tmp1118 = *(&local12);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1114, $tmp1115, $tmp1117, $tmp1118);
panda$collections$Array$add$panda$collections$Array$T($tmp1113, ((panda$core$Object*) $tmp1114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
// unreffing REF($786:org.pandalanguage.pandac.ASTNode)
// line 442
org$pandalanguage$pandac$ASTNode* $tmp1119 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1120 = (panda$core$Int64) {9};
org$pandalanguage$pandac$ASTNode* $tmp1121 = *(&local11);
$fn1123 $tmp1122 = ($fn1123) $tmp1121->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1124 = $tmp1122($tmp1121);
org$pandalanguage$pandac$ASTNode* $tmp1125 = *(&local19);
panda$collections$Array* $tmp1126 = *(&local20);
org$pandalanguage$pandac$FixedArray* $tmp1127 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1126);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1119, $tmp1120, $tmp1124, $tmp1125, $tmp1127);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
org$pandalanguage$pandac$ASTNode* $tmp1128 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
*(&local11) = $tmp1119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
// unreffing REF($808:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing REF($799:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp1129 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing callArgs
*(&local20) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1130 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing callTarget
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1131 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing pandaType
*(&local18) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block47;
block47:;
// line 445
panda$core$MutableString* $tmp1132 = *(&local4);
panda$core$String* $tmp1133 = panda$core$MutableString$finish$R$panda$core$String($tmp1132);
*(&local21) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
panda$core$String* $tmp1134 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
*(&local21) = $tmp1133;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing REF($842:panda.core.String)
// line 446
panda$core$MutableString* $tmp1135 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1135);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
panda$core$MutableString* $tmp1136 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
*(&local4) = $tmp1135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing REF($854:panda.core.MutableString)
// line 447
panda$core$String* $tmp1137 = *(&local21);
ITable* $tmp1139 = ((panda$core$Equatable*) $tmp1137)->$class->itable;
while ($tmp1139->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1139 = $tmp1139->next;
}
$fn1141 $tmp1140 = $tmp1139->methods[1];
panda$core$Bit $tmp1142 = $tmp1140(((panda$core$Equatable*) $tmp1137), ((panda$core$Equatable*) &$s1138));
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block52; else goto block53;
block52:;
*(&local22) = $tmp1142;
goto block54;
block53:;
org$pandalanguage$pandac$ASTNode* $tmp1144 = *(&local3);
panda$core$Bit $tmp1145 = panda$core$Bit$init$builtin_bit($tmp1144 != NULL);
*(&local22) = $tmp1145;
goto block54;
block54:;
panda$core$Bit $tmp1146 = *(&local22);
bool $tmp1147 = $tmp1146.value;
if ($tmp1147) goto block50; else goto block55;
block50:;
// line 448
org$pandalanguage$pandac$ASTNode* $tmp1148 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1149 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1150 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token $tmp1151 = *(&local1);
org$pandalanguage$pandac$Position $tmp1152 = $tmp1151.position;
panda$core$String* $tmp1153 = *(&local21);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1149, $tmp1150, $tmp1152, $tmp1153);
org$pandalanguage$pandac$ASTNode* $tmp1154 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1148, $tmp1149);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
org$pandalanguage$pandac$ASTNode* $tmp1155 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
*(&local3) = $tmp1154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// unreffing REF($892:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// unreffing REF($886:org.pandalanguage.pandac.ASTNode)
// line 450
org$pandalanguage$pandac$ASTNode* $tmp1156 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1157 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1158 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1156, $tmp1157);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
org$pandalanguage$pandac$ASTNode* $tmp1159 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
*(&local3) = $tmp1158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
// unreffing REF($910:org.pandalanguage.pandac.ASTNode)
goto block51;
block55:;
// line 1
// line 453
org$pandalanguage$pandac$ASTNode* $tmp1160 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp1161 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1160);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
org$pandalanguage$pandac$ASTNode* $tmp1162 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
*(&local3) = $tmp1161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing REF($926:org.pandalanguage.pandac.ASTNode)
goto block51;
block51:;
panda$core$String* $tmp1163 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing text
*(&local21) = ((panda$core$String*) NULL);
panda$core$String* $tmp1164 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing format
*(&local13) = ((panda$core$String*) NULL);
panda$core$String* $tmp1165 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
// unreffing align
*(&local12) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1166 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing expr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block35:;
// line 457
org$pandalanguage$pandac$parser$Token $tmp1167 = *(&local5);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1167, &$s1168);
// line 458
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1169 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp1170 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1171 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1172 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 461
panda$core$MutableString* $tmp1173 = *(&local4);
panda$core$String* $tmp1174 = *(&local8);
panda$core$String* $tmp1175 = *(&local8);
panda$core$String* $tmp1176 = *(&local8);
panda$core$String$Index $tmp1177 = panda$core$String$get_start$R$panda$core$String$Index($tmp1176);
panda$core$String$Index $tmp1178 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp1175, $tmp1177);
panda$core$Bit $tmp1179 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1180 = panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(((panda$core$String$Index$nullable) { $tmp1178, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp1179);
panda$core$String* $tmp1181 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String($tmp1174, $tmp1180);
panda$core$MutableString$append$panda$core$String($tmp1173, $tmp1181);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// unreffing REF($996:panda.core.String)
panda$core$String* $tmp1182 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing escapeText
*(&local8) = ((panda$core$String*) NULL);
goto block10;
block18:;
// line 464
panda$core$MutableString* $tmp1183 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp1184 = *(&local5);
panda$core$String* $tmp1185 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1184);
panda$core$MutableString$append$panda$core$String($tmp1183, $tmp1185);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($1010:panda.core.String)
goto block10;
block10:;
goto block6;
block7:;
// line 468
org$pandalanguage$pandac$ASTNode* $tmp1186 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1187 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1188 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token $tmp1189 = *(&local1);
org$pandalanguage$pandac$Position $tmp1190 = $tmp1189.position;
panda$core$MutableString* $tmp1191 = *(&local4);
panda$core$String* $tmp1192 = panda$core$MutableString$finish$R$panda$core$String($tmp1191);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1187, $tmp1188, $tmp1190, $tmp1192);
org$pandalanguage$pandac$ASTNode* $tmp1193 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(param0, $tmp1186, $tmp1187);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing REF($1026:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
// unreffing REF($1024:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
// unreffing REF($1019:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp1194 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// unreffing chunk
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing result
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp1196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing auto
*(&local0) = ((org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) NULL);
return $tmp1193;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$Position local2;
panda$core$String* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local6;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$collections$Array* local9 = NULL;
panda$core$Bit local10;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$core$Bit local12;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
panda$collections$Array* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
panda$collections$Array* local16 = NULL;
org$pandalanguage$pandac$ASTNode* local17 = NULL;
// line 477
panda$core$Int64 $tmp1197 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1198 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1197);
org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1198, &$s1200);
*(&local0) = $tmp1199;
// line 478
org$pandalanguage$pandac$parser$Token$nullable $tmp1201 = *(&local0);
panda$core$Bit $tmp1202 = panda$core$Bit$init$builtin_bit(!$tmp1201.nonnull);
bool $tmp1203 = $tmp1202.value;
if ($tmp1203) goto block1; else goto block2;
block1:;
// line 479
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 481
org$pandalanguage$pandac$ASTNode* $tmp1204 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
org$pandalanguage$pandac$ASTNode* $tmp1205 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
*(&local1) = $tmp1204;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 482
org$pandalanguage$pandac$ASTNode* $tmp1206 = *(&local1);
panda$core$Bit $tmp1207 = panda$core$Bit$init$builtin_bit($tmp1206 == NULL);
bool $tmp1208 = $tmp1207.value;
if ($tmp1208) goto block3; else goto block4;
block3:;
// line 483
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 485
org$pandalanguage$pandac$ASTNode* $tmp1210 = *(&local1);
panda$core$Int64* $tmp1211 = &$tmp1210->$rawValue;
panda$core$Int64 $tmp1212 = *$tmp1211;
panda$core$Int64 $tmp1213 = (panda$core$Int64) {22};
panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1212, $tmp1213);
bool $tmp1215 = $tmp1214.value;
if ($tmp1215) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp1216 = (org$pandalanguage$pandac$Position*) ($tmp1210->$data + 0);
org$pandalanguage$pandac$Position $tmp1217 = *$tmp1216;
*(&local2) = $tmp1217;
panda$core$String** $tmp1218 = (panda$core$String**) ($tmp1210->$data + 16);
panda$core$String* $tmp1219 = *$tmp1218;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
panda$core$String* $tmp1220 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1220));
*(&local3) = $tmp1219;
// line 488
panda$core$Int64 $tmp1221 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1222 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1221);
org$pandalanguage$pandac$parser$Token$nullable $tmp1223 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1222);
panda$core$Bit $tmp1224 = panda$core$Bit$init$builtin_bit($tmp1223.nonnull);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block8; else goto block9;
block8:;
// line 490
panda$collections$Array* $tmp1226 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1226);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
panda$collections$Array* $tmp1227 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
*(&local4) = $tmp1226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
// unreffing REF($72:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 491
org$pandalanguage$pandac$ASTNode* $tmp1228 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
org$pandalanguage$pandac$ASTNode* $tmp1229 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
*(&local5) = $tmp1228;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 492
org$pandalanguage$pandac$ASTNode* $tmp1230 = *(&local5);
panda$core$Bit $tmp1231 = panda$core$Bit$init$builtin_bit($tmp1230 == NULL);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block10; else goto block11;
block10:;
// line 493
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1233 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1234 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1235 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1236 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 495
panda$collections$Array* $tmp1237 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1238 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1239 = (panda$core$Int64) {33};
org$pandalanguage$pandac$Position $tmp1240 = *(&local2);
panda$core$String* $tmp1241 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp1242 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1238, $tmp1239, $tmp1240, $tmp1241, $tmp1242);
panda$collections$Array$add$panda$collections$Array$T($tmp1237, ((panda$core$Object*) $tmp1238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing REF($130:org.pandalanguage.pandac.ASTNode)
// line 496
goto block12;
block12:;
panda$core$Int64 $tmp1243 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1244 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1243);
org$pandalanguage$pandac$parser$Token$nullable $tmp1245 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1244);
panda$core$Bit $tmp1246 = panda$core$Bit$init$builtin_bit($tmp1245.nonnull);
bool $tmp1247 = $tmp1246.value;
if ($tmp1247) goto block13; else goto block14;
block13:;
// line 497
panda$core$Int64 $tmp1248 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1249 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1248);
org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1249, &$s1251);
*(&local6) = $tmp1250;
// line 498
panda$core$Int64 $tmp1252 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1253 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1252);
org$pandalanguage$pandac$parser$Token$nullable $tmp1254 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1253, &$s1255);
panda$core$Bit $tmp1256 = panda$core$Bit$init$builtin_bit(!$tmp1254.nonnull);
bool $tmp1257 = $tmp1256.value;
if ($tmp1257) goto block15; else goto block16;
block15:;
// line 499
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1258 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1259 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1260 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1261 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 501
org$pandalanguage$pandac$ASTNode* $tmp1262 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
org$pandalanguage$pandac$ASTNode* $tmp1263 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
*(&local7) = $tmp1262;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing REF($189:org.pandalanguage.pandac.ASTNode?)
// line 502
org$pandalanguage$pandac$ASTNode* $tmp1264 = *(&local7);
panda$core$Bit $tmp1265 = panda$core$Bit$init$builtin_bit($tmp1264 == NULL);
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block17; else goto block18;
block17:;
// line 503
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1267 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1268 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1269 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1270 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1271 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 505
panda$collections$Array* $tmp1272 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1273 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1274 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$nullable $tmp1275 = *(&local6);
org$pandalanguage$pandac$Position $tmp1276 = ((org$pandalanguage$pandac$parser$Token) $tmp1275.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = *(&local6);
panda$core$String* $tmp1278 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1277.value));
org$pandalanguage$pandac$ASTNode* $tmp1279 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1273, $tmp1274, $tmp1276, $tmp1278, $tmp1279);
panda$collections$Array$add$panda$collections$Array$T($tmp1272, ((panda$core$Object*) $tmp1273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
// unreffing REF($245:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing REF($238:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1280 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
// unreffing nextType
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 508
panda$core$Int64 $tmp1281 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1281);
org$pandalanguage$pandac$parser$Token$nullable $tmp1283 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1282, &$s1284);
panda$core$Bit $tmp1285 = panda$core$Bit$init$builtin_bit(!$tmp1283.nonnull);
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block19; else goto block20;
block19:;
// line 509
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1287 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1288 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1289 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1290 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 511
panda$core$Int64 $tmp1291 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1292 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1291);
org$pandalanguage$pandac$parser$Token$nullable $tmp1293 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1292, &$s1294);
panda$core$Bit $tmp1295 = panda$core$Bit$init$builtin_bit(!$tmp1293.nonnull);
bool $tmp1296 = $tmp1295.value;
if ($tmp1296) goto block21; else goto block22;
block21:;
// line 512
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1297 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1298 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1299 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1300 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 514
org$pandalanguage$pandac$ASTNode* $tmp1301 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
org$pandalanguage$pandac$ASTNode* $tmp1302 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
*(&local8) = $tmp1301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1301));
// unreffing REF($328:org.pandalanguage.pandac.ASTNode?)
// line 515
org$pandalanguage$pandac$ASTNode* $tmp1303 = *(&local8);
panda$core$Bit $tmp1304 = panda$core$Bit$init$builtin_bit($tmp1303 == NULL);
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block23; else goto block24;
block23:;
// line 516
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1306 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1307 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1308 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1309 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 518
org$pandalanguage$pandac$ASTNode* $tmp1311 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1312 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1313 = *(&local0);
org$pandalanguage$pandac$Position $tmp1314 = ((org$pandalanguage$pandac$parser$Token) $tmp1313.value).position;
panda$collections$Array* $tmp1315 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp1316 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1315);
org$pandalanguage$pandac$ASTNode* $tmp1317 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1311, $tmp1312, $tmp1314, $tmp1316, $tmp1317);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
// unreffing REF($382:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// unreffing REF($375:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1318 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing body
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1319 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing firstType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1320 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1321 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1322 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1311;
block9:;
// line 521
panda$core$Int64 $tmp1323 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1324 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1323);
org$pandalanguage$pandac$parser$Token$nullable $tmp1325 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1324);
panda$core$Bit $tmp1326 = panda$core$Bit$init$builtin_bit($tmp1325.nonnull);
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block25; else goto block26;
block25:;
// line 523
panda$collections$Array* $tmp1328 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1328);
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
panda$collections$Array* $tmp1329 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
*(&local9) = $tmp1328;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing REF($431:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 524
panda$collections$Array* $tmp1330 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1331 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1330, ((panda$core$Object*) $tmp1331));
// line 525
panda$core$Bit $tmp1332 = panda$core$Bit$init$builtin_bit(true);
*(&local10) = $tmp1332;
// line 526
goto block27;
block27:;
// line 527
org$pandalanguage$pandac$ASTNode* $tmp1333 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
org$pandalanguage$pandac$ASTNode* $tmp1334 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
*(&local11) = $tmp1333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
// unreffing REF($457:org.pandalanguage.pandac.ASTNode?)
// line 528
org$pandalanguage$pandac$ASTNode* $tmp1335 = *(&local11);
panda$core$Bit $tmp1336 = panda$core$Bit$init$builtin_bit($tmp1335 == NULL);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block30; else goto block31;
block30:;
// line 529
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1338 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1339 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1340 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1341 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
// line 531
org$pandalanguage$pandac$ASTNode* $tmp1342 = *(&local11);
panda$core$Int64* $tmp1343 = &$tmp1342->$rawValue;
panda$core$Int64 $tmp1344 = *$tmp1343;
panda$core$Int64 $tmp1345 = (panda$core$Int64) {22};
panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1344, $tmp1345);
bool $tmp1347 = $tmp1346.value;
if ($tmp1347) goto block33; else goto block34;
block33:;
goto block32;
block34:;
// line 536
panda$core$Bit $tmp1348 = panda$core$Bit$init$builtin_bit(false);
*(&local10) = $tmp1348;
goto block32;
block32:;
// line 539
panda$collections$Array* $tmp1349 = *(&local9);
org$pandalanguage$pandac$ASTNode* $tmp1350 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp1349, ((panda$core$Object*) $tmp1350));
org$pandalanguage$pandac$ASTNode* $tmp1351 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
// unreffing nextExpr
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block28;
block28:;
panda$core$Int64 $tmp1352 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1353 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1352);
org$pandalanguage$pandac$parser$Token$nullable $tmp1354 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1353);
panda$core$Bit $tmp1355 = panda$core$Bit$init$builtin_bit($tmp1354.nonnull);
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block27; else goto block29;
block29:;
// line 541
panda$core$Int64 $tmp1357 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1358 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1357);
org$pandalanguage$pandac$parser$Token$nullable $tmp1359 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1358, &$s1360);
panda$core$Bit $tmp1361 = panda$core$Bit$init$builtin_bit(!$tmp1359.nonnull);
bool $tmp1362 = $tmp1361.value;
if ($tmp1362) goto block35; else goto block36;
block35:;
// line 542
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1363 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1364 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1364));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1365 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
// line 544
panda$core$Bit $tmp1366 = *(&local10);
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block39; else goto block40;
block39:;
panda$core$Int64 $tmp1368 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1369 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1368);
org$pandalanguage$pandac$parser$Token$nullable $tmp1370 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1369);
panda$core$Bit $tmp1371 = panda$core$Bit$init$builtin_bit($tmp1370.nonnull);
*(&local12) = $tmp1371;
goto block41;
block40:;
*(&local12) = $tmp1366;
goto block41;
block41:;
panda$core$Bit $tmp1372 = *(&local12);
bool $tmp1373 = $tmp1372.value;
if ($tmp1373) goto block37; else goto block38;
block37:;
// line 545
org$pandalanguage$pandac$ASTNode* $tmp1374 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
org$pandalanguage$pandac$ASTNode* $tmp1375 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
*(&local13) = $tmp1374;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// unreffing REF($576:org.pandalanguage.pandac.ASTNode?)
// line 546
org$pandalanguage$pandac$ASTNode* $tmp1376 = *(&local13);
panda$core$Bit $tmp1377 = panda$core$Bit$init$builtin_bit($tmp1376 == NULL);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block42; else goto block43;
block42:;
// line 547
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1380 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1381 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1382 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 549
org$pandalanguage$pandac$ASTNode* $tmp1383 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1384 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token$nullable $tmp1385 = *(&local0);
org$pandalanguage$pandac$Position $tmp1386 = ((org$pandalanguage$pandac$parser$Token) $tmp1385.value).position;
panda$collections$Array* $tmp1387 = *(&local9);
org$pandalanguage$pandac$FixedArray* $tmp1388 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1387);
org$pandalanguage$pandac$ASTNode* $tmp1389 = *(&local13);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1383, $tmp1384, $tmp1386, $tmp1388, $tmp1389);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
// unreffing REF($625:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing REF($618:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1390 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing body
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1391 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1392 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1393 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1383;
block38:;
// line 553
org$pandalanguage$pandac$parser$Token$nullable $tmp1394 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1394.value), &$s1395);
// line 554
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1396 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing parameters
*(&local9) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1397 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1398 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 557
panda$core$Int64 $tmp1399 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1400 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1399);
org$pandalanguage$pandac$parser$Token$nullable $tmp1401 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1400, &$s1402);
panda$core$Bit $tmp1403 = panda$core$Bit$init$builtin_bit(!$tmp1401.nonnull);
bool $tmp1404 = $tmp1403.value;
if ($tmp1404) goto block44; else goto block45;
block44:;
// line 558
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1405 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1405));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1406 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block45:;
// line 560
panda$core$Int64 $tmp1407 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1408 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1407);
org$pandalanguage$pandac$parser$Token$nullable $tmp1409 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1408);
panda$core$Bit $tmp1410 = panda$core$Bit$init$builtin_bit($tmp1409.nonnull);
bool $tmp1411 = $tmp1410.value;
if ($tmp1411) goto block46; else goto block47;
block46:;
// line 561
panda$collections$Array* $tmp1412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1412);
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
panda$collections$Array* $tmp1413 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
*(&local14) = $tmp1412;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
// unreffing REF($714:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 562
panda$collections$Array* $tmp1414 = *(&local14);
org$pandalanguage$pandac$ASTNode* $tmp1415 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1414, ((panda$core$Object*) $tmp1415));
// line 563
org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
org$pandalanguage$pandac$ASTNode* $tmp1417 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
*(&local15) = $tmp1416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing REF($735:org.pandalanguage.pandac.ASTNode?)
// line 564
org$pandalanguage$pandac$ASTNode* $tmp1418 = *(&local15);
panda$core$Bit $tmp1419 = panda$core$Bit$init$builtin_bit($tmp1418 == NULL);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block48; else goto block49;
block48:;
// line 565
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1421 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1422 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1423 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1424 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block49:;
// line 567
org$pandalanguage$pandac$ASTNode* $tmp1425 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1426 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token$nullable $tmp1427 = *(&local0);
org$pandalanguage$pandac$Position $tmp1428 = ((org$pandalanguage$pandac$parser$Token) $tmp1427.value).position;
panda$collections$Array* $tmp1429 = *(&local14);
org$pandalanguage$pandac$FixedArray* $tmp1430 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1429);
org$pandalanguage$pandac$ASTNode* $tmp1431 = *(&local15);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1425, $tmp1426, $tmp1428, $tmp1430, $tmp1431);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
// unreffing REF($784:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing REF($777:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1432 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// unreffing body
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1433 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
// unreffing parameters
*(&local14) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp1434 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1435 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1425;
block47:;
// line 570
org$pandalanguage$pandac$ASTNode* $tmp1436 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
panda$core$String* $tmp1437 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
// unreffing firstName
*(&local3) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1438 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1436;
block7:;
// line 574
panda$core$Int64 $tmp1439 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1440 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1439);
org$pandalanguage$pandac$parser$Token$nullable $tmp1441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1440);
panda$core$Bit $tmp1442 = panda$core$Bit$init$builtin_bit(!$tmp1441.nonnull);
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block50; else goto block51;
block50:;
// line 575
panda$core$Int64 $tmp1444 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1445 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1444);
org$pandalanguage$pandac$parser$Token$nullable $tmp1446 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1445, &$s1447);
// line 576
org$pandalanguage$pandac$ASTNode* $tmp1448 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
org$pandalanguage$pandac$ASTNode* $tmp1449 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1448;
block51:;
// line 578
panda$collections$Array* $tmp1450 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1450);
*(&local16) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
panda$collections$Array* $tmp1451 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
*(&local16) = $tmp1450;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// unreffing REF($857:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 579
panda$collections$Array* $tmp1452 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp1452, ((panda$core$Object*) $tmp1453));
// line 580
goto block52;
block52:;
// line 581
org$pandalanguage$pandac$ASTNode* $tmp1454 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
*(&local17) = $tmp1454;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($880:org.pandalanguage.pandac.ASTNode?)
// line 582
org$pandalanguage$pandac$ASTNode* $tmp1456 = *(&local17);
panda$core$Bit $tmp1457 = panda$core$Bit$init$builtin_bit($tmp1456 == NULL);
bool $tmp1458 = $tmp1457.value;
if ($tmp1458) goto block55; else goto block56;
block55:;
// line 583
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1459 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1460 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1461 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block56:;
// line 585
panda$collections$Array* $tmp1462 = *(&local16);
org$pandalanguage$pandac$ASTNode* $tmp1463 = *(&local17);
panda$collections$Array$add$panda$collections$Array$T($tmp1462, ((panda$core$Object*) $tmp1463));
org$pandalanguage$pandac$ASTNode* $tmp1464 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing nextExpr
*(&local17) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block53;
block53:;
panda$core$Int64 $tmp1465 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1466 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1465);
org$pandalanguage$pandac$parser$Token$nullable $tmp1467 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1466);
panda$core$Bit $tmp1468 = panda$core$Bit$init$builtin_bit($tmp1467.nonnull);
bool $tmp1469 = $tmp1468.value;
if ($tmp1469) goto block52; else goto block54;
block54:;
// line 588
panda$core$Int64 $tmp1470 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1471 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1470);
org$pandalanguage$pandac$parser$Token$nullable $tmp1472 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1471, &$s1473);
// line 590
org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1474.value), &$s1475);
// line 591
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1476 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing arguments
*(&local16) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1477 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
panda$core$Bit $tmp1478 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1479 = $tmp1478.value;
if ($tmp1479) goto block57; else goto block58;
block58:;
panda$core$Int64 $tmp1480 = (panda$core$Int64) {476};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1481, $tmp1480, &$s1482);
abort(); // unreachable
block57:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$arrayLiteral$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 600
panda$core$Int64 $tmp1483 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp1484 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1483);
org$pandalanguage$pandac$parser$Token$nullable $tmp1485 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1484, &$s1486);
*(&local0) = $tmp1485;
// line 601
panda$collections$Array* $tmp1487 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1487);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
panda$collections$Array* $tmp1488 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
*(&local1) = $tmp1487;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
// unreffing REF($6:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 602
panda$core$Int64 $tmp1489 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp1490 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1489);
org$pandalanguage$pandac$parser$Token$nullable $tmp1491 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1490);
panda$core$Bit $tmp1492 = panda$core$Bit$init$builtin_bit(!$tmp1491.nonnull);
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block1; else goto block2;
block1:;
// line 603
panda$collections$Stack** $tmp1494 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp1495 = *$tmp1494;
panda$core$Bit $tmp1496 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp1497;
$tmp1497 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp1497->value = $tmp1496;
panda$collections$Stack$push$panda$collections$Stack$T($tmp1495, ((panda$core$Object*) $tmp1497));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
// unreffing REF($32:panda.collections.Stack.T)
// line 604
panda$core$Int64 $tmp1498 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1499 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1498);
org$pandalanguage$pandac$parser$Token$nullable $tmp1500 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1499);
panda$core$Bit $tmp1501 = panda$core$Bit$init$builtin_bit(!$tmp1500.nonnull);
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block3; else goto block4;
block3:;
// line 605
org$pandalanguage$pandac$ASTNode* $tmp1503 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
org$pandalanguage$pandac$ASTNode* $tmp1504 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
*(&local2) = $tmp1503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
// unreffing REF($46:org.pandalanguage.pandac.ASTNode?)
// line 606
org$pandalanguage$pandac$ASTNode* $tmp1505 = *(&local2);
panda$core$Bit $tmp1506 = panda$core$Bit$init$builtin_bit($tmp1505 == NULL);
bool $tmp1507 = $tmp1506.value;
if ($tmp1507) goto block5; else goto block6;
block5:;
// line 607
panda$collections$Stack** $tmp1508 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp1509 = *$tmp1508;
panda$core$Object* $tmp1510 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1509);
panda$core$Panda$unref$panda$core$Object$Q($tmp1510);
// unreffing REF($67:panda.collections.Stack.T)
// line 608
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1511 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1512 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 610
panda$collections$Array* $tmp1513 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp1514 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp1513, ((panda$core$Object*) $tmp1514));
// line 611
goto block7;
block7:;
panda$core$Int64 $tmp1515 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp1516 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1515);
org$pandalanguage$pandac$parser$Token$nullable $tmp1517 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1516);
panda$core$Bit $tmp1518 = panda$core$Bit$init$builtin_bit($tmp1517.nonnull);
bool $tmp1519 = $tmp1518.value;
if ($tmp1519) goto block8; else goto block9;
block8:;
// line 612
org$pandalanguage$pandac$ASTNode* $tmp1520 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
org$pandalanguage$pandac$ASTNode* $tmp1521 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
*(&local2) = $tmp1520;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing REF($103:org.pandalanguage.pandac.ASTNode?)
// line 613
org$pandalanguage$pandac$ASTNode* $tmp1522 = *(&local2);
panda$core$Bit $tmp1523 = panda$core$Bit$init$builtin_bit($tmp1522 == NULL);
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block10; else goto block11;
block10:;
// line 614
panda$collections$Stack** $tmp1525 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp1526 = *$tmp1525;
panda$core$Object* $tmp1527 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1526);
panda$core$Panda$unref$panda$core$Object$Q($tmp1527);
// unreffing REF($123:panda.collections.Stack.T)
// line 615
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1528 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1529 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 617
panda$collections$Array* $tmp1530 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp1531 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp1530, ((panda$core$Object*) $tmp1531));
goto block7;
block9:;
// line 619
panda$core$Int64 $tmp1532 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp1533 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1532);
org$pandalanguage$pandac$parser$Token$nullable $tmp1534 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1533, &$s1535);
panda$core$Bit $tmp1536 = panda$core$Bit$init$builtin_bit(!$tmp1534.nonnull);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block12; else goto block13;
block12:;
// line 620
panda$collections$Stack** $tmp1538 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp1539 = *$tmp1538;
panda$core$Object* $tmp1540 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1539);
panda$core$Panda$unref$panda$core$Object$Q($tmp1540);
// unreffing REF($162:panda.collections.Stack.T)
// line 621
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1541 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1542 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp1543 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 624
panda$collections$Stack** $tmp1544 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp1545 = *$tmp1544;
panda$core$Object* $tmp1546 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp1545);
panda$core$Panda$unref$panda$core$Object$Q($tmp1546);
// unreffing REF($191:panda.collections.Stack.T)
goto block2;
block2:;
// line 626
org$pandalanguage$pandac$ASTNode* $tmp1547 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1548 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$nullable $tmp1549 = *(&local0);
org$pandalanguage$pandac$Position $tmp1550 = ((org$pandalanguage$pandac$parser$Token) $tmp1549.value).position;
panda$collections$Array* $tmp1551 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp1552 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1551);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1547, $tmp1548, $tmp1550, $tmp1552);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
// unreffing REF($205:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
// unreffing REF($198:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp1553 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// unreffing args
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp1547;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 633
panda$core$Int64 $tmp1554 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp1555 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1554);
org$pandalanguage$pandac$parser$Token$nullable $tmp1556 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1555, &$s1557);
*(&local0) = $tmp1556;
// line 634
panda$core$Int64 $tmp1558 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1559 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1558);
org$pandalanguage$pandac$parser$Token$nullable $tmp1560 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1559);
panda$core$Bit $tmp1561 = panda$core$Bit$init$builtin_bit($tmp1560.nonnull);
bool $tmp1562 = $tmp1561.value;
if ($tmp1562) goto block1; else goto block2;
block1:;
// line 635
org$pandalanguage$pandac$ASTNode* $tmp1563 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
org$pandalanguage$pandac$ASTNode* $tmp1564 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1564));
*(&local1) = $tmp1563;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
// line 636
org$pandalanguage$pandac$ASTNode* $tmp1565 = *(&local1);
panda$core$Bit $tmp1566 = panda$core$Bit$init$builtin_bit($tmp1565 == NULL);
bool $tmp1567 = $tmp1566.value;
if ($tmp1567) goto block3; else goto block4;
block3:;
// line 637
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1568 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 639
panda$collections$Array* $tmp1569 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1569);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
panda$collections$Array* $tmp1570 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
*(&local2) = $tmp1569;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
// unreffing REF($41:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 640
panda$collections$Array* $tmp1571 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp1572 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1573 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$nullable $tmp1574 = *(&local0);
org$pandalanguage$pandac$Position $tmp1575 = ((org$pandalanguage$pandac$parser$Token) $tmp1574.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1576 = *(&local0);
panda$core$String* $tmp1577 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1576.value));
org$pandalanguage$pandac$ASTNode* $tmp1578 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1572, $tmp1573, $tmp1575, $tmp1577, $tmp1578);
panda$collections$Array$add$panda$collections$Array$T($tmp1571, ((panda$core$Object*) $tmp1572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
// unreffing REF($64:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode)
// line 641
panda$core$Int64 $tmp1579 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1580 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1579);
org$pandalanguage$pandac$parser$Token$nullable $tmp1581 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1580, &$s1582);
panda$core$Bit $tmp1583 = panda$core$Bit$init$builtin_bit(!$tmp1581.nonnull);
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block5; else goto block6;
block5:;
// line 642
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1585 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1586 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 644
org$pandalanguage$pandac$ASTNode* $tmp1587 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
org$pandalanguage$pandac$ASTNode* $tmp1588 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
*(&local3) = $tmp1587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode?)
// line 645
org$pandalanguage$pandac$ASTNode* $tmp1589 = *(&local3);
panda$core$Bit $tmp1590 = panda$core$Bit$init$builtin_bit($tmp1589 == NULL);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block7; else goto block8;
block7:;
// line 646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1592 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1593 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1594 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1594));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 648
org$pandalanguage$pandac$ASTNode* $tmp1595 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1596 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp1597 = *(&local0);
org$pandalanguage$pandac$Position $tmp1598 = ((org$pandalanguage$pandac$parser$Token) $tmp1597.value).position;
panda$collections$Array* $tmp1599 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp1600 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1599);
org$pandalanguage$pandac$ASTNode* $tmp1601 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1595, $tmp1596, $tmp1598, $tmp1600, $tmp1601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
// unreffing REF($143:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1595));
// unreffing REF($136:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1602 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1602));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1603 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1603));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1604 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1595;
block2:;
// line 651
panda$collections$Array* $tmp1605 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1605);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
panda$collections$Array* $tmp1606 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
*(&local4) = $tmp1605;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($174:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 652
panda$collections$Array* $tmp1607 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp1608 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1609 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$nullable $tmp1610 = *(&local0);
org$pandalanguage$pandac$Position $tmp1611 = ((org$pandalanguage$pandac$parser$Token) $tmp1610.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp1612 = *(&local0);
panda$core$String* $tmp1613 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp1612.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1608, $tmp1609, $tmp1611, $tmp1613);
panda$collections$Array$add$panda$collections$Array$T($tmp1607, ((panda$core$Object*) $tmp1608));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1613));
// unreffing REF($197:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
// unreffing REF($190:org.pandalanguage.pandac.ASTNode)
// line 653
panda$core$Int64 $tmp1614 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1615 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1614);
org$pandalanguage$pandac$parser$Token$nullable $tmp1616 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1615, &$s1617);
panda$core$Bit $tmp1618 = panda$core$Bit$init$builtin_bit(!$tmp1616.nonnull);
bool $tmp1619 = $tmp1618.value;
if ($tmp1619) goto block9; else goto block10;
block9:;
// line 654
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp1620 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 656
org$pandalanguage$pandac$ASTNode* $tmp1621 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1621));
org$pandalanguage$pandac$ASTNode* $tmp1622 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
*(&local5) = $tmp1621;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1621));
// unreffing REF($225:org.pandalanguage.pandac.ASTNode?)
// line 657
org$pandalanguage$pandac$ASTNode* $tmp1623 = *(&local5);
panda$core$Bit $tmp1624 = panda$core$Bit$init$builtin_bit($tmp1623 == NULL);
bool $tmp1625 = $tmp1624.value;
if ($tmp1625) goto block11; else goto block12;
block11:;
// line 658
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1626 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1627 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 660
org$pandalanguage$pandac$ASTNode* $tmp1628 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1629 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token$nullable $tmp1630 = *(&local0);
org$pandalanguage$pandac$Position $tmp1631 = ((org$pandalanguage$pandac$parser$Token) $tmp1630.value).position;
panda$collections$Array* $tmp1632 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp1633 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp1632);
org$pandalanguage$pandac$ASTNode* $tmp1634 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1628, $tmp1629, $tmp1631, $tmp1633, $tmp1634);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
// unreffing REF($264:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($257:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1635 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1635));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp1636 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1636));
// unreffing parameters
*(&local4) = ((panda$collections$Array*) NULL);
return $tmp1628;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$core$Int64 local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 668
panda$core$Int64 $tmp1637 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1638 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1637);
org$pandalanguage$pandac$parser$Token$nullable $tmp1639 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1638, &$s1640);
panda$core$Bit $tmp1641 = panda$core$Bit$init$builtin_bit(!$tmp1639.nonnull);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block1; else goto block2;
block1:;
// line 669
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 672
org$pandalanguage$pandac$parser$Lexer** $tmp1643 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1644 = *$tmp1643;
org$pandalanguage$plex$runtime$DFA** $tmp1645 = &$tmp1644->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1646 = *$tmp1645;
panda$core$Int64* $tmp1647 = &$tmp1646->offset;
panda$core$Int64 $tmp1648 = *$tmp1647;
panda$core$Int64 $tmp1649 = (panda$core$Int64) {1};
int64_t $tmp1650 = $tmp1648.value;
int64_t $tmp1651 = $tmp1649.value;
int64_t $tmp1652 = $tmp1650 - $tmp1651;
panda$core$Int64 $tmp1653 = (panda$core$Int64) {$tmp1652};
*(&local0) = $tmp1653;
// line 673
org$pandalanguage$regex$RegexParser** $tmp1654 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1655 = *$tmp1654;
org$pandalanguage$regex$RegexLexer** $tmp1656 = &$tmp1655->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1657 = *$tmp1656;
org$pandalanguage$plex$runtime$DFA** $tmp1658 = &$tmp1657->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1659 = *$tmp1658;
org$pandalanguage$pandac$parser$Lexer** $tmp1660 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1661 = *$tmp1660;
org$pandalanguage$plex$runtime$DFA** $tmp1662 = &$tmp1661->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1663 = *$tmp1662;
panda$core$Int64* $tmp1664 = &$tmp1663->offset;
panda$core$Int64 $tmp1665 = *$tmp1664;
panda$core$Int64* $tmp1666 = &$tmp1659->offset;
*$tmp1666 = $tmp1665;
// line 674
org$pandalanguage$regex$RegexParser** $tmp1667 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1668 = *$tmp1667;
org$pandalanguage$regex$RegexLexer** $tmp1669 = &$tmp1668->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1670 = *$tmp1669;
org$pandalanguage$plex$runtime$DFA** $tmp1671 = &$tmp1670->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1672 = *$tmp1671;
org$pandalanguage$pandac$parser$Lexer** $tmp1673 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1674 = *$tmp1673;
org$pandalanguage$plex$runtime$DFA** $tmp1675 = &$tmp1674->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1676 = *$tmp1675;
panda$core$Int64* $tmp1677 = &$tmp1676->line;
panda$core$Int64 $tmp1678 = *$tmp1677;
panda$core$Int64* $tmp1679 = &$tmp1672->line;
*$tmp1679 = $tmp1678;
// line 675
org$pandalanguage$regex$RegexParser** $tmp1680 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1681 = *$tmp1680;
org$pandalanguage$regex$RegexLexer** $tmp1682 = &$tmp1681->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1683 = *$tmp1682;
org$pandalanguage$plex$runtime$DFA** $tmp1684 = &$tmp1683->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1685 = *$tmp1684;
org$pandalanguage$pandac$parser$Lexer** $tmp1686 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1687 = *$tmp1686;
org$pandalanguage$plex$runtime$DFA** $tmp1688 = &$tmp1687->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1689 = *$tmp1688;
panda$core$Int64* $tmp1690 = &$tmp1689->column;
panda$core$Int64 $tmp1691 = *$tmp1690;
panda$core$Int64* $tmp1692 = &$tmp1685->column;
*$tmp1692 = $tmp1691;
// line 676
org$pandalanguage$regex$RegexParser** $tmp1693 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1694 = *$tmp1693;
org$pandalanguage$pandac$ASTNode* $tmp1695 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q($tmp1694);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
org$pandalanguage$pandac$ASTNode* $tmp1696 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
*(&local1) = $tmp1695;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing REF($73:org.pandalanguage.pandac.ASTNode?)
// line 677
org$pandalanguage$pandac$parser$Lexer** $tmp1697 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1698 = *$tmp1697;
org$pandalanguage$plex$runtime$DFA** $tmp1699 = &$tmp1698->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1700 = *$tmp1699;
org$pandalanguage$regex$RegexParser** $tmp1701 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1702 = *$tmp1701;
org$pandalanguage$regex$RegexLexer** $tmp1703 = &$tmp1702->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1704 = *$tmp1703;
org$pandalanguage$plex$runtime$DFA** $tmp1705 = &$tmp1704->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1706 = *$tmp1705;
panda$core$Int64* $tmp1707 = &$tmp1706->offset;
panda$core$Int64 $tmp1708 = *$tmp1707;
panda$core$Int64* $tmp1709 = &$tmp1700->offset;
*$tmp1709 = $tmp1708;
// line 678
org$pandalanguage$pandac$parser$Lexer** $tmp1710 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1711 = *$tmp1710;
org$pandalanguage$plex$runtime$DFA** $tmp1712 = &$tmp1711->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1713 = *$tmp1712;
org$pandalanguage$regex$RegexParser** $tmp1714 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1715 = *$tmp1714;
org$pandalanguage$regex$RegexLexer** $tmp1716 = &$tmp1715->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1717 = *$tmp1716;
org$pandalanguage$plex$runtime$DFA** $tmp1718 = &$tmp1717->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1719 = *$tmp1718;
panda$core$Int64* $tmp1720 = &$tmp1719->line;
panda$core$Int64 $tmp1721 = *$tmp1720;
panda$core$Int64* $tmp1722 = &$tmp1713->line;
*$tmp1722 = $tmp1721;
// line 679
org$pandalanguage$pandac$parser$Lexer** $tmp1723 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1724 = *$tmp1723;
org$pandalanguage$plex$runtime$DFA** $tmp1725 = &$tmp1724->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1726 = *$tmp1725;
org$pandalanguage$regex$RegexParser** $tmp1727 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp1728 = *$tmp1727;
org$pandalanguage$regex$RegexLexer** $tmp1729 = &$tmp1728->lexer;
org$pandalanguage$regex$RegexLexer* $tmp1730 = *$tmp1729;
org$pandalanguage$plex$runtime$DFA** $tmp1731 = &$tmp1730->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1732 = *$tmp1731;
panda$core$Int64* $tmp1733 = &$tmp1732->column;
panda$core$Int64 $tmp1734 = *$tmp1733;
panda$core$Int64* $tmp1735 = &$tmp1726->column;
*$tmp1735 = $tmp1734;
// line 680
org$pandalanguage$pandac$ASTNode* $tmp1736 = *(&local1);
panda$core$Bit $tmp1737 = panda$core$Bit$init$builtin_bit($tmp1736 == NULL);
bool $tmp1738 = $tmp1737.value;
if ($tmp1738) goto block3; else goto block4;
block3:;
// line 681
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1739 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 683
panda$core$Int64 $tmp1740 = (panda$core$Int64) {55};
org$pandalanguage$pandac$parser$Token$Kind $tmp1741 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1740);
org$pandalanguage$pandac$parser$Token$nullable $tmp1742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1741, &$s1743);
panda$core$Bit $tmp1744 = panda$core$Bit$init$builtin_bit(!$tmp1742.nonnull);
bool $tmp1745 = $tmp1744.value;
if ($tmp1745) goto block5; else goto block6;
block5:;
// line 684
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1746 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 686
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1747 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1748 = *$tmp1747;
panda$core$Bit $tmp1749 = panda$core$Bit$init$builtin_bit($tmp1748 != NULL);
bool $tmp1750 = $tmp1749.value;
if ($tmp1750) goto block7; else goto block8;
block7:;
// line 688
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1751 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1752 = *$tmp1751;
$fn1754 $tmp1753 = ($fn1754) $tmp1752->$class->vtable[7];
$tmp1753($tmp1752);
// line 689
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1755 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1756 = *$tmp1755;
$fn1758 $tmp1757 = ($fn1758) $tmp1756->$class->vtable[7];
$tmp1757($tmp1756);
// line 691
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp1759 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp1760 = *$tmp1759;
panda$core$Int64 $tmp1761 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token$Kind $tmp1762 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1761);
panda$core$Int64 $tmp1763 = *(&local0);
panda$core$String$Index $tmp1764 = panda$core$String$Index$init$panda$core$Int64($tmp1763);
org$pandalanguage$pandac$parser$Lexer** $tmp1765 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp1766 = *$tmp1765;
org$pandalanguage$plex$runtime$DFA** $tmp1767 = &$tmp1766->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp1768 = *$tmp1767;
panda$core$Int64* $tmp1769 = &$tmp1768->offset;
panda$core$Int64 $tmp1770 = *$tmp1769;
panda$core$String$Index $tmp1771 = panda$core$String$Index$init$panda$core$Int64($tmp1770);
org$pandalanguage$pandac$ASTNode* $tmp1772 = *(&local1);
$fn1774 $tmp1773 = ($fn1774) $tmp1772->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1775 = $tmp1773($tmp1772);
org$pandalanguage$pandac$parser$Token $tmp1776 = org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position($tmp1762, $tmp1764, $tmp1771, $tmp1775);
$fn1778 $tmp1777 = ($fn1778) $tmp1760->$class->vtable[6];
$tmp1777($tmp1760, $tmp1776);
goto block8;
block8:;
// line 694
org$pandalanguage$pandac$ASTNode* $tmp1779 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
org$pandalanguage$pandac$ASTNode* $tmp1780 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
// unreffing regex
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1779;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$Kind local1;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$String* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 704
org$pandalanguage$pandac$parser$Token $tmp1781 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp1781;
// line 705
org$pandalanguage$pandac$parser$Token $tmp1782 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1783 = $tmp1782.kind;
panda$core$Int64 $tmp1784 = $tmp1783.$rawValue;
panda$core$Int64 $tmp1785 = (panda$core$Int64) {49};
panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1785);
bool $tmp1787 = $tmp1786.value;
if ($tmp1787) goto block2; else goto block3;
block2:;
// line 707
org$pandalanguage$pandac$parser$Token $tmp1788 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp1789 = $tmp1788.kind;
*(&local1) = $tmp1789;
// line 708
panda$core$Bit* $tmp1790 = &param0->allowLambdas;
panda$core$Bit $tmp1791 = *$tmp1790;
bool $tmp1792 = $tmp1791.value;
if ($tmp1792) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1793 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1794;
$tmp1794 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1794->value = $tmp1793;
panda$core$Int64 $tmp1795 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp1796 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1795);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1797;
$tmp1797 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1797->value = $tmp1796;
ITable* $tmp1798 = ((panda$core$Equatable*) $tmp1794)->$class->itable;
while ($tmp1798->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1798 = $tmp1798->next;
}
$fn1800 $tmp1799 = $tmp1798->methods[0];
panda$core$Bit $tmp1801 = $tmp1799(((panda$core$Equatable*) $tmp1794), ((panda$core$Equatable*) $tmp1797));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1797)));
// unreffing REF($25:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1794)));
// unreffing REF($21:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local3) = $tmp1801;
goto block8;
block7:;
*(&local3) = $tmp1791;
goto block8;
block8:;
panda$core$Bit $tmp1802 = *(&local3);
bool $tmp1803 = $tmp1802.value;
if ($tmp1803) goto block9; else goto block10;
block9:;
*(&local2) = $tmp1802;
goto block11;
block10:;
org$pandalanguage$pandac$parser$Token$Kind $tmp1804 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1805;
$tmp1805 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1805->value = $tmp1804;
panda$core$Int64 $tmp1806 = (panda$core$Int64) {91};
org$pandalanguage$pandac$parser$Token$Kind $tmp1807 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1806);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1808;
$tmp1808 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1808->value = $tmp1807;
ITable* $tmp1809 = ((panda$core$Equatable*) $tmp1805)->$class->itable;
while ($tmp1809->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1809 = $tmp1809->next;
}
$fn1811 $tmp1810 = $tmp1809->methods[0];
panda$core$Bit $tmp1812 = $tmp1810(((panda$core$Equatable*) $tmp1805), ((panda$core$Equatable*) $tmp1808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1808)));
// unreffing REF($48:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1805)));
// unreffing REF($44:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local2) = $tmp1812;
goto block11;
block11:;
panda$core$Bit $tmp1813 = *(&local2);
bool $tmp1814 = $tmp1813.value;
if ($tmp1814) goto block4; else goto block5;
block4:;
// line 709
org$pandalanguage$pandac$parser$Token $tmp1815 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1815);
// line 710
org$pandalanguage$pandac$ASTNode* $tmp1816 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// unreffing REF($66:org.pandalanguage.pandac.ASTNode?)
return $tmp1816;
block5:;
// line 712
org$pandalanguage$pandac$ASTNode* $tmp1817 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1818 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token $tmp1819 = *(&local0);
org$pandalanguage$pandac$Position $tmp1820 = $tmp1819.position;
org$pandalanguage$pandac$parser$Token $tmp1821 = *(&local0);
panda$core$String* $tmp1822 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1821);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1817, $tmp1818, $tmp1820, $tmp1822);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
// unreffing REF($79:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1817));
// unreffing REF($74:org.pandalanguage.pandac.ASTNode)
return $tmp1817;
block3:;
panda$core$Int64 $tmp1823 = (panda$core$Int64) {3};
panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1823);
bool $tmp1825 = $tmp1824.value;
if ($tmp1825) goto block12; else goto block13;
block12:;
// line 715
org$pandalanguage$pandac$ASTNode* $tmp1826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1827 = (panda$core$Int64) {24};
org$pandalanguage$pandac$parser$Token $tmp1828 = *(&local0);
org$pandalanguage$pandac$Position $tmp1829 = $tmp1828.position;
org$pandalanguage$pandac$parser$Token $tmp1830 = *(&local0);
panda$core$String* $tmp1831 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1830);
panda$core$UInt64$nullable $tmp1832 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1831);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1826, $tmp1827, $tmp1829, ((panda$core$UInt64) $tmp1832.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
// unreffing REF($96:org.pandalanguage.pandac.ASTNode)
return $tmp1826;
block13:;
panda$core$Int64 $tmp1833 = (panda$core$Int64) {4};
panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1833);
bool $tmp1835 = $tmp1834.value;
if ($tmp1835) goto block14; else goto block15;
block14:;
// line 718
org$pandalanguage$pandac$ASTNode* $tmp1836 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1837 = (panda$core$Int64) {24};
org$pandalanguage$pandac$parser$Token $tmp1838 = *(&local0);
org$pandalanguage$pandac$Position $tmp1839 = $tmp1838.position;
org$pandalanguage$pandac$parser$Token $tmp1840 = *(&local0);
panda$core$String* $tmp1841 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1840);
panda$core$Int64 $tmp1842 = (panda$core$Int64) {2};
panda$core$Bit $tmp1843 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1844 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1842, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1843);
panda$core$String* $tmp1845 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1841, $tmp1844);
panda$core$Int64 $tmp1846 = (panda$core$Int64) {2};
panda$core$UInt64$nullable $tmp1847 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1845, $tmp1846);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1836, $tmp1837, $tmp1839, ((panda$core$UInt64) $tmp1847.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1845));
// unreffing REF($130:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1841));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing REF($120:org.pandalanguage.pandac.ASTNode)
return $tmp1836;
block15:;
panda$core$Int64 $tmp1848 = (panda$core$Int64) {5};
panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1848);
bool $tmp1850 = $tmp1849.value;
if ($tmp1850) goto block16; else goto block17;
block16:;
// line 721
org$pandalanguage$pandac$ASTNode* $tmp1851 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1852 = (panda$core$Int64) {24};
org$pandalanguage$pandac$parser$Token $tmp1853 = *(&local0);
org$pandalanguage$pandac$Position $tmp1854 = $tmp1853.position;
org$pandalanguage$pandac$parser$Token $tmp1855 = *(&local0);
panda$core$String* $tmp1856 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1855);
panda$core$Int64 $tmp1857 = (panda$core$Int64) {2};
panda$core$Bit $tmp1858 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1859 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp1857, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1858);
panda$core$String* $tmp1860 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1856, $tmp1859);
panda$core$Int64 $tmp1861 = (panda$core$Int64) {16};
panda$core$UInt64$nullable $tmp1862 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1860, $tmp1861);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1851, $tmp1852, $tmp1854, ((panda$core$UInt64) $tmp1862.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
// unreffing REF($163:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1856));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
// unreffing REF($153:org.pandalanguage.pandac.ASTNode)
return $tmp1851;
block17:;
panda$core$Int64 $tmp1863 = (panda$core$Int64) {6};
panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block18; else goto block19;
block18:;
// line 724
org$pandalanguage$pandac$ASTNode* $tmp1866 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1867 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token $tmp1868 = *(&local0);
org$pandalanguage$pandac$Position $tmp1869 = $tmp1868.position;
org$pandalanguage$pandac$parser$Token $tmp1870 = *(&local0);
panda$core$String* $tmp1871 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1870);
panda$core$Real64$nullable $tmp1872 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1871);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1866, $tmp1867, $tmp1869, ((panda$core$Real64) $tmp1872.value));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
// unreffing REF($191:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// unreffing REF($186:org.pandalanguage.pandac.ASTNode)
return $tmp1866;
block19:;
panda$core$Int64 $tmp1873 = (panda$core$Int64) {47};
panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1873);
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block20; else goto block21;
block20:;
// line 727
org$pandalanguage$pandac$ASTNode* $tmp1876 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1877 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token $tmp1878 = *(&local0);
org$pandalanguage$pandac$Position $tmp1879 = $tmp1878.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1876, $tmp1877, $tmp1879);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1876));
// unreffing REF($210:org.pandalanguage.pandac.ASTNode)
return $tmp1876;
block21:;
panda$core$Int64 $tmp1880 = (panda$core$Int64) {48};
panda$core$Bit $tmp1881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1880);
bool $tmp1882 = $tmp1881.value;
if ($tmp1882) goto block22; else goto block23;
block22:;
// line 730
org$pandalanguage$pandac$ASTNode* $tmp1883 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1884 = (panda$core$Int64) {41};
org$pandalanguage$pandac$parser$Token $tmp1885 = *(&local0);
org$pandalanguage$pandac$Position $tmp1886 = $tmp1885.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1883, $tmp1884, $tmp1886);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
// unreffing REF($227:org.pandalanguage.pandac.ASTNode)
return $tmp1883;
block23:;
panda$core$Int64 $tmp1887 = (panda$core$Int64) {44};
panda$core$Bit $tmp1888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1887);
bool $tmp1889 = $tmp1888.value;
if ($tmp1889) goto block24; else goto block25;
block24:;
// line 733
org$pandalanguage$pandac$ASTNode* $tmp1890 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1891 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token $tmp1892 = *(&local0);
org$pandalanguage$pandac$Position $tmp1893 = $tmp1892.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1890, $tmp1891, $tmp1893);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
// unreffing REF($244:org.pandalanguage.pandac.ASTNode)
return $tmp1890;
block25:;
panda$core$Int64 $tmp1894 = (panda$core$Int64) {42};
panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1894);
bool $tmp1896 = $tmp1895.value;
if ($tmp1896) goto block26; else goto block27;
block26:;
// line 736
org$pandalanguage$pandac$ASTNode* $tmp1897 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1898 = (panda$core$Int64) {6};
org$pandalanguage$pandac$parser$Token $tmp1899 = *(&local0);
org$pandalanguage$pandac$Position $tmp1900 = $tmp1899.position;
panda$core$Bit $tmp1901 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1897, $tmp1898, $tmp1900, $tmp1901);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// unreffing REF($261:org.pandalanguage.pandac.ASTNode)
return $tmp1897;
block27:;
panda$core$Int64 $tmp1902 = (panda$core$Int64) {43};
panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1902);
bool $tmp1904 = $tmp1903.value;
if ($tmp1904) goto block28; else goto block29;
block28:;
// line 739
org$pandalanguage$pandac$ASTNode* $tmp1905 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1906 = (panda$core$Int64) {6};
org$pandalanguage$pandac$parser$Token $tmp1907 = *(&local0);
org$pandalanguage$pandac$Position $tmp1908 = $tmp1907.position;
panda$core$Bit $tmp1909 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1905, $tmp1906, $tmp1908, $tmp1909);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
// unreffing REF($279:org.pandalanguage.pandac.ASTNode)
return $tmp1905;
block29:;
panda$core$Int64 $tmp1910 = (panda$core$Int64) {8};
panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1910);
bool $tmp1912 = $tmp1911.value;
if ($tmp1912) goto block30; else goto block31;
block31:;
panda$core$Int64 $tmp1913 = (panda$core$Int64) {7};
panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1913);
bool $tmp1915 = $tmp1914.value;
if ($tmp1915) goto block30; else goto block32;
block30:;
// line 742
org$pandalanguage$pandac$parser$Token $tmp1916 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1916);
// line 743
org$pandalanguage$pandac$ASTNode* $tmp1917 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
// unreffing REF($304:org.pandalanguage.pandac.ASTNode?)
return $tmp1917;
block32:;
panda$core$Int64 $tmp1918 = (panda$core$Int64) {104};
panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1918);
bool $tmp1920 = $tmp1919.value;
if ($tmp1920) goto block33; else goto block34;
block33:;
// line 746
org$pandalanguage$pandac$parser$Token $tmp1921 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1921);
// line 747
org$pandalanguage$pandac$ASTNode* $tmp1922 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
// unreffing REF($319:org.pandalanguage.pandac.ASTNode?)
return $tmp1922;
block34:;
panda$core$Int64 $tmp1923 = (panda$core$Int64) {102};
panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1923);
bool $tmp1925 = $tmp1924.value;
if ($tmp1925) goto block35; else goto block36;
block35:;
// line 750
org$pandalanguage$pandac$parser$Token $tmp1926 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1926);
// line 751
org$pandalanguage$pandac$ASTNode* $tmp1927 = org$pandalanguage$pandac$parser$Parser$arrayLiteral$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
// unreffing REF($334:org.pandalanguage.pandac.ASTNode?)
return $tmp1927;
block36:;
panda$core$Int64 $tmp1928 = (panda$core$Int64) {14};
panda$core$Bit $tmp1929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1928);
bool $tmp1930 = $tmp1929.value;
if ($tmp1930) goto block37; else goto block38;
block37:;
// line 754
org$pandalanguage$pandac$parser$Token $tmp1931 = *(&local0);
panda$core$String* $tmp1932 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1931);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
panda$core$String* $tmp1933 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
*(&local4) = $tmp1932;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing REF($347:panda.core.String)
// line 755
panda$core$String* $tmp1934 = *(&local4);
panda$core$Bit $tmp1935 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1934, &$s1936);
bool $tmp1937 = $tmp1935.value;
if ($tmp1937) goto block39; else goto block41;
block39:;
// line 756
panda$core$Int64 $tmp1938 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp1939 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1938);
org$pandalanguage$pandac$parser$Token$nullable $tmp1940 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1939, &$s1941);
// line 757
org$pandalanguage$pandac$ASTNode* $tmp1942 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
org$pandalanguage$pandac$ASTNode* $tmp1943 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1943));
*(&local5) = $tmp1942;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
// unreffing REF($368:org.pandalanguage.pandac.ASTNode?)
// line 758
org$pandalanguage$pandac$ASTNode* $tmp1944 = *(&local5);
panda$core$Bit $tmp1945 = panda$core$Bit$init$builtin_bit($tmp1944 == NULL);
bool $tmp1946 = $tmp1945.value;
if ($tmp1946) goto block42; else goto block43;
block42:;
// line 759
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp1947 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1947));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1948 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block43:;
// line 761
panda$core$Int64 $tmp1949 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp1950 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1949);
org$pandalanguage$pandac$parser$Token$nullable $tmp1951 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp1950, &$s1952);
// line 762
org$pandalanguage$pandac$ASTNode* $tmp1953 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1954 = (panda$core$Int64) {3};
org$pandalanguage$pandac$parser$Token $tmp1955 = *(&local0);
org$pandalanguage$pandac$Position $tmp1956 = $tmp1955.position;
org$pandalanguage$pandac$ASTNode* $tmp1957 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1953, $tmp1954, $tmp1956, $tmp1957);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing REF($404:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp1958 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1959 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1959));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return $tmp1953;
block41:;
// line 764
panda$core$String* $tmp1960 = *(&local4);
panda$core$Bit $tmp1961 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1960, &$s1962);
bool $tmp1963 = $tmp1961.value;
if ($tmp1963) goto block44; else goto block45;
block44:;
// line 765
org$pandalanguage$pandac$ASTNode* $tmp1964 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp1965 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$Token $tmp1966 = *(&local0);
org$pandalanguage$pandac$Position $tmp1967 = $tmp1966.position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1964, $tmp1965, $tmp1967);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
// unreffing REF($434:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp1968 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return $tmp1964;
block45:;
goto block40;
block40:;
// line 767
org$pandalanguage$pandac$parser$Token $tmp1969 = *(&local0);
panda$core$String* $tmp1970 = *(&local4);
panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1972, $tmp1970);
panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1974);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1969, $tmp1973);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
// unreffing REF($456:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
// unreffing REF($455:panda.core.String)
// line 768
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp1975 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
// unreffing name
*(&local4) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block38:;
panda$core$Int64 $tmp1976 = (panda$core$Int64) {21};
panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1976);
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block46; else goto block47;
block47:;
panda$core$Int64 $tmp1979 = (panda$core$Int64) {22};
panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1979);
bool $tmp1981 = $tmp1980.value;
if ($tmp1981) goto block46; else goto block48;
block46:;
// line 771
org$pandalanguage$pandac$parser$Token $tmp1982 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1982);
// line 772
org$pandalanguage$pandac$ASTNode* $tmp1983 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
// unreffing REF($485:org.pandalanguage.pandac.ASTNode?)
return $tmp1983;
block48:;
panda$core$Int64 $tmp1984 = (panda$core$Int64) {55};
panda$core$Bit $tmp1985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1784, $tmp1984);
bool $tmp1986 = $tmp1985.value;
if ($tmp1986) goto block49; else goto block50;
block49:;
// line 775
org$pandalanguage$pandac$parser$Token $tmp1987 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp1987);
// line 776
org$pandalanguage$pandac$ASTNode* $tmp1988 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
// unreffing REF($500:org.pandalanguage.pandac.ASTNode?)
return $tmp1988;
block50:;
// line 779
org$pandalanguage$pandac$parser$Token $tmp1989 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp1990 = *(&local0);
panda$core$String* $tmp1991 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp1990);
panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1993, $tmp1991);
panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1995);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp1989, $tmp1994);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
// unreffing REF($512:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
// unreffing REF($511:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
// unreffing REF($510:panda.core.String)
// line 780
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp1996 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp1998 = (panda$core$Int64) {703};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1999, $tmp1998, &$s2000);
abort(); // unreachable
block51:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 787
panda$core$Int64* $tmp2001 = &param0->$rawValue;
panda$core$Int64 $tmp2002 = *$tmp2001;
panda$core$Int64 $tmp2003 = (panda$core$Int64) {22};
panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2002, $tmp2003);
bool $tmp2005 = $tmp2004.value;
if ($tmp2005) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp2006 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2007 = *$tmp2006;
panda$core$String** $tmp2008 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2009 = *$tmp2008;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
panda$core$String* $tmp2010 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2010));
*(&local0) = $tmp2009;
// line 789
panda$core$String* $tmp2011 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
panda$core$String* $tmp2012 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return $tmp2011;
block3:;
panda$core$Int64 $tmp2013 = (panda$core$Int64) {16};
panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2002, $tmp2013);
bool $tmp2015 = $tmp2014.value;
if ($tmp2015) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp2016 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2017 = *$tmp2016;
org$pandalanguage$pandac$ASTNode** $tmp2018 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2019 = *$tmp2018;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2019));
org$pandalanguage$pandac$ASTNode* $tmp2020 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2020));
*(&local1) = $tmp2019;
panda$core$String** $tmp2021 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2022 = *$tmp2021;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
panda$core$String* $tmp2023 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2023));
*(&local2) = $tmp2022;
// line 792
org$pandalanguage$pandac$ASTNode* $tmp2024 = *(&local1);
panda$core$String* $tmp2025 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2024);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
panda$core$String* $tmp2026 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
*(&local3) = $tmp2025;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
// unreffing REF($55:panda.core.String?)
// line 793
panda$core$String* $tmp2027 = *(&local3);
panda$core$Bit $tmp2028 = panda$core$Bit$init$builtin_bit($tmp2027 != NULL);
bool $tmp2029 = $tmp2028.value;
if ($tmp2029) goto block6; else goto block7;
block6:;
// line 794
panda$core$String* $tmp2030 = *(&local3);
panda$core$String* $tmp2031 = *(&local2);
panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2033, $tmp2031);
panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, $tmp2032);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
panda$core$String* $tmp2035 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
*(&local3) = $tmp2034;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
// unreffing REF($77:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2032));
// unreffing REF($76:panda.core.String)
goto block7;
block7:;
// line 796
panda$core$String* $tmp2036 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
panda$core$String* $tmp2037 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp2038 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
// unreffing field
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2039 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2039));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2036;
block5:;
// line 799
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2040 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2042 = (panda$core$Int64) {786};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2043, $tmp2042, &$s2044);
abort(); // unreachable
block8:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token local1;
// line 810
org$pandalanguage$pandac$parser$Token $tmp2045 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2045;
// line 811
org$pandalanguage$pandac$parser$Token $tmp2046 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2047 = $tmp2046.kind;
panda$core$Int64 $tmp2048 = $tmp2047.$rawValue;
panda$core$Int64 $tmp2049 = (panda$core$Int64) {49};
panda$core$Bit $tmp2050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2049);
bool $tmp2051 = $tmp2050.value;
if ($tmp2051) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2052 = (panda$core$Int64) {52};
panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2052);
bool $tmp2054 = $tmp2053.value;
if ($tmp2054) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2055 = (panda$core$Int64) {53};
panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2055);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp2058 = (panda$core$Int64) {54};
panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2058);
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp2061 = (panda$core$Int64) {55};
panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2061);
bool $tmp2063 = $tmp2062.value;
if ($tmp2063) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp2064 = (panda$core$Int64) {56};
panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2064);
bool $tmp2066 = $tmp2065.value;
if ($tmp2066) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp2067 = (panda$core$Int64) {58};
panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2067);
bool $tmp2069 = $tmp2068.value;
if ($tmp2069) goto block2; else goto block9;
block9:;
panda$core$Int64 $tmp2070 = (panda$core$Int64) {59};
panda$core$Bit $tmp2071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2070);
bool $tmp2072 = $tmp2071.value;
if ($tmp2072) goto block2; else goto block10;
block10:;
panda$core$Int64 $tmp2073 = (panda$core$Int64) {60};
panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2073);
bool $tmp2075 = $tmp2074.value;
if ($tmp2075) goto block2; else goto block11;
block11:;
panda$core$Int64 $tmp2076 = (panda$core$Int64) {63};
panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2076);
bool $tmp2078 = $tmp2077.value;
if ($tmp2078) goto block2; else goto block12;
block12:;
panda$core$Int64 $tmp2079 = (panda$core$Int64) {66};
panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2079);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block2; else goto block13;
block13:;
panda$core$Int64 $tmp2082 = (panda$core$Int64) {65};
panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2082);
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block2; else goto block14;
block14:;
panda$core$Int64 $tmp2085 = (panda$core$Int64) {57};
panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2085);
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block2; else goto block15;
block15:;
panda$core$Int64 $tmp2088 = (panda$core$Int64) {67};
panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2088);
bool $tmp2090 = $tmp2089.value;
if ($tmp2090) goto block2; else goto block16;
block16:;
panda$core$Int64 $tmp2091 = (panda$core$Int64) {68};
panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2091);
bool $tmp2093 = $tmp2092.value;
if ($tmp2093) goto block2; else goto block17;
block17:;
panda$core$Int64 $tmp2094 = (panda$core$Int64) {69};
panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2094);
bool $tmp2096 = $tmp2095.value;
if ($tmp2096) goto block2; else goto block18;
block18:;
panda$core$Int64 $tmp2097 = (panda$core$Int64) {70};
panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2097);
bool $tmp2099 = $tmp2098.value;
if ($tmp2099) goto block2; else goto block19;
block19:;
panda$core$Int64 $tmp2100 = (panda$core$Int64) {71};
panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2100);
bool $tmp2102 = $tmp2101.value;
if ($tmp2102) goto block2; else goto block20;
block20:;
panda$core$Int64 $tmp2103 = (panda$core$Int64) {72};
panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2103);
bool $tmp2105 = $tmp2104.value;
if ($tmp2105) goto block2; else goto block21;
block21:;
panda$core$Int64 $tmp2106 = (panda$core$Int64) {50};
panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2106);
bool $tmp2108 = $tmp2107.value;
if ($tmp2108) goto block2; else goto block22;
block22:;
panda$core$Int64 $tmp2109 = (panda$core$Int64) {51};
panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2109);
bool $tmp2111 = $tmp2110.value;
if ($tmp2111) goto block2; else goto block23;
block23:;
panda$core$Int64 $tmp2112 = (panda$core$Int64) {73};
panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2112);
bool $tmp2114 = $tmp2113.value;
if ($tmp2114) goto block2; else goto block24;
block2:;
// line 818
org$pandalanguage$pandac$parser$Token $tmp2115 = *(&local0);
panda$core$String* $tmp2116 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2115);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2116));
// unreffing REF($97:panda.core.String)
return $tmp2116;
block24:;
panda$core$Int64 $tmp2117 = (panda$core$Int64) {64};
panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2117);
bool $tmp2119 = $tmp2118.value;
if ($tmp2119) goto block25; else goto block26;
block25:;
// line 821
org$pandalanguage$pandac$parser$Token $tmp2120 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2120;
// line 822
org$pandalanguage$pandac$parser$Token $tmp2121 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2122 = $tmp2121.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2123;
$tmp2123 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2123->value = $tmp2122;
panda$core$Int64 $tmp2124 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2125 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2124);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2126;
$tmp2126 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2126->value = $tmp2125;
ITable* $tmp2127 = ((panda$core$Equatable*) $tmp2123)->$class->itable;
while ($tmp2127->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2127 = $tmp2127->next;
}
$fn2129 $tmp2128 = $tmp2127->methods[0];
panda$core$Bit $tmp2130 = $tmp2128(((panda$core$Equatable*) $tmp2123), ((panda$core$Equatable*) $tmp2126));
bool $tmp2131 = $tmp2130.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2126)));
// unreffing REF($119:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2123)));
// unreffing REF($115:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2131) goto block27; else goto block29;
block27:;
// line 823
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2132));
return &$s2132;
block29:;
// line 1
// line 826
org$pandalanguage$pandac$parser$Token $tmp2133 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2133);
// line 827
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2134));
return &$s2134;
block28:;
goto block1;
block26:;
panda$core$Int64 $tmp2135 = (panda$core$Int64) {102};
panda$core$Bit $tmp2136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, $tmp2135);
bool $tmp2137 = $tmp2136.value;
if ($tmp2137) goto block30; else goto block31;
block30:;
// line 831
panda$core$Int64 $tmp2138 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2139 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2138);
org$pandalanguage$pandac$parser$Token$nullable $tmp2140 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2139, &$s2141);
panda$core$Bit $tmp2142 = panda$core$Bit$init$builtin_bit(!$tmp2140.nonnull);
bool $tmp2143 = $tmp2142.value;
if ($tmp2143) goto block32; else goto block33;
block32:;
// line 832
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block33:;
// line 834
panda$core$Int64 $tmp2144 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp2145 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2144);
org$pandalanguage$pandac$parser$Token$nullable $tmp2146 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2145);
panda$core$Bit $tmp2147 = panda$core$Bit$init$builtin_bit($tmp2146.nonnull);
bool $tmp2148 = $tmp2147.value;
if ($tmp2148) goto block34; else goto block35;
block34:;
// line 835
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2149));
return &$s2149;
block35:;
// line 837
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2150));
return &$s2150;
block31:;
// line 840
org$pandalanguage$pandac$parser$Token $tmp2151 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2152 = *(&local0);
panda$core$String* $tmp2153 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp2152);
panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2155, $tmp2153);
panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2157);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp2151, $tmp2156);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
// unreffing REF($184:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
// unreffing REF($183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2153));
// unreffing REF($182:panda.core.String)
// line 842
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
return ((panda$core$String*) NULL);
block1:;
panda$core$Bit $tmp2158 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2159 = $tmp2158.value;
if ($tmp2159) goto block36; else goto block37;
block37:;
panda$core$Int64 $tmp2160 = (panda$core$Int64) {809};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2161, $tmp2160, &$s2162);
abort(); // unreachable
block36:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 848
panda$core$Bit $tmp2163 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$ASTNode* $tmp2164 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2163);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
// unreffing REF($2:org.pandalanguage.pandac.ASTNode?)
return $tmp2164;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 856
panda$core$Int64 $tmp2165 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2166 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2165);
org$pandalanguage$pandac$parser$Token$nullable $tmp2167 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2166, &$s2168);
*(&local0) = $tmp2167;
// line 857
org$pandalanguage$pandac$parser$Token$nullable $tmp2169 = *(&local0);
panda$core$Bit $tmp2170 = panda$core$Bit$init$builtin_bit(!$tmp2169.nonnull);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block1; else goto block2;
block1:;
// line 858
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 860
panda$collections$Array* $tmp2172 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2172);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
panda$collections$Array* $tmp2173 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
*(&local1) = $tmp2172;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 861
panda$core$Int64 $tmp2174 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2175 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2174);
org$pandalanguage$pandac$parser$Token$nullable $tmp2176 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2175);
panda$core$Bit $tmp2177 = panda$core$Bit$init$builtin_bit(!$tmp2176.nonnull);
bool $tmp2178 = $tmp2177.value;
if ($tmp2178) goto block3; else goto block4;
block3:;
// line 862
org$pandalanguage$pandac$ASTNode* $tmp2179 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
org$pandalanguage$pandac$ASTNode* $tmp2180 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2180));
*(&local2) = $tmp2179;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
// line 863
org$pandalanguage$pandac$ASTNode* $tmp2181 = *(&local2);
panda$core$Bit $tmp2182 = panda$core$Bit$init$builtin_bit($tmp2181 == NULL);
bool $tmp2183 = $tmp2182.value;
if ($tmp2183) goto block5; else goto block6;
block5:;
// line 864
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2184 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2185 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 866
panda$collections$Array* $tmp2186 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2187 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2186, ((panda$core$Object*) $tmp2187));
// line 867
goto block7;
block7:;
panda$core$Int64 $tmp2188 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2189 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2188);
org$pandalanguage$pandac$parser$Token$nullable $tmp2190 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2189);
panda$core$Bit $tmp2191 = panda$core$Bit$init$builtin_bit($tmp2190.nonnull);
bool $tmp2192 = $tmp2191.value;
if ($tmp2192) goto block8; else goto block9;
block8:;
// line 868
org$pandalanguage$pandac$ASTNode* $tmp2193 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
org$pandalanguage$pandac$ASTNode* $tmp2194 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2194));
*(&local2) = $tmp2193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2193));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 869
org$pandalanguage$pandac$ASTNode* $tmp2195 = *(&local2);
panda$core$Bit $tmp2196 = panda$core$Bit$init$builtin_bit($tmp2195 == NULL);
bool $tmp2197 = $tmp2196.value;
if ($tmp2197) goto block10; else goto block11;
block10:;
// line 870
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2198 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2199 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 872
panda$collections$Array* $tmp2200 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp2201 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2200, ((panda$core$Object*) $tmp2201));
goto block7;
block9:;
// line 874
panda$core$Int64 $tmp2202 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2203 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2202);
org$pandalanguage$pandac$parser$Token$nullable $tmp2204 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2203, &$s2205);
panda$core$Bit $tmp2206 = panda$core$Bit$init$builtin_bit(!$tmp2204.nonnull);
bool $tmp2207 = $tmp2206.value;
if ($tmp2207) goto block12; else goto block13;
block12:;
// line 875
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2208 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2208));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp2210 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 878
org$pandalanguage$pandac$parser$Token $tmp2211 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2211;
// line 879
org$pandalanguage$pandac$parser$Token $tmp2212 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2213 = $tmp2212.kind;
panda$core$Int64 $tmp2214 = $tmp2213.$rawValue;
panda$core$Int64 $tmp2215 = (panda$core$Int64) {91};
panda$core$Bit $tmp2216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2214, $tmp2215);
bool $tmp2217 = $tmp2216.value;
if ($tmp2217) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp2218 = (panda$core$Int64) {92};
panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2214, $tmp2218);
bool $tmp2220 = $tmp2219.value;
if ($tmp2220) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp2221 = (panda$core$Int64) {93};
panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2214, $tmp2221);
bool $tmp2223 = $tmp2222.value;
if ($tmp2223) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp2224 = (panda$core$Int64) {94};
panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2214, $tmp2224);
bool $tmp2226 = $tmp2225.value;
if ($tmp2226) goto block15; else goto block19;
block15:;
// line 882
org$pandalanguage$pandac$parser$Token $tmp2227 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 883
panda$core$Int64 $tmp2228 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2229 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2228);
org$pandalanguage$pandac$parser$Token$nullable $tmp2230 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2229, &$s2231);
panda$core$Bit $tmp2232 = panda$core$Bit$init$builtin_bit(!$tmp2230.nonnull);
bool $tmp2233 = $tmp2232.value;
if ($tmp2233) goto block20; else goto block21;
block20:;
// line 884
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2234 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 886
panda$collections$Array* $tmp2235 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2235);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
panda$collections$Array* $tmp2236 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
*(&local4) = $tmp2235;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
// unreffing REF($195:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 887
panda$core$Int64 $tmp2237 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2238 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2237);
org$pandalanguage$pandac$parser$Token$nullable $tmp2239 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2238);
panda$core$Bit $tmp2240 = panda$core$Bit$init$builtin_bit(!$tmp2239.nonnull);
bool $tmp2241 = $tmp2240.value;
if ($tmp2241) goto block22; else goto block23;
block22:;
// line 888
org$pandalanguage$pandac$ASTNode* $tmp2242 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
org$pandalanguage$pandac$ASTNode* $tmp2243 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2243));
*(&local5) = $tmp2242;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
// unreffing REF($217:org.pandalanguage.pandac.ASTNode?)
// line 889
org$pandalanguage$pandac$ASTNode* $tmp2244 = *(&local5);
panda$core$Bit $tmp2245 = panda$core$Bit$init$builtin_bit($tmp2244 == NULL);
bool $tmp2246 = $tmp2245.value;
if ($tmp2246) goto block24; else goto block25;
block24:;
// line 890
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2247 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2248 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2248));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2249 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2249));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 892
panda$collections$Array* $tmp2250 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2251 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2250, ((panda$core$Object*) $tmp2251));
// line 893
goto block26;
block26:;
panda$core$Int64 $tmp2252 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2253 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2252);
org$pandalanguage$pandac$parser$Token$nullable $tmp2254 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2253);
panda$core$Bit $tmp2255 = panda$core$Bit$init$builtin_bit($tmp2254.nonnull);
bool $tmp2256 = $tmp2255.value;
if ($tmp2256) goto block27; else goto block28;
block27:;
// line 894
org$pandalanguage$pandac$ASTNode* $tmp2257 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2257));
org$pandalanguage$pandac$ASTNode* $tmp2258 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
*(&local5) = $tmp2257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2257));
// unreffing REF($270:org.pandalanguage.pandac.ASTNode?)
// line 895
org$pandalanguage$pandac$ASTNode* $tmp2259 = *(&local5);
panda$core$Bit $tmp2260 = panda$core$Bit$init$builtin_bit($tmp2259 == NULL);
bool $tmp2261 = $tmp2260.value;
if ($tmp2261) goto block29; else goto block30;
block29:;
// line 896
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2262 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2263 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2264 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block30:;
// line 898
panda$collections$Array* $tmp2265 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp2266 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp2265, ((panda$core$Object*) $tmp2266));
goto block26;
block28:;
// line 900
panda$core$Int64 $tmp2267 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2268 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2267);
org$pandalanguage$pandac$parser$Token$nullable $tmp2269 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2268, &$s2270);
panda$core$Bit $tmp2271 = panda$core$Bit$init$builtin_bit(!$tmp2269.nonnull);
bool $tmp2272 = $tmp2271.value;
if ($tmp2272) goto block31; else goto block32;
block31:;
// line 901
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2273 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2273));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2274 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2275 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block32:;
org$pandalanguage$pandac$ASTNode* $tmp2276 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// unreffing t
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 904
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 905
panda$collections$Array* $tmp2277 = *(&local4);
ITable* $tmp2278 = ((panda$collections$CollectionView*) $tmp2277)->$class->itable;
while ($tmp2278->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2278 = $tmp2278->next;
}
$fn2280 $tmp2279 = $tmp2278->methods[0];
panda$core$Int64 $tmp2281 = $tmp2279(((panda$collections$CollectionView*) $tmp2277));
panda$core$Int64 $tmp2282 = (panda$core$Int64) {0};
panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2281, $tmp2282);
bool $tmp2284 = $tmp2283.value;
if ($tmp2284) goto block33; else goto block35;
block33:;
// line 906
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2285 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block34;
block35:;
// line 908
panda$collections$Array* $tmp2286 = *(&local4);
ITable* $tmp2287 = ((panda$collections$CollectionView*) $tmp2286)->$class->itable;
while ($tmp2287->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2287 = $tmp2287->next;
}
$fn2289 $tmp2288 = $tmp2287->methods[0];
panda$core$Int64 $tmp2290 = $tmp2288(((panda$collections$CollectionView*) $tmp2286));
panda$core$Int64 $tmp2291 = (panda$core$Int64) {1};
panda$core$Bit $tmp2292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2290, $tmp2291);
bool $tmp2293 = $tmp2292.value;
if ($tmp2293) goto block36; else goto block38;
block36:;
// line 909
panda$collections$Array* $tmp2294 = *(&local4);
panda$core$Int64 $tmp2295 = (panda$core$Int64) {0};
panda$core$Object* $tmp2296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2294, $tmp2295);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2296)));
org$pandalanguage$pandac$ASTNode* $tmp2297 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) $tmp2296);
panda$core$Panda$unref$panda$core$Object$Q($tmp2296);
// unreffing REF($378:panda.collections.Array.T)
goto block37;
block38:;
// line 1
// line 913
org$pandalanguage$pandac$parser$Token$nullable $tmp2298 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2298.value), &$s2299);
// line 914
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2300 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2301 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2301));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2302 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block37:;
goto block34;
block34:;
// line 916
org$pandalanguage$pandac$ASTNode* $tmp2303 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2304 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$nullable $tmp2305 = *(&local0);
org$pandalanguage$pandac$Position $tmp2306 = ((org$pandalanguage$pandac$parser$Token) $tmp2305.value).position;
org$pandalanguage$pandac$parser$Token $tmp2307 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2308 = $tmp2307.kind;
panda$collections$Array* $tmp2309 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp2310 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2309);
org$pandalanguage$pandac$ASTNode* $tmp2311 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2303, $tmp2304, $tmp2306, $tmp2308, $tmp2310, $tmp2311);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
// unreffing REF($426:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
// unreffing REF($417:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2312 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
// unreffing returnType
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2313 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
// unreffing returnTypes
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp2314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp2303;
block19:;
// line 921
org$pandalanguage$pandac$parser$Token$nullable $tmp2315 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2315.value), &$s2316);
// line 922
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp2317 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
// unreffing subtypes
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
panda$core$Bit $tmp2318 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp2320 = (panda$core$Int64) {855};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2321, $tmp2320, &$s2322);
abort(); // unreachable
block39:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$Bit param1) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
panda$core$String* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 932
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 933
org$pandalanguage$pandac$parser$Token $tmp2323 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2324 = $tmp2323.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2325;
$tmp2325 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2325->value = $tmp2324;
panda$core$Int64 $tmp2326 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp2327 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2326);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2328;
$tmp2328 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2328->value = $tmp2327;
ITable* $tmp2329 = ((panda$core$Equatable*) $tmp2325)->$class->itable;
while ($tmp2329->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2329 = $tmp2329->next;
}
$fn2331 $tmp2330 = $tmp2329->methods[0];
panda$core$Bit $tmp2332 = $tmp2330(((panda$core$Equatable*) $tmp2325), ((panda$core$Equatable*) $tmp2328));
bool $tmp2333 = $tmp2332.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2328)));
// unreffing REF($9:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2325)));
// unreffing REF($5:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2333) goto block1; else goto block3;
block1:;
// line 934
org$pandalanguage$pandac$ASTNode* $tmp2334 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
org$pandalanguage$pandac$ASTNode* $tmp2335 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
*(&local0) = $tmp2334;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
// line 935
org$pandalanguage$pandac$ASTNode* $tmp2336 = *(&local0);
panda$core$Bit $tmp2337 = panda$core$Bit$init$builtin_bit($tmp2336 == NULL);
bool $tmp2338 = $tmp2337.value;
if ($tmp2338) goto block4; else goto block5;
block4:;
// line 936
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2339 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2339));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 940
panda$core$Int64 $tmp2340 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2341 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2340);
org$pandalanguage$pandac$parser$Token$nullable $tmp2342 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2341, &$s2343);
*(&local1) = $tmp2342;
// line 941
org$pandalanguage$pandac$parser$Token$nullable $tmp2344 = *(&local1);
panda$core$Bit $tmp2345 = panda$core$Bit$init$builtin_bit(!$tmp2344.nonnull);
bool $tmp2346 = $tmp2345.value;
if ($tmp2346) goto block6; else goto block7;
block6:;
// line 942
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2347 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 944
panda$core$MutableString* $tmp2348 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp2349 = *(&local1);
panda$core$String* $tmp2350 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2349.value));
panda$core$MutableString$init$panda$core$String($tmp2348, $tmp2350);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
panda$core$MutableString* $tmp2351 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
*(&local2) = $tmp2348;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
// unreffing REF($69:panda.core.MutableString)
// line 945
goto block8;
block8:;
panda$core$Int64 $tmp2352 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp2353 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2352);
org$pandalanguage$pandac$parser$Token$nullable $tmp2354 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2353);
panda$core$Bit $tmp2355 = panda$core$Bit$init$builtin_bit($tmp2354.nonnull);
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block9; else goto block10;
block9:;
// line 946
panda$core$Int64 $tmp2357 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp2358 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2357);
org$pandalanguage$pandac$parser$Token$nullable $tmp2359 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2358, &$s2360);
*(&local3) = $tmp2359;
// line 947
org$pandalanguage$pandac$parser$Token$nullable $tmp2361 = *(&local3);
panda$core$Bit $tmp2362 = panda$core$Bit$init$builtin_bit(!$tmp2361.nonnull);
bool $tmp2363 = $tmp2362.value;
if ($tmp2363) goto block11; else goto block12;
block11:;
// line 948
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp2364 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2365 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2365));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 950
panda$core$MutableString* $tmp2366 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp2366, &$s2367);
// line 951
panda$core$MutableString* $tmp2368 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp2369 = *(&local3);
panda$core$String* $tmp2370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp2369.value));
panda$core$MutableString$append$panda$core$String($tmp2368, $tmp2370);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
// unreffing REF($128:panda.core.String)
goto block8;
block10:;
// line 953
panda$core$MutableString* $tmp2371 = *(&local2);
panda$core$String* $tmp2372 = panda$core$MutableString$finish$R$panda$core$String($tmp2371);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2372));
panda$core$String* $tmp2373 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2373));
*(&local4) = $tmp2372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2372));
// unreffing REF($136:panda.core.String)
// line 954
org$pandalanguage$pandac$ASTNode* $tmp2374 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2375 = (panda$core$Int64) {44};
org$pandalanguage$pandac$parser$Token$nullable $tmp2376 = *(&local1);
org$pandalanguage$pandac$Position $tmp2377 = ((org$pandalanguage$pandac$parser$Token) $tmp2376.value).position;
panda$core$String* $tmp2378 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2374, $tmp2375, $tmp2377, $tmp2378);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
org$pandalanguage$pandac$ASTNode* $tmp2379 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
*(&local0) = $tmp2374;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
// unreffing REF($148:org.pandalanguage.pandac.ASTNode)
// line 955
org$pandalanguage$pandac$parser$Token $tmp2380 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2381 = $tmp2380.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2382;
$tmp2382 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2382->value = $tmp2381;
panda$core$Int64 $tmp2383 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp2384 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2383);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2385;
$tmp2385 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2385->value = $tmp2384;
ITable* $tmp2386 = ((panda$core$Equatable*) $tmp2382)->$class->itable;
while ($tmp2386->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2386 = $tmp2386->next;
}
$fn2388 $tmp2387 = $tmp2386->methods[0];
panda$core$Bit $tmp2389 = $tmp2387(((panda$core$Equatable*) $tmp2382), ((panda$core$Equatable*) $tmp2385));
bool $tmp2390 = $tmp2389.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2385)));
// unreffing REF($172:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2382)));
// unreffing REF($168:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2390) goto block13; else goto block14;
block13:;
// line 958
bool $tmp2391 = param1.value;
if ($tmp2391) goto block15; else goto block16;
block15:;
// line 959
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
goto block16;
block16:;
// line 961
org$pandalanguage$pandac$parser$Token $tmp2392 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 962
panda$collections$Array* $tmp2393 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2393);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
panda$collections$Array* $tmp2394 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
*(&local5) = $tmp2393;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// unreffing REF($192:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 963
panda$core$Bit $tmp2395 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2396 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2395);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
org$pandalanguage$pandac$ASTNode* $tmp2397 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
*(&local6) = $tmp2396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing REF($207:org.pandalanguage.pandac.ASTNode?)
// line 964
org$pandalanguage$pandac$ASTNode* $tmp2398 = *(&local6);
panda$core$Bit $tmp2399 = panda$core$Bit$init$builtin_bit($tmp2398 == NULL);
bool $tmp2400 = $tmp2399.value;
if ($tmp2400) goto block17; else goto block18;
block17:;
// line 965
bool $tmp2401 = param1.value;
if ($tmp2401) goto block19; else goto block20;
block19:;
// line 966
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 967
org$pandalanguage$pandac$ASTNode* $tmp2402 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2402));
org$pandalanguage$pandac$ASTNode* $tmp2403 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2403));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2404 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2405 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2405));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2406 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2407 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2407));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2402;
block20:;
// line 969
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2408 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2409 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2410 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2411 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2412 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 971
panda$collections$Array* $tmp2413 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2414 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2413, ((panda$core$Object*) $tmp2414));
// line 972
goto block21;
block21:;
panda$core$Int64 $tmp2415 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2416 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2415);
org$pandalanguage$pandac$parser$Token$nullable $tmp2417 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2416);
panda$core$Bit $tmp2418 = panda$core$Bit$init$builtin_bit($tmp2417.nonnull);
bool $tmp2419 = $tmp2418.value;
if ($tmp2419) goto block22; else goto block23;
block22:;
// line 973
panda$core$Bit $tmp2420 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2421 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2420);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
org$pandalanguage$pandac$ASTNode* $tmp2422 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
*(&local6) = $tmp2421;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
// unreffing REF($306:org.pandalanguage.pandac.ASTNode?)
// line 974
org$pandalanguage$pandac$ASTNode* $tmp2423 = *(&local6);
panda$core$Bit $tmp2424 = panda$core$Bit$init$builtin_bit($tmp2423 == NULL);
bool $tmp2425 = $tmp2424.value;
if ($tmp2425) goto block24; else goto block25;
block24:;
// line 975
bool $tmp2426 = param1.value;
if ($tmp2426) goto block26; else goto block27;
block26:;
// line 976
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 977
org$pandalanguage$pandac$ASTNode* $tmp2427 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
org$pandalanguage$pandac$ASTNode* $tmp2428 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2429 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2429));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2430 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2431 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2432 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2427;
block27:;
// line 979
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2433 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2434 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2435 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2436 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2437 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 981
panda$collections$Array* $tmp2438 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp2439 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp2438, ((panda$core$Object*) $tmp2439));
goto block21;
block23:;
// line 983
panda$core$Int64 $tmp2440 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2441 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2440);
org$pandalanguage$pandac$parser$Token$nullable $tmp2442 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2441, &$s2443);
panda$core$Bit $tmp2444 = panda$core$Bit$init$builtin_bit(!$tmp2442.nonnull);
bool $tmp2445 = $tmp2444.value;
if ($tmp2445) goto block28; else goto block29;
block28:;
// line 984
bool $tmp2446 = param1.value;
if ($tmp2446) goto block30; else goto block31;
block30:;
// line 985
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 986
org$pandalanguage$pandac$ASTNode* $tmp2447 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
org$pandalanguage$pandac$ASTNode* $tmp2448 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2449 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2450 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2450));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2451 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2452 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2447;
block31:;
// line 988
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2453 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2454 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2455 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2456 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2457 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block29:;
// line 990
org$pandalanguage$pandac$ASTNode* $tmp2458 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2459 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp2460 = *(&local1);
org$pandalanguage$pandac$Position $tmp2461 = ((org$pandalanguage$pandac$parser$Token) $tmp2460.value).position;
panda$core$String* $tmp2462 = *(&local4);
panda$collections$Array* $tmp2463 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp2464 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2463);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2458, $tmp2459, $tmp2461, $tmp2462, $tmp2464);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
org$pandalanguage$pandac$ASTNode* $tmp2465 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2465));
*(&local0) = $tmp2458;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
// unreffing REF($475:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
// unreffing REF($467:org.pandalanguage.pandac.ASTNode)
// line 992
bool $tmp2466 = param1.value;
if ($tmp2466) goto block32; else goto block33;
block32:;
// line 993
org$pandalanguage$pandac$parser$Parser$accept(param0);
goto block33;
block33:;
org$pandalanguage$pandac$ASTNode* $tmp2467 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2467));
// unreffing t
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2468 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
// unreffing children
*(&local5) = ((panda$collections$Array*) NULL);
goto block14;
block14:;
panda$core$String* $tmp2469 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
// unreffing finalName
*(&local4) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2470 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
goto block2;
block2:;
// line 997
panda$core$Int64 $tmp2471 = (panda$core$Int64) {95};
org$pandalanguage$pandac$parser$Token$Kind $tmp2472 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2471);
org$pandalanguage$pandac$parser$Token$nullable $tmp2473 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2472);
panda$core$Bit $tmp2474 = panda$core$Bit$init$builtin_bit($tmp2473.nonnull);
bool $tmp2475 = $tmp2474.value;
if ($tmp2475) goto block34; else goto block35;
block34:;
// line 998
org$pandalanguage$pandac$ASTNode* $tmp2476 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2477 = (panda$core$Int64) {31};
org$pandalanguage$pandac$ASTNode* $tmp2478 = *(&local0);
$fn2480 $tmp2479 = ($fn2480) $tmp2478->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2481 = $tmp2479($tmp2478);
org$pandalanguage$pandac$ASTNode* $tmp2482 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2476, $tmp2477, $tmp2481, $tmp2482);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
org$pandalanguage$pandac$ASTNode* $tmp2483 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
*(&local0) = $tmp2476;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
// unreffing REF($528:org.pandalanguage.pandac.ASTNode)
goto block35;
block35:;
// line 1000
org$pandalanguage$pandac$ASTNode* $tmp2484 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
org$pandalanguage$pandac$ASTNode* $tmp2485 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2484;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$typeSpecifiers$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1007
panda$core$Int64 $tmp2486 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp2487 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2486);
org$pandalanguage$pandac$parser$Token$nullable $tmp2488 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2487, &$s2489);
panda$core$Bit $tmp2490 = panda$core$Bit$init$builtin_bit(!$tmp2488.nonnull);
bool $tmp2491 = $tmp2490.value;
if ($tmp2491) goto block1; else goto block2;
block1:;
// line 1008
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 1010
panda$collections$Array* $tmp2492 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2492);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
panda$collections$Array* $tmp2493 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
*(&local0) = $tmp2492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
// unreffing REF($13:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1
// line 1012
org$pandalanguage$pandac$ASTNode* $tmp2494 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
org$pandalanguage$pandac$ASTNode* $tmp2495 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2495));
*(&local1) = $tmp2494;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode?)
// line 1013
org$pandalanguage$pandac$ASTNode* $tmp2496 = *(&local1);
panda$core$Bit $tmp2497 = panda$core$Bit$init$builtin_bit($tmp2496 == NULL);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block3; else goto block4;
block3:;
// line 1014
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2499 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2500 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2500));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block4:;
// line 1016
panda$collections$Array* $tmp2501 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp2502 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp2501, ((panda$core$Object*) $tmp2502));
org$pandalanguage$pandac$ASTNode* $tmp2503 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1018
goto block5;
block5:;
panda$core$Int64 $tmp2504 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2505 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2504);
org$pandalanguage$pandac$parser$Token$nullable $tmp2506 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2505);
panda$core$Bit $tmp2507 = panda$core$Bit$init$builtin_bit($tmp2506.nonnull);
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block6; else goto block7;
block6:;
// line 1019
org$pandalanguage$pandac$ASTNode* $tmp2509 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
org$pandalanguage$pandac$ASTNode* $tmp2510 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
*(&local2) = $tmp2509;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode?)
// line 1020
org$pandalanguage$pandac$ASTNode* $tmp2511 = *(&local2);
panda$core$Bit $tmp2512 = panda$core$Bit$init$builtin_bit($tmp2511 == NULL);
bool $tmp2513 = $tmp2512.value;
if ($tmp2513) goto block8; else goto block9;
block8:;
// line 1021
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2514 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2515 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block9:;
// line 1023
panda$collections$Array* $tmp2516 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp2517 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp2516, ((panda$core$Object*) $tmp2517));
org$pandalanguage$pandac$ASTNode* $tmp2518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block7:;
// line 1025
panda$core$Int64 $tmp2519 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2520 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2519);
org$pandalanguage$pandac$parser$Token$nullable $tmp2521 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2520, &$s2522);
panda$core$Bit $tmp2523 = panda$core$Bit$init$builtin_bit(!$tmp2521.nonnull);
bool $tmp2524 = $tmp2523.value;
if ($tmp2524) goto block10; else goto block11;
block10:;
// line 1026
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
panda$collections$Array* $tmp2525 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block11:;
// line 1028
panda$collections$Array* $tmp2526 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp2527 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2526);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
// unreffing REF($145:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp2528 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp2527;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$String* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$FixedArray* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$core$String* local9 = NULL;
panda$collections$Array* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local12;
panda$core$Bit local13;
org$pandalanguage$pandac$parser$Token local14;
panda$core$Bit local15;
// line 1042
org$pandalanguage$pandac$ASTNode* $tmp2529 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
org$pandalanguage$pandac$ASTNode* $tmp2530 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
*(&local0) = $tmp2529;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1043
org$pandalanguage$pandac$ASTNode* $tmp2531 = *(&local0);
panda$core$Bit $tmp2532 = panda$core$Bit$init$builtin_bit($tmp2531 == NULL);
bool $tmp2533 = $tmp2532.value;
if ($tmp2533) goto block1; else goto block2;
block1:;
// line 1044
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2534 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1046
goto block3;
block3:;
// line 1047
org$pandalanguage$pandac$parser$Token $tmp2535 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2535;
// line 1048
org$pandalanguage$pandac$parser$Token $tmp2536 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2537 = $tmp2536.kind;
panda$core$Int64 $tmp2538 = $tmp2537.$rawValue;
panda$core$Int64 $tmp2539 = (panda$core$Int64) {104};
panda$core$Bit $tmp2540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2538, $tmp2539);
bool $tmp2541 = $tmp2540.value;
if ($tmp2541) goto block6; else goto block7;
block6:;
// line 1050
panda$collections$Stack** $tmp2542 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2543 = *$tmp2542;
panda$core$Bit $tmp2544 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp2545;
$tmp2545 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2545->value = $tmp2544;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2543, ((panda$core$Object*) $tmp2545));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
// unreffing REF($45:panda.collections.Stack.T)
// line 1051
panda$collections$Array* $tmp2546 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2546);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
panda$collections$Array* $tmp2547 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2547));
*(&local2) = $tmp2546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
// unreffing REF($51:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1052
panda$core$Int64 $tmp2548 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2549 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2548);
org$pandalanguage$pandac$parser$Token$nullable $tmp2550 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2549);
panda$core$Bit $tmp2551 = panda$core$Bit$init$builtin_bit(!$tmp2550.nonnull);
bool $tmp2552 = $tmp2551.value;
if ($tmp2552) goto block8; else goto block9;
block8:;
// line 1053
org$pandalanguage$pandac$ASTNode* $tmp2553 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
org$pandalanguage$pandac$ASTNode* $tmp2554 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
*(&local3) = $tmp2553;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
// unreffing REF($73:org.pandalanguage.pandac.ASTNode?)
// line 1054
org$pandalanguage$pandac$ASTNode* $tmp2555 = *(&local3);
panda$core$Bit $tmp2556 = panda$core$Bit$init$builtin_bit($tmp2555 == NULL);
bool $tmp2557 = $tmp2556.value;
if ($tmp2557) goto block10; else goto block11;
block10:;
// line 1055
panda$collections$Stack** $tmp2558 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2559 = *$tmp2558;
panda$core$Object* $tmp2560 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2559);
panda$core$Panda$unref$panda$core$Object$Q($tmp2560);
// unreffing REF($94:panda.collections.Stack.T)
// line 1056
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2561 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2562 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2563 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1058
panda$collections$Array* $tmp2564 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2565 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2564, ((panda$core$Object*) $tmp2565));
// line 1059
goto block12;
block12:;
panda$core$Int64 $tmp2566 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2567 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2566);
org$pandalanguage$pandac$parser$Token$nullable $tmp2568 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2567);
panda$core$Bit $tmp2569 = panda$core$Bit$init$builtin_bit($tmp2568.nonnull);
bool $tmp2570 = $tmp2569.value;
if ($tmp2570) goto block13; else goto block14;
block13:;
// line 1060
org$pandalanguage$pandac$ASTNode* $tmp2571 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
org$pandalanguage$pandac$ASTNode* $tmp2572 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
*(&local3) = $tmp2571;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
// unreffing REF($135:org.pandalanguage.pandac.ASTNode?)
// line 1061
org$pandalanguage$pandac$ASTNode* $tmp2573 = *(&local3);
panda$core$Bit $tmp2574 = panda$core$Bit$init$builtin_bit($tmp2573 == NULL);
bool $tmp2575 = $tmp2574.value;
if ($tmp2575) goto block15; else goto block16;
block15:;
// line 1062
panda$collections$Stack** $tmp2576 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2577 = *$tmp2576;
panda$core$Object* $tmp2578 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2577);
panda$core$Panda$unref$panda$core$Object$Q($tmp2578);
// unreffing REF($155:panda.collections.Stack.T)
// line 1063
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2579 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2580 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2580));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2581 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1065
panda$collections$Array* $tmp2582 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2583 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2582, ((panda$core$Object*) $tmp2583));
goto block12;
block14:;
// line 1067
panda$core$Int64 $tmp2584 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2585 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2584);
org$pandalanguage$pandac$parser$Token$nullable $tmp2586 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2585, &$s2587);
panda$core$Bit $tmp2588 = panda$core$Bit$init$builtin_bit(!$tmp2586.nonnull);
bool $tmp2589 = $tmp2588.value;
if ($tmp2589) goto block17; else goto block18;
block17:;
// line 1068
panda$collections$Stack** $tmp2590 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2591 = *$tmp2590;
panda$core$Object* $tmp2592 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2591);
panda$core$Panda$unref$panda$core$Object$Q($tmp2592);
// unreffing REF($199:panda.collections.Stack.T)
// line 1069
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2593 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2594 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2595 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
org$pandalanguage$pandac$ASTNode* $tmp2596 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 1072
panda$collections$Stack** $tmp2597 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2598 = *$tmp2597;
panda$core$Object* $tmp2599 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2598);
panda$core$Panda$unref$panda$core$Object$Q($tmp2599);
// unreffing REF($233:panda.collections.Stack.T)
// line 1073
org$pandalanguage$pandac$ASTNode* $tmp2600 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2601 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token $tmp2602 = *(&local1);
org$pandalanguage$pandac$Position $tmp2603 = $tmp2602.position;
org$pandalanguage$pandac$ASTNode* $tmp2604 = *(&local0);
panda$collections$Array* $tmp2605 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp2606 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2605);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2600, $tmp2601, $tmp2603, $tmp2604, $tmp2606);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
org$pandalanguage$pandac$ASTNode* $tmp2607 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
*(&local0) = $tmp2600;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
// unreffing REF($247:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp2608 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
goto block5;
block7:;
panda$core$Int64 $tmp2609 = (panda$core$Int64) {102};
panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2538, $tmp2609);
bool $tmp2611 = $tmp2610.value;
if ($tmp2611) goto block19; else goto block20;
block19:;
// line 1077
org$pandalanguage$pandac$ASTNode* $tmp2612 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
org$pandalanguage$pandac$ASTNode* $tmp2613 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
*(&local4) = $tmp2612;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
// unreffing REF($274:org.pandalanguage.pandac.ASTNode?)
// line 1078
org$pandalanguage$pandac$ASTNode* $tmp2614 = *(&local4);
panda$core$Bit $tmp2615 = panda$core$Bit$init$builtin_bit($tmp2614 == NULL);
bool $tmp2616 = $tmp2615.value;
if ($tmp2616) goto block21; else goto block22;
block21:;
// line 1079
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2617 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2618 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1081
panda$core$Int64 $tmp2619 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2620 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2619);
org$pandalanguage$pandac$parser$Token$nullable $tmp2621 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2620, &$s2622);
panda$core$Bit $tmp2623 = panda$core$Bit$init$builtin_bit(!$tmp2621.nonnull);
bool $tmp2624 = $tmp2623.value;
if ($tmp2624) goto block23; else goto block24;
block23:;
// line 1082
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2625 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2626 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 1084
org$pandalanguage$pandac$ASTNode* $tmp2627 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2628 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2629 = *(&local1);
org$pandalanguage$pandac$Position $tmp2630 = $tmp2629.position;
org$pandalanguage$pandac$ASTNode* $tmp2631 = *(&local0);
panda$core$Int64 $tmp2632 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp2633 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2632);
org$pandalanguage$pandac$ASTNode* $tmp2634 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2627, $tmp2628, $tmp2630, $tmp2631, $tmp2633, $tmp2634);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
org$pandalanguage$pandac$ASTNode* $tmp2635 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
*(&local0) = $tmp2627;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
// unreffing REF($328:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2636 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block20:;
panda$core$Int64 $tmp2637 = (panda$core$Int64) {99};
panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2538, $tmp2637);
bool $tmp2639 = $tmp2638.value;
if ($tmp2639) goto block25; else goto block26;
block25:;
// line 1087
*(&local5) = ((panda$core$String*) NULL);
// line 1088
panda$core$Int64 $tmp2640 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp2641 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2640);
org$pandalanguage$pandac$parser$Token$nullable $tmp2642 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2641);
panda$core$Bit $tmp2643 = panda$core$Bit$init$builtin_bit($tmp2642.nonnull);
bool $tmp2644 = $tmp2643.value;
if ($tmp2644) goto block27; else goto block29;
block27:;
// line 1089
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2645));
panda$core$String* $tmp2646 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
*(&local5) = &$s2645;
goto block28;
block29:;
// line 1
// line 1092
panda$core$String* $tmp2647 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
panda$core$String* $tmp2648 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2648));
*(&local5) = $tmp2647;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
// unreffing REF($380:panda.core.String?)
// line 1093
panda$core$String* $tmp2649 = *(&local5);
panda$core$Bit $tmp2650 = panda$core$Bit$init$builtin_bit($tmp2649 == NULL);
bool $tmp2651 = $tmp2650.value;
if ($tmp2651) goto block30; else goto block31;
block30:;
// line 1094
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp2652 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2653 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1097
org$pandalanguage$pandac$ASTNode* $tmp2654 = *(&local0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2654));
org$pandalanguage$pandac$ASTNode* $tmp2655 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
*(&local6) = $tmp2654;
// line 1098
org$pandalanguage$pandac$ASTNode* $tmp2656 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2657 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token $tmp2658 = *(&local1);
org$pandalanguage$pandac$Position $tmp2659 = $tmp2658.position;
org$pandalanguage$pandac$ASTNode* $tmp2660 = *(&local6);
panda$core$String* $tmp2661 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2656, $tmp2657, $tmp2659, $tmp2660, $tmp2661);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
org$pandalanguage$pandac$ASTNode* $tmp2662 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
*(&local0) = $tmp2656;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
// unreffing REF($421:org.pandalanguage.pandac.ASTNode)
// line 1099
org$pandalanguage$pandac$parser$Token $tmp2663 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2664 = $tmp2663.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2665;
$tmp2665 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2665->value = $tmp2664;
panda$core$Int64 $tmp2666 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp2667 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2666);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2668;
$tmp2668 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2668->value = $tmp2667;
ITable* $tmp2669 = ((panda$core$Equatable*) $tmp2665)->$class->itable;
while ($tmp2669->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2669 = $tmp2669->next;
}
$fn2671 $tmp2670 = $tmp2669->methods[0];
panda$core$Bit $tmp2672 = $tmp2670(((panda$core$Equatable*) $tmp2665), ((panda$core$Equatable*) $tmp2668));
bool $tmp2673 = $tmp2672.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2668)));
// unreffing REF($447:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2665)));
// unreffing REF($443:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2673) goto block32; else goto block33;
block32:;
// line 1100
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 1101
org$pandalanguage$pandac$FixedArray* $tmp2674 = org$pandalanguage$pandac$parser$Parser$typeSpecifiers$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
org$pandalanguage$pandac$FixedArray* $tmp2675 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
*(&local7) = $tmp2674;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
// unreffing REF($461:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1102
org$pandalanguage$pandac$FixedArray* $tmp2676 = *(&local7);
panda$core$Bit $tmp2677 = panda$core$Bit$init$builtin_bit($tmp2676 != NULL);
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block34; else goto block36;
block34:;
// line 1103
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1104
org$pandalanguage$pandac$ASTNode* $tmp2679 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2680 = (panda$core$Int64) {17};
org$pandalanguage$pandac$parser$Token $tmp2681 = *(&local1);
org$pandalanguage$pandac$Position $tmp2682 = $tmp2681.position;
org$pandalanguage$pandac$ASTNode* $tmp2683 = *(&local6);
panda$core$String* $tmp2684 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp2685 = *(&local7);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2679, $tmp2680, $tmp2682, $tmp2683, $tmp2684, $tmp2685);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2679));
org$pandalanguage$pandac$ASTNode* $tmp2686 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
*(&local0) = $tmp2679;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2679));
// unreffing REF($481:org.pandalanguage.pandac.ASTNode)
goto block35;
block36:;
// line 1
// line 1107
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1108
org$pandalanguage$pandac$ASTNode* $tmp2687 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
org$pandalanguage$pandac$FixedArray* $tmp2688 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
// unreffing types
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2689 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
// unreffing base
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2690 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2691 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2687;
block35:;
org$pandalanguage$pandac$FixedArray* $tmp2692 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
// unreffing types
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block33;
block33:;
org$pandalanguage$pandac$ASTNode* $tmp2693 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
// unreffing base
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2694 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block5;
block26:;
panda$core$Int64 $tmp2695 = (panda$core$Int64) {90};
panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2538, $tmp2695);
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block37; else goto block38;
block37:;
// line 1113
org$pandalanguage$pandac$ASTNode* $tmp2698 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
org$pandalanguage$pandac$ASTNode* $tmp2699 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
*(&local8) = $tmp2698;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
// unreffing REF($553:org.pandalanguage.pandac.ASTNode?)
// line 1114
org$pandalanguage$pandac$ASTNode* $tmp2700 = *(&local8);
panda$core$Bit $tmp2701 = panda$core$Bit$init$builtin_bit($tmp2700 == NULL);
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block39; else goto block40;
block39:;
// line 1115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2703 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
// unreffing target
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2704 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 1117
org$pandalanguage$pandac$ASTNode* $tmp2705 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2706 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2707 = *(&local1);
org$pandalanguage$pandac$Position $tmp2708 = $tmp2707.position;
org$pandalanguage$pandac$ASTNode* $tmp2709 = *(&local0);
panda$core$Int64 $tmp2710 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp2711 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2710);
org$pandalanguage$pandac$ASTNode* $tmp2712 = *(&local8);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2705, $tmp2706, $tmp2708, $tmp2709, $tmp2711, $tmp2712);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
org$pandalanguage$pandac$ASTNode* $tmp2713 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
*(&local0) = $tmp2705;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
// unreffing REF($585:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2714 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
// unreffing target
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block38:;
panda$core$Int64 $tmp2715 = (panda$core$Int64) {63};
panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2538, $tmp2715);
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block41; else goto block42;
block41:;
// line 1122
org$pandalanguage$pandac$parser$Token $tmp2718 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2718);
// line 1123
org$pandalanguage$pandac$ASTNode* $tmp2719 = *(&local0);
panda$core$String* $tmp2720 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2719);
*(&local9) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
panda$core$String* $tmp2721 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
*(&local9) = $tmp2720;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
// unreffing REF($622:panda.core.String?)
// line 1124
panda$core$String* $tmp2722 = *(&local9);
panda$core$Bit $tmp2723 = panda$core$Bit$init$builtin_bit($tmp2722 != NULL);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block43; else goto block44;
block43:;
// line 1125
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 1126
org$pandalanguage$pandac$parser$Token $tmp2725 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1129
panda$collections$Array* $tmp2726 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2726);
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
panda$collections$Array* $tmp2727 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2727));
*(&local10) = $tmp2726;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
// unreffing REF($644:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1130
panda$core$Bit $tmp2728 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2729 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2728);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
org$pandalanguage$pandac$ASTNode* $tmp2730 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2730));
*(&local11) = $tmp2729;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
// unreffing REF($659:org.pandalanguage.pandac.ASTNode?)
// line 1131
org$pandalanguage$pandac$ASTNode* $tmp2731 = *(&local11);
panda$core$Bit $tmp2732 = panda$core$Bit$init$builtin_bit($tmp2731 == NULL);
bool $tmp2733 = $tmp2732.value;
if ($tmp2733) goto block45; else goto block46;
block45:;
// line 1132
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1133
org$pandalanguage$pandac$ASTNode* $tmp2734 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
org$pandalanguage$pandac$ASTNode* $tmp2735 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2736 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
// unreffing types
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2737 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2738 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2734;
block46:;
// line 1135
panda$collections$Array* $tmp2739 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp2740 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp2739, ((panda$core$Object*) $tmp2740));
// line 1136
goto block47;
block47:;
panda$core$Int64 $tmp2741 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2742 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2741);
org$pandalanguage$pandac$parser$Token$nullable $tmp2743 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2742);
panda$core$Bit $tmp2744 = panda$core$Bit$init$builtin_bit($tmp2743.nonnull);
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block48; else goto block49;
block48:;
// line 1137
panda$core$Bit $tmp2746 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2747 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2746);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2747));
org$pandalanguage$pandac$ASTNode* $tmp2748 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2748));
*(&local11) = $tmp2747;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2747));
// unreffing REF($721:org.pandalanguage.pandac.ASTNode?)
// line 1138
org$pandalanguage$pandac$ASTNode* $tmp2749 = *(&local11);
panda$core$Bit $tmp2750 = panda$core$Bit$init$builtin_bit($tmp2749 == NULL);
bool $tmp2751 = $tmp2750.value;
if ($tmp2751) goto block50; else goto block51;
block50:;
// line 1139
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1140
org$pandalanguage$pandac$ASTNode* $tmp2752 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
org$pandalanguage$pandac$ASTNode* $tmp2753 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2754 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
// unreffing types
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2755 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2756 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2752;
block51:;
// line 1142
panda$collections$Array* $tmp2757 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp2758 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp2757, ((panda$core$Object*) $tmp2758));
goto block47;
block49:;
// line 1144
panda$core$Int64 $tmp2759 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2760 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2759);
org$pandalanguage$pandac$parser$Token$nullable $tmp2761 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2760, &$s2762);
*(&local12) = $tmp2761;
// line 1145
org$pandalanguage$pandac$parser$Token$nullable $tmp2763 = *(&local12);
panda$core$Bit $tmp2764 = panda$core$Bit$init$builtin_bit(!$tmp2763.nonnull);
bool $tmp2765 = $tmp2764.value;
if ($tmp2765) goto block52; else goto block53;
block52:;
// line 1146
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1147
org$pandalanguage$pandac$ASTNode* $tmp2766 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
org$pandalanguage$pandac$ASTNode* $tmp2767 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2767));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2768 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2768));
// unreffing types
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2769 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2766;
block53:;
// line 1176
// line 1177
panda$collections$Stack** $tmp2771 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2772 = *$tmp2771;
panda$core$Int64 $tmp2773 = (panda$core$Int64) {0};
panda$core$Object* $tmp2774 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2772, $tmp2773);
bool $tmp2775 = ((panda$core$Bit$wrapper*) $tmp2774)->value.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2774);
// unreffing REF($816:panda.collections.Stack.T)
if ($tmp2775) goto block54; else goto block56;
block54:;
// line 1178
org$pandalanguage$pandac$parser$Token $tmp2776 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local14) = $tmp2776;
// line 1179
org$pandalanguage$pandac$parser$Token $tmp2777 = *(&local14);
org$pandalanguage$pandac$parser$Token$Kind $tmp2778 = $tmp2777.kind;
panda$core$Int64 $tmp2779 = $tmp2778.$rawValue;
panda$core$Int64 $tmp2780 = (panda$core$Int64) {99};
panda$core$Bit $tmp2781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2779, $tmp2780);
bool $tmp2782 = $tmp2781.value;
if ($tmp2782) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp2783 = (panda$core$Int64) {106};
panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2779, $tmp2783);
bool $tmp2785 = $tmp2784.value;
if ($tmp2785) goto block58; else goto block60;
block60:;
panda$core$Int64 $tmp2786 = (panda$core$Int64) {90};
panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2779, $tmp2786);
bool $tmp2788 = $tmp2787.value;
if ($tmp2788) goto block58; else goto block61;
block58:;
// line 1181
panda$core$Bit $tmp2789 = panda$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2789;
goto block57;
block61:;
panda$core$Int64 $tmp2790 = (panda$core$Int64) {104};
panda$core$Bit $tmp2791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2779, $tmp2790);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block62; else goto block63;
block62:;
// line 1184
org$pandalanguage$pandac$parser$Token $tmp2793 = *(&local14);
org$pandalanguage$pandac$Position $tmp2794 = $tmp2793.position;
panda$core$Int64 $tmp2795 = $tmp2794.line;
org$pandalanguage$pandac$parser$Token$nullable $tmp2796 = *(&local12);
org$pandalanguage$pandac$Position $tmp2797 = ((org$pandalanguage$pandac$parser$Token) $tmp2796.value).position;
panda$core$Int64 $tmp2798 = $tmp2797.line;
panda$core$Bit $tmp2799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2795, $tmp2798);
bool $tmp2800 = $tmp2799.value;
if ($tmp2800) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$parser$Token $tmp2801 = *(&local14);
org$pandalanguage$pandac$Position $tmp2802 = $tmp2801.position;
panda$core$Int64 $tmp2803 = $tmp2802.column;
org$pandalanguage$pandac$parser$Token$nullable $tmp2804 = *(&local12);
org$pandalanguage$pandac$Position $tmp2805 = ((org$pandalanguage$pandac$parser$Token) $tmp2804.value).position;
panda$core$Int64 $tmp2806 = $tmp2805.column;
panda$core$Int64 $tmp2807 = (panda$core$Int64) {1};
int64_t $tmp2808 = $tmp2806.value;
int64_t $tmp2809 = $tmp2807.value;
int64_t $tmp2810 = $tmp2808 + $tmp2809;
panda$core$Int64 $tmp2811 = (panda$core$Int64) {$tmp2810};
panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2803, $tmp2811);
*(&local15) = $tmp2812;
goto block66;
block65:;
*(&local15) = $tmp2799;
goto block66;
block66:;
panda$core$Bit $tmp2813 = *(&local15);
*(&local13) = $tmp2813;
goto block57;
block63:;
// line 1188
panda$core$Bit $tmp2814 = panda$core$Bit$init$builtin_bit(false);
*(&local13) = $tmp2814;
goto block57;
block57:;
// line 1191
panda$core$Bit $tmp2815 = *(&local13);
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block67; else goto block68;
block67:;
// line 1192
org$pandalanguage$pandac$parser$Token $tmp2817 = *(&local14);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2817);
goto block68;
block68:;
goto block55;
block56:;
// line 1
// line 1196
panda$core$Bit $tmp2818 = panda$core$Bit$init$builtin_bit(true);
*(&local13) = $tmp2818;
goto block55;
block55:;
// line 1198
panda$core$Bit $tmp2819 = *(&local13);
bool $tmp2820 = $tmp2819.value;
if ($tmp2820) goto block69; else goto block71;
block69:;
// line 1199
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1200
org$pandalanguage$pandac$ASTNode* $tmp2821 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2822 = (panda$core$Int64) {21};
org$pandalanguage$pandac$ASTNode* $tmp2823 = *(&local0);
$fn2825 $tmp2824 = ($fn2825) $tmp2823->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2826 = $tmp2824($tmp2823);
panda$core$String* $tmp2827 = *(&local9);
panda$collections$Array* $tmp2828 = *(&local10);
org$pandalanguage$pandac$FixedArray* $tmp2829 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2828);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2821, $tmp2822, $tmp2826, $tmp2827, $tmp2829);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
org$pandalanguage$pandac$ASTNode* $tmp2830 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2830));
*(&local0) = $tmp2821;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
// unreffing REF($916:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
// unreffing REF($906:org.pandalanguage.pandac.ASTNode)
// line 1202
org$pandalanguage$pandac$ASTNode* $tmp2831 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2832 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
// unreffing types
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2833 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
goto block3;
block71:;
// line 1
// line 1205
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1206
org$pandalanguage$pandac$ASTNode* $tmp2834 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
org$pandalanguage$pandac$ASTNode* $tmp2835 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2836 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
// unreffing types
*(&local10) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2837 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2838 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2834;
block70:;
org$pandalanguage$pandac$ASTNode* $tmp2839 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
// unreffing t
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2840 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
// unreffing types
*(&local10) = ((panda$collections$Array*) NULL);
goto block44;
block44:;
// line 1209
org$pandalanguage$pandac$ASTNode* $tmp2841 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
panda$core$String* $tmp2842 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
// unreffing name
*(&local9) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2843 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2843));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2841;
block42:;
// line 1212
org$pandalanguage$pandac$parser$Token $tmp2844 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2844);
// line 1213
org$pandalanguage$pandac$ASTNode* $tmp2845 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
org$pandalanguage$pandac$ASTNode* $tmp2846 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2845;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2847 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2848 = $tmp2847.value;
if ($tmp2848) goto block72; else goto block73;
block73:;
panda$core$Int64 $tmp2849 = (panda$core$Int64) {1041};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2850, $tmp2849, &$s2851);
abort(); // unreachable
block72:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1223
org$pandalanguage$pandac$ASTNode* $tmp2852 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
org$pandalanguage$pandac$ASTNode* $tmp2853 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2853));
*(&local0) = $tmp2852;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1224
org$pandalanguage$pandac$ASTNode* $tmp2854 = *(&local0);
panda$core$Bit $tmp2855 = panda$core$Bit$init$builtin_bit($tmp2854 == NULL);
bool $tmp2856 = $tmp2855.value;
if ($tmp2856) goto block1; else goto block2;
block1:;
// line 1225
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2857 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1227
goto block3;
block3:;
// line 1228
panda$core$Int64 $tmp2858 = (panda$core$Int64) {58};
org$pandalanguage$pandac$parser$Token$Kind $tmp2859 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2858);
org$pandalanguage$pandac$parser$Token$nullable $tmp2860 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2859);
*(&local1) = $tmp2860;
// line 1229
org$pandalanguage$pandac$parser$Token$nullable $tmp2861 = *(&local1);
panda$core$Bit $tmp2862 = panda$core$Bit$init$builtin_bit(!$tmp2861.nonnull);
bool $tmp2863 = $tmp2862.value;
if ($tmp2863) goto block5; else goto block6;
block5:;
// line 1230
goto block4;
block6:;
// line 1232
org$pandalanguage$pandac$ASTNode* $tmp2864 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
org$pandalanguage$pandac$ASTNode* $tmp2865 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
*(&local2) = $tmp2864;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
// line 1233
org$pandalanguage$pandac$ASTNode* $tmp2866 = *(&local2);
panda$core$Bit $tmp2867 = panda$core$Bit$init$builtin_bit($tmp2866 == NULL);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block7; else goto block8;
block7:;
// line 1234
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2869 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2870 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1236
org$pandalanguage$pandac$ASTNode* $tmp2871 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2872 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token$nullable $tmp2873 = *(&local1);
org$pandalanguage$pandac$Position $tmp2874 = ((org$pandalanguage$pandac$parser$Token) $tmp2873.value).position;
org$pandalanguage$pandac$ASTNode* $tmp2875 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp2876 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2877 = ((org$pandalanguage$pandac$parser$Token) $tmp2876.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp2878 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2871, $tmp2872, $tmp2874, $tmp2875, $tmp2877, $tmp2878);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
org$pandalanguage$pandac$ASTNode* $tmp2879 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
*(&local0) = $tmp2871;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2880 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1238
org$pandalanguage$pandac$ASTNode* $tmp2881 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
org$pandalanguage$pandac$ASTNode* $tmp2882 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2881;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1245
org$pandalanguage$pandac$parser$Token $tmp2883 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2883;
// line 1246
org$pandalanguage$pandac$parser$Token $tmp2884 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2885 = $tmp2884.kind;
panda$core$Int64 $tmp2886 = $tmp2885.$rawValue;
panda$core$Int64 $tmp2887 = (panda$core$Int64) {53};
panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2886, $tmp2887);
bool $tmp2889 = $tmp2888.value;
if ($tmp2889) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2890 = (panda$core$Int64) {50};
panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2886, $tmp2890);
bool $tmp2892 = $tmp2891.value;
if ($tmp2892) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2893 = (panda$core$Int64) {51};
panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2886, $tmp2893);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block2; else goto block5;
block2:;
// line 1248
org$pandalanguage$pandac$ASTNode* $tmp2896 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
org$pandalanguage$pandac$ASTNode* $tmp2897 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2897));
*(&local1) = $tmp2896;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
// unreffing REF($20:org.pandalanguage.pandac.ASTNode?)
// line 1249
org$pandalanguage$pandac$ASTNode* $tmp2898 = *(&local1);
panda$core$Bit $tmp2899 = panda$core$Bit$init$builtin_bit($tmp2898 == NULL);
bool $tmp2900 = $tmp2899.value;
if ($tmp2900) goto block6; else goto block7;
block6:;
// line 1250
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2901 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2901));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1252
org$pandalanguage$pandac$ASTNode* $tmp2902 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2903 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token $tmp2904 = *(&local0);
org$pandalanguage$pandac$Position $tmp2905 = $tmp2904.position;
org$pandalanguage$pandac$parser$Token $tmp2906 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2907 = $tmp2906.kind;
org$pandalanguage$pandac$ASTNode* $tmp2908 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2902, $tmp2903, $tmp2905, $tmp2907, $tmp2908);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
// unreffing REF($47:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2909 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2909));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2902;
block5:;
// line 1255
org$pandalanguage$pandac$parser$Token $tmp2910 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2910);
// line 1256
org$pandalanguage$pandac$ASTNode* $tmp2911 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
// unreffing REF($72:org.pandalanguage.pandac.ASTNode?)
return $tmp2911;
block1:;
panda$core$Bit $tmp2912 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2913 = $tmp2912.value;
if ($tmp2913) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2914 = (panda$core$Int64) {1244};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2915, $tmp2914, &$s2916);
abort(); // unreachable
block8:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1268
org$pandalanguage$pandac$ASTNode* $tmp2917 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2917));
org$pandalanguage$pandac$ASTNode* $tmp2918 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2918));
*(&local0) = $tmp2917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2917));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1269
org$pandalanguage$pandac$ASTNode* $tmp2919 = *(&local0);
panda$core$Bit $tmp2920 = panda$core$Bit$init$builtin_bit($tmp2919 == NULL);
bool $tmp2921 = $tmp2920.value;
if ($tmp2921) goto block1; else goto block2;
block1:;
// line 1270
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2922 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1272
goto block3;
block3:;
// line 1273
org$pandalanguage$pandac$parser$Token $tmp2923 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2923;
// line 1274
org$pandalanguage$pandac$parser$Token $tmp2924 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2925 = $tmp2924.kind;
panda$core$Int64 $tmp2926 = $tmp2925.$rawValue;
panda$core$Int64 $tmp2927 = (panda$core$Int64) {54};
panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2927);
bool $tmp2929 = $tmp2928.value;
if ($tmp2929) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2930 = (panda$core$Int64) {55};
panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2930);
bool $tmp2932 = $tmp2931.value;
if ($tmp2932) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2933 = (panda$core$Int64) {56};
panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2933);
bool $tmp2935 = $tmp2934.value;
if ($tmp2935) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp2936 = (panda$core$Int64) {57};
panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2936);
bool $tmp2938 = $tmp2937.value;
if ($tmp2938) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp2939 = (panda$core$Int64) {73};
panda$core$Bit $tmp2940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2939);
bool $tmp2941 = $tmp2940.value;
if ($tmp2941) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp2942 = (panda$core$Int64) {68};
panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2942);
bool $tmp2944 = $tmp2943.value;
if ($tmp2944) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp2945 = (panda$core$Int64) {70};
panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2945);
bool $tmp2947 = $tmp2946.value;
if ($tmp2947) goto block6; else goto block13;
block6:;
// line 1277
org$pandalanguage$pandac$ASTNode* $tmp2948 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
org$pandalanguage$pandac$ASTNode* $tmp2949 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2949));
*(&local2) = $tmp2948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2948));
// unreffing REF($65:org.pandalanguage.pandac.ASTNode?)
// line 1278
org$pandalanguage$pandac$ASTNode* $tmp2950 = *(&local2);
panda$core$Bit $tmp2951 = panda$core$Bit$init$builtin_bit($tmp2950 == NULL);
bool $tmp2952 = $tmp2951.value;
if ($tmp2952) goto block14; else goto block15;
block14:;
// line 1279
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2953 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2954 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2954));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1281
org$pandalanguage$pandac$ASTNode* $tmp2955 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2956 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2957 = *(&local1);
org$pandalanguage$pandac$Position $tmp2958 = $tmp2957.position;
org$pandalanguage$pandac$ASTNode* $tmp2959 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2960 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2961 = $tmp2960.kind;
org$pandalanguage$pandac$ASTNode* $tmp2962 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2955, $tmp2956, $tmp2958, $tmp2959, $tmp2961, $tmp2962);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
org$pandalanguage$pandac$ASTNode* $tmp2963 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
*(&local0) = $tmp2955;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2955));
// unreffing REF($97:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2964 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2964));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block13:;
panda$core$Int64 $tmp2965 = (panda$core$Int64) {64};
panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, $tmp2965);
bool $tmp2967 = $tmp2966.value;
if ($tmp2967) goto block16; else goto block17;
block16:;
// line 1284
org$pandalanguage$pandac$parser$Token $tmp2968 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2968;
// line 1285
org$pandalanguage$pandac$parser$Token $tmp2969 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2970 = $tmp2969.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2971;
$tmp2971 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2971->value = $tmp2970;
panda$core$Int64 $tmp2972 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2973 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2972);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2974;
$tmp2974 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2974->value = $tmp2973;
ITable* $tmp2975 = ((panda$core$Equatable*) $tmp2971)->$class->itable;
while ($tmp2975->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2975 = $tmp2975->next;
}
$fn2977 $tmp2976 = $tmp2975->methods[0];
panda$core$Bit $tmp2978 = $tmp2976(((panda$core$Equatable*) $tmp2971), ((panda$core$Equatable*) $tmp2974));
bool $tmp2979 = $tmp2978.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2974)));
// unreffing REF($138:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2971)));
// unreffing REF($134:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2979) goto block18; else goto block20;
block18:;
// line 1287
org$pandalanguage$pandac$ASTNode* $tmp2980 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
org$pandalanguage$pandac$ASTNode* $tmp2981 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2981));
*(&local4) = $tmp2980;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
// unreffing REF($150:org.pandalanguage.pandac.ASTNode?)
// line 1288
org$pandalanguage$pandac$ASTNode* $tmp2982 = *(&local4);
panda$core$Bit $tmp2983 = panda$core$Bit$init$builtin_bit($tmp2982 == NULL);
bool $tmp2984 = $tmp2983.value;
if ($tmp2984) goto block21; else goto block22;
block21:;
// line 1289
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2985 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2986 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2986));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1291
org$pandalanguage$pandac$ASTNode* $tmp2987 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2988 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2989 = *(&local1);
org$pandalanguage$pandac$Position $tmp2990 = $tmp2989.position;
org$pandalanguage$pandac$ASTNode* $tmp2991 = *(&local0);
panda$core$Int64 $tmp2992 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$Kind $tmp2993 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2992);
org$pandalanguage$pandac$ASTNode* $tmp2994 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2987, $tmp2988, $tmp2990, $tmp2991, $tmp2993, $tmp2994);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
org$pandalanguage$pandac$ASTNode* $tmp2995 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
*(&local0) = $tmp2987;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
// unreffing REF($182:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2996 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2996));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1294
org$pandalanguage$pandac$parser$Token $tmp2997 = *(&local3);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2997);
// line 1295
org$pandalanguage$pandac$parser$Token $tmp2998 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2998);
// line 1296
org$pandalanguage$pandac$ASTNode* $tmp2999 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2999));
org$pandalanguage$pandac$ASTNode* $tmp3000 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3000));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2999;
block19:;
goto block5;
block17:;
// line 1300
org$pandalanguage$pandac$parser$Token $tmp3001 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3001);
// line 1301
org$pandalanguage$pandac$ASTNode* $tmp3002 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3002));
org$pandalanguage$pandac$ASTNode* $tmp3003 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3003));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3002;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3004 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3005 = $tmp3004.value;
if ($tmp3005) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp3006 = (panda$core$Int64) {1267};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3007, $tmp3006, &$s3008);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1312
org$pandalanguage$pandac$ASTNode* $tmp3009 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3009));
org$pandalanguage$pandac$ASTNode* $tmp3010 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3010));
*(&local0) = $tmp3009;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3009));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1313
org$pandalanguage$pandac$ASTNode* $tmp3011 = *(&local0);
panda$core$Bit $tmp3012 = panda$core$Bit$init$builtin_bit($tmp3011 == NULL);
bool $tmp3013 = $tmp3012.value;
if ($tmp3013) goto block1; else goto block2;
block1:;
// line 1314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3014 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1316
goto block3;
block3:;
// line 1317
org$pandalanguage$pandac$parser$Token $tmp3015 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3015;
// line 1318
org$pandalanguage$pandac$parser$Token $tmp3016 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3017 = $tmp3016.kind;
panda$core$Int64 $tmp3018 = $tmp3017.$rawValue;
panda$core$Int64 $tmp3019 = (panda$core$Int64) {52};
panda$core$Bit $tmp3020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3018, $tmp3019);
bool $tmp3021 = $tmp3020.value;
if ($tmp3021) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3022 = (panda$core$Int64) {53};
panda$core$Bit $tmp3023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3018, $tmp3022);
bool $tmp3024 = $tmp3023.value;
if ($tmp3024) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp3025 = (panda$core$Int64) {72};
panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3018, $tmp3025);
bool $tmp3027 = $tmp3026.value;
if ($tmp3027) goto block6; else goto block9;
block6:;
// line 1320
org$pandalanguage$pandac$ASTNode* $tmp3028 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3028));
org$pandalanguage$pandac$ASTNode* $tmp3029 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3029));
*(&local2) = $tmp3028;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3028));
// unreffing REF($49:org.pandalanguage.pandac.ASTNode?)
// line 1321
org$pandalanguage$pandac$ASTNode* $tmp3030 = *(&local2);
panda$core$Bit $tmp3031 = panda$core$Bit$init$builtin_bit($tmp3030 == NULL);
bool $tmp3032 = $tmp3031.value;
if ($tmp3032) goto block10; else goto block11;
block10:;
// line 1322
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3033 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3033));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3034 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3034));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1324
org$pandalanguage$pandac$ASTNode* $tmp3035 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3036 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp3037 = *(&local1);
org$pandalanguage$pandac$Position $tmp3038 = $tmp3037.position;
org$pandalanguage$pandac$ASTNode* $tmp3039 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3040 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3041 = $tmp3040.kind;
org$pandalanguage$pandac$ASTNode* $tmp3042 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3035, $tmp3036, $tmp3038, $tmp3039, $tmp3041, $tmp3042);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3035));
org$pandalanguage$pandac$ASTNode* $tmp3043 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3043));
*(&local0) = $tmp3035;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3035));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3044 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block9:;
// line 1327
org$pandalanguage$pandac$parser$Token $tmp3045 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3045);
// line 1328
org$pandalanguage$pandac$ASTNode* $tmp3046 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3046));
org$pandalanguage$pandac$ASTNode* $tmp3047 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3047));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3046;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3048 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3049 = $tmp3048.value;
if ($tmp3049) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp3050 = (panda$core$Int64) {1311};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3051, $tmp3050, &$s3052);
abort(); // unreachable
block12:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$parser$Token local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 1339
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1340
org$pandalanguage$pandac$parser$Token $tmp3053 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3054 = $tmp3053.kind;
panda$core$Int64 $tmp3055 = $tmp3054.$rawValue;
panda$core$Int64 $tmp3056 = (panda$core$Int64) {98};
panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3055, $tmp3056);
bool $tmp3058 = $tmp3057.value;
if ($tmp3058) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp3059 = (panda$core$Int64) {97};
panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3055, $tmp3059);
bool $tmp3061 = $tmp3060.value;
if ($tmp3061) goto block2; else goto block4;
block2:;
// line 1342
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3062 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3062));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block4:;
// line 1345
org$pandalanguage$pandac$ASTNode* $tmp3063 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3063));
org$pandalanguage$pandac$ASTNode* $tmp3064 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3064));
*(&local0) = $tmp3063;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3063));
// unreffing REF($23:org.pandalanguage.pandac.ASTNode?)
// line 1346
org$pandalanguage$pandac$ASTNode* $tmp3065 = *(&local0);
panda$core$Bit $tmp3066 = panda$core$Bit$init$builtin_bit($tmp3065 == NULL);
bool $tmp3067 = $tmp3066.value;
if ($tmp3067) goto block5; else goto block6;
block5:;
// line 1347
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3068 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3068));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1351
org$pandalanguage$pandac$parser$Token $tmp3069 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3069;
// line 1352
org$pandalanguage$pandac$parser$Token $tmp3070 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3071 = $tmp3070.kind;
panda$core$Int64 $tmp3072 = $tmp3071.$rawValue;
panda$core$Int64 $tmp3073 = (panda$core$Int64) {98};
panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3072, $tmp3073);
bool $tmp3075 = $tmp3074.value;
if ($tmp3075) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3076 = (panda$core$Int64) {97};
panda$core$Bit $tmp3077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3072, $tmp3076);
bool $tmp3078 = $tmp3077.value;
if ($tmp3078) goto block8; else goto block10;
block8:;
// line 1354
org$pandalanguage$pandac$parser$Token $tmp3079 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp3079;
// line 1355
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1356
org$pandalanguage$pandac$parser$Token $tmp3080 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp3081 = $tmp3080.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3082;
$tmp3082 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3082->value = $tmp3081;
panda$core$Int64 $tmp3083 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp3084 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3083);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3085;
$tmp3085 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3085->value = $tmp3084;
ITable* $tmp3086 = ((panda$core$Equatable*) $tmp3082)->$class->itable;
while ($tmp3086->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3086 = $tmp3086->next;
}
$fn3088 $tmp3087 = $tmp3086->methods[1];
panda$core$Bit $tmp3089 = $tmp3087(((panda$core$Equatable*) $tmp3082), ((panda$core$Equatable*) $tmp3085));
bool $tmp3090 = $tmp3089.value;
if ($tmp3090) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$parser$Token $tmp3091 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp3092 = $tmp3091.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3093;
$tmp3093 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3093->value = $tmp3092;
panda$core$Int64 $tmp3094 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3095 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3094);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3096;
$tmp3096 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3096->value = $tmp3095;
ITable* $tmp3097 = ((panda$core$Equatable*) $tmp3093)->$class->itable;
while ($tmp3097->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3097 = $tmp3097->next;
}
$fn3099 $tmp3098 = $tmp3097->methods[1];
panda$core$Bit $tmp3100 = $tmp3098(((panda$core$Equatable*) $tmp3093), ((panda$core$Equatable*) $tmp3096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3096)));
// unreffing REF($87:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3093)));
// unreffing REF($83:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local5) = $tmp3100;
goto block15;
block14:;
*(&local5) = $tmp3089;
goto block15;
block15:;
panda$core$Bit $tmp3101 = *(&local5);
bool $tmp3102 = $tmp3101.value;
if ($tmp3102) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$parser$Token $tmp3103 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp3104 = $tmp3103.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3105;
$tmp3105 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3105->value = $tmp3104;
panda$core$Int64 $tmp3106 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp3107 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3106);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3108;
$tmp3108 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3108->value = $tmp3107;
ITable* $tmp3109 = ((panda$core$Equatable*) $tmp3105)->$class->itable;
while ($tmp3109->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3109 = $tmp3109->next;
}
$fn3111 $tmp3110 = $tmp3109->methods[1];
panda$core$Bit $tmp3112 = $tmp3110(((panda$core$Equatable*) $tmp3105), ((panda$core$Equatable*) $tmp3108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3108)));
// unreffing REF($109:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3105)));
// unreffing REF($105:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local4) = $tmp3112;
goto block18;
block17:;
*(&local4) = $tmp3101;
goto block18;
block18:;
panda$core$Bit $tmp3113 = *(&local4);
bool $tmp3114 = $tmp3113.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3085)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3082)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3114) goto block11; else goto block19;
block11:;
// line 1358
org$pandalanguage$pandac$ASTNode* $tmp3115 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
org$pandalanguage$pandac$ASTNode* $tmp3116 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
*(&local3) = $tmp3115;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3115));
// unreffing REF($132:org.pandalanguage.pandac.ASTNode?)
// line 1359
org$pandalanguage$pandac$ASTNode* $tmp3117 = *(&local3);
panda$core$Bit $tmp3118 = panda$core$Bit$init$builtin_bit($tmp3117 == NULL);
bool $tmp3119 = $tmp3118.value;
if ($tmp3119) goto block20; else goto block21;
block20:;
// line 1360
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3120 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3120));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3121 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3121));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
goto block12;
block19:;
// line 1
// line 1364
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3122 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3122));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block12:;
// line 1366
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1367
panda$core$Int64 $tmp3123 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp3124 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3123);
org$pandalanguage$pandac$parser$Token$nullable $tmp3125 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3124);
panda$core$Bit $tmp3126 = panda$core$Bit$init$builtin_bit($tmp3125.nonnull);
bool $tmp3127 = $tmp3126.value;
if ($tmp3127) goto block22; else goto block24;
block22:;
// line 1368
org$pandalanguage$pandac$ASTNode* $tmp3128 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
org$pandalanguage$pandac$ASTNode* $tmp3129 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
*(&local6) = $tmp3128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
// unreffing REF($183:org.pandalanguage.pandac.ASTNode?)
// line 1369
org$pandalanguage$pandac$ASTNode* $tmp3130 = *(&local6);
panda$core$Bit $tmp3131 = panda$core$Bit$init$builtin_bit($tmp3130 == NULL);
bool $tmp3132 = $tmp3131.value;
if ($tmp3132) goto block25; else goto block26;
block25:;
// line 1370
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3133 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3134 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3135 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3135));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1374
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3136 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3136));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 1376
org$pandalanguage$pandac$ASTNode* $tmp3137 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3138 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token $tmp3139 = *(&local1);
org$pandalanguage$pandac$Position $tmp3140 = $tmp3139.position;
org$pandalanguage$pandac$ASTNode* $tmp3141 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3142 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3143 = $tmp3142.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3144;
$tmp3144 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3144->value = $tmp3143;
panda$core$Int64 $tmp3145 = (panda$core$Int64) {97};
org$pandalanguage$pandac$parser$Token$Kind $tmp3146 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3145);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3147;
$tmp3147 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3147->value = $tmp3146;
ITable* $tmp3148 = ((panda$core$Equatable*) $tmp3144)->$class->itable;
while ($tmp3148->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3148 = $tmp3148->next;
}
$fn3150 $tmp3149 = $tmp3148->methods[0];
panda$core$Bit $tmp3151 = $tmp3149(((panda$core$Equatable*) $tmp3144), ((panda$core$Equatable*) $tmp3147));
org$pandalanguage$pandac$ASTNode* $tmp3152 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3153 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q($tmp3137, $tmp3138, $tmp3140, $tmp3141, $tmp3151, $tmp3152, $tmp3153);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3147)));
// unreffing REF($240:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3144)));
// unreffing REF($236:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3137));
// unreffing REF($229:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3154 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3154));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3155 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3155));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3156 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3156));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3137;
block10:;
// line 1380
org$pandalanguage$pandac$parser$Token $tmp3157 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3157);
// line 1381
org$pandalanguage$pandac$ASTNode* $tmp3158 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
org$pandalanguage$pandac$ASTNode* $tmp3159 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3159));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3158;
block7:;
panda$core$Bit $tmp3160 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3161 = $tmp3160.value;
if ($tmp3161) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3162 = (panda$core$Int64) {1338};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3163, $tmp3162, &$s3164);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1391
org$pandalanguage$pandac$ASTNode* $tmp3165 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
org$pandalanguage$pandac$ASTNode* $tmp3166 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3166));
*(&local0) = $tmp3165;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1392
org$pandalanguage$pandac$ASTNode* $tmp3167 = *(&local0);
panda$core$Bit $tmp3168 = panda$core$Bit$init$builtin_bit($tmp3167 == NULL);
bool $tmp3169 = $tmp3168.value;
if ($tmp3169) goto block1; else goto block2;
block1:;
// line 1393
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3170 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3170));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1395
goto block3;
block3:;
// line 1396
org$pandalanguage$pandac$parser$Token $tmp3171 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3171;
// line 1397
org$pandalanguage$pandac$parser$Token $tmp3172 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3173 = $tmp3172.kind;
panda$core$Int64 $tmp3174 = $tmp3173.$rawValue;
panda$core$Int64 $tmp3175 = (panda$core$Int64) {59};
panda$core$Bit $tmp3176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3175);
bool $tmp3177 = $tmp3176.value;
if ($tmp3177) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3178 = (panda$core$Int64) {60};
panda$core$Bit $tmp3179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3178);
bool $tmp3180 = $tmp3179.value;
if ($tmp3180) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp3181 = (panda$core$Int64) {61};
panda$core$Bit $tmp3182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3181);
bool $tmp3183 = $tmp3182.value;
if ($tmp3183) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp3184 = (panda$core$Int64) {62};
panda$core$Bit $tmp3185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3184);
bool $tmp3186 = $tmp3185.value;
if ($tmp3186) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp3187 = (panda$core$Int64) {63};
panda$core$Bit $tmp3188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3187);
bool $tmp3189 = $tmp3188.value;
if ($tmp3189) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp3190 = (panda$core$Int64) {64};
panda$core$Bit $tmp3191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3190);
bool $tmp3192 = $tmp3191.value;
if ($tmp3192) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp3193 = (panda$core$Int64) {65};
panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3193);
bool $tmp3195 = $tmp3194.value;
if ($tmp3195) goto block6; else goto block13;
block13:;
panda$core$Int64 $tmp3196 = (panda$core$Int64) {66};
panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3174, $tmp3196);
bool $tmp3198 = $tmp3197.value;
if ($tmp3198) goto block6; else goto block14;
block6:;
// line 1406
org$pandalanguage$pandac$ASTNode* $tmp3199 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3199));
org$pandalanguage$pandac$ASTNode* $tmp3200 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3200));
*(&local2) = $tmp3199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3199));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
// line 1407
org$pandalanguage$pandac$ASTNode* $tmp3201 = *(&local2);
panda$core$Bit $tmp3202 = panda$core$Bit$init$builtin_bit($tmp3201 == NULL);
bool $tmp3203 = $tmp3202.value;
if ($tmp3203) goto block15; else goto block16;
block15:;
// line 1408
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3204 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3204));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3205 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3205));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1410
org$pandalanguage$pandac$ASTNode* $tmp3206 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3207 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp3208 = *(&local1);
org$pandalanguage$pandac$Position $tmp3209 = $tmp3208.position;
org$pandalanguage$pandac$ASTNode* $tmp3210 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3211 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3212 = $tmp3211.kind;
org$pandalanguage$pandac$ASTNode* $tmp3213 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3206, $tmp3207, $tmp3209, $tmp3210, $tmp3212, $tmp3213);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3206));
org$pandalanguage$pandac$ASTNode* $tmp3214 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3214));
*(&local0) = $tmp3206;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3206));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3215 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3215));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block14:;
// line 1413
org$pandalanguage$pandac$parser$Token $tmp3216 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3216);
// line 1414
org$pandalanguage$pandac$ASTNode* $tmp3217 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3217));
org$pandalanguage$pandac$ASTNode* $tmp3218 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3218));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3217;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3219 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3220 = $tmp3219.value;
if ($tmp3220) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3221 = (panda$core$Int64) {1390};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3222, $tmp3221, &$s3223);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1424
org$pandalanguage$pandac$ASTNode* $tmp3224 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3224));
org$pandalanguage$pandac$ASTNode* $tmp3225 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3225));
*(&local0) = $tmp3224;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3224));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1425
org$pandalanguage$pandac$ASTNode* $tmp3226 = *(&local0);
panda$core$Bit $tmp3227 = panda$core$Bit$init$builtin_bit($tmp3226 == NULL);
bool $tmp3228 = $tmp3227.value;
if ($tmp3228) goto block1; else goto block2;
block1:;
// line 1426
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3229 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3229));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1428
goto block3;
block3:;
// line 1429
org$pandalanguage$pandac$parser$Token $tmp3230 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3230;
// line 1430
org$pandalanguage$pandac$parser$Token $tmp3231 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3232 = $tmp3231.kind;
panda$core$Int64 $tmp3233 = $tmp3232.$rawValue;
panda$core$Int64 $tmp3234 = (panda$core$Int64) {67};
panda$core$Bit $tmp3235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3233, $tmp3234);
bool $tmp3236 = $tmp3235.value;
if ($tmp3236) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3237 = (panda$core$Int64) {71};
panda$core$Bit $tmp3238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3233, $tmp3237);
bool $tmp3239 = $tmp3238.value;
if ($tmp3239) goto block6; else goto block8;
block6:;
// line 1432
org$pandalanguage$pandac$ASTNode* $tmp3240 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3240));
org$pandalanguage$pandac$ASTNode* $tmp3241 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3241));
*(&local2) = $tmp3240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3240));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
// line 1433
org$pandalanguage$pandac$ASTNode* $tmp3242 = *(&local2);
panda$core$Bit $tmp3243 = panda$core$Bit$init$builtin_bit($tmp3242 == NULL);
bool $tmp3244 = $tmp3243.value;
if ($tmp3244) goto block9; else goto block10;
block9:;
// line 1434
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3245 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3245));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3246 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3246));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1436
org$pandalanguage$pandac$ASTNode* $tmp3247 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3248 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp3249 = *(&local1);
org$pandalanguage$pandac$Position $tmp3250 = $tmp3249.position;
org$pandalanguage$pandac$ASTNode* $tmp3251 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3252 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3253 = $tmp3252.kind;
org$pandalanguage$pandac$ASTNode* $tmp3254 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3247, $tmp3248, $tmp3250, $tmp3251, $tmp3253, $tmp3254);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3247));
org$pandalanguage$pandac$ASTNode* $tmp3255 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3255));
*(&local0) = $tmp3247;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3247));
// unreffing REF($77:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3256 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block8:;
// line 1439
org$pandalanguage$pandac$parser$Token $tmp3257 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3257);
// line 1440
org$pandalanguage$pandac$ASTNode* $tmp3258 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3258));
org$pandalanguage$pandac$ASTNode* $tmp3259 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3259));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3258;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3260 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3261 = $tmp3260.value;
if ($tmp3261) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp3262 = (panda$core$Int64) {1423};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3263, $tmp3262, &$s3264);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1450
org$pandalanguage$pandac$ASTNode* $tmp3265 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3265));
org$pandalanguage$pandac$ASTNode* $tmp3266 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3266));
*(&local0) = $tmp3265;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3265));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1451
org$pandalanguage$pandac$ASTNode* $tmp3267 = *(&local0);
panda$core$Bit $tmp3268 = panda$core$Bit$init$builtin_bit($tmp3267 == NULL);
bool $tmp3269 = $tmp3268.value;
if ($tmp3269) goto block1; else goto block2;
block1:;
// line 1452
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3270 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3270));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1454
goto block3;
block3:;
// line 1455
panda$core$Int64 $tmp3271 = (panda$core$Int64) {69};
org$pandalanguage$pandac$parser$Token$Kind $tmp3272 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3271);
org$pandalanguage$pandac$parser$Token$nullable $tmp3273 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3272);
*(&local1) = $tmp3273;
// line 1456
org$pandalanguage$pandac$parser$Token$nullable $tmp3274 = *(&local1);
panda$core$Bit $tmp3275 = panda$core$Bit$init$builtin_bit(!$tmp3274.nonnull);
bool $tmp3276 = $tmp3275.value;
if ($tmp3276) goto block5; else goto block6;
block5:;
// line 1457
goto block4;
block6:;
// line 1459
org$pandalanguage$pandac$ASTNode* $tmp3277 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
org$pandalanguage$pandac$ASTNode* $tmp3278 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3278));
*(&local2) = $tmp3277;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
// line 1460
org$pandalanguage$pandac$ASTNode* $tmp3279 = *(&local2);
panda$core$Bit $tmp3280 = panda$core$Bit$init$builtin_bit($tmp3279 == NULL);
bool $tmp3281 = $tmp3280.value;
if ($tmp3281) goto block7; else goto block8;
block7:;
// line 1461
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3282 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3282));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3283 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1463
org$pandalanguage$pandac$ASTNode* $tmp3284 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3285 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token$nullable $tmp3286 = *(&local1);
org$pandalanguage$pandac$Position $tmp3287 = ((org$pandalanguage$pandac$parser$Token) $tmp3286.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3288 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp3289 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3290 = ((org$pandalanguage$pandac$parser$Token) $tmp3289.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp3291 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3284, $tmp3285, $tmp3287, $tmp3288, $tmp3290, $tmp3291);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
org$pandalanguage$pandac$ASTNode* $tmp3292 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3292));
*(&local0) = $tmp3284;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3293 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3293));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1465
org$pandalanguage$pandac$ASTNode* $tmp3294 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3294));
org$pandalanguage$pandac$ASTNode* $tmp3295 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3295));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3294;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1472
panda$core$Int64 $tmp3296 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3297 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3296);
org$pandalanguage$pandac$parser$Token$nullable $tmp3298 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3297, &$s3299);
*(&local0) = $tmp3298;
// line 1473
org$pandalanguage$pandac$parser$Token$nullable $tmp3300 = *(&local0);
panda$core$Bit $tmp3301 = panda$core$Bit$init$builtin_bit(!$tmp3300.nonnull);
bool $tmp3302 = $tmp3301.value;
if ($tmp3302) goto block1; else goto block2;
block1:;
// line 1474
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1476
org$pandalanguage$pandac$ASTNode* $tmp3303 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
org$pandalanguage$pandac$ASTNode* $tmp3304 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3304));
*(&local1) = $tmp3303;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1477
org$pandalanguage$pandac$ASTNode* $tmp3305 = *(&local1);
panda$core$Bit $tmp3306 = panda$core$Bit$init$builtin_bit($tmp3305 == NULL);
bool $tmp3307 = $tmp3306.value;
if ($tmp3307) goto block3; else goto block4;
block3:;
// line 1478
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3308 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3308));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1480
org$pandalanguage$pandac$FixedArray* $tmp3309 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
org$pandalanguage$pandac$FixedArray* $tmp3310 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
*(&local2) = $tmp3309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing REF($43:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1481
org$pandalanguage$pandac$FixedArray* $tmp3311 = *(&local2);
panda$core$Bit $tmp3312 = panda$core$Bit$init$builtin_bit($tmp3311 == NULL);
bool $tmp3313 = $tmp3312.value;
if ($tmp3313) goto block5; else goto block6;
block5:;
// line 1482
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3314 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3314));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3315 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1484
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1485
panda$core$Int64 $tmp3316 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$Kind $tmp3317 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3316);
org$pandalanguage$pandac$parser$Token$nullable $tmp3318 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3317);
panda$core$Bit $tmp3319 = panda$core$Bit$init$builtin_bit($tmp3318.nonnull);
bool $tmp3320 = $tmp3319.value;
if ($tmp3320) goto block7; else goto block9;
block7:;
// line 1486
org$pandalanguage$pandac$parser$Token $tmp3321 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3322 = $tmp3321.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3323;
$tmp3323 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3323->value = $tmp3322;
panda$core$Int64 $tmp3324 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3325 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3324);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3326;
$tmp3326 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3326->value = $tmp3325;
ITable* $tmp3327 = ((panda$core$Equatable*) $tmp3323)->$class->itable;
while ($tmp3327->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3327 = $tmp3327->next;
}
$fn3329 $tmp3328 = $tmp3327->methods[0];
panda$core$Bit $tmp3330 = $tmp3328(((panda$core$Equatable*) $tmp3323), ((panda$core$Equatable*) $tmp3326));
bool $tmp3331 = $tmp3330.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3326)));
// unreffing REF($91:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3323)));
// unreffing REF($87:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3331) goto block10; else goto block12;
block10:;
// line 1487
org$pandalanguage$pandac$ASTNode* $tmp3332 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3332));
org$pandalanguage$pandac$ASTNode* $tmp3333 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3333));
*(&local3) = $tmp3332;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3332));
// unreffing REF($103:org.pandalanguage.pandac.ASTNode?)
// line 1488
org$pandalanguage$pandac$ASTNode* $tmp3334 = *(&local3);
panda$core$Bit $tmp3335 = panda$core$Bit$init$builtin_bit($tmp3334 == NULL);
bool $tmp3336 = $tmp3335.value;
if ($tmp3336) goto block13; else goto block14;
block13:;
// line 1489
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3337 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3338 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3338));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3339 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3339));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1493
org$pandalanguage$pandac$ASTNode* $tmp3340 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3340));
org$pandalanguage$pandac$ASTNode* $tmp3341 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3341));
*(&local3) = $tmp3340;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3340));
// unreffing REF($141:org.pandalanguage.pandac.ASTNode?)
// line 1494
org$pandalanguage$pandac$ASTNode* $tmp3342 = *(&local3);
panda$core$Bit $tmp3343 = panda$core$Bit$init$builtin_bit($tmp3342 == NULL);
bool $tmp3344 = $tmp3343.value;
if ($tmp3344) goto block15; else goto block16;
block15:;
// line 1495
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3345 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3345));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3346 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3346));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3347 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3347));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1500
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3348 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
// line 1502
org$pandalanguage$pandac$ASTNode* $tmp3349 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3350 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$nullable $tmp3351 = *(&local0);
org$pandalanguage$pandac$Position $tmp3352 = ((org$pandalanguage$pandac$parser$Token) $tmp3351.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3353 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3354 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3355 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp3349, $tmp3350, $tmp3352, $tmp3353, $tmp3354, $tmp3355);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
// unreffing REF($188:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3356 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3357 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3358 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3358));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3349;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1509
panda$core$Int64 $tmp3359 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3360 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3359);
org$pandalanguage$pandac$parser$Token$nullable $tmp3361 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3360, &$s3362);
panda$core$Bit $tmp3363 = panda$core$Bit$init$builtin_bit(!$tmp3361.nonnull);
bool $tmp3364 = $tmp3363.value;
if ($tmp3364) goto block1; else goto block2;
block1:;
// line 1510
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1512
panda$core$Bit $tmp3365 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp3366 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp3365);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3366));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return $tmp3366;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1519
panda$core$Int64 $tmp3367 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3368 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3367);
org$pandalanguage$pandac$parser$Token$nullable $tmp3369 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3368, &$s3370);
*(&local0) = $tmp3369;
// line 1520
org$pandalanguage$pandac$parser$Token$nullable $tmp3371 = *(&local0);
panda$core$Bit $tmp3372 = panda$core$Bit$init$builtin_bit(!$tmp3371.nonnull);
bool $tmp3373 = $tmp3372.value;
if ($tmp3373) goto block1; else goto block2;
block1:;
// line 1521
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1523
org$pandalanguage$pandac$parser$Token $tmp3374 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3375 = $tmp3374.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3376;
$tmp3376 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3376->value = $tmp3375;
panda$core$Int64 $tmp3377 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3378 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3377);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3379;
$tmp3379 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3379->value = $tmp3378;
ITable* $tmp3380 = ((panda$core$Equatable*) $tmp3376)->$class->itable;
while ($tmp3380->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3380 = $tmp3380->next;
}
$fn3382 $tmp3381 = $tmp3380->methods[0];
panda$core$Bit $tmp3383 = $tmp3381(((panda$core$Equatable*) $tmp3376), ((panda$core$Equatable*) $tmp3379));
bool $tmp3384 = $tmp3383.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3379)));
// unreffing REF($22:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3376)));
// unreffing REF($18:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3384) goto block3; else goto block4;
block3:;
// line 1524
org$pandalanguage$pandac$ASTNode* $tmp3385 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3385));
org$pandalanguage$pandac$ASTNode* $tmp3386 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3386));
*(&local1) = $tmp3385;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3385));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode?)
// line 1525
org$pandalanguage$pandac$ASTNode* $tmp3387 = *(&local1);
panda$core$Bit $tmp3388 = panda$core$Bit$init$builtin_bit($tmp3387 == NULL);
bool $tmp3389 = $tmp3388.value;
if ($tmp3389) goto block5; else goto block6;
block5:;
// line 1526
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3390 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3390));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1528
org$pandalanguage$pandac$ASTNode* $tmp3391 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3392 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp3393 = *(&local0);
org$pandalanguage$pandac$Position $tmp3394 = ((org$pandalanguage$pandac$parser$Token) $tmp3393.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3395 = *(&local0);
panda$core$String* $tmp3396 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3395.value));
org$pandalanguage$pandac$ASTNode* $tmp3397 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3391, $tmp3392, $tmp3394, $tmp3396, $tmp3397);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3396));
// unreffing REF($68:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3391));
// unreffing REF($61:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3398 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3398));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3391;
block4:;
// line 1530
org$pandalanguage$pandac$ASTNode* $tmp3399 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3400 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$nullable $tmp3401 = *(&local0);
org$pandalanguage$pandac$Position $tmp3402 = ((org$pandalanguage$pandac$parser$Token) $tmp3401.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3403 = *(&local0);
panda$core$String* $tmp3404 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3403.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3399, $tmp3400, $tmp3402, $tmp3404);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3399));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3404));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3399));
// unreffing REF($87:org.pandalanguage.pandac.ASTNode)
return $tmp3399;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
// line 1537
panda$core$Int64 $tmp3405 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$Kind $tmp3406 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3405);
org$pandalanguage$pandac$parser$Token$nullable $tmp3407 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3406, &$s3408);
*(&local0) = $tmp3407;
// line 1538
org$pandalanguage$pandac$parser$Token$nullable $tmp3409 = *(&local0);
panda$core$Bit $tmp3410 = panda$core$Bit$init$builtin_bit(!$tmp3409.nonnull);
bool $tmp3411 = $tmp3410.value;
if ($tmp3411) goto block1; else goto block2;
block1:;
// line 1539
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1541
org$pandalanguage$pandac$ASTNode* $tmp3412 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3412));
org$pandalanguage$pandac$ASTNode* $tmp3413 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3413));
*(&local1) = $tmp3412;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3412));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1542
org$pandalanguage$pandac$ASTNode* $tmp3414 = *(&local1);
panda$core$Bit $tmp3415 = panda$core$Bit$init$builtin_bit($tmp3414 == NULL);
bool $tmp3416 = $tmp3415.value;
if ($tmp3416) goto block3; else goto block4;
block3:;
// line 1543
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3417 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3417));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1545
panda$core$Int64 $tmp3418 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token$Kind $tmp3419 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3418);
org$pandalanguage$pandac$parser$Token$nullable $tmp3420 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3419, &$s3421);
panda$core$Bit $tmp3422 = panda$core$Bit$init$builtin_bit(!$tmp3420.nonnull);
bool $tmp3423 = $tmp3422.value;
if ($tmp3423) goto block5; else goto block6;
block5:;
// line 1546
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3424 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3424));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1548
org$pandalanguage$pandac$ASTNode* $tmp3425 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3425));
org$pandalanguage$pandac$ASTNode* $tmp3426 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3426));
*(&local2) = $tmp3425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3425));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
// line 1549
org$pandalanguage$pandac$ASTNode* $tmp3427 = *(&local2);
panda$core$Bit $tmp3428 = panda$core$Bit$init$builtin_bit($tmp3427 == NULL);
bool $tmp3429 = $tmp3428.value;
if ($tmp3429) goto block7; else goto block8;
block7:;
// line 1550
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3430 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3430));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3431 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3431));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1552
org$pandalanguage$pandac$FixedArray* $tmp3432 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3432));
org$pandalanguage$pandac$FixedArray* $tmp3433 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3433));
*(&local3) = $tmp3432;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3432));
// unreffing REF($92:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1553
org$pandalanguage$pandac$FixedArray* $tmp3434 = *(&local3);
panda$core$Bit $tmp3435 = panda$core$Bit$init$builtin_bit($tmp3434 == NULL);
bool $tmp3436 = $tmp3435.value;
if ($tmp3436) goto block9; else goto block10;
block9:;
// line 1554
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3437 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3437));
// unreffing block
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3438 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3438));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3439 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3439));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1556
org$pandalanguage$pandac$ASTNode* $tmp3440 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3441 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$nullable $tmp3442 = *(&local0);
org$pandalanguage$pandac$Position $tmp3443 = ((org$pandalanguage$pandac$parser$Token) $tmp3442.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3444 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3445 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3446 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3440, $tmp3441, $tmp3443, param1, $tmp3444, $tmp3445, $tmp3446);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3440));
// unreffing REF($129:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3447 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
// unreffing block
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3448 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3448));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3449 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3449));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3440;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
// line 1563
panda$core$Int64 $tmp3450 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3451 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3450);
org$pandalanguage$pandac$parser$Token$nullable $tmp3452 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3451, &$s3453);
*(&local0) = $tmp3452;
// line 1564
org$pandalanguage$pandac$parser$Token$nullable $tmp3454 = *(&local0);
panda$core$Bit $tmp3455 = panda$core$Bit$init$builtin_bit(!$tmp3454.nonnull);
bool $tmp3456 = $tmp3455.value;
if ($tmp3456) goto block1; else goto block2;
block1:;
// line 1565
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1567
org$pandalanguage$pandac$ASTNode* $tmp3457 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3457));
org$pandalanguage$pandac$ASTNode* $tmp3458 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3458));
*(&local1) = $tmp3457;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3457));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1568
org$pandalanguage$pandac$ASTNode* $tmp3459 = *(&local1);
panda$core$Bit $tmp3460 = panda$core$Bit$init$builtin_bit($tmp3459 == NULL);
bool $tmp3461 = $tmp3460.value;
if ($tmp3461) goto block3; else goto block4;
block3:;
// line 1569
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3462 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3462));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1571
org$pandalanguage$pandac$FixedArray* $tmp3463 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3463));
org$pandalanguage$pandac$FixedArray* $tmp3464 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
*(&local2) = $tmp3463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3463));
// unreffing REF($43:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1572
org$pandalanguage$pandac$FixedArray* $tmp3465 = *(&local2);
panda$core$Bit $tmp3466 = panda$core$Bit$init$builtin_bit($tmp3465 == NULL);
bool $tmp3467 = $tmp3466.value;
if ($tmp3467) goto block5; else goto block6;
block5:;
// line 1573
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3468 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
// unreffing body
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3469 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3469));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1575
org$pandalanguage$pandac$ASTNode* $tmp3470 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3471 = (panda$core$Int64) {51};
org$pandalanguage$pandac$parser$Token$nullable $tmp3472 = *(&local0);
org$pandalanguage$pandac$Position $tmp3473 = ((org$pandalanguage$pandac$parser$Token) $tmp3472.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3474 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3475 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3470, $tmp3471, $tmp3473, param1, $tmp3474, $tmp3475);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3470));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3470));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3476 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3476));
// unreffing body
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3477 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3477));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3470;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1582
panda$core$Int64 $tmp3478 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp3479 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3478);
org$pandalanguage$pandac$parser$Token$nullable $tmp3480 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3479, &$s3481);
*(&local0) = $tmp3480;
// line 1583
org$pandalanguage$pandac$parser$Token$nullable $tmp3482 = *(&local0);
panda$core$Bit $tmp3483 = panda$core$Bit$init$builtin_bit(!$tmp3482.nonnull);
bool $tmp3484 = $tmp3483.value;
if ($tmp3484) goto block1; else goto block2;
block1:;
// line 1584
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1586
org$pandalanguage$pandac$FixedArray* $tmp3485 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
org$pandalanguage$pandac$FixedArray* $tmp3486 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3486));
*(&local1) = $tmp3485;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3485));
// unreffing REF($16:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1587
org$pandalanguage$pandac$FixedArray* $tmp3487 = *(&local1);
panda$core$Bit $tmp3488 = panda$core$Bit$init$builtin_bit($tmp3487 == NULL);
bool $tmp3489 = $tmp3488.value;
if ($tmp3489) goto block3; else goto block4;
block3:;
// line 1588
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3490 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1590
panda$core$Int64 $tmp3491 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3492 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3491);
org$pandalanguage$pandac$parser$Token$nullable $tmp3493 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3492, &$s3494);
panda$core$Bit $tmp3495 = panda$core$Bit$init$builtin_bit(!$tmp3493.nonnull);
bool $tmp3496 = $tmp3495.value;
if ($tmp3496) goto block5; else goto block6;
block5:;
// line 1591
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3497));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1593
org$pandalanguage$pandac$ASTNode* $tmp3498 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3498));
org$pandalanguage$pandac$ASTNode* $tmp3499 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3499));
*(&local2) = $tmp3498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3498));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
// line 1594
org$pandalanguage$pandac$ASTNode* $tmp3500 = *(&local2);
panda$core$Bit $tmp3501 = panda$core$Bit$init$builtin_bit($tmp3500 == NULL);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block7; else goto block8;
block7:;
// line 1595
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3503 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3504 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3504));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1597
org$pandalanguage$pandac$ASTNode* $tmp3505 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3506 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$nullable $tmp3507 = *(&local0);
org$pandalanguage$pandac$Position $tmp3508 = ((org$pandalanguage$pandac$parser$Token) $tmp3507.value).position;
org$pandalanguage$pandac$FixedArray* $tmp3509 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3510 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3505, $tmp3506, $tmp3508, param1, $tmp3509, $tmp3510);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
// unreffing REF($92:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3511 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3511));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3512 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3512));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp3505;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
// line 1604
panda$core$Int64 $tmp3513 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$Kind $tmp3514 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3513);
org$pandalanguage$pandac$parser$Token$nullable $tmp3515 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3514, &$s3516);
*(&local0) = $tmp3515;
// line 1605
org$pandalanguage$pandac$parser$Token$nullable $tmp3517 = *(&local0);
panda$core$Bit $tmp3518 = panda$core$Bit$init$builtin_bit(!$tmp3517.nonnull);
bool $tmp3519 = $tmp3518.value;
if ($tmp3519) goto block1; else goto block2;
block1:;
// line 1606
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1608
org$pandalanguage$pandac$FixedArray* $tmp3520 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3520));
org$pandalanguage$pandac$FixedArray* $tmp3521 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3521));
*(&local1) = $tmp3520;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3520));
// unreffing REF($16:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1609
org$pandalanguage$pandac$FixedArray* $tmp3522 = *(&local1);
panda$core$Bit $tmp3523 = panda$core$Bit$init$builtin_bit($tmp3522 == NULL);
bool $tmp3524 = $tmp3523.value;
if ($tmp3524) goto block3; else goto block4;
block3:;
// line 1610
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3525 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3525));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1612
org$pandalanguage$pandac$ASTNode* $tmp3526 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3527 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp3528 = *(&local0);
org$pandalanguage$pandac$Position $tmp3529 = ((org$pandalanguage$pandac$parser$Token) $tmp3528.value).position;
org$pandalanguage$pandac$FixedArray* $tmp3530 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3526, $tmp3527, $tmp3529, param1, $tmp3530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3526));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3526));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3531 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp3526;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1619
panda$core$Int64 $tmp3532 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$Kind $tmp3533 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3532);
org$pandalanguage$pandac$parser$Token$nullable $tmp3534 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3533, &$s3535);
*(&local0) = $tmp3534;
// line 1620
org$pandalanguage$pandac$parser$Token$nullable $tmp3536 = *(&local0);
panda$core$Bit $tmp3537 = panda$core$Bit$init$builtin_bit(!$tmp3536.nonnull);
bool $tmp3538 = $tmp3537.value;
if ($tmp3538) goto block1; else goto block2;
block1:;
// line 1621
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1623
org$pandalanguage$pandac$ASTNode* $tmp3539 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
org$pandalanguage$pandac$ASTNode* $tmp3540 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3540));
*(&local1) = $tmp3539;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1624
org$pandalanguage$pandac$ASTNode* $tmp3541 = *(&local1);
panda$core$Bit $tmp3542 = panda$core$Bit$init$builtin_bit($tmp3541 == NULL);
bool $tmp3543 = $tmp3542.value;
if ($tmp3543) goto block3; else goto block4;
block3:;
// line 1625
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3544 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3544));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1627
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1628
panda$core$Int64 $tmp3545 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3546 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3545);
org$pandalanguage$pandac$parser$Token$nullable $tmp3547 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3546);
panda$core$Bit $tmp3548 = panda$core$Bit$init$builtin_bit($tmp3547.nonnull);
bool $tmp3549 = $tmp3548.value;
if ($tmp3549) goto block5; else goto block7;
block5:;
// line 1629
org$pandalanguage$pandac$ASTNode* $tmp3550 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3550));
org$pandalanguage$pandac$ASTNode* $tmp3551 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3551));
*(&local2) = $tmp3550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3550));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
// line 1630
org$pandalanguage$pandac$ASTNode* $tmp3552 = *(&local2);
panda$core$Bit $tmp3553 = panda$core$Bit$init$builtin_bit($tmp3552 == NULL);
bool $tmp3554 = $tmp3553.value;
if ($tmp3554) goto block8; else goto block9;
block8:;
// line 1631
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3555 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3555));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3556 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3556));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1635
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3557 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3557));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1637
org$pandalanguage$pandac$ASTNode* $tmp3558 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3559 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token$nullable $tmp3560 = *(&local0);
org$pandalanguage$pandac$Position $tmp3561 = ((org$pandalanguage$pandac$parser$Token) $tmp3560.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3562 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3563 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3558, $tmp3559, $tmp3561, $tmp3562, $tmp3563);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3558));
// unreffing REF($94:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3564 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3564));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3565 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3565));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3558;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
panda$core$Bit* $tmp3566 = &param0->allowLambdas;
panda$core$Bit $tmp3567 = *$tmp3566;
bool $tmp3568 = $tmp3567.value;
if ($tmp3568) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3569 = (panda$core$Int64) {1645};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3570, $tmp3569, &$s3571);
abort(); // unreachable
block1:;
// line 1646
panda$core$Int64 $tmp3572 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$Kind $tmp3573 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3572);
org$pandalanguage$pandac$parser$Token$nullable $tmp3574 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3573, &$s3575);
*(&local0) = $tmp3574;
// line 1647
org$pandalanguage$pandac$parser$Token$nullable $tmp3576 = *(&local0);
panda$core$Bit $tmp3577 = panda$core$Bit$init$builtin_bit(!$tmp3576.nonnull);
bool $tmp3578 = $tmp3577.value;
if ($tmp3578) goto block3; else goto block4;
block3:;
// line 1648
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1650
panda$core$Bit $tmp3579 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3580 = &param0->allowLambdas;
*$tmp3580 = $tmp3579;
// line 1651
panda$collections$Array* $tmp3581 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3581);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3581));
panda$collections$Array* $tmp3582 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3582));
*(&local1) = $tmp3581;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3581));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1652
org$pandalanguage$pandac$ASTNode* $tmp3583 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
org$pandalanguage$pandac$ASTNode* $tmp3584 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3584));
*(&local2) = $tmp3583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3583));
// unreffing REF($41:org.pandalanguage.pandac.ASTNode?)
// line 1653
org$pandalanguage$pandac$ASTNode* $tmp3585 = *(&local2);
panda$core$Bit $tmp3586 = panda$core$Bit$init$builtin_bit($tmp3585 == NULL);
bool $tmp3587 = $tmp3586.value;
if ($tmp3587) goto block5; else goto block6;
block5:;
// line 1654
panda$core$Bit $tmp3588 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3589 = &param0->allowLambdas;
*$tmp3589 = $tmp3588;
// line 1655
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3590 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3591 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3591));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1657
panda$collections$Array* $tmp3592 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3593 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3592, ((panda$core$Object*) $tmp3593));
// line 1658
goto block7;
block7:;
panda$core$Int64 $tmp3594 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3595 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3594);
org$pandalanguage$pandac$parser$Token$nullable $tmp3596 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3595);
panda$core$Bit $tmp3597 = panda$core$Bit$init$builtin_bit($tmp3596.nonnull);
bool $tmp3598 = $tmp3597.value;
if ($tmp3598) goto block8; else goto block9;
block8:;
// line 1659
org$pandalanguage$pandac$ASTNode* $tmp3599 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3599));
org$pandalanguage$pandac$ASTNode* $tmp3600 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3600));
*(&local2) = $tmp3599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3599));
// unreffing REF($93:org.pandalanguage.pandac.ASTNode?)
// line 1660
org$pandalanguage$pandac$ASTNode* $tmp3601 = *(&local2);
panda$core$Bit $tmp3602 = panda$core$Bit$init$builtin_bit($tmp3601 == NULL);
bool $tmp3603 = $tmp3602.value;
if ($tmp3603) goto block10; else goto block11;
block10:;
// line 1661
panda$core$Bit $tmp3604 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3605 = &param0->allowLambdas;
*$tmp3605 = $tmp3604;
// line 1662
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3606 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3606));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3607 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3607));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1664
panda$collections$Array* $tmp3608 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3609 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3608, ((panda$core$Object*) $tmp3609));
goto block7;
block9:;
// line 1666
panda$core$Bit $tmp3610 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3611 = &param0->allowLambdas;
*$tmp3611 = $tmp3610;
// line 1667
org$pandalanguage$pandac$FixedArray* $tmp3612 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3612));
org$pandalanguage$pandac$FixedArray* $tmp3613 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3613));
*(&local3) = $tmp3612;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3612));
// unreffing REF($140:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1668
org$pandalanguage$pandac$FixedArray* $tmp3614 = *(&local3);
panda$core$Bit $tmp3615 = panda$core$Bit$init$builtin_bit($tmp3614 == NULL);
bool $tmp3616 = $tmp3615.value;
if ($tmp3616) goto block12; else goto block13;
block12:;
// line 1669
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3617 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3617));
// unreffing statements
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3618 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3619 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1671
org$pandalanguage$pandac$ASTNode* $tmp3620 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3621 = (panda$core$Int64) {50};
org$pandalanguage$pandac$parser$Token$nullable $tmp3622 = *(&local0);
org$pandalanguage$pandac$Position $tmp3623 = ((org$pandalanguage$pandac$parser$Token) $tmp3622.value).position;
panda$collections$Array* $tmp3624 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3625 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3624);
org$pandalanguage$pandac$FixedArray* $tmp3626 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3620, $tmp3621, $tmp3623, $tmp3625, $tmp3626);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3625));
// unreffing REF($184:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3620));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3627 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3627));
// unreffing statements
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3628 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3628));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3629 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3629));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3620;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token local6;
// line 1678
panda$core$Int64 $tmp3630 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$Kind $tmp3631 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3630);
org$pandalanguage$pandac$parser$Token$nullable $tmp3632 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3631, &$s3633);
*(&local0) = $tmp3632;
// line 1679
org$pandalanguage$pandac$parser$Token$nullable $tmp3634 = *(&local0);
panda$core$Bit $tmp3635 = panda$core$Bit$init$builtin_bit(!$tmp3634.nonnull);
bool $tmp3636 = $tmp3635.value;
if ($tmp3636) goto block1; else goto block2;
block1:;
// line 1680
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1682
org$pandalanguage$pandac$ASTNode* $tmp3637 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3637));
org$pandalanguage$pandac$ASTNode* $tmp3638 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3638));
*(&local1) = $tmp3637;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3637));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1683
org$pandalanguage$pandac$ASTNode* $tmp3639 = *(&local1);
panda$core$Bit $tmp3640 = panda$core$Bit$init$builtin_bit($tmp3639 == NULL);
bool $tmp3641 = $tmp3640.value;
if ($tmp3641) goto block3; else goto block4;
block3:;
// line 1684
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3642 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3642));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1686
panda$core$Int64 $tmp3643 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3644 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3643);
org$pandalanguage$pandac$parser$Token$nullable $tmp3645 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3644, &$s3646);
panda$core$Bit $tmp3647 = panda$core$Bit$init$builtin_bit(!$tmp3645.nonnull);
bool $tmp3648 = $tmp3647.value;
if ($tmp3648) goto block5; else goto block6;
block5:;
// line 1687
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3649 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3649));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1689
panda$collections$Array* $tmp3650 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3650);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
panda$collections$Array* $tmp3651 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3651));
*(&local2) = $tmp3650;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
// unreffing REF($60:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1690
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3652 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3652));
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 1691
goto block7;
block7:;
// line 1692
org$pandalanguage$pandac$parser$Token $tmp3653 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp3653;
// line 1693
org$pandalanguage$pandac$parser$Token $tmp3654 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp3655 = $tmp3654.kind;
panda$core$Int64 $tmp3656 = $tmp3655.$rawValue;
panda$core$Int64 $tmp3657 = (panda$core$Int64) {101};
panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3656, $tmp3657);
bool $tmp3659 = $tmp3658.value;
if ($tmp3659) goto block10; else goto block11;
block10:;
// line 1695
goto block8;
block11:;
panda$core$Int64 $tmp3660 = (panda$core$Int64) {40};
panda$core$Bit $tmp3661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3656, $tmp3660);
bool $tmp3662 = $tmp3661.value;
if ($tmp3662) goto block12; else goto block13;
block12:;
// line 1698
org$pandalanguage$pandac$ASTNode* $tmp3663 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3663));
org$pandalanguage$pandac$ASTNode* $tmp3664 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3664));
*(&local5) = $tmp3663;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3663));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
// line 1699
org$pandalanguage$pandac$ASTNode* $tmp3665 = *(&local5);
panda$core$Bit $tmp3666 = panda$core$Bit$init$builtin_bit($tmp3665 == NULL);
bool $tmp3667 = $tmp3666.value;
if ($tmp3667) goto block14; else goto block15;
block14:;
// line 1700
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3668 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3668));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3669 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3669));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3670));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3671 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3671));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1702
panda$collections$Array* $tmp3672 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3673 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3672, ((panda$core$Object*) $tmp3673));
org$pandalanguage$pandac$ASTNode* $tmp3674 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3674));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block13:;
panda$core$Int64 $tmp3675 = (panda$core$Int64) {41};
panda$core$Bit $tmp3676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3656, $tmp3675);
bool $tmp3677 = $tmp3676.value;
if ($tmp3677) goto block16; else goto block17;
block16:;
// line 1705
org$pandalanguage$pandac$parser$Token $tmp3678 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local6) = $tmp3678;
// line 1706
org$pandalanguage$pandac$FixedArray* $tmp3679 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3679));
org$pandalanguage$pandac$FixedArray* $tmp3680 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3680));
*(&local3) = $tmp3679;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3679));
// unreffing REF($163:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1707
org$pandalanguage$pandac$FixedArray* $tmp3681 = *(&local3);
panda$core$Bit $tmp3682 = panda$core$Bit$init$builtin_bit($tmp3681 == NULL);
bool $tmp3683 = $tmp3682.value;
if ($tmp3683) goto block18; else goto block19;
block18:;
// line 1708
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3684 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3684));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3685 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3685));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3686 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3686));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block19:;
// line 1710
goto block8;
block17:;
// line 1713
org$pandalanguage$pandac$parser$Token $tmp3687 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1714
org$pandalanguage$pandac$parser$Token $tmp3688 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp3689 = *(&local4);
panda$core$String* $tmp3690 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp3689);
panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3692, $tmp3690);
panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, &$s3694);
panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3696, $tmp3693);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3688, $tmp3695);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3695));
// unreffing REF($208:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3693));
// unreffing REF($207:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3691));
// unreffing REF($206:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3690));
// unreffing REF($205:panda.core.String)
// line 1716
goto block8;
block9:;
goto block7;
block8:;
// line 1720
panda$core$Int64 $tmp3697 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3698 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3697);
org$pandalanguage$pandac$parser$Token$nullable $tmp3699 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3698, &$s3700);
panda$core$Bit $tmp3701 = panda$core$Bit$init$builtin_bit(!$tmp3699.nonnull);
bool $tmp3702 = $tmp3701.value;
if ($tmp3702) goto block20; else goto block21;
block20:;
// line 1721
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3703 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3704 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3704));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3705 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3705));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 1723
org$pandalanguage$pandac$FixedArray* $tmp3706 = *(&local3);
panda$core$Bit $tmp3707 = panda$core$Bit$init$builtin_bit($tmp3706 != NULL);
bool $tmp3708 = $tmp3707.value;
if ($tmp3708) goto block22; else goto block23;
block22:;
// line 1724
org$pandalanguage$pandac$ASTNode* $tmp3709 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3710 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp3711 = *(&local0);
org$pandalanguage$pandac$Position $tmp3712 = ((org$pandalanguage$pandac$parser$Token) $tmp3711.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3713 = *(&local1);
panda$collections$Array* $tmp3714 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3715 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3714);
org$pandalanguage$pandac$FixedArray* $tmp3716 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3709, $tmp3710, $tmp3712, $tmp3713, $tmp3715, $tmp3716);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3715));
// unreffing REF($268:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3709));
// unreffing REF($259:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3717 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3717));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3718 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3718));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3719 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3719));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3709;
block23:;
// line 1726
org$pandalanguage$pandac$ASTNode* $tmp3720 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3721 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp3722 = *(&local0);
org$pandalanguage$pandac$Position $tmp3723 = ((org$pandalanguage$pandac$parser$Token) $tmp3722.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3724 = *(&local1);
panda$collections$Array* $tmp3725 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3726 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3725);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3720, $tmp3721, $tmp3723, $tmp3724, $tmp3726, ((org$pandalanguage$pandac$FixedArray*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3720));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3726));
// unreffing REF($307:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3720));
// unreffing REF($298:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3727 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3727));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3728 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3728));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3729 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3729));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3720;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1733
panda$core$Int64 $tmp3730 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3731 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3730);
org$pandalanguage$pandac$parser$Token$nullable $tmp3732 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3731, &$s3733);
*(&local0) = $tmp3732;
// line 1734
org$pandalanguage$pandac$parser$Token$nullable $tmp3734 = *(&local0);
panda$core$Bit $tmp3735 = panda$core$Bit$init$builtin_bit(!$tmp3734.nonnull);
bool $tmp3736 = $tmp3735.value;
if ($tmp3736) goto block1; else goto block2;
block1:;
// line 1735
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 1737
panda$collections$Array* $tmp3737 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3737);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
panda$collections$Array* $tmp3738 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3738));
*(&local1) = $tmp3737;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3737));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1738
goto block3;
block3:;
// line 1739
org$pandalanguage$pandac$parser$Token $tmp3739 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3740 = $tmp3739.kind;
panda$core$Int64 $tmp3741 = $tmp3740.$rawValue;
panda$core$Int64 $tmp3742 = (panda$core$Int64) {101};
panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3741, $tmp3742);
bool $tmp3744 = $tmp3743.value;
if ($tmp3744) goto block6; else goto block7;
block6:;
// line 1741
org$pandalanguage$pandac$parser$Token $tmp3745 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1742
goto block4;
block7:;
panda$core$Int64 $tmp3746 = (panda$core$Int64) {29};
panda$core$Bit $tmp3747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3741, $tmp3746);
bool $tmp3748 = $tmp3747.value;
if ($tmp3748) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3749 = (panda$core$Int64) {30};
panda$core$Bit $tmp3750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3741, $tmp3749);
bool $tmp3751 = $tmp3750.value;
if ($tmp3751) goto block8; else goto block10;
block10:;
panda$core$Int64 $tmp3752 = (panda$core$Int64) {28};
panda$core$Bit $tmp3753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3741, $tmp3752);
bool $tmp3754 = $tmp3753.value;
if ($tmp3754) goto block8; else goto block11;
block8:;
// line 1745
org$pandalanguage$pandac$ASTNode* $tmp3755 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3755));
org$pandalanguage$pandac$ASTNode* $tmp3756 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3756));
*(&local2) = $tmp3755;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3755));
// unreffing REF($56:org.pandalanguage.pandac.ASTNode?)
// line 1746
org$pandalanguage$pandac$ASTNode* $tmp3757 = *(&local2);
panda$core$Bit $tmp3758 = panda$core$Bit$init$builtin_bit($tmp3757 == NULL);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block12; else goto block13;
block12:;
// line 1747
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3760 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3760));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3761 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3761));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block13:;
// line 1749
panda$core$Int64 $tmp3762 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3763 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3762);
org$pandalanguage$pandac$parser$Token$nullable $tmp3764 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3763, &$s3765);
panda$core$Bit $tmp3766 = panda$core$Bit$init$builtin_bit(!$tmp3764.nonnull);
bool $tmp3767 = $tmp3766.value;
if ($tmp3767) goto block14; else goto block15;
block14:;
// line 1750
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3768 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3768));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3769 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3769));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block15:;
// line 1752
panda$collections$Array* $tmp3770 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3771 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3770, ((panda$core$Object*) $tmp3771));
// line 1753
org$pandalanguage$pandac$ASTNode* $tmp3772 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3772));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block11:;
// line 1756
org$pandalanguage$pandac$ASTNode* $tmp3773 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3773));
org$pandalanguage$pandac$ASTNode* $tmp3774 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3774));
*(&local3) = $tmp3773;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3773));
// unreffing REF($124:org.pandalanguage.pandac.ASTNode?)
// line 1757
org$pandalanguage$pandac$ASTNode* $tmp3775 = *(&local3);
panda$core$Bit $tmp3776 = panda$core$Bit$init$builtin_bit($tmp3775 == NULL);
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block16; else goto block17;
block16:;
// line 1758
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3778 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3778));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3779 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3779));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block17:;
// line 1760
panda$collections$Array* $tmp3780 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3781 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3780, ((panda$core$Object*) $tmp3781));
org$pandalanguage$pandac$ASTNode* $tmp3782 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3782));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1764
panda$collections$Array* $tmp3783 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3784 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3783);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
// unreffing REF($172:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp3785 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3785));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3784;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$FixedArray* local0 = NULL;
// line 1771
org$pandalanguage$pandac$FixedArray* $tmp3786 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3786));
org$pandalanguage$pandac$FixedArray* $tmp3787 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3787));
*(&local0) = $tmp3786;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3786));
// unreffing REF($1:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1772
org$pandalanguage$pandac$FixedArray* $tmp3788 = *(&local0);
panda$core$Bit $tmp3789 = panda$core$Bit$init$builtin_bit($tmp3788 == NULL);
bool $tmp3790 = $tmp3789.value;
if ($tmp3790) goto block1; else goto block2;
block1:;
// line 1773
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3791 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3791));
// unreffing statements
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1775
org$pandalanguage$pandac$ASTNode* $tmp3792 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3793 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Position $tmp3794 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$FixedArray* $tmp3795 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3792, $tmp3793, $tmp3794, $tmp3795);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3792));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3792));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3796 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3796));
// unreffing statements
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp3792;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1782
org$pandalanguage$pandac$ASTNode* $tmp3797 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
org$pandalanguage$pandac$ASTNode* $tmp3798 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3798));
*(&local0) = $tmp3797;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1783
org$pandalanguage$pandac$ASTNode* $tmp3799 = *(&local0);
panda$core$Bit $tmp3800 = panda$core$Bit$init$builtin_bit($tmp3799 == NULL);
bool $tmp3801 = $tmp3800.value;
if ($tmp3801) goto block1; else goto block2;
block1:;
// line 1784
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3802 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3802));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1786
org$pandalanguage$pandac$parser$Token $tmp3803 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3804 = $tmp3803.kind;
panda$core$Int64 $tmp3805 = $tmp3804.$rawValue;
panda$core$Int64 $tmp3806 = (panda$core$Int64) {74};
panda$core$Bit $tmp3807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3806);
bool $tmp3808 = $tmp3807.value;
if ($tmp3808) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3809 = (panda$core$Int64) {75};
panda$core$Bit $tmp3810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3809);
bool $tmp3811 = $tmp3810.value;
if ($tmp3811) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp3812 = (panda$core$Int64) {76};
panda$core$Bit $tmp3813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3812);
bool $tmp3814 = $tmp3813.value;
if ($tmp3814) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp3815 = (panda$core$Int64) {77};
panda$core$Bit $tmp3816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3815);
bool $tmp3817 = $tmp3816.value;
if ($tmp3817) goto block4; else goto block8;
block8:;
panda$core$Int64 $tmp3818 = (panda$core$Int64) {78};
panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3818);
bool $tmp3820 = $tmp3819.value;
if ($tmp3820) goto block4; else goto block9;
block9:;
panda$core$Int64 $tmp3821 = (panda$core$Int64) {79};
panda$core$Bit $tmp3822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3821);
bool $tmp3823 = $tmp3822.value;
if ($tmp3823) goto block4; else goto block10;
block10:;
panda$core$Int64 $tmp3824 = (panda$core$Int64) {80};
panda$core$Bit $tmp3825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3824);
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block4; else goto block11;
block11:;
panda$core$Int64 $tmp3827 = (panda$core$Int64) {81};
panda$core$Bit $tmp3828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3827);
bool $tmp3829 = $tmp3828.value;
if ($tmp3829) goto block4; else goto block12;
block12:;
panda$core$Int64 $tmp3830 = (panda$core$Int64) {82};
panda$core$Bit $tmp3831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3830);
bool $tmp3832 = $tmp3831.value;
if ($tmp3832) goto block4; else goto block13;
block13:;
panda$core$Int64 $tmp3833 = (panda$core$Int64) {83};
panda$core$Bit $tmp3834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3833);
bool $tmp3835 = $tmp3834.value;
if ($tmp3835) goto block4; else goto block14;
block14:;
panda$core$Int64 $tmp3836 = (panda$core$Int64) {84};
panda$core$Bit $tmp3837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3836);
bool $tmp3838 = $tmp3837.value;
if ($tmp3838) goto block4; else goto block15;
block15:;
panda$core$Int64 $tmp3839 = (panda$core$Int64) {85};
panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3839);
bool $tmp3841 = $tmp3840.value;
if ($tmp3841) goto block4; else goto block16;
block16:;
panda$core$Int64 $tmp3842 = (panda$core$Int64) {86};
panda$core$Bit $tmp3843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3842);
bool $tmp3844 = $tmp3843.value;
if ($tmp3844) goto block4; else goto block17;
block17:;
panda$core$Int64 $tmp3845 = (panda$core$Int64) {87};
panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3845);
bool $tmp3847 = $tmp3846.value;
if ($tmp3847) goto block4; else goto block18;
block18:;
panda$core$Int64 $tmp3848 = (panda$core$Int64) {88};
panda$core$Bit $tmp3849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3848);
bool $tmp3850 = $tmp3849.value;
if ($tmp3850) goto block4; else goto block19;
block19:;
panda$core$Int64 $tmp3851 = (panda$core$Int64) {89};
panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3851);
bool $tmp3853 = $tmp3852.value;
if ($tmp3853) goto block4; else goto block20;
block4:;
// line 1792
org$pandalanguage$pandac$parser$Token $tmp3854 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3854;
// line 1793
org$pandalanguage$pandac$ASTNode* $tmp3855 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3855));
org$pandalanguage$pandac$ASTNode* $tmp3856 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3856));
*(&local2) = $tmp3855;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3855));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode?)
// line 1794
org$pandalanguage$pandac$ASTNode* $tmp3857 = *(&local2);
panda$core$Bit $tmp3858 = panda$core$Bit$init$builtin_bit($tmp3857 == NULL);
bool $tmp3859 = $tmp3858.value;
if ($tmp3859) goto block21; else goto block22;
block21:;
// line 1795
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3860 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3860));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3861 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3861));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1797
org$pandalanguage$pandac$ASTNode* $tmp3862 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3863 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode* $tmp3864 = *(&local0);
$fn3866 $tmp3865 = ($fn3866) $tmp3864->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3867 = $tmp3865($tmp3864);
org$pandalanguage$pandac$ASTNode* $tmp3868 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3869 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3870 = $tmp3869.kind;
org$pandalanguage$pandac$ASTNode* $tmp3871 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3862, $tmp3863, $tmp3867, $tmp3868, $tmp3870, $tmp3871);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
// unreffing REF($131:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3872 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3872));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3873 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3873));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3862;
block20:;
panda$core$Int64 $tmp3874 = (panda$core$Int64) {59};
panda$core$Bit $tmp3875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3805, $tmp3874);
bool $tmp3876 = $tmp3875.value;
if ($tmp3876) goto block23; else goto block24;
block23:;
// line 1800
org$pandalanguage$pandac$parser$Token $tmp3877 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3877, &$s3878);
// line 1801
org$pandalanguage$pandac$parser$Token $tmp3879 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp3879;
// line 1802
org$pandalanguage$pandac$ASTNode* $tmp3880 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3880));
org$pandalanguage$pandac$ASTNode* $tmp3881 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
*(&local4) = $tmp3880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3880));
// unreffing REF($172:org.pandalanguage.pandac.ASTNode?)
// line 1803
org$pandalanguage$pandac$ASTNode* $tmp3882 = *(&local4);
panda$core$Bit $tmp3883 = panda$core$Bit$init$builtin_bit($tmp3882 == NULL);
bool $tmp3884 = $tmp3883.value;
if ($tmp3884) goto block25; else goto block26;
block25:;
// line 1804
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3885 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3885));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3886 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3886));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1806
org$pandalanguage$pandac$ASTNode* $tmp3887 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3888 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode* $tmp3889 = *(&local0);
$fn3891 $tmp3890 = ($fn3891) $tmp3889->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3892 = $tmp3890($tmp3889);
org$pandalanguage$pandac$ASTNode* $tmp3893 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3894 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp3895 = $tmp3894.kind;
org$pandalanguage$pandac$ASTNode* $tmp3896 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3887, $tmp3888, $tmp3892, $tmp3893, $tmp3895, $tmp3896);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3887));
// unreffing REF($204:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3897 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3897));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3898 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3898));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3887;
block24:;
// line 1809
org$pandalanguage$pandac$ASTNode* $tmp3899 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3899));
org$pandalanguage$pandac$ASTNode* $tmp3900 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3900));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3899;
block3:;
panda$core$Bit $tmp3901 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3902 = $tmp3901.value;
if ($tmp3902) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3903 = (panda$core$Int64) {1781};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3904, $tmp3903, &$s3905);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1818
org$pandalanguage$pandac$ASTNode* $tmp3906 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3906));
org$pandalanguage$pandac$ASTNode* $tmp3907 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3907));
*(&local0) = $tmp3906;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3906));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1819
org$pandalanguage$pandac$ASTNode* $tmp3908 = *(&local0);
panda$core$Bit $tmp3909 = panda$core$Bit$init$builtin_bit($tmp3908 == NULL);
bool $tmp3910 = $tmp3909.value;
if ($tmp3910) goto block1; else goto block2;
block1:;
// line 1820
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3911 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3911));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1822
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1823
panda$core$Int64 $tmp3912 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp3913 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3912);
org$pandalanguage$pandac$parser$Token$nullable $tmp3914 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3913);
panda$core$Bit $tmp3915 = panda$core$Bit$init$builtin_bit($tmp3914.nonnull);
bool $tmp3916 = $tmp3915.value;
if ($tmp3916) goto block3; else goto block5;
block3:;
// line 1824
org$pandalanguage$pandac$ASTNode* $tmp3917 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3917));
org$pandalanguage$pandac$ASTNode* $tmp3918 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3918));
*(&local1) = $tmp3917;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3917));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
// line 1825
org$pandalanguage$pandac$ASTNode* $tmp3919 = *(&local1);
panda$core$Bit $tmp3920 = panda$core$Bit$init$builtin_bit($tmp3919 == NULL);
bool $tmp3921 = $tmp3920.value;
if ($tmp3921) goto block6; else goto block7;
block6:;
// line 1826
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3922 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3922));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3923 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3923));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1829
org$pandalanguage$pandac$parser$Token $tmp3924 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3925 = $tmp3924.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3926;
$tmp3926 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3926->value = $tmp3925;
panda$core$Int64 $tmp3927 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp3928 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3927);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3929;
$tmp3929 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3929->value = $tmp3928;
ITable* $tmp3930 = ((panda$core$Equatable*) $tmp3926)->$class->itable;
while ($tmp3930->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3930 = $tmp3930->next;
}
$fn3932 $tmp3931 = $tmp3930->methods[0];
panda$core$Bit $tmp3933 = $tmp3931(((panda$core$Equatable*) $tmp3926), ((panda$core$Equatable*) $tmp3929));
bool $tmp3934 = $tmp3933.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3929)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3926)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3934) goto block8; else goto block10;
block8:;
// line 1830
org$pandalanguage$pandac$parser$Token $tmp3935 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3935, &$s3936);
// line 1831
org$pandalanguage$pandac$ASTNode* $tmp3937 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3937));
org$pandalanguage$pandac$ASTNode* $tmp3938 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
*(&local1) = $tmp3937;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3937));
// unreffing REF($91:org.pandalanguage.pandac.ASTNode?)
// line 1832
org$pandalanguage$pandac$ASTNode* $tmp3939 = *(&local1);
panda$core$Bit $tmp3940 = panda$core$Bit$init$builtin_bit($tmp3939 == NULL);
bool $tmp3941 = $tmp3940.value;
if ($tmp3941) goto block11; else goto block12;
block11:;
// line 1833
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3942 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3942));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3943 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3943));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1837
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3944 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3944));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1839
org$pandalanguage$pandac$ASTNode* $tmp3945 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3946 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ASTNode* $tmp3947 = *(&local0);
$fn3949 $tmp3948 = ($fn3949) $tmp3947->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3950 = $tmp3948($tmp3947);
org$pandalanguage$pandac$ASTNode* $tmp3951 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp3952 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3945, $tmp3946, $tmp3950, $tmp3951, $tmp3952);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3945));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3945));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3953 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3953));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3954 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3954));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3945;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$Variable$Kind local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1846
org$pandalanguage$pandac$parser$Token $tmp3955 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp3955;
// line 1847
// line 1848
org$pandalanguage$pandac$parser$Token $tmp3956 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3957 = $tmp3956.kind;
panda$core$Int64 $tmp3958 = $tmp3957.$rawValue;
panda$core$Int64 $tmp3959 = (panda$core$Int64) {24};
panda$core$Bit $tmp3960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3958, $tmp3959);
bool $tmp3961 = $tmp3960.value;
if ($tmp3961) goto block2; else goto block3;
block2:;
// line 1850
panda$core$Int64 $tmp3962 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Variable$Kind $tmp3963 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3962);
*(&local1) = $tmp3963;
goto block1;
block3:;
panda$core$Int64 $tmp3964 = (panda$core$Int64) {25};
panda$core$Bit $tmp3965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3958, $tmp3964);
bool $tmp3966 = $tmp3965.value;
if ($tmp3966) goto block4; else goto block5;
block4:;
// line 1853
panda$core$Int64 $tmp3967 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp3968 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3967);
*(&local1) = $tmp3968;
goto block1;
block5:;
panda$core$Int64 $tmp3969 = (panda$core$Int64) {26};
panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3958, $tmp3969);
bool $tmp3971 = $tmp3970.value;
if ($tmp3971) goto block6; else goto block7;
block6:;
// line 1856
panda$core$Int64 $tmp3972 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Variable$Kind $tmp3973 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3972);
*(&local1) = $tmp3973;
goto block1;
block7:;
panda$core$Int64 $tmp3974 = (panda$core$Int64) {27};
panda$core$Bit $tmp3975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3958, $tmp3974);
bool $tmp3976 = $tmp3975.value;
if ($tmp3976) goto block8; else goto block9;
block8:;
// line 1859
panda$core$Int64 $tmp3977 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Variable$Kind $tmp3978 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3977);
*(&local1) = $tmp3978;
goto block1;
block9:;
// line 1862
org$pandalanguage$pandac$parser$Token $tmp3979 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3979, &$s3980);
goto block1;
block1:;
// line 1865
panda$collections$Array* $tmp3981 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3981);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3981));
panda$collections$Array* $tmp3982 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3982));
*(&local2) = $tmp3981;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3981));
// unreffing REF($49:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1866
org$pandalanguage$pandac$ASTNode* $tmp3983 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3983));
org$pandalanguage$pandac$ASTNode* $tmp3984 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3984));
*(&local3) = $tmp3983;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3983));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
// line 1867
org$pandalanguage$pandac$ASTNode* $tmp3985 = *(&local3);
panda$core$Bit $tmp3986 = panda$core$Bit$init$builtin_bit($tmp3985 == NULL);
bool $tmp3987 = $tmp3986.value;
if ($tmp3987) goto block10; else goto block11;
block10:;
// line 1868
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3988 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3988));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3989 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3989));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1870
panda$collections$Array* $tmp3990 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3991 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3990, ((panda$core$Object*) $tmp3991));
// line 1871
goto block12;
block12:;
panda$core$Int64 $tmp3992 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3993 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3992);
org$pandalanguage$pandac$parser$Token$nullable $tmp3994 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3993);
panda$core$Bit $tmp3995 = panda$core$Bit$init$builtin_bit($tmp3994.nonnull);
bool $tmp3996 = $tmp3995.value;
if ($tmp3996) goto block13; else goto block14;
block13:;
// line 1872
org$pandalanguage$pandac$ASTNode* $tmp3997 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3997));
org$pandalanguage$pandac$ASTNode* $tmp3998 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3998));
*(&local4) = $tmp3997;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3997));
// unreffing REF($111:org.pandalanguage.pandac.ASTNode?)
// line 1873
org$pandalanguage$pandac$ASTNode* $tmp3999 = *(&local4);
panda$core$Bit $tmp4000 = panda$core$Bit$init$builtin_bit($tmp3999 == NULL);
bool $tmp4001 = $tmp4000.value;
if ($tmp4001) goto block15; else goto block16;
block15:;
// line 1874
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4002 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4002));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4003 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4003));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4004 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4004));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1876
panda$collections$Array* $tmp4005 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4006 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp4005, ((panda$core$Object*) $tmp4006));
org$pandalanguage$pandac$ASTNode* $tmp4007 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4007));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 1878
org$pandalanguage$pandac$ASTNode* $tmp4008 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4009 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token $tmp4010 = *(&local0);
org$pandalanguage$pandac$Position $tmp4011 = $tmp4010.position;
org$pandalanguage$pandac$Variable$Kind $tmp4012 = *(&local1);
panda$collections$Array* $tmp4013 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4014 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4013);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4008, $tmp4009, $tmp4011, $tmp4012, $tmp4014);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4008));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4014));
// unreffing REF($168:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4008));
// unreffing REF($161:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4015 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4015));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4016 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4016));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp4008;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1885
panda$core$Int64 $tmp4017 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp4018 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4017);
org$pandalanguage$pandac$parser$Token$nullable $tmp4019 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4018, &$s4020);
*(&local0) = $tmp4019;
// line 1886
org$pandalanguage$pandac$parser$Token$nullable $tmp4021 = *(&local0);
panda$core$Bit $tmp4022 = panda$core$Bit$init$builtin_bit(!$tmp4021.nonnull);
bool $tmp4023 = $tmp4022.value;
if ($tmp4023) goto block1; else goto block2;
block1:;
// line 1887
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1889
panda$core$Int64 $tmp4024 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4025 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4024);
org$pandalanguage$pandac$parser$Token$nullable $tmp4026 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4025, &$s4027);
panda$core$Bit $tmp4028 = panda$core$Bit$init$builtin_bit(!$tmp4026.nonnull);
bool $tmp4029 = $tmp4028.value;
if ($tmp4029) goto block3; else goto block4;
block3:;
// line 1890
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1892
panda$collections$Stack** $tmp4030 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4031 = *$tmp4030;
panda$core$Bit $tmp4032 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp4033;
$tmp4033 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp4033->value = $tmp4032;
panda$collections$Stack$push$panda$collections$Stack$T($tmp4031, ((panda$core$Object*) $tmp4033));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4033));
// unreffing REF($32:panda.collections.Stack.T)
// line 1893
org$pandalanguage$pandac$ASTNode* $tmp4034 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4035 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$nullable $tmp4036 = *(&local0);
org$pandalanguage$pandac$Position $tmp4037 = ((org$pandalanguage$pandac$parser$Token) $tmp4036.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4038 = *(&local0);
panda$core$String* $tmp4039 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4038.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4034, $tmp4035, $tmp4037, $tmp4039);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
org$pandalanguage$pandac$ASTNode* $tmp4040 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4040));
*(&local1) = $tmp4034;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4039));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4034));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode)
// line 1894
panda$collections$Array* $tmp4041 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4041);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
panda$collections$Array* $tmp4042 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4042));
*(&local2) = $tmp4041;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
// unreffing REF($61:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1895
panda$core$Int64 $tmp4043 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4044 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4043);
org$pandalanguage$pandac$parser$Token$nullable $tmp4045 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4044);
panda$core$Bit $tmp4046 = panda$core$Bit$init$builtin_bit(!$tmp4045.nonnull);
bool $tmp4047 = $tmp4046.value;
if ($tmp4047) goto block5; else goto block6;
block5:;
// line 1896
org$pandalanguage$pandac$ASTNode* $tmp4048 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4048));
org$pandalanguage$pandac$ASTNode* $tmp4049 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4049));
*(&local3) = $tmp4048;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4048));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
// line 1897
org$pandalanguage$pandac$ASTNode* $tmp4050 = *(&local3);
panda$core$Bit $tmp4051 = panda$core$Bit$init$builtin_bit($tmp4050 == NULL);
bool $tmp4052 = $tmp4051.value;
if ($tmp4052) goto block7; else goto block8;
block7:;
// line 1898
panda$collections$Stack** $tmp4053 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4054 = *$tmp4053;
panda$core$Object* $tmp4055 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4054);
panda$core$Panda$unref$panda$core$Object$Q($tmp4055);
// unreffing REF($104:panda.collections.Stack.T)
// line 1899
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4056 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4056));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4057 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4057));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4058 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4058));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1901
panda$collections$Array* $tmp4059 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4060 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp4059, ((panda$core$Object*) $tmp4060));
// line 1902
goto block9;
block9:;
panda$core$Int64 $tmp4061 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4062 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4061);
org$pandalanguage$pandac$parser$Token$nullable $tmp4063 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4062);
panda$core$Bit $tmp4064 = panda$core$Bit$init$builtin_bit($tmp4063.nonnull);
bool $tmp4065 = $tmp4064.value;
if ($tmp4065) goto block10; else goto block11;
block10:;
// line 1903
org$pandalanguage$pandac$ASTNode* $tmp4066 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
org$pandalanguage$pandac$ASTNode* $tmp4067 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4067));
*(&local3) = $tmp4066;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4066));
// unreffing REF($145:org.pandalanguage.pandac.ASTNode?)
// line 1904
org$pandalanguage$pandac$ASTNode* $tmp4068 = *(&local3);
panda$core$Bit $tmp4069 = panda$core$Bit$init$builtin_bit($tmp4068 == NULL);
bool $tmp4070 = $tmp4069.value;
if ($tmp4070) goto block12; else goto block13;
block12:;
// line 1905
panda$collections$Stack** $tmp4071 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4072 = *$tmp4071;
panda$core$Object* $tmp4073 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4072);
panda$core$Panda$unref$panda$core$Object$Q($tmp4073);
// unreffing REF($165:panda.collections.Stack.T)
// line 1906
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4074 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4074));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4075 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4075));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4076 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4076));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1908
panda$collections$Array* $tmp4077 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4078 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp4077, ((panda$core$Object*) $tmp4078));
goto block9;
block11:;
// line 1910
panda$core$Int64 $tmp4079 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4080 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4079);
org$pandalanguage$pandac$parser$Token$nullable $tmp4081 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4080, &$s4082);
panda$core$Bit $tmp4083 = panda$core$Bit$init$builtin_bit(!$tmp4081.nonnull);
bool $tmp4084 = $tmp4083.value;
if ($tmp4084) goto block14; else goto block15;
block14:;
// line 1911
panda$collections$Stack** $tmp4085 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4086 = *$tmp4085;
panda$core$Object* $tmp4087 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4086);
panda$core$Panda$unref$panda$core$Object$Q($tmp4087);
// unreffing REF($209:panda.collections.Stack.T)
// line 1912
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4088 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4088));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4089 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4089));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4090 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4090));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
org$pandalanguage$pandac$ASTNode* $tmp4091 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4091));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1915
panda$collections$Stack** $tmp4092 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4093 = *$tmp4092;
panda$core$Object* $tmp4094 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4093);
panda$core$Panda$unref$panda$core$Object$Q($tmp4094);
// unreffing REF($243:panda.collections.Stack.T)
// line 1916
org$pandalanguage$pandac$ASTNode* $tmp4095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4096 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token$nullable $tmp4097 = *(&local0);
org$pandalanguage$pandac$Position $tmp4098 = ((org$pandalanguage$pandac$parser$Token) $tmp4097.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4099 = *(&local1);
panda$collections$Array* $tmp4100 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4101 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4100);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4095, $tmp4096, $tmp4098, $tmp4099, $tmp4101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4101));
// unreffing REF($257:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
// unreffing REF($249:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp4102 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4102));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4103 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4103));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4095;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1923
panda$core$Int64 $tmp4104 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$Kind $tmp4105 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4104);
org$pandalanguage$pandac$parser$Token$nullable $tmp4106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4105, &$s4107);
*(&local0) = $tmp4106;
// line 1924
org$pandalanguage$pandac$parser$Token$nullable $tmp4108 = *(&local0);
panda$core$Bit $tmp4109 = panda$core$Bit$init$builtin_bit(!$tmp4108.nonnull);
bool $tmp4110 = $tmp4109.value;
if ($tmp4110) goto block1; else goto block2;
block1:;
// line 1925
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1927
panda$core$Int64 $tmp4111 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4112 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4111);
org$pandalanguage$pandac$parser$Token$nullable $tmp4113 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4112);
*(&local1) = $tmp4113;
// line 1928
org$pandalanguage$pandac$parser$Token$nullable $tmp4114 = *(&local1);
panda$core$Bit $tmp4115 = panda$core$Bit$init$builtin_bit($tmp4114.nonnull);
bool $tmp4116 = $tmp4115.value;
if ($tmp4116) goto block3; else goto block4;
block3:;
// line 1929
org$pandalanguage$pandac$ASTNode* $tmp4117 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4118 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp4119 = *(&local0);
org$pandalanguage$pandac$Position $tmp4120 = ((org$pandalanguage$pandac$parser$Token) $tmp4119.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4121 = *(&local1);
panda$core$String* $tmp4122 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4121.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4117, $tmp4118, $tmp4120, $tmp4122);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4117));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4122));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4117));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode)
return $tmp4117;
block4:;
// line 1931
org$pandalanguage$pandac$ASTNode* $tmp4123 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4124 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp4125 = *(&local0);
org$pandalanguage$pandac$Position $tmp4126 = ((org$pandalanguage$pandac$parser$Token) $tmp4125.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4123, $tmp4124, $tmp4126, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
// unreffing REF($48:org.pandalanguage.pandac.ASTNode)
return $tmp4123;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1938
panda$core$Int64 $tmp4127 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$Kind $tmp4128 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4127);
org$pandalanguage$pandac$parser$Token$nullable $tmp4129 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4128, &$s4130);
*(&local0) = $tmp4129;
// line 1939
org$pandalanguage$pandac$parser$Token$nullable $tmp4131 = *(&local0);
panda$core$Bit $tmp4132 = panda$core$Bit$init$builtin_bit(!$tmp4131.nonnull);
bool $tmp4133 = $tmp4132.value;
if ($tmp4133) goto block1; else goto block2;
block1:;
// line 1940
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1942
panda$core$Int64 $tmp4134 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4135 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4134);
org$pandalanguage$pandac$parser$Token$nullable $tmp4136 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4135);
*(&local1) = $tmp4136;
// line 1943
org$pandalanguage$pandac$parser$Token$nullable $tmp4137 = *(&local1);
panda$core$Bit $tmp4138 = panda$core$Bit$init$builtin_bit($tmp4137.nonnull);
bool $tmp4139 = $tmp4138.value;
if ($tmp4139) goto block3; else goto block4;
block3:;
// line 1944
org$pandalanguage$pandac$ASTNode* $tmp4140 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4141 = (panda$core$Int64) {13};
org$pandalanguage$pandac$parser$Token$nullable $tmp4142 = *(&local0);
org$pandalanguage$pandac$Position $tmp4143 = ((org$pandalanguage$pandac$parser$Token) $tmp4142.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4144 = *(&local1);
panda$core$String* $tmp4145 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4144.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4140, $tmp4141, $tmp4143, $tmp4145);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4140));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4145));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4140));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode)
return $tmp4140;
block4:;
// line 1946
org$pandalanguage$pandac$ASTNode* $tmp4146 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4147 = (panda$core$Int64) {13};
org$pandalanguage$pandac$parser$Token$nullable $tmp4148 = *(&local0);
org$pandalanguage$pandac$Position $tmp4149 = ((org$pandalanguage$pandac$parser$Token) $tmp4148.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4146, $tmp4147, $tmp4149, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4146));
// unreffing REF($48:org.pandalanguage.pandac.ASTNode)
return $tmp4146;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1953
panda$core$Int64 $tmp4150 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$Kind $tmp4151 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4150);
org$pandalanguage$pandac$parser$Token$nullable $tmp4152 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4151, &$s4153);
*(&local0) = $tmp4152;
// line 1954
org$pandalanguage$pandac$parser$Token$nullable $tmp4154 = *(&local0);
panda$core$Bit $tmp4155 = panda$core$Bit$init$builtin_bit(!$tmp4154.nonnull);
bool $tmp4156 = $tmp4155.value;
if ($tmp4156) goto block1; else goto block2;
block1:;
// line 1955
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1957
org$pandalanguage$pandac$parser$Token $tmp4157 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4158 = $tmp4157.kind;
panda$core$Int64 $tmp4159 = $tmp4158.$rawValue;
panda$core$Int64 $tmp4160 = (panda$core$Int64) {101};
panda$core$Bit $tmp4161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4159, $tmp4160);
bool $tmp4162 = $tmp4161.value;
if ($tmp4162) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp4163 = (panda$core$Int64) {40};
panda$core$Bit $tmp4164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4159, $tmp4163);
bool $tmp4165 = $tmp4164.value;
if ($tmp4165) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp4166 = (panda$core$Int64) {41};
panda$core$Bit $tmp4167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4159, $tmp4166);
bool $tmp4168 = $tmp4167.value;
if ($tmp4168) goto block4; else goto block7;
block4:;
// line 1959
org$pandalanguage$pandac$ASTNode* $tmp4169 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4170 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$nullable $tmp4171 = *(&local0);
org$pandalanguage$pandac$Position $tmp4172 = ((org$pandalanguage$pandac$parser$Token) $tmp4171.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4169, $tmp4170, $tmp4172, ((org$pandalanguage$pandac$ASTNode*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4169));
// unreffing REF($32:org.pandalanguage.pandac.ASTNode)
return $tmp4169;
block7:;
// line 1962
panda$collections$Array* $tmp4173 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4173);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
panda$collections$Array* $tmp4174 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4174));
*(&local1) = $tmp4173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4173));
// unreffing REF($46:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1963
org$pandalanguage$pandac$ASTNode* $tmp4175 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4175));
org$pandalanguage$pandac$ASTNode* $tmp4176 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4176));
*(&local2) = $tmp4175;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4175));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
// line 1964
org$pandalanguage$pandac$ASTNode* $tmp4177 = *(&local2);
panda$core$Bit $tmp4178 = panda$core$Bit$init$builtin_bit($tmp4177 == NULL);
bool $tmp4179 = $tmp4178.value;
if ($tmp4179) goto block8; else goto block9;
block8:;
// line 1965
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4180 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4180));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4181 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4181));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1967
panda$collections$Array* $tmp4182 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4183 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4182, ((panda$core$Object*) $tmp4183));
// line 1968
org$pandalanguage$pandac$ASTNode* $tmp4184 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4185 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$nullable $tmp4186 = *(&local0);
org$pandalanguage$pandac$Position $tmp4187 = ((org$pandalanguage$pandac$parser$Token) $tmp4186.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4188 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4184, $tmp4185, $tmp4187, $tmp4188);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4184));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4189 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4189));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4190 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4190));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4184;
block3:;
panda$core$Bit $tmp4191 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4192 = $tmp4191.value;
if ($tmp4192) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4193 = (panda$core$Int64) {1952};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4194, $tmp4193, &$s4195);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1977
org$pandalanguage$pandac$parser$Token $tmp4196 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4197 = $tmp4196.kind;
panda$core$Int64 $tmp4198 = $tmp4197.$rawValue;
panda$core$Int64 $tmp4199 = (panda$core$Int64) {29};
panda$core$Bit $tmp4200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4199);
bool $tmp4201 = $tmp4200.value;
if ($tmp4201) goto block2; else goto block3;
block2:;
// line 1978
org$pandalanguage$pandac$ASTNode* $tmp4202 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4202));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4202;
block3:;
panda$core$Int64 $tmp4203 = (panda$core$Int64) {30};
panda$core$Bit $tmp4204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4203);
bool $tmp4205 = $tmp4204.value;
if ($tmp4205) goto block4; else goto block5;
block4:;
// line 1979
org$pandalanguage$pandac$ASTNode* $tmp4206 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4206));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4206));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4206;
block5:;
panda$core$Int64 $tmp4207 = (panda$core$Int64) {28};
panda$core$Bit $tmp4208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, $tmp4207);
bool $tmp4209 = $tmp4208.value;
if ($tmp4209) goto block6; else goto block7;
block6:;
// line 1980
org$pandalanguage$pandac$ASTNode* $tmp4210 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4210));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4210));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4210;
block7:;
// line 1981
panda$core$Bit $tmp4211 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4212 = $tmp4211.value;
if ($tmp4212) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp4213 = (panda$core$Int64) {1981};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4214, $tmp4213);
abort(); // unreachable
block8:;
goto block1;
block1:;
panda$core$Bit $tmp4215 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4216 = $tmp4215.value;
if ($tmp4216) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4217 = (panda$core$Int64) {1976};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4218, $tmp4217, &$s4219);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

// line 1989
org$pandalanguage$pandac$parser$Token $tmp4220 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4221 = $tmp4220.kind;
panda$core$Int64 $tmp4222 = $tmp4221.$rawValue;
panda$core$Int64 $tmp4223 = (panda$core$Int64) {31};
panda$core$Bit $tmp4224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4222, $tmp4223);
bool $tmp4225 = $tmp4224.value;
if ($tmp4225) goto block2; else goto block3;
block2:;
// line 1990
org$pandalanguage$pandac$ASTNode* $tmp4226 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4226));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4226));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4226;
block3:;
panda$core$Int64 $tmp4227 = (panda$core$Int64) {33};
panda$core$Bit $tmp4228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4222, $tmp4227);
bool $tmp4229 = $tmp4228.value;
if ($tmp4229) goto block4; else goto block5;
block4:;
// line 1991
org$pandalanguage$pandac$ASTNode* $tmp4230 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4230));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4230));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4230;
block5:;
panda$core$Int64 $tmp4231 = (panda$core$Int64) {36};
panda$core$Bit $tmp4232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4222, $tmp4231);
bool $tmp4233 = $tmp4232.value;
if ($tmp4233) goto block6; else goto block7;
block6:;
// line 1992
org$pandalanguage$pandac$ASTNode* $tmp4234 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4234));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4234;
block7:;
panda$core$Int64 $tmp4235 = (panda$core$Int64) {32};
panda$core$Bit $tmp4236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4222, $tmp4235);
bool $tmp4237 = $tmp4236.value;
if ($tmp4237) goto block8; else goto block9;
block8:;
// line 1993
org$pandalanguage$pandac$ASTNode* $tmp4238 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4238));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
return $tmp4238;
block9:;
// line 1996
panda$core$Int64 $tmp4239 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp4240 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4239);
org$pandalanguage$pandac$parser$Token$nullable $tmp4241 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4240, &$s4242);
// line 1997
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4243 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4244 = $tmp4243.value;
if ($tmp4244) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4245 = (panda$core$Int64) {1988};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4246, $tmp4245, &$s4247);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$parser$Token$nullable local2;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$FixedArray* local5 = NULL;
// line 2006
// line 2007
panda$core$Int64 $tmp4248 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4249 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4248);
org$pandalanguage$pandac$parser$Token$nullable $tmp4250 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4249);
*(&local1) = $tmp4250;
// line 2008
org$pandalanguage$pandac$parser$Token$nullable $tmp4251 = *(&local1);
panda$core$Bit $tmp4252 = panda$core$Bit$init$builtin_bit(!$tmp4251.nonnull);
bool $tmp4253 = $tmp4252.value;
if ($tmp4253) goto block1; else goto block3;
block1:;
// line 2009
panda$core$Int64 $tmp4254 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4255 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4254);
org$pandalanguage$pandac$parser$Token$nullable $tmp4256 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4255, &$s4257);
*(&local1) = $tmp4256;
// line 2010
org$pandalanguage$pandac$parser$Token$nullable $tmp4258 = *(&local1);
panda$core$Bit $tmp4259 = panda$core$Bit$init$builtin_bit(!$tmp4258.nonnull);
bool $tmp4260 = $tmp4259.value;
if ($tmp4260) goto block4; else goto block5;
block4:;
// line 2011
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2013
panda$core$Int64 $tmp4261 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4262 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4261);
*(&local0) = $tmp4262;
goto block2;
block3:;
// line 1
// line 2016
panda$core$Int64 $tmp4263 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4264 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4263);
*(&local0) = $tmp4264;
goto block2;
block2:;
// line 2018
panda$core$Int64 $tmp4265 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4266 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4265);
org$pandalanguage$pandac$parser$Token$nullable $tmp4267 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4266, &$s4268);
*(&local2) = $tmp4267;
// line 2019
org$pandalanguage$pandac$parser$Token$nullable $tmp4269 = *(&local2);
panda$core$Bit $tmp4270 = panda$core$Bit$init$builtin_bit(!$tmp4269.nonnull);
bool $tmp4271 = $tmp4270.value;
if ($tmp4271) goto block6; else goto block7;
block6:;
// line 2020
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2022
org$pandalanguage$pandac$FixedArray* $tmp4272 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4272));
org$pandalanguage$pandac$FixedArray* $tmp4273 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4273));
*(&local3) = $tmp4272;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4272));
// unreffing REF($54:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2023
org$pandalanguage$pandac$FixedArray* $tmp4274 = *(&local3);
panda$core$Bit $tmp4275 = panda$core$Bit$init$builtin_bit($tmp4274 == NULL);
bool $tmp4276 = $tmp4275.value;
if ($tmp4276) goto block8; else goto block9;
block8:;
// line 2024
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4277 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2026
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2027
org$pandalanguage$pandac$parser$Token $tmp4278 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4279 = $tmp4278.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4280;
$tmp4280 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4280->value = $tmp4279;
panda$core$Int64 $tmp4281 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4282 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4281);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4283;
$tmp4283 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4283->value = $tmp4282;
ITable* $tmp4284 = ((panda$core$Equatable*) $tmp4280)->$class->itable;
while ($tmp4284->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4284 = $tmp4284->next;
}
$fn4286 $tmp4285 = $tmp4284->methods[0];
panda$core$Bit $tmp4287 = $tmp4285(((panda$core$Equatable*) $tmp4280), ((panda$core$Equatable*) $tmp4283));
bool $tmp4288 = $tmp4287.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4283)));
// unreffing REF($89:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4280)));
// unreffing REF($85:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4288) goto block10; else goto block12;
block10:;
// line 2028
org$pandalanguage$pandac$ASTNode* $tmp4289 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4289));
org$pandalanguage$pandac$ASTNode* $tmp4290 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4290));
*(&local4) = $tmp4289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4289));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
// line 2029
org$pandalanguage$pandac$ASTNode* $tmp4291 = *(&local4);
panda$core$Bit $tmp4292 = panda$core$Bit$init$builtin_bit($tmp4291 == NULL);
bool $tmp4293 = $tmp4292.value;
if ($tmp4293) goto block13; else goto block14;
block13:;
// line 2030
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4294 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4294));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4295 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4295));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2034
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4296 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4296));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 2036
org$pandalanguage$pandac$FixedArray* $tmp4297 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4297));
org$pandalanguage$pandac$FixedArray* $tmp4298 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4298));
*(&local5) = $tmp4297;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4297));
// unreffing REF($142:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2037
org$pandalanguage$pandac$FixedArray* $tmp4299 = *(&local5);
panda$core$Bit $tmp4300 = panda$core$Bit$init$builtin_bit($tmp4299 == NULL);
bool $tmp4301 = $tmp4300.value;
if ($tmp4301) goto block15; else goto block16;
block15:;
// line 2038
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4302 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4302));
// unreffing body
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4303 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4303));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4304 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4304));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2040
org$pandalanguage$pandac$ASTNode* $tmp4305 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4306 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$nullable $tmp4307 = *(&local1);
org$pandalanguage$pandac$Position $tmp4308 = ((org$pandalanguage$pandac$parser$Token) $tmp4307.value).position;
org$pandalanguage$pandac$FixedArray* $tmp4309 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp4309);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4310 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp4311 = *(&local2);
panda$core$String* $tmp4312 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4311.value));
org$pandalanguage$pandac$FixedArray* $tmp4313 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp4314 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp4315 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4305, $tmp4306, $tmp4308, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4309, $tmp4310, $tmp4312, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp4313, $tmp4314, $tmp4315);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4312));
// unreffing REF($190:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4309));
// unreffing REF($184:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4305));
// unreffing REF($179:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp4316 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4316));
// unreffing body
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4317 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4317));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4318 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4318));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp4305;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 2049
org$pandalanguage$pandac$parser$Token $tmp4319 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4320 = $tmp4319.kind;
panda$core$Int64 $tmp4321 = $tmp4320.$rawValue;
panda$core$Int64 $tmp4322 = (panda$core$Int64) {37};
panda$core$Bit $tmp4323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4322);
bool $tmp4324 = $tmp4323.value;
if ($tmp4324) goto block2; else goto block3;
block2:;
// line 2050
org$pandalanguage$pandac$ASTNode* $tmp4325 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4325));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4325;
block3:;
panda$core$Int64 $tmp4326 = (panda$core$Int64) {33};
panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4326);
bool $tmp4328 = $tmp4327.value;
if ($tmp4328) goto block4; else goto block5;
block4:;
// line 2051
org$pandalanguage$pandac$ASTNode* $tmp4329 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4329));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4329;
block5:;
panda$core$Int64 $tmp4330 = (panda$core$Int64) {32};
panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4330);
bool $tmp4332 = $tmp4331.value;
if ($tmp4332) goto block6; else goto block7;
block6:;
// line 2052
org$pandalanguage$pandac$ASTNode* $tmp4333 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4333));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4333));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4333;
block7:;
panda$core$Int64 $tmp4334 = (panda$core$Int64) {31};
panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4334);
bool $tmp4336 = $tmp4335.value;
if ($tmp4336) goto block8; else goto block9;
block8:;
// line 2053
org$pandalanguage$pandac$ASTNode* $tmp4337 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4337));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4337));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
return $tmp4337;
block9:;
panda$core$Int64 $tmp4338 = (panda$core$Int64) {36};
panda$core$Bit $tmp4339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4338);
bool $tmp4340 = $tmp4339.value;
if ($tmp4340) goto block10; else goto block11;
block10:;
// line 2054
org$pandalanguage$pandac$ASTNode* $tmp4341 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4341));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4341));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode?)
return $tmp4341;
block11:;
panda$core$Int64 $tmp4342 = (panda$core$Int64) {45};
panda$core$Bit $tmp4343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4342);
bool $tmp4344 = $tmp4343.value;
if ($tmp4344) goto block12; else goto block13;
block12:;
// line 2055
org$pandalanguage$pandac$ASTNode* $tmp4345 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4345));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4345));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
return $tmp4345;
block13:;
panda$core$Int64 $tmp4346 = (panda$core$Int64) {39};
panda$core$Bit $tmp4347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4346);
bool $tmp4348 = $tmp4347.value;
if ($tmp4348) goto block14; else goto block15;
block14:;
// line 2056
org$pandalanguage$pandac$ASTNode* $tmp4349 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4349));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4349));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode?)
return $tmp4349;
block15:;
panda$core$Int64 $tmp4350 = (panda$core$Int64) {100};
panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4350);
bool $tmp4352 = $tmp4351.value;
if ($tmp4352) goto block16; else goto block17;
block16:;
// line 2057
org$pandalanguage$pandac$ASTNode* $tmp4353 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4353));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4353));
// unreffing REF($93:org.pandalanguage.pandac.ASTNode?)
return $tmp4353;
block17:;
panda$core$Int64 $tmp4354 = (panda$core$Int64) {49};
panda$core$Bit $tmp4355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4354);
bool $tmp4356 = $tmp4355.value;
if ($tmp4356) goto block18; else goto block19;
block18:;
// line 2059
org$pandalanguage$pandac$parser$Token $tmp4357 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp4357;
// line 2060
panda$core$Int64 $tmp4358 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4359 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4358);
org$pandalanguage$pandac$parser$Token$nullable $tmp4360 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4359);
*(&local1) = $tmp4360;
// line 2061
org$pandalanguage$pandac$parser$Token$nullable $tmp4361 = *(&local1);
panda$core$Bit $tmp4362 = panda$core$Bit$init$builtin_bit($tmp4361.nonnull);
bool $tmp4363 = $tmp4362.value;
if ($tmp4363) goto block20; else goto block21;
block20:;
// line 2062
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4364 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4365 = *$tmp4364;
panda$core$Bit $tmp4366 = panda$core$Bit$init$builtin_bit($tmp4365 != NULL);
bool $tmp4367 = $tmp4366.value;
if ($tmp4367) goto block22; else goto block23;
block22:;
// line 2063
org$pandalanguage$pandac$parser$Token$nullable $tmp4368 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4368.value));
// line 2064
org$pandalanguage$pandac$parser$Token $tmp4369 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4369);
// line 2065
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4370 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4371 = *$tmp4370;
panda$core$Int64 $tmp4372 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4373 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4372);
$fn4375 $tmp4374 = ($fn4375) $tmp4371->$class->vtable[3];
$tmp4374($tmp4371, $tmp4373);
// line 2066
org$pandalanguage$pandac$parser$Token $tmp4376 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2067
org$pandalanguage$pandac$parser$Token $tmp4377 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2068
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4378 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4379 = *$tmp4378;
panda$core$Int64 $tmp4380 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4381 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4380);
$fn4383 $tmp4382 = ($fn4383) $tmp4379->$class->vtable[4];
$tmp4382($tmp4379, $tmp4381);
goto block23;
block23:;
// line 2070
org$pandalanguage$pandac$parser$Token $tmp4384 = *(&local0);
panda$core$String* $tmp4385 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4384);
org$pandalanguage$pandac$ASTNode* $tmp4386 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp4385);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4386));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4386));
// unreffing REF($157:org.pandalanguage.pandac.ASTNode?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4385));
// unreffing REF($155:panda.core.String)
return $tmp4386;
block21:;
// line 2072
org$pandalanguage$pandac$parser$Token $tmp4387 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4387);
// line 2073
org$pandalanguage$pandac$ASTNode* $tmp4388 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4388));
// unreffing REF($171:org.pandalanguage.pandac.ASTNode?)
return $tmp4388;
block19:;
panda$core$Int64 $tmp4389 = (panda$core$Int64) {47};
panda$core$Bit $tmp4390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4389);
bool $tmp4391 = $tmp4390.value;
if ($tmp4391) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp4392 = (panda$core$Int64) {48};
panda$core$Bit $tmp4393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4392);
bool $tmp4394 = $tmp4393.value;
if ($tmp4394) goto block24; else goto block26;
block24:;
// line 2076
org$pandalanguage$pandac$ASTNode* $tmp4395 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
// unreffing REF($187:org.pandalanguage.pandac.ASTNode?)
return $tmp4395;
block26:;
panda$core$Int64 $tmp4396 = (panda$core$Int64) {24};
panda$core$Bit $tmp4397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4396);
bool $tmp4398 = $tmp4397.value;
if ($tmp4398) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp4399 = (panda$core$Int64) {25};
panda$core$Bit $tmp4400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4399);
bool $tmp4401 = $tmp4400.value;
if ($tmp4401) goto block27; else goto block29;
block29:;
panda$core$Int64 $tmp4402 = (panda$core$Int64) {26};
panda$core$Bit $tmp4403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4402);
bool $tmp4404 = $tmp4403.value;
if ($tmp4404) goto block27; else goto block30;
block30:;
panda$core$Int64 $tmp4405 = (panda$core$Int64) {27};
panda$core$Bit $tmp4406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4405);
bool $tmp4407 = $tmp4406.value;
if ($tmp4407) goto block27; else goto block31;
block27:;
// line 2079
org$pandalanguage$pandac$ASTNode* $tmp4408 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4408));
// unreffing REF($211:org.pandalanguage.pandac.ASTNode?)
return $tmp4408;
block31:;
panda$core$Int64 $tmp4409 = (panda$core$Int64) {23};
panda$core$Bit $tmp4410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4409);
bool $tmp4411 = $tmp4410.value;
if ($tmp4411) goto block32; else goto block33;
block32:;
// line 2082
org$pandalanguage$pandac$ASTNode* $tmp4412 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4412));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4412));
// unreffing REF($223:org.pandalanguage.pandac.ASTNode?)
return $tmp4412;
block33:;
panda$core$Int64 $tmp4413 = (panda$core$Int64) {22};
panda$core$Bit $tmp4414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4413);
bool $tmp4415 = $tmp4414.value;
if ($tmp4415) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp4416 = (panda$core$Int64) {21};
panda$core$Bit $tmp4417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4321, $tmp4416);
bool $tmp4418 = $tmp4417.value;
if ($tmp4418) goto block34; else goto block36;
block34:;
// line 2085
org$pandalanguage$pandac$ASTNode* $tmp4419 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4419));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode?)
return $tmp4419;
block36:;
// line 2089
panda$core$Int64 $tmp4420 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp4421 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4420);
org$pandalanguage$pandac$parser$Token$nullable $tmp4422 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4421, &$s4423);
// line 2090
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4424 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4425 = $tmp4424.value;
if ($tmp4425) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp4426 = (panda$core$Int64) {2048};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4427, $tmp4426, &$s4428);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2099
panda$core$Int64 $tmp4429 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp4430 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4429);
org$pandalanguage$pandac$parser$Token$nullable $tmp4431 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4430, &$s4432);
*(&local0) = $tmp4431;
// line 2100
org$pandalanguage$pandac$parser$Token$nullable $tmp4433 = *(&local0);
panda$core$Bit $tmp4434 = panda$core$Bit$init$builtin_bit(!$tmp4433.nonnull);
bool $tmp4435 = $tmp4434.value;
if ($tmp4435) goto block1; else goto block2;
block1:;
// line 2101
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2103
panda$core$Int64 $tmp4436 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4437 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4436);
org$pandalanguage$pandac$parser$Token$nullable $tmp4438 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4437, &$s4439);
*(&local1) = $tmp4438;
// line 2104
org$pandalanguage$pandac$parser$Token$nullable $tmp4440 = *(&local1);
panda$core$Bit $tmp4441 = panda$core$Bit$init$builtin_bit(!$tmp4440.nonnull);
bool $tmp4442 = $tmp4441.value;
if ($tmp4442) goto block3; else goto block4;
block3:;
// line 2105
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2107
panda$core$MutableString* $tmp4443 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4444 = *(&local1);
panda$core$String* $tmp4445 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4444.value));
panda$core$MutableString$init$panda$core$String($tmp4443, $tmp4445);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4443));
panda$core$MutableString* $tmp4446 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4446));
*(&local2) = $tmp4443;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4445));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4443));
// unreffing REF($31:panda.core.MutableString)
// line 2108
goto block5;
block5:;
// line 2109
panda$core$Int64 $tmp4447 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4448 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4447);
org$pandalanguage$pandac$parser$Token$nullable $tmp4449 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4448);
*(&local1) = $tmp4449;
// line 2110
org$pandalanguage$pandac$parser$Token$nullable $tmp4450 = *(&local1);
panda$core$Bit $tmp4451 = panda$core$Bit$init$builtin_bit(!$tmp4450.nonnull);
bool $tmp4452 = $tmp4451.value;
if ($tmp4452) goto block7; else goto block8;
block7:;
// line 2111
goto block6;
block8:;
// line 2113
panda$core$MutableString* $tmp4453 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4453, &$s4454);
// line 2114
panda$core$Int64 $tmp4455 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4456 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4455);
org$pandalanguage$pandac$parser$Token$nullable $tmp4457 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4456, &$s4458);
*(&local1) = $tmp4457;
// line 2115
org$pandalanguage$pandac$parser$Token$nullable $tmp4459 = *(&local1);
panda$core$Bit $tmp4460 = panda$core$Bit$init$builtin_bit(!$tmp4459.nonnull);
bool $tmp4461 = $tmp4460.value;
if ($tmp4461) goto block9; else goto block10;
block9:;
// line 2116
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4462 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4462));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2118
panda$core$MutableString* $tmp4463 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4464 = *(&local1);
panda$core$String* $tmp4465 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4464.value));
panda$core$MutableString$append$panda$core$String($tmp4463, $tmp4465);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4465));
// unreffing REF($91:panda.core.String)
goto block5;
block6:;
// line 2120
org$pandalanguage$pandac$ASTNode* $tmp4466 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4467 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$nullable $tmp4468 = *(&local0);
org$pandalanguage$pandac$Position $tmp4469 = ((org$pandalanguage$pandac$parser$Token) $tmp4468.value).position;
panda$core$MutableString* $tmp4470 = *(&local2);
panda$core$String* $tmp4471 = panda$core$MutableString$finish$R$panda$core$String($tmp4470);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4466, $tmp4467, $tmp4469, $tmp4471);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4466));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4472 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4472));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4466;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2127
panda$core$Int64 $tmp4473 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token$Kind $tmp4474 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4473);
org$pandalanguage$pandac$parser$Token$nullable $tmp4475 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4474, &$s4476);
*(&local0) = $tmp4475;
// line 2128
org$pandalanguage$pandac$parser$Token$nullable $tmp4477 = *(&local0);
panda$core$Bit $tmp4478 = panda$core$Bit$init$builtin_bit(!$tmp4477.nonnull);
bool $tmp4479 = $tmp4478.value;
if ($tmp4479) goto block1; else goto block2;
block1:;
// line 2129
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2131
panda$core$Int64 $tmp4480 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4481 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4480);
org$pandalanguage$pandac$parser$Token$nullable $tmp4482 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4481, &$s4483);
*(&local1) = $tmp4482;
// line 2132
org$pandalanguage$pandac$parser$Token$nullable $tmp4484 = *(&local1);
panda$core$Bit $tmp4485 = panda$core$Bit$init$builtin_bit(!$tmp4484.nonnull);
bool $tmp4486 = $tmp4485.value;
if ($tmp4486) goto block3; else goto block4;
block3:;
// line 2133
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2135
panda$core$MutableString* $tmp4487 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4488 = *(&local1);
panda$core$String* $tmp4489 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4488.value));
panda$core$MutableString$init$panda$core$String($tmp4487, $tmp4489);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4487));
panda$core$MutableString* $tmp4490 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4490));
*(&local2) = $tmp4487;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4489));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4487));
// unreffing REF($31:panda.core.MutableString)
// line 2136
goto block5;
block5:;
// line 2137
panda$core$Int64 $tmp4491 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4492 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4491);
org$pandalanguage$pandac$parser$Token$nullable $tmp4493 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4492);
*(&local1) = $tmp4493;
// line 2138
org$pandalanguage$pandac$parser$Token$nullable $tmp4494 = *(&local1);
panda$core$Bit $tmp4495 = panda$core$Bit$init$builtin_bit(!$tmp4494.nonnull);
bool $tmp4496 = $tmp4495.value;
if ($tmp4496) goto block7; else goto block8;
block7:;
// line 2139
goto block6;
block8:;
// line 2141
panda$core$MutableString* $tmp4497 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4497, &$s4498);
// line 2142
panda$core$Int64 $tmp4499 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4500 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4499);
org$pandalanguage$pandac$parser$Token$nullable $tmp4501 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4500, &$s4502);
*(&local1) = $tmp4501;
// line 2143
org$pandalanguage$pandac$parser$Token$nullable $tmp4503 = *(&local1);
panda$core$Bit $tmp4504 = panda$core$Bit$init$builtin_bit(!$tmp4503.nonnull);
bool $tmp4505 = $tmp4504.value;
if ($tmp4505) goto block9; else goto block10;
block9:;
// line 2144
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4506 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4506));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2146
panda$core$MutableString* $tmp4507 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4508 = *(&local1);
panda$core$String* $tmp4509 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4508.value));
panda$core$MutableString$append$panda$core$String($tmp4507, $tmp4509);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4509));
// unreffing REF($91:panda.core.String)
goto block5;
block6:;
// line 2148
org$pandalanguage$pandac$ASTNode* $tmp4510 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4511 = (panda$core$Int64) {48};
org$pandalanguage$pandac$parser$Token$nullable $tmp4512 = *(&local0);
org$pandalanguage$pandac$Position $tmp4513 = ((org$pandalanguage$pandac$parser$Token) $tmp4512.value).position;
panda$core$MutableString* $tmp4514 = *(&local2);
panda$core$String* $tmp4515 = panda$core$MutableString$finish$R$panda$core$String($tmp4514);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4510, $tmp4511, $tmp4513, $tmp4515);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4510));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4515));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4510));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4516 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4516));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4510;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 2155
panda$core$Int64 $tmp4517 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4518 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4517);
org$pandalanguage$pandac$parser$Token$nullable $tmp4519 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4518, &$s4520);
*(&local0) = $tmp4519;
// line 2156
org$pandalanguage$pandac$parser$Token$nullable $tmp4521 = *(&local0);
panda$core$Bit $tmp4522 = panda$core$Bit$init$builtin_bit(!$tmp4521.nonnull);
bool $tmp4523 = $tmp4522.value;
if ($tmp4523) goto block1; else goto block2;
block1:;
// line 2157
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 2159
panda$core$Int64 $tmp4524 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4525 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4524);
org$pandalanguage$pandac$parser$Token$nullable $tmp4526 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4525, &$s4527);
*(&local1) = $tmp4526;
// line 2160
org$pandalanguage$pandac$parser$Token$nullable $tmp4528 = *(&local1);
panda$core$Bit $tmp4529 = panda$core$Bit$init$builtin_bit(!$tmp4528.nonnull);
bool $tmp4530 = $tmp4529.value;
if ($tmp4530) goto block3; else goto block4;
block3:;
// line 2161
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block4:;
// line 2163
panda$collections$Array* $tmp4531 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4531);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
panda$collections$Array* $tmp4532 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4532));
*(&local2) = $tmp4531;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2164
panda$core$Int64 $tmp4533 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4534 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4533);
org$pandalanguage$pandac$parser$Token$nullable $tmp4535 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4534);
panda$core$Bit $tmp4536 = panda$core$Bit$init$builtin_bit($tmp4535.nonnull);
bool $tmp4537 = $tmp4536.value;
if ($tmp4537) goto block5; else goto block7;
block5:;
// line 2165
org$pandalanguage$pandac$ASTNode* $tmp4538 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4538));
org$pandalanguage$pandac$ASTNode* $tmp4539 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4539));
*(&local3) = $tmp4538;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4538));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
// line 2166
org$pandalanguage$pandac$ASTNode* $tmp4540 = *(&local3);
panda$core$Bit $tmp4541 = panda$core$Bit$init$builtin_bit($tmp4540 == NULL);
bool $tmp4542 = $tmp4541.value;
if ($tmp4542) goto block8; else goto block9;
block8:;
// line 2167
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4543 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4543));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4544 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4544));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block9:;
// line 2169
panda$collections$Array* $tmp4545 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4546 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4547 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp4548 = *(&local1);
org$pandalanguage$pandac$Position $tmp4549 = ((org$pandalanguage$pandac$parser$Token) $tmp4548.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4550 = *(&local1);
panda$core$String* $tmp4551 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4550.value));
org$pandalanguage$pandac$ASTNode* $tmp4552 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4546, $tmp4547, $tmp4549, $tmp4551, $tmp4552);
panda$collections$Array$add$panda$collections$Array$T($tmp4545, ((panda$core$Object*) $tmp4546));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4546));
// unreffing REF($87:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4553 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4553));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2172
panda$collections$Array* $tmp4554 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4555 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4556 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$nullable $tmp4557 = *(&local1);
org$pandalanguage$pandac$Position $tmp4558 = ((org$pandalanguage$pandac$parser$Token) $tmp4557.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4559 = *(&local1);
panda$core$String* $tmp4560 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4559.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4555, $tmp4556, $tmp4558, $tmp4560);
panda$collections$Array$add$panda$collections$Array$T($tmp4554, ((panda$core$Object*) $tmp4555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
// unreffing REF($122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4555));
// unreffing REF($115:org.pandalanguage.pandac.ASTNode)
goto block6;
block6:;
// line 2174
goto block10;
block10:;
panda$core$Int64 $tmp4561 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4562 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4561);
org$pandalanguage$pandac$parser$Token$nullable $tmp4563 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4562);
panda$core$Bit $tmp4564 = panda$core$Bit$init$builtin_bit($tmp4563.nonnull);
bool $tmp4565 = $tmp4564.value;
if ($tmp4565) goto block11; else goto block12;
block11:;
// line 2175
panda$core$Int64 $tmp4566 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4567 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4566);
org$pandalanguage$pandac$parser$Token$nullable $tmp4568 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4567, &$s4569);
*(&local1) = $tmp4568;
// line 2176
org$pandalanguage$pandac$parser$Token$nullable $tmp4570 = *(&local1);
panda$core$Bit $tmp4571 = panda$core$Bit$init$builtin_bit(!$tmp4570.nonnull);
bool $tmp4572 = $tmp4571.value;
if ($tmp4572) goto block13; else goto block14;
block13:;
// line 2177
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
panda$collections$Array* $tmp4573 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4573));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block14:;
// line 2179
panda$core$Int64 $tmp4574 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4575 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4574);
org$pandalanguage$pandac$parser$Token$nullable $tmp4576 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4575);
panda$core$Bit $tmp4577 = panda$core$Bit$init$builtin_bit($tmp4576.nonnull);
bool $tmp4578 = $tmp4577.value;
if ($tmp4578) goto block15; else goto block17;
block15:;
// line 2180
org$pandalanguage$pandac$ASTNode* $tmp4579 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4579));
org$pandalanguage$pandac$ASTNode* $tmp4580 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4580));
*(&local4) = $tmp4579;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4579));
// unreffing REF($171:org.pandalanguage.pandac.ASTNode?)
// line 2181
org$pandalanguage$pandac$ASTNode* $tmp4581 = *(&local4);
panda$core$Bit $tmp4582 = panda$core$Bit$init$builtin_bit($tmp4581 == NULL);
bool $tmp4583 = $tmp4582.value;
if ($tmp4583) goto block18; else goto block19;
block18:;
// line 2182
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4584 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4585 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4585));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block19:;
// line 2184
panda$collections$Array* $tmp4586 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4587 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4588 = (panda$core$Int64) {46};
org$pandalanguage$pandac$parser$Token$nullable $tmp4589 = *(&local1);
org$pandalanguage$pandac$Position $tmp4590 = ((org$pandalanguage$pandac$parser$Token) $tmp4589.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4591 = *(&local1);
panda$core$String* $tmp4592 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4591.value));
org$pandalanguage$pandac$ASTNode* $tmp4593 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4587, $tmp4588, $tmp4590, $tmp4592, $tmp4593);
panda$collections$Array$add$panda$collections$Array$T($tmp4586, ((panda$core$Object*) $tmp4587));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4592));
// unreffing REF($212:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4587));
// unreffing REF($205:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4594 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4594));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2187
panda$collections$Array* $tmp4595 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4596 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4597 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$nullable $tmp4598 = *(&local1);
org$pandalanguage$pandac$Position $tmp4599 = ((org$pandalanguage$pandac$parser$Token) $tmp4598.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4600 = *(&local1);
panda$core$String* $tmp4601 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4600.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4596, $tmp4597, $tmp4599, $tmp4601);
panda$collections$Array$add$panda$collections$Array$T($tmp4595, ((panda$core$Object*) $tmp4596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4601));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4596));
// unreffing REF($233:org.pandalanguage.pandac.ASTNode)
goto block16;
block16:;
goto block10;
block12:;
// line 2190
panda$core$Int64 $tmp4602 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp4603 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4602);
org$pandalanguage$pandac$parser$Token$nullable $tmp4604 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4603, &$s4605);
panda$core$Bit $tmp4606 = panda$core$Bit$init$builtin_bit(!$tmp4604.nonnull);
bool $tmp4607 = $tmp4606.value;
if ($tmp4607) goto block20; else goto block21;
block20:;
// line 2191
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
panda$collections$Array* $tmp4608 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block21:;
// line 2193
panda$collections$Array* $tmp4609 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4610 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4609);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
// unreffing REF($272:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp4611 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp4610;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2200
panda$core$Int64 $tmp4612 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4613 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4612);
org$pandalanguage$pandac$parser$Token$nullable $tmp4614 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4613, &$s4615);
*(&local0) = $tmp4614;
// line 2201
org$pandalanguage$pandac$parser$Token$nullable $tmp4616 = *(&local0);
panda$core$Bit $tmp4617 = panda$core$Bit$init$builtin_bit(!$tmp4616.nonnull);
bool $tmp4618 = $tmp4617.value;
if ($tmp4618) goto block1; else goto block2;
block1:;
// line 2202
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 2204
panda$collections$Array* $tmp4619 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4619);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4619));
panda$collections$Array* $tmp4620 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4620));
*(&local1) = $tmp4619;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4619));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2205
org$pandalanguage$pandac$ASTNode* $tmp4621 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
org$pandalanguage$pandac$ASTNode* $tmp4622 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
*(&local2) = $tmp4621;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
// unreffing REF($30:org.pandalanguage.pandac.ASTNode?)
// line 2206
org$pandalanguage$pandac$ASTNode* $tmp4623 = *(&local2);
panda$core$Bit $tmp4624 = panda$core$Bit$init$builtin_bit($tmp4623 == NULL);
bool $tmp4625 = $tmp4624.value;
if ($tmp4625) goto block3; else goto block4;
block3:;
// line 2207
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4626 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4626));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4627 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4627));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block4:;
// line 2209
panda$collections$Array* $tmp4628 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4629 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4628, ((panda$core$Object*) $tmp4629));
// line 2210
goto block5;
block5:;
panda$core$Int64 $tmp4630 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4631 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4630);
org$pandalanguage$pandac$parser$Token$nullable $tmp4632 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4631);
panda$core$Bit $tmp4633 = panda$core$Bit$init$builtin_bit($tmp4632.nonnull);
bool $tmp4634 = $tmp4633.value;
if ($tmp4634) goto block6; else goto block7;
block6:;
// line 2211
org$pandalanguage$pandac$ASTNode* $tmp4635 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
org$pandalanguage$pandac$ASTNode* $tmp4636 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
*(&local2) = $tmp4635;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode?)
// line 2212
org$pandalanguage$pandac$ASTNode* $tmp4637 = *(&local2);
panda$core$Bit $tmp4638 = panda$core$Bit$init$builtin_bit($tmp4637 == NULL);
bool $tmp4639 = $tmp4638.value;
if ($tmp4639) goto block8; else goto block9;
block8:;
// line 2213
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4640 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4640));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4641 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4641));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block9:;
// line 2215
panda$collections$Array* $tmp4642 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4643 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4642, ((panda$core$Object*) $tmp4643));
goto block5;
block7:;
// line 2217
panda$collections$Array* $tmp4644 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp4645 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4644);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
// unreffing REF($119:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
org$pandalanguage$pandac$ASTNode* $tmp4646 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4646));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4647 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4647));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4645;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
org$pandalanguage$pandac$parser$Token$nullable local4;
// line 2224
panda$core$Int64 $tmp4648 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4649 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4648);
org$pandalanguage$pandac$parser$Token$nullable $tmp4650 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4649, &$s4651);
*(&local0) = $tmp4650;
// line 2225
*(&local1) = ((panda$core$String*) NULL);
// line 2226
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4652 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4652));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2227
panda$core$Int64 $tmp4653 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4654 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4653);
org$pandalanguage$pandac$parser$Token$nullable $tmp4655 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4654);
*(&local3) = $tmp4655;
// line 2228
org$pandalanguage$pandac$parser$Token$nullable $tmp4656 = *(&local3);
panda$core$Bit $tmp4657 = panda$core$Bit$init$builtin_bit($tmp4656.nonnull);
bool $tmp4658 = $tmp4657.value;
if ($tmp4658) goto block1; else goto block2;
block1:;
// line 2229
org$pandalanguage$pandac$ASTNode* $tmp4659 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
org$pandalanguage$pandac$ASTNode* $tmp4660 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4660));
*(&local2) = $tmp4659;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4659));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode?)
// line 2230
org$pandalanguage$pandac$ASTNode* $tmp4661 = *(&local2);
panda$core$Bit $tmp4662 = panda$core$Bit$init$builtin_bit($tmp4661 == NULL);
bool $tmp4663 = $tmp4662.value;
if ($tmp4663) goto block3; else goto block4;
block3:;
// line 2231
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4664 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4664));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4665 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4665));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2233
panda$core$Int64 $tmp4666 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4667 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4666);
org$pandalanguage$pandac$parser$Token$nullable $tmp4668 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4667, &$s4669);
*(&local4) = $tmp4668;
// line 2234
org$pandalanguage$pandac$parser$Token$nullable $tmp4670 = *(&local4);
panda$core$Bit $tmp4671 = panda$core$Bit$init$builtin_bit(!$tmp4670.nonnull);
bool $tmp4672 = $tmp4671.value;
if ($tmp4672) goto block5; else goto block6;
block5:;
// line 2235
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4673 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4674 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4674));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2237
panda$core$String** $tmp4675 = &param0->source;
panda$core$String* $tmp4676 = *$tmp4675;
panda$core$String** $tmp4677 = &param0->source;
panda$core$String* $tmp4678 = *$tmp4677;
org$pandalanguage$pandac$parser$Token$nullable $tmp4679 = *(&local3);
panda$core$String$Index $tmp4680 = ((org$pandalanguage$pandac$parser$Token) $tmp4679.value).start;
panda$core$String$Index $tmp4681 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp4678, $tmp4680);
org$pandalanguage$pandac$parser$Token$nullable $tmp4682 = *(&local4);
panda$core$String$Index $tmp4683 = ((org$pandalanguage$pandac$parser$Token) $tmp4682.value).start;
panda$core$Bit $tmp4684 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp4685 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp4681, $tmp4683, $tmp4684);
panda$core$String* $tmp4686 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp4676, $tmp4685);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4686));
panda$core$String* $tmp4687 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4687));
*(&local1) = $tmp4686;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4686));
// unreffing REF($96:panda.core.String)
goto block2;
block2:;
// line 2239
org$pandalanguage$pandac$ASTNode* $tmp4688 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4689 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$nullable $tmp4690 = *(&local0);
org$pandalanguage$pandac$Position $tmp4691 = ((org$pandalanguage$pandac$parser$Token) $tmp4690.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4692 = *(&local0);
panda$core$String* $tmp4693 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4692.value));
panda$core$String* $tmp4694 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4695 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4688, $tmp4689, $tmp4691, $tmp4693, $tmp4694, $tmp4695);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4693));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4688));
// unreffing REF($109:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4696 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4696));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4697 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4697));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return $tmp4688;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2246
panda$collections$Array* $tmp4698 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4698);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4698));
panda$collections$Array* $tmp4699 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4699));
*(&local0) = $tmp4698;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4698));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2247
goto block1;
block1:;
org$pandalanguage$pandac$parser$Token $tmp4700 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4701 = $tmp4700.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4702;
$tmp4702 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4702->value = $tmp4701;
panda$core$Int64 $tmp4703 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4704 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4703);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4705;
$tmp4705 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4705->value = $tmp4704;
ITable* $tmp4706 = ((panda$core$Equatable*) $tmp4702)->$class->itable;
while ($tmp4706->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4706 = $tmp4706->next;
}
$fn4708 $tmp4707 = $tmp4706->methods[0];
panda$core$Bit $tmp4709 = $tmp4707(((panda$core$Equatable*) $tmp4702), ((panda$core$Equatable*) $tmp4705));
bool $tmp4710 = $tmp4709.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4705)));
// unreffing REF($22:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4702)));
// unreffing REF($18:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4710) goto block2; else goto block3;
block2:;
// line 2248
org$pandalanguage$pandac$ASTNode* $tmp4711 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4711));
org$pandalanguage$pandac$ASTNode* $tmp4712 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4712));
*(&local1) = $tmp4711;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4711));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode?)
// line 2249
org$pandalanguage$pandac$ASTNode* $tmp4713 = *(&local1);
panda$core$Bit $tmp4714 = panda$core$Bit$init$builtin_bit($tmp4713 == NULL);
bool $tmp4715 = $tmp4714.value;
if ($tmp4715) goto block4; else goto block5;
block4:;
// line 2250
org$pandalanguage$pandac$ASTNode* $tmp4716 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4716));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block5:;
// line 2252
panda$collections$Array* $tmp4717 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp4718 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp4717, ((panda$core$Object*) $tmp4718));
org$pandalanguage$pandac$ASTNode* $tmp4719 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4719));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 2254
panda$collections$Array* $tmp4720 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp4721 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4720);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4721));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4721));
// unreffing REF($74:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp4722 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4722));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp4721;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$MutableString* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 2258
panda$core$Int64 $tmp4723 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4724 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4723);
org$pandalanguage$pandac$parser$Token$nullable $tmp4725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4724, &$s4726);
*(&local0) = $tmp4725;
// line 2259
org$pandalanguage$pandac$parser$Token$nullable $tmp4727 = *(&local0);
panda$core$Bit $tmp4728 = panda$core$Bit$init$builtin_bit(!$tmp4727.nonnull);
bool $tmp4729 = $tmp4728.value;
if ($tmp4729) goto block1; else goto block2;
block1:;
// line 2260
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2262
panda$core$MutableString* $tmp4730 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp4730);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
panda$core$MutableString* $tmp4731 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
*(&local1) = $tmp4730;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4730));
// unreffing REF($16:panda.core.MutableString)
// line 2263
goto block3;
block3:;
// line 2264
org$pandalanguage$pandac$parser$Token $tmp4732 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp4732;
// line 2265
org$pandalanguage$pandac$parser$Token $tmp4733 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4734 = $tmp4733.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4735;
$tmp4735 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4735->value = $tmp4734;
panda$core$Int64 $tmp4736 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4737 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4736);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4738;
$tmp4738 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4738->value = $tmp4737;
ITable* $tmp4739 = ((panda$core$Equatable*) $tmp4735)->$class->itable;
while ($tmp4739->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4739 = $tmp4739->next;
}
$fn4741 $tmp4740 = $tmp4739->methods[0];
panda$core$Bit $tmp4742 = $tmp4740(((panda$core$Equatable*) $tmp4735), ((panda$core$Equatable*) $tmp4738));
bool $tmp4743 = $tmp4742.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4738)));
// unreffing REF($40:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4735)));
// unreffing REF($36:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4743) goto block5; else goto block6;
block5:;
// line 2266
goto block4;
block6:;
// line 2268
org$pandalanguage$pandac$parser$Token $tmp4744 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4745 = $tmp4744.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4746;
$tmp4746 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4746->value = $tmp4745;
panda$core$Int64 $tmp4747 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp4748 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4747);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4749;
$tmp4749 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4749->value = $tmp4748;
ITable* $tmp4750 = ((panda$core$Equatable*) $tmp4746)->$class->itable;
while ($tmp4750->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4750 = $tmp4750->next;
}
$fn4752 $tmp4751 = $tmp4750->methods[0];
panda$core$Bit $tmp4753 = $tmp4751(((panda$core$Equatable*) $tmp4746), ((panda$core$Equatable*) $tmp4749));
bool $tmp4754 = $tmp4753.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4749)));
// unreffing REF($60:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4746)));
// unreffing REF($56:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4754) goto block7; else goto block8;
block7:;
// line 2269
org$pandalanguage$pandac$parser$Token$nullable $tmp4755 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4755.value), &$s4756);
// line 2270
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4757 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4757));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2272
panda$core$MutableString* $tmp4758 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp4759 = *(&local2);
panda$core$String* $tmp4760 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4759);
panda$core$MutableString$append$panda$core$String($tmp4758, $tmp4760);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
// unreffing REF($87:panda.core.String)
goto block3;
block4:;
// line 2274
org$pandalanguage$pandac$ASTNode* $tmp4761 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4762 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$nullable $tmp4763 = *(&local0);
org$pandalanguage$pandac$Position $tmp4764 = ((org$pandalanguage$pandac$parser$Token) $tmp4763.value).position;
panda$core$MutableString* $tmp4765 = *(&local1);
panda$core$String* $tmp4766 = panda$core$MutableString$finish$R$panda$core$String($tmp4765);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4761, $tmp4762, $tmp4764, $tmp4766);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4766));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
// unreffing REF($94:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4767 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4767));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp4761;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2281
panda$core$Int64 $tmp4768 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4769 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4768);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4769);
// line 2282
panda$core$Int64 $tmp4770 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4771 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4770);
org$pandalanguage$pandac$parser$Token$nullable $tmp4772 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4771, &$s4773);
*(&local0) = $tmp4772;
// line 2283
panda$core$Int64 $tmp4774 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4775 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4774);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4775);
// line 2284
org$pandalanguage$pandac$parser$Token$nullable $tmp4776 = *(&local0);
panda$core$Bit $tmp4777 = panda$core$Bit$init$builtin_bit(!$tmp4776.nonnull);
bool $tmp4778 = $tmp4777.value;
if ($tmp4778) goto block1; else goto block2;
block1:;
// line 2285
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2287
org$pandalanguage$pandac$ASTNode* $tmp4779 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4779));
org$pandalanguage$pandac$ASTNode* $tmp4780 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4780));
*(&local1) = $tmp4779;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4779));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
// line 2288
org$pandalanguage$pandac$ASTNode* $tmp4781 = *(&local1);
panda$core$Bit $tmp4782 = panda$core$Bit$init$builtin_bit($tmp4781 == NULL);
bool $tmp4783 = $tmp4782.value;
if ($tmp4783) goto block3; else goto block4;
block3:;
// line 2289
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4784 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4784));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2291
org$pandalanguage$pandac$ASTNode* $tmp4785 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4786 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$nullable $tmp4787 = *(&local0);
org$pandalanguage$pandac$Position $tmp4788 = ((org$pandalanguage$pandac$parser$Token) $tmp4787.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4789 = *(&local0);
panda$core$String* $tmp4790 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4789.value));
org$pandalanguage$pandac$ASTNode* $tmp4791 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4785, $tmp4786, $tmp4788, $tmp4790, $tmp4791);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4790));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4785));
// unreffing REF($51:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4792 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4792));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4785;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2298
panda$core$Int64 $tmp4793 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4794 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4793);
org$pandalanguage$pandac$parser$Token$nullable $tmp4795 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4794, &$s4796);
*(&local0) = $tmp4795;
// line 2299
org$pandalanguage$pandac$parser$Token$nullable $tmp4797 = *(&local0);
panda$core$Bit $tmp4798 = panda$core$Bit$init$builtin_bit(!$tmp4797.nonnull);
bool $tmp4799 = $tmp4798.value;
if ($tmp4799) goto block1; else goto block2;
block1:;
// line 2300
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 2302
panda$collections$Array* $tmp4800 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4800);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
panda$collections$Array* $tmp4801 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4801));
*(&local1) = $tmp4800;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4800));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2303
panda$core$Int64 $tmp4802 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4803 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4802);
org$pandalanguage$pandac$parser$Token$nullable $tmp4804 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4803);
panda$core$Bit $tmp4805 = panda$core$Bit$init$builtin_bit(!$tmp4804.nonnull);
bool $tmp4806 = $tmp4805.value;
if ($tmp4806) goto block3; else goto block4;
block3:;
// line 2304
org$pandalanguage$pandac$ASTNode* $tmp4807 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
org$pandalanguage$pandac$ASTNode* $tmp4808 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4808));
*(&local2) = $tmp4807;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
// line 2305
org$pandalanguage$pandac$ASTNode* $tmp4809 = *(&local2);
panda$core$Bit $tmp4810 = panda$core$Bit$init$builtin_bit($tmp4809 == NULL);
bool $tmp4811 = $tmp4810.value;
if ($tmp4811) goto block5; else goto block6;
block5:;
// line 2306
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4812 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4812));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4813 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4813));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block6:;
// line 2308
panda$collections$Array* $tmp4814 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4815 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4814, ((panda$core$Object*) $tmp4815));
// line 2309
goto block7;
block7:;
panda$core$Int64 $tmp4816 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4817 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4816);
org$pandalanguage$pandac$parser$Token$nullable $tmp4818 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4817);
panda$core$Bit $tmp4819 = panda$core$Bit$init$builtin_bit($tmp4818.nonnull);
bool $tmp4820 = $tmp4819.value;
if ($tmp4820) goto block8; else goto block9;
block8:;
// line 2310
org$pandalanguage$pandac$ASTNode* $tmp4821 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4821));
org$pandalanguage$pandac$ASTNode* $tmp4822 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4822));
*(&local2) = $tmp4821;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4821));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 2311
org$pandalanguage$pandac$ASTNode* $tmp4823 = *(&local2);
panda$core$Bit $tmp4824 = panda$core$Bit$init$builtin_bit($tmp4823 == NULL);
bool $tmp4825 = $tmp4824.value;
if ($tmp4825) goto block10; else goto block11;
block10:;
// line 2312
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4826 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4826));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4827 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4827));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block11:;
// line 2314
panda$collections$Array* $tmp4828 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4829 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4828, ((panda$core$Object*) $tmp4829));
goto block7;
block9:;
// line 2316
panda$core$Int64 $tmp4830 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4831 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4830);
org$pandalanguage$pandac$parser$Token$nullable $tmp4832 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4831, &$s4833);
panda$core$Bit $tmp4834 = panda$core$Bit$init$builtin_bit(!$tmp4832.nonnull);
bool $tmp4835 = $tmp4834.value;
if ($tmp4835) goto block12; else goto block13;
block12:;
// line 2317
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4836 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4836));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4837 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4837));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp4838 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4838));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 2320
panda$collections$Array* $tmp4839 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp4840 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4839);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4840));
// unreffing REF($155:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp4841 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4841));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4840;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
org$pandalanguage$pandac$FixedArray* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$FixedArray* local6 = NULL;
// line 2328
// line 2329
panda$core$Int64 $tmp4842 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4843 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4842);
org$pandalanguage$pandac$parser$Token$nullable $tmp4844 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4843);
*(&local1) = $tmp4844;
// line 2330
org$pandalanguage$pandac$parser$Token$nullable $tmp4845 = *(&local1);
panda$core$Bit $tmp4846 = panda$core$Bit$init$builtin_bit(!$tmp4845.nonnull);
bool $tmp4847 = $tmp4846.value;
if ($tmp4847) goto block1; else goto block3;
block1:;
// line 2331
panda$core$Int64 $tmp4848 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4849 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4848);
org$pandalanguage$pandac$parser$Token$nullable $tmp4850 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4849, &$s4851);
*(&local1) = $tmp4850;
// line 2332
org$pandalanguage$pandac$parser$Token$nullable $tmp4852 = *(&local1);
panda$core$Bit $tmp4853 = panda$core$Bit$init$builtin_bit(!$tmp4852.nonnull);
bool $tmp4854 = $tmp4853.value;
if ($tmp4854) goto block4; else goto block5;
block4:;
// line 2333
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2335
panda$core$Int64 $tmp4855 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4856 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4855);
*(&local0) = $tmp4856;
goto block2;
block3:;
// line 1
// line 2338
panda$core$Int64 $tmp4857 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4858 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4857);
*(&local0) = $tmp4858;
goto block2;
block2:;
// line 2340
panda$core$Int64 $tmp4859 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4860 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4859);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4860);
// line 2341
panda$core$String* $tmp4861 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4861));
panda$core$String* $tmp4862 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4862));
*(&local2) = $tmp4861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4861));
// unreffing REF($43:panda.core.String?)
// line 2342
panda$core$Int64 $tmp4863 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4864 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4863);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4864);
// line 2343
panda$core$String* $tmp4865 = *(&local2);
panda$core$Bit $tmp4866 = panda$core$Bit$init$builtin_bit($tmp4865 == NULL);
bool $tmp4867 = $tmp4866.value;
if ($tmp4867) goto block6; else goto block7;
block6:;
// line 2344
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp4868 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4868));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2346
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2347
org$pandalanguage$pandac$parser$Token $tmp4869 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4870 = $tmp4869.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4871;
$tmp4871 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4871->value = $tmp4870;
panda$core$Int64 $tmp4872 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4873 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4872);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4874;
$tmp4874 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4874->value = $tmp4873;
ITable* $tmp4875 = ((panda$core$Equatable*) $tmp4871)->$class->itable;
while ($tmp4875->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4875 = $tmp4875->next;
}
$fn4877 $tmp4876 = $tmp4875->methods[0];
panda$core$Bit $tmp4878 = $tmp4876(((panda$core$Equatable*) $tmp4871), ((panda$core$Equatable*) $tmp4874));
bool $tmp4879 = $tmp4878.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4874)));
// unreffing REF($82:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4871)));
// unreffing REF($78:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4879) goto block8; else goto block10;
block8:;
// line 2348
org$pandalanguage$pandac$FixedArray* $tmp4880 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
org$pandalanguage$pandac$FixedArray* $tmp4881 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4881));
*(&local3) = $tmp4880;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4880));
// unreffing REF($94:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
goto block9;
block10:;
// line 1
// line 2351
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4882 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4882));
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block9;
block9:;
// line 2353
org$pandalanguage$pandac$FixedArray* $tmp4883 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
org$pandalanguage$pandac$FixedArray* $tmp4884 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
*(&local4) = $tmp4883;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
// unreffing REF($115:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2354
org$pandalanguage$pandac$FixedArray* $tmp4885 = *(&local4);
panda$core$Bit $tmp4886 = panda$core$Bit$init$builtin_bit($tmp4885 == NULL);
bool $tmp4887 = $tmp4886.value;
if ($tmp4887) goto block11; else goto block12;
block11:;
// line 2355
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4888 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4888));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4889 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4889));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4890 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4890));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 2357
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2358
org$pandalanguage$pandac$parser$Token $tmp4891 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4892 = $tmp4891.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4893;
$tmp4893 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4893->value = $tmp4892;
panda$core$Int64 $tmp4894 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4895 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4894);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4896;
$tmp4896 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4896->value = $tmp4895;
ITable* $tmp4897 = ((panda$core$Equatable*) $tmp4893)->$class->itable;
while ($tmp4897->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4897 = $tmp4897->next;
}
$fn4899 $tmp4898 = $tmp4897->methods[0];
panda$core$Bit $tmp4900 = $tmp4898(((panda$core$Equatable*) $tmp4893), ((panda$core$Equatable*) $tmp4896));
bool $tmp4901 = $tmp4900.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4896)));
// unreffing REF($160:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4893)));
// unreffing REF($156:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4901) goto block13; else goto block15;
block13:;
// line 2359
org$pandalanguage$pandac$ASTNode* $tmp4902 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4902));
org$pandalanguage$pandac$ASTNode* $tmp4903 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4903));
*(&local5) = $tmp4902;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4902));
// unreffing REF($172:org.pandalanguage.pandac.ASTNode?)
// line 2360
org$pandalanguage$pandac$ASTNode* $tmp4904 = *(&local5);
panda$core$Bit $tmp4905 = panda$core$Bit$init$builtin_bit($tmp4904 == NULL);
bool $tmp4906 = $tmp4905.value;
if ($tmp4906) goto block16; else goto block17;
block16:;
// line 2361
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4907 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4907));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4908 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4908));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4909 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4909));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4910 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4910));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2365
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4911 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4911));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block14:;
// line 2367
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2368
org$pandalanguage$pandac$parser$Token $tmp4912 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4913 = $tmp4912.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4914;
$tmp4914 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4914->value = $tmp4913;
panda$core$Int64 $tmp4915 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp4916 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4915);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4917;
$tmp4917 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4917->value = $tmp4916;
ITable* $tmp4918 = ((panda$core$Equatable*) $tmp4914)->$class->itable;
while ($tmp4918->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4918 = $tmp4918->next;
}
$fn4920 $tmp4919 = $tmp4918->methods[0];
panda$core$Bit $tmp4921 = $tmp4919(((panda$core$Equatable*) $tmp4914), ((panda$core$Equatable*) $tmp4917));
bool $tmp4922 = $tmp4921.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4917)));
// unreffing REF($231:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4914)));
// unreffing REF($227:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4922) goto block18; else goto block20;
block18:;
// line 2369
org$pandalanguage$pandac$FixedArray* $tmp4923 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
org$pandalanguage$pandac$FixedArray* $tmp4924 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4924));
*(&local6) = $tmp4923;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
// unreffing REF($243:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2370
org$pandalanguage$pandac$FixedArray* $tmp4925 = *(&local6);
panda$core$Bit $tmp4926 = panda$core$Bit$init$builtin_bit($tmp4925 == NULL);
bool $tmp4927 = $tmp4926.value;
if ($tmp4927) goto block21; else goto block22;
block21:;
// line 2371
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4928 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4928));
// unreffing body
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4929 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4929));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4930 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4930));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4931 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4931));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4932 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4932));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2375
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4933 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4933));
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block19;
block19:;
// line 2377
org$pandalanguage$pandac$ASTNode* $tmp4934 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4935 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$nullable $tmp4936 = *(&local1);
org$pandalanguage$pandac$Position $tmp4937 = ((org$pandalanguage$pandac$parser$Token) $tmp4936.value).position;
org$pandalanguage$pandac$MethodDecl$Kind $tmp4938 = *(&local0);
panda$core$String* $tmp4939 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4940 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp4941 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp4942 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp4943 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4934, $tmp4935, $tmp4937, param1, param2, $tmp4938, $tmp4939, $tmp4940, $tmp4941, $tmp4942, $tmp4943);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
// unreffing REF($299:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp4944 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
// unreffing body
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4945 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4945));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4946 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4946));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4947 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4947));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4948 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4948));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return $tmp4934;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$FixedArray* local4 = NULL;
// line 2385
// line 2386
panda$core$Int64 $tmp4949 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4950 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4949);
org$pandalanguage$pandac$parser$Token$nullable $tmp4951 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4950);
*(&local1) = $tmp4951;
// line 2387
org$pandalanguage$pandac$parser$Token$nullable $tmp4952 = *(&local1);
panda$core$Bit $tmp4953 = panda$core$Bit$init$builtin_bit(!$tmp4952.nonnull);
bool $tmp4954 = $tmp4953.value;
if ($tmp4954) goto block1; else goto block3;
block1:;
// line 2388
panda$core$Int64 $tmp4955 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4956 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4955);
org$pandalanguage$pandac$parser$Token$nullable $tmp4957 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4956, &$s4958);
*(&local1) = $tmp4957;
// line 2389
org$pandalanguage$pandac$parser$Token$nullable $tmp4959 = *(&local1);
panda$core$Bit $tmp4960 = panda$core$Bit$init$builtin_bit(!$tmp4959.nonnull);
bool $tmp4961 = $tmp4960.value;
if ($tmp4961) goto block4; else goto block5;
block4:;
// line 2390
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2392
panda$core$Int64 $tmp4962 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4963 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4962);
*(&local0) = $tmp4963;
goto block2;
block3:;
// line 1
// line 2395
panda$core$Int64 $tmp4964 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4965 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4964);
*(&local0) = $tmp4965;
goto block2;
block2:;
// line 2397
org$pandalanguage$pandac$FixedArray* $tmp4966 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
org$pandalanguage$pandac$FixedArray* $tmp4967 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
*(&local2) = $tmp4966;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
// unreffing REF($39:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2398
org$pandalanguage$pandac$FixedArray* $tmp4968 = *(&local2);
panda$core$Bit $tmp4969 = panda$core$Bit$init$builtin_bit($tmp4968 == NULL);
bool $tmp4970 = $tmp4969.value;
if ($tmp4970) goto block6; else goto block7;
block6:;
// line 2399
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4971 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4971));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2401
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2402
org$pandalanguage$pandac$parser$Token $tmp4972 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4973 = $tmp4972.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4974;
$tmp4974 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4974->value = $tmp4973;
panda$core$Int64 $tmp4975 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4976 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4975);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4977;
$tmp4977 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4977->value = $tmp4976;
ITable* $tmp4978 = ((panda$core$Equatable*) $tmp4974)->$class->itable;
while ($tmp4978->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4978 = $tmp4978->next;
}
$fn4980 $tmp4979 = $tmp4978->methods[0];
panda$core$Bit $tmp4981 = $tmp4979(((panda$core$Equatable*) $tmp4974), ((panda$core$Equatable*) $tmp4977));
bool $tmp4982 = $tmp4981.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4977)));
// unreffing REF($74:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4974)));
// unreffing REF($70:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4982) goto block8; else goto block10;
block8:;
// line 2403
org$pandalanguage$pandac$ASTNode* $tmp4983 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4983));
org$pandalanguage$pandac$ASTNode* $tmp4984 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4984));
*(&local3) = $tmp4983;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4983));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 2404
org$pandalanguage$pandac$ASTNode* $tmp4985 = *(&local3);
panda$core$Bit $tmp4986 = panda$core$Bit$init$builtin_bit($tmp4985 == NULL);
bool $tmp4987 = $tmp4986.value;
if ($tmp4987) goto block11; else goto block12;
block11:;
// line 2405
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4988 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4988));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4989 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4989));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2409
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4990 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4990));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 2411
org$pandalanguage$pandac$FixedArray* $tmp4991 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4991));
org$pandalanguage$pandac$FixedArray* $tmp4992 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4992));
*(&local4) = $tmp4991;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4991));
// unreffing REF($127:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2412
org$pandalanguage$pandac$FixedArray* $tmp4993 = *(&local4);
panda$core$Bit $tmp4994 = panda$core$Bit$init$builtin_bit($tmp4993 == NULL);
bool $tmp4995 = $tmp4994.value;
if ($tmp4995) goto block13; else goto block14;
block13:;
// line 2413
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4996 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4996));
// unreffing body
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4997 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4997));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4998 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4998));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 2415
org$pandalanguage$pandac$ASTNode* $tmp4999 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5000 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$nullable $tmp5001 = *(&local1);
org$pandalanguage$pandac$Position $tmp5002 = ((org$pandalanguage$pandac$parser$Token) $tmp5001.value).position;
org$pandalanguage$pandac$FixedArray* $tmp5003 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5003);
org$pandalanguage$pandac$MethodDecl$Kind $tmp5004 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp5005 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5006 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp5007 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4999, $tmp5000, $tmp5002, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp5003, $tmp5004, &$s5008, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp5005, $tmp5006, $tmp5007);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4999));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5003));
// unreffing REF($169:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4999));
// unreffing REF($164:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp5009 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5009));
// unreffing body
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5010 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5010));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5011 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5011));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp4999;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
// line 2423
panda$core$Int64 $tmp5012 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp5013 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5012);
org$pandalanguage$pandac$parser$Token$nullable $tmp5014 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5013, &$s5015);
*(&local0) = $tmp5014;
// line 2424
org$pandalanguage$pandac$parser$Token$nullable $tmp5016 = *(&local0);
panda$core$Bit $tmp5017 = panda$core$Bit$init$builtin_bit(!$tmp5016.nonnull);
bool $tmp5018 = $tmp5017.value;
if ($tmp5018) goto block1; else goto block2;
block1:;
// line 2425
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2427
org$pandalanguage$pandac$FixedArray* $tmp5019 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
org$pandalanguage$pandac$FixedArray* $tmp5020 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
*(&local1) = $tmp5019;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
// unreffing REF($16:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2428
org$pandalanguage$pandac$FixedArray* $tmp5021 = *(&local1);
panda$core$Bit $tmp5022 = panda$core$Bit$init$builtin_bit($tmp5021 == NULL);
bool $tmp5023 = $tmp5022.value;
if ($tmp5023) goto block3; else goto block4;
block3:;
// line 2429
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5024 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5024));
// unreffing params
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2431
org$pandalanguage$pandac$FixedArray* $tmp5025 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
org$pandalanguage$pandac$FixedArray* $tmp5026 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
*(&local2) = $tmp5025;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
// unreffing REF($43:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2432
org$pandalanguage$pandac$FixedArray* $tmp5027 = *(&local2);
panda$core$Bit $tmp5028 = panda$core$Bit$init$builtin_bit($tmp5027 == NULL);
bool $tmp5029 = $tmp5028.value;
if ($tmp5029) goto block5; else goto block6;
block5:;
// line 2433
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5030 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5030));
// unreffing b
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5031 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5031));
// unreffing params
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2435
org$pandalanguage$pandac$ASTNode* $tmp5032 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5033 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$nullable $tmp5034 = *(&local0);
org$pandalanguage$pandac$Position $tmp5035 = ((org$pandalanguage$pandac$parser$Token) $tmp5034.value).position;
panda$core$Int64 $tmp5036 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp5037 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp5036);
org$pandalanguage$pandac$FixedArray* $tmp5038 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5039 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5032, $tmp5033, $tmp5035, param1, param2, $tmp5037, &$s5040, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp5038, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp5039);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5032));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5032));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp5041 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5041));
// unreffing b
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5042 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5042));
// unreffing params
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5032;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
// line 2443
org$pandalanguage$pandac$ASTNode* $tmp5043 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5043));
org$pandalanguage$pandac$ASTNode* $tmp5044 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5044));
*(&local0) = $tmp5043;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5043));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 2444
org$pandalanguage$pandac$ASTNode* $tmp5045 = *(&local0);
panda$core$Bit $tmp5046 = panda$core$Bit$init$builtin_bit($tmp5045 == NULL);
bool $tmp5047 = $tmp5046.value;
if ($tmp5047) goto block1; else goto block2;
block1:;
// line 2445
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5048 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5048));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2447
org$pandalanguage$pandac$ASTNode* $tmp5049 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5050 = (panda$core$Int64) {18};
org$pandalanguage$pandac$ASTNode* $tmp5051 = *(&local0);
$fn5053 $tmp5052 = ($fn5053) $tmp5051->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp5054 = $tmp5052($tmp5051);
org$pandalanguage$pandac$ASTNode* $tmp5055 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp5049, $tmp5050, $tmp5054, param1, param2, $tmp5055);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5049));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5049));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp5056 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5056));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5049;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2454
panda$core$Int64 $tmp5057 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5058 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5057);
org$pandalanguage$pandac$parser$Token$nullable $tmp5059 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5058, &$s5060);
*(&local0) = $tmp5059;
// line 2455
org$pandalanguage$pandac$parser$Token$nullable $tmp5061 = *(&local0);
panda$core$Bit $tmp5062 = panda$core$Bit$init$builtin_bit(!$tmp5061.nonnull);
bool $tmp5063 = $tmp5062.value;
if ($tmp5063) goto block1; else goto block2;
block1:;
// line 2456
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2458
panda$collections$Array* $tmp5064 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5064);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5064));
panda$collections$Array* $tmp5065 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5065));
*(&local1) = $tmp5064;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5064));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2459
panda$core$Int64 $tmp5066 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp5067 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5066);
org$pandalanguage$pandac$parser$Token$nullable $tmp5068 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5067);
panda$core$Bit $tmp5069 = panda$core$Bit$init$builtin_bit($tmp5068.nonnull);
bool $tmp5070 = $tmp5069.value;
if ($tmp5070) goto block3; else goto block4;
block3:;
// line 2460
org$pandalanguage$pandac$parser$Token $tmp5071 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5072 = $tmp5071.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5073;
$tmp5073 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5073->value = $tmp5072;
panda$core$Int64 $tmp5074 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5075 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5074);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5076;
$tmp5076 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5076->value = $tmp5075;
ITable* $tmp5077 = ((panda$core$Equatable*) $tmp5073)->$class->itable;
while ($tmp5077->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5077 = $tmp5077->next;
}
$fn5079 $tmp5078 = $tmp5077->methods[1];
panda$core$Bit $tmp5080 = $tmp5078(((panda$core$Equatable*) $tmp5073), ((panda$core$Equatable*) $tmp5076));
bool $tmp5081 = $tmp5080.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5076)));
// unreffing REF($44:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5073)));
// unreffing REF($40:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5081) goto block5; else goto block6;
block5:;
// line 2461
org$pandalanguage$pandac$ASTNode* $tmp5082 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
org$pandalanguage$pandac$ASTNode* $tmp5083 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5083));
*(&local2) = $tmp5082;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5082));
// unreffing REF($56:org.pandalanguage.pandac.ASTNode?)
// line 2462
org$pandalanguage$pandac$ASTNode* $tmp5084 = *(&local2);
panda$core$Bit $tmp5085 = panda$core$Bit$init$builtin_bit($tmp5084 == NULL);
bool $tmp5086 = $tmp5085.value;
if ($tmp5086) goto block7; else goto block8;
block7:;
// line 2463
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5087 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5087));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5088 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5088));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2465
panda$collections$Array* $tmp5089 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5090 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5089, ((panda$core$Object*) $tmp5090));
// line 2466
goto block9;
block9:;
panda$core$Int64 $tmp5091 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5092 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5091);
org$pandalanguage$pandac$parser$Token$nullable $tmp5093 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5092);
panda$core$Bit $tmp5094 = panda$core$Bit$init$builtin_bit($tmp5093.nonnull);
bool $tmp5095 = $tmp5094.value;
if ($tmp5095) goto block10; else goto block11;
block10:;
// line 2467
org$pandalanguage$pandac$ASTNode* $tmp5096 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
org$pandalanguage$pandac$ASTNode* $tmp5097 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5097));
*(&local2) = $tmp5096;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
// unreffing REF($104:org.pandalanguage.pandac.ASTNode?)
// line 2468
org$pandalanguage$pandac$ASTNode* $tmp5098 = *(&local2);
panda$core$Bit $tmp5099 = panda$core$Bit$init$builtin_bit($tmp5098 == NULL);
bool $tmp5100 = $tmp5099.value;
if ($tmp5100) goto block12; else goto block13;
block12:;
// line 2469
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5101 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5101));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5102 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5102));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2471
panda$collections$Array* $tmp5103 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5104 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5103, ((panda$core$Object*) $tmp5104));
goto block9;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp5105 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5105));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 2474
panda$core$Int64 $tmp5106 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5107 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5106);
org$pandalanguage$pandac$parser$Token$nullable $tmp5108 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5107, &$s5109);
panda$core$Bit $tmp5110 = panda$core$Bit$init$builtin_bit(!$tmp5108.nonnull);
bool $tmp5111 = $tmp5110.value;
if ($tmp5111) goto block14; else goto block15;
block14:;
// line 2475
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5112 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5112));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2478
org$pandalanguage$pandac$ASTNode* $tmp5113 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5114 = (panda$core$Int64) {10};
org$pandalanguage$pandac$parser$Token$nullable $tmp5115 = *(&local0);
org$pandalanguage$pandac$Position $tmp5116 = ((org$pandalanguage$pandac$parser$Token) $tmp5115.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp5117 = *(&local0);
panda$core$String* $tmp5118 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5117.value));
panda$collections$Array* $tmp5119 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5120 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5119);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5113, $tmp5114, $tmp5116, param1, $tmp5118, $tmp5120);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5120));
// unreffing REF($177:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5118));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5113));
// unreffing REF($167:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5121 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5121));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp5113;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$parser$Token local5;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$FixedArray* local7 = NULL;
org$pandalanguage$pandac$parser$Token local8;
panda$core$Bit local9;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
// line 2488
panda$core$Int64 $tmp5122 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$Kind $tmp5123 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5122);
org$pandalanguage$pandac$parser$Token$nullable $tmp5124 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5123, &$s5125);
*(&local0) = $tmp5124;
// line 2489
org$pandalanguage$pandac$parser$Token$nullable $tmp5126 = *(&local0);
panda$core$Bit $tmp5127 = panda$core$Bit$init$builtin_bit(!$tmp5126.nonnull);
bool $tmp5128 = $tmp5127.value;
if ($tmp5128) goto block1; else goto block2;
block1:;
// line 2490
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2492
panda$core$Int64 $tmp5129 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5130 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5129);
org$pandalanguage$pandac$parser$Token$nullable $tmp5131 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5130, &$s5132);
*(&local1) = $tmp5131;
// line 2493
org$pandalanguage$pandac$parser$Token$nullable $tmp5133 = *(&local1);
panda$core$Bit $tmp5134 = panda$core$Bit$init$builtin_bit(!$tmp5133.nonnull);
bool $tmp5135 = $tmp5134.value;
if ($tmp5135) goto block3; else goto block4;
block3:;
// line 2494
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2496
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2497
org$pandalanguage$pandac$parser$Token $tmp5136 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5137 = $tmp5136.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5138;
$tmp5138 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5138->value = $tmp5137;
panda$core$Int64 $tmp5139 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5140 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5139);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5141;
$tmp5141 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5141->value = $tmp5140;
ITable* $tmp5142 = ((panda$core$Equatable*) $tmp5138)->$class->itable;
while ($tmp5142->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5142 = $tmp5142->next;
}
$fn5144 $tmp5143 = $tmp5142->methods[0];
panda$core$Bit $tmp5145 = $tmp5143(((panda$core$Equatable*) $tmp5138), ((panda$core$Equatable*) $tmp5141));
bool $tmp5146 = $tmp5145.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5141)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5138)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5146) goto block5; else goto block7;
block5:;
// line 2498
org$pandalanguage$pandac$FixedArray* $tmp5147 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5147));
org$pandalanguage$pandac$FixedArray* $tmp5148 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
*(&local2) = $tmp5147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5147));
// unreffing REF($51:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2499
org$pandalanguage$pandac$FixedArray* $tmp5149 = *(&local2);
panda$core$Bit $tmp5150 = panda$core$Bit$init$builtin_bit($tmp5149 == NULL);
bool $tmp5151 = $tmp5150.value;
if ($tmp5151) goto block8; else goto block9;
block8:;
// line 2500
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5152 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5152));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2504
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5153 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5153));
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block6;
block6:;
// line 2506
panda$core$Int64 $tmp5154 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5155 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5154);
org$pandalanguage$pandac$parser$Token$nullable $tmp5156 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5155, &$s5157);
panda$core$Bit $tmp5158 = panda$core$Bit$init$builtin_bit(!$tmp5156.nonnull);
bool $tmp5159 = $tmp5158.value;
if ($tmp5159) goto block10; else goto block11;
block10:;
// line 2507
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5160 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5160));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 2509
panda$collections$Array* $tmp5161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5161);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5161));
panda$collections$Array* $tmp5162 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5162));
*(&local3) = $tmp5161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5161));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2510
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5163 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5163));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2511
goto block12;
block12:;
// line 2512
org$pandalanguage$pandac$parser$Token $tmp5164 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp5164;
// line 2513
org$pandalanguage$pandac$parser$Token $tmp5165 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp5166 = $tmp5165.kind;
panda$core$Int64 $tmp5167 = $tmp5166.$rawValue;
panda$core$Int64 $tmp5168 = (panda$core$Int64) {18};
panda$core$Bit $tmp5169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5168);
bool $tmp5170 = $tmp5169.value;
if ($tmp5170) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5171 = (panda$core$Int64) {19};
panda$core$Bit $tmp5172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5171);
bool $tmp5173 = $tmp5172.value;
if ($tmp5173) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp5174 = (panda$core$Int64) {20};
panda$core$Bit $tmp5175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5174);
bool $tmp5176 = $tmp5175.value;
if ($tmp5176) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp5177 = (panda$core$Int64) {22};
panda$core$Bit $tmp5178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5177);
bool $tmp5179 = $tmp5178.value;
if ($tmp5179) goto block15; else goto block19;
block19:;
panda$core$Int64 $tmp5180 = (panda$core$Int64) {21};
panda$core$Bit $tmp5181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5180);
bool $tmp5182 = $tmp5181.value;
if ($tmp5182) goto block15; else goto block20;
block20:;
panda$core$Int64 $tmp5183 = (panda$core$Int64) {14};
panda$core$Bit $tmp5184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5183);
bool $tmp5185 = $tmp5184.value;
if ($tmp5185) goto block15; else goto block21;
block21:;
panda$core$Int64 $tmp5186 = (panda$core$Int64) {24};
panda$core$Bit $tmp5187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5186);
bool $tmp5188 = $tmp5187.value;
if ($tmp5188) goto block15; else goto block22;
block22:;
panda$core$Int64 $tmp5189 = (panda$core$Int64) {25};
panda$core$Bit $tmp5190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5189);
bool $tmp5191 = $tmp5190.value;
if ($tmp5191) goto block15; else goto block23;
block23:;
panda$core$Int64 $tmp5192 = (panda$core$Int64) {26};
panda$core$Bit $tmp5193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5192);
bool $tmp5194 = $tmp5193.value;
if ($tmp5194) goto block15; else goto block24;
block24:;
panda$core$Int64 $tmp5195 = (panda$core$Int64) {27};
panda$core$Bit $tmp5196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5195);
bool $tmp5197 = $tmp5196.value;
if ($tmp5197) goto block15; else goto block25;
block15:;
// line 2517
goto block13;
block25:;
panda$core$Int64 $tmp5198 = (panda$core$Int64) {12};
panda$core$Bit $tmp5199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5198);
bool $tmp5200 = $tmp5199.value;
if ($tmp5200) goto block26; else goto block27;
block26:;
// line 2520
org$pandalanguage$pandac$ASTNode* $tmp5201 = *(&local4);
panda$core$Bit $tmp5202 = panda$core$Bit$init$builtin_bit($tmp5201 != NULL);
bool $tmp5203 = $tmp5202.value;
if ($tmp5203) goto block28; else goto block29;
block28:;
// line 2521
org$pandalanguage$pandac$parser$Token $tmp5204 = *(&local5);
org$pandalanguage$pandac$parser$Token $tmp5205 = *(&local5);
panda$core$String* $tmp5206 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5205);
panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5208, $tmp5206);
panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5210);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5204, $tmp5209);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5209));
// unreffing REF($191:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5207));
// unreffing REF($190:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5206));
// unreffing REF($189:panda.core.String)
goto block29;
block29:;
// line 2523
org$pandalanguage$pandac$ASTNode* $tmp5211 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5211));
org$pandalanguage$pandac$ASTNode* $tmp5212 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5212));
*(&local4) = $tmp5211;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5211));
// unreffing REF($204:org.pandalanguage.pandac.ASTNode?)
goto block14;
block27:;
panda$core$Int64 $tmp5213 = (panda$core$Int64) {49};
panda$core$Bit $tmp5214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5167, $tmp5213);
bool $tmp5215 = $tmp5214.value;
if ($tmp5215) goto block30; else goto block31;
block30:;
// line 2526
org$pandalanguage$pandac$ASTNode* $tmp5216 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5217 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5216);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
org$pandalanguage$pandac$ASTNode* $tmp5218 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5218));
*(&local6) = $tmp5217;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
// unreffing REF($221:org.pandalanguage.pandac.ASTNode?)
// line 2527
org$pandalanguage$pandac$ASTNode* $tmp5219 = *(&local6);
panda$core$Bit $tmp5220 = panda$core$Bit$init$builtin_bit($tmp5219 == NULL);
bool $tmp5221 = $tmp5220.value;
if ($tmp5221) goto block32; else goto block33;
block32:;
// line 2528
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5222 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5222));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5223 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5223));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5224 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5224));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5225 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5225));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block33:;
// line 2530
panda$collections$Array* $tmp5226 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5227 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5226, ((panda$core$Object*) $tmp5227));
// line 2531
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5228 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5228));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5229 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5229));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block31:;
// line 2534
goto block13;
block14:;
goto block12;
block13:;
// line 2538
org$pandalanguage$pandac$FixedArray* $tmp5230 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5230);
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5230));
org$pandalanguage$pandac$FixedArray* $tmp5231 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
*(&local7) = $tmp5230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5230));
// unreffing REF($286:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
// line 2539
goto block34;
block34:;
// line 2540
org$pandalanguage$pandac$parser$Token $tmp5232 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local8) = $tmp5232;
// line 2541
org$pandalanguage$pandac$parser$Token $tmp5233 = *(&local8);
org$pandalanguage$pandac$parser$Token$Kind $tmp5234 = $tmp5233.kind;
panda$core$Int64 $tmp5235 = $tmp5234.$rawValue;
panda$core$Int64 $tmp5236 = (panda$core$Int64) {14};
panda$core$Bit $tmp5237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5236);
bool $tmp5238 = $tmp5237.value;
if ($tmp5238) goto block37; else goto block38;
block37:;
// line 2543
org$pandalanguage$pandac$FixedArray* $tmp5239 = *(&local7);
ITable* $tmp5240 = ((panda$collections$CollectionView*) $tmp5239)->$class->itable;
while ($tmp5240->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5240 = $tmp5240->next;
}
$fn5242 $tmp5241 = $tmp5240->methods[0];
panda$core$Int64 $tmp5243 = $tmp5241(((panda$collections$CollectionView*) $tmp5239));
panda$core$Int64 $tmp5244 = (panda$core$Int64) {0};
int64_t $tmp5245 = $tmp5243.value;
int64_t $tmp5246 = $tmp5244.value;
bool $tmp5247 = $tmp5245 > $tmp5246;
panda$core$Bit $tmp5248 = (panda$core$Bit) {$tmp5247};
bool $tmp5249 = $tmp5248.value;
if ($tmp5249) goto block39; else goto block40;
block39:;
// line 2544
org$pandalanguage$pandac$parser$Token $tmp5250 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5251 = *(&local8);
panda$core$String* $tmp5252 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5251);
panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5254, $tmp5252);
panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, &$s5256);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5250, $tmp5255);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5255));
// unreffing REF($329:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5253));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
// unreffing REF($327:panda.core.String)
// line 2545
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5257 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5257));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5258 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5258));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5259 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5260 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5260));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 2547
org$pandalanguage$pandac$FixedArray* $tmp5261 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5261));
org$pandalanguage$pandac$FixedArray* $tmp5262 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5262));
*(&local7) = $tmp5261;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5261));
// unreffing REF($365:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
goto block36;
block38:;
panda$core$Int64 $tmp5263 = (panda$core$Int64) {12};
panda$core$Bit $tmp5264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5263);
bool $tmp5265 = $tmp5264.value;
if ($tmp5265) goto block41; else goto block42;
block41:;
// line 2550
org$pandalanguage$pandac$ASTNode* $tmp5266 = *(&local4);
panda$core$Bit $tmp5267 = panda$core$Bit$init$builtin_bit($tmp5266 != NULL);
bool $tmp5268 = $tmp5267.value;
if ($tmp5268) goto block45; else goto block46;
block45:;
*(&local9) = $tmp5267;
goto block47;
block46:;
org$pandalanguage$pandac$FixedArray* $tmp5269 = *(&local7);
ITable* $tmp5270 = ((panda$collections$CollectionView*) $tmp5269)->$class->itable;
while ($tmp5270->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5270 = $tmp5270->next;
}
$fn5272 $tmp5271 = $tmp5270->methods[0];
panda$core$Int64 $tmp5273 = $tmp5271(((panda$collections$CollectionView*) $tmp5269));
panda$core$Int64 $tmp5274 = (panda$core$Int64) {0};
int64_t $tmp5275 = $tmp5273.value;
int64_t $tmp5276 = $tmp5274.value;
bool $tmp5277 = $tmp5275 > $tmp5276;
panda$core$Bit $tmp5278 = (panda$core$Bit) {$tmp5277};
*(&local9) = $tmp5278;
goto block47;
block47:;
panda$core$Bit $tmp5279 = *(&local9);
bool $tmp5280 = $tmp5279.value;
if ($tmp5280) goto block43; else goto block44;
block43:;
// line 2551
org$pandalanguage$pandac$parser$Token $tmp5281 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5282 = *(&local8);
panda$core$String* $tmp5283 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5282);
panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5285, $tmp5283);
panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5287);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5281, $tmp5286);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5286));
// unreffing REF($407:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5284));
// unreffing REF($406:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5283));
// unreffing REF($405:panda.core.String)
// line 2552
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5288 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5289 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5290 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5290));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5291 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5291));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block44:;
// line 2554
org$pandalanguage$pandac$ASTNode* $tmp5292 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5292));
org$pandalanguage$pandac$ASTNode* $tmp5293 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5293));
*(&local4) = $tmp5292;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5292));
// unreffing REF($443:org.pandalanguage.pandac.ASTNode?)
goto block36;
block42:;
panda$core$Int64 $tmp5294 = (panda$core$Int64) {18};
panda$core$Bit $tmp5295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5294);
bool $tmp5296 = $tmp5295.value;
if ($tmp5296) goto block48; else goto block49;
block48:;
// line 2557
org$pandalanguage$pandac$ASTNode* $tmp5297 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5298 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5299 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5297, $tmp5298);
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5299));
org$pandalanguage$pandac$ASTNode* $tmp5300 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5300));
*(&local10) = $tmp5299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5299));
// unreffing REF($461:org.pandalanguage.pandac.ASTNode?)
// line 2558
org$pandalanguage$pandac$ASTNode* $tmp5301 = *(&local10);
panda$core$Bit $tmp5302 = panda$core$Bit$init$builtin_bit($tmp5301 == NULL);
bool $tmp5303 = $tmp5302.value;
if ($tmp5303) goto block50; else goto block51;
block50:;
// line 2559
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5304 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5305 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5305));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5306 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5306));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5307 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5307));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5308 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5308));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block51:;
// line 2561
panda$collections$Array* $tmp5309 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5310 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp5309, ((panda$core$Object*) $tmp5310));
// line 2562
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5311 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5311));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2563
org$pandalanguage$pandac$FixedArray* $tmp5312 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5312);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
org$pandalanguage$pandac$FixedArray* $tmp5313 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5313));
*(&local7) = $tmp5312;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
// unreffing REF($522:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5314 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5314));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block49:;
panda$core$Int64 $tmp5315 = (panda$core$Int64) {19};
panda$core$Bit $tmp5316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5315);
bool $tmp5317 = $tmp5316.value;
if ($tmp5317) goto block52; else goto block53;
block52:;
// line 2566
org$pandalanguage$pandac$ASTNode* $tmp5318 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5319 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5320 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5318, $tmp5319);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5320));
org$pandalanguage$pandac$ASTNode* $tmp5321 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5321));
*(&local11) = $tmp5320;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5320));
// unreffing REF($547:org.pandalanguage.pandac.ASTNode?)
// line 2567
org$pandalanguage$pandac$ASTNode* $tmp5322 = *(&local11);
panda$core$Bit $tmp5323 = panda$core$Bit$init$builtin_bit($tmp5322 == NULL);
bool $tmp5324 = $tmp5323.value;
if ($tmp5324) goto block54; else goto block55;
block54:;
// line 2568
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5325 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5325));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5326 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5326));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5327 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5327));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5328 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5328));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5329 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5329));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block55:;
// line 2570
panda$collections$Array* $tmp5330 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5331 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp5330, ((panda$core$Object*) $tmp5331));
// line 2571
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5332 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2572
org$pandalanguage$pandac$FixedArray* $tmp5333 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5333);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5333));
org$pandalanguage$pandac$FixedArray* $tmp5334 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5334));
*(&local7) = $tmp5333;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5333));
// unreffing REF($608:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5335 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block53:;
panda$core$Int64 $tmp5336 = (panda$core$Int64) {20};
panda$core$Bit $tmp5337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5336);
bool $tmp5338 = $tmp5337.value;
if ($tmp5338) goto block56; else goto block57;
block56:;
// line 2575
org$pandalanguage$pandac$ASTNode* $tmp5339 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5340 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5341 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5339, $tmp5340);
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
org$pandalanguage$pandac$ASTNode* $tmp5342 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5342));
*(&local12) = $tmp5341;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
// unreffing REF($633:org.pandalanguage.pandac.ASTNode?)
// line 2576
org$pandalanguage$pandac$ASTNode* $tmp5343 = *(&local12);
panda$core$Bit $tmp5344 = panda$core$Bit$init$builtin_bit($tmp5343 == NULL);
bool $tmp5345 = $tmp5344.value;
if ($tmp5345) goto block58; else goto block59;
block58:;
// line 2577
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5346 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5346));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5347 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5348 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5348));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5349 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5349));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5350 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5350));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block59:;
// line 2579
panda$collections$Array* $tmp5351 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5352 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp5351, ((panda$core$Object*) $tmp5352));
// line 2580
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5353 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5353));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2581
org$pandalanguage$pandac$FixedArray* $tmp5354 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5354);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
org$pandalanguage$pandac$FixedArray* $tmp5355 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5355));
*(&local7) = $tmp5354;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
// unreffing REF($694:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5356 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5356));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block57:;
panda$core$Int64 $tmp5357 = (panda$core$Int64) {22};
panda$core$Bit $tmp5358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5357);
bool $tmp5359 = $tmp5358.value;
if ($tmp5359) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp5360 = (panda$core$Int64) {21};
panda$core$Bit $tmp5361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5360);
bool $tmp5362 = $tmp5361.value;
if ($tmp5362) goto block60; else goto block62;
block60:;
// line 2584
org$pandalanguage$pandac$ASTNode* $tmp5363 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5364 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5365 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5363, $tmp5364);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5365));
org$pandalanguage$pandac$ASTNode* $tmp5366 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
*(&local13) = $tmp5365;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5365));
// unreffing REF($723:org.pandalanguage.pandac.ASTNode?)
// line 2585
org$pandalanguage$pandac$ASTNode* $tmp5367 = *(&local13);
panda$core$Bit $tmp5368 = panda$core$Bit$init$builtin_bit($tmp5367 == NULL);
bool $tmp5369 = $tmp5368.value;
if ($tmp5369) goto block63; else goto block64;
block63:;
// line 2586
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5370 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5370));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5371 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5371));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5372 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5372));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5373 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5373));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5374 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5374));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block64:;
// line 2588
panda$collections$Array* $tmp5375 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5376 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp5375, ((panda$core$Object*) $tmp5376));
// line 2589
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5377 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5377));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2590
org$pandalanguage$pandac$FixedArray* $tmp5378 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5378);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5378));
org$pandalanguage$pandac$FixedArray* $tmp5379 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5379));
*(&local7) = $tmp5378;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5378));
// unreffing REF($784:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5380 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5380));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block62:;
panda$core$Int64 $tmp5381 = (panda$core$Int64) {24};
panda$core$Bit $tmp5382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5381);
bool $tmp5383 = $tmp5382.value;
if ($tmp5383) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp5384 = (panda$core$Int64) {25};
panda$core$Bit $tmp5385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5384);
bool $tmp5386 = $tmp5385.value;
if ($tmp5386) goto block65; else goto block67;
block67:;
panda$core$Int64 $tmp5387 = (panda$core$Int64) {26};
panda$core$Bit $tmp5388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5387);
bool $tmp5389 = $tmp5388.value;
if ($tmp5389) goto block65; else goto block68;
block68:;
panda$core$Int64 $tmp5390 = (panda$core$Int64) {27};
panda$core$Bit $tmp5391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5390);
bool $tmp5392 = $tmp5391.value;
if ($tmp5392) goto block65; else goto block69;
block65:;
// line 2593
org$pandalanguage$pandac$ASTNode* $tmp5393 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5394 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5395 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5393, $tmp5394);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5395));
org$pandalanguage$pandac$ASTNode* $tmp5396 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5396));
*(&local14) = $tmp5395;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5395));
// unreffing REF($821:org.pandalanguage.pandac.ASTNode?)
// line 2594
org$pandalanguage$pandac$ASTNode* $tmp5397 = *(&local14);
panda$core$Bit $tmp5398 = panda$core$Bit$init$builtin_bit($tmp5397 == NULL);
bool $tmp5399 = $tmp5398.value;
if ($tmp5399) goto block70; else goto block71;
block70:;
// line 2595
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5400 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5400));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5401 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5401));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5402 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5402));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5403 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5404 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5404));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block71:;
// line 2597
panda$collections$Array* $tmp5405 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5406 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp5405, ((panda$core$Object*) $tmp5406));
// line 2598
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5407 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5407));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2599
org$pandalanguage$pandac$FixedArray* $tmp5408 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5408);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5408));
org$pandalanguage$pandac$FixedArray* $tmp5409 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5409));
*(&local7) = $tmp5408;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5408));
// unreffing REF($882:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5410 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5410));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block69:;
panda$core$Int64 $tmp5411 = (panda$core$Int64) {101};
panda$core$Bit $tmp5412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5235, $tmp5411);
bool $tmp5413 = $tmp5412.value;
if ($tmp5413) goto block72; else goto block73;
block72:;
// line 2602
panda$core$Int64 $tmp5414 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5415 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5414);
org$pandalanguage$pandac$parser$Token$nullable $tmp5416 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5415, &$s5417);
// line 2603
goto block35;
block73:;
// line 2606
org$pandalanguage$pandac$parser$Token $tmp5418 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5419 = *(&local8);
panda$core$String* $tmp5420 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5419);
panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5422, $tmp5420);
panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5421, &$s5424);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5418, $tmp5423);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5423));
// unreffing REF($915:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5421));
// unreffing REF($914:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5420));
// unreffing REF($913:panda.core.String)
// line 2607
org$pandalanguage$pandac$parser$Token $tmp5425 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2608
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5426 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5426));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5427 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5427));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5428 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5428));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5429 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5429));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2612
org$pandalanguage$pandac$ASTNode* $tmp5430 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5431 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp5432 = *(&local0);
org$pandalanguage$pandac$Position $tmp5433 = ((org$pandalanguage$pandac$parser$Token) $tmp5432.value).position;
panda$core$Int64 $tmp5434 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5435 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5434);
org$pandalanguage$pandac$parser$Token$nullable $tmp5436 = *(&local1);
panda$core$String* $tmp5437 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5436.value));
org$pandalanguage$pandac$FixedArray* $tmp5438 = *(&local2);
panda$collections$Array* $tmp5439 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp5440 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5439);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5430, $tmp5431, $tmp5433, param1, param2, $tmp5435, $tmp5437, $tmp5438, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp5440);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
// unreffing REF($967:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5437));
// unreffing REF($963:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5430));
// unreffing REF($954:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp5441 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5441));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5442 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5442));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5443 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5443));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5444 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5444));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5430;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
// line 2622
org$pandalanguage$pandac$parser$Token $tmp5445 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp5445;
// line 2623
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2624
org$pandalanguage$pandac$parser$Token $tmp5446 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5447 = $tmp5446.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5448;
$tmp5448 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5448->value = $tmp5447;
panda$core$Int64 $tmp5449 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp5450 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5449);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5451;
$tmp5451 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5451->value = $tmp5450;
ITable* $tmp5452 = ((panda$core$Equatable*) $tmp5448)->$class->itable;
while ($tmp5452->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5452 = $tmp5452->next;
}
$fn5454 $tmp5453 = $tmp5452->methods[0];
panda$core$Bit $tmp5455 = $tmp5453(((panda$core$Equatable*) $tmp5448), ((panda$core$Equatable*) $tmp5451));
bool $tmp5456 = $tmp5455.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5451)));
// unreffing REF($12:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5448)));
// unreffing REF($8:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5456) goto block1; else goto block3;
block1:;
// line 2625
org$pandalanguage$pandac$ASTNode* $tmp5457 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5457));
org$pandalanguage$pandac$ASTNode* $tmp5458 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5458));
*(&local1) = $tmp5457;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5457));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
// line 2626
org$pandalanguage$pandac$ASTNode* $tmp5459 = *(&local1);
panda$core$Bit $tmp5460 = panda$core$Bit$init$builtin_bit($tmp5459 == NULL);
bool $tmp5461 = $tmp5460.value;
if ($tmp5461) goto block4; else goto block5;
block4:;
// line 2627
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5462 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5462));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2631
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5463 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2633
org$pandalanguage$pandac$FixedArray* $tmp5464 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5464));
org$pandalanguage$pandac$FixedArray* $tmp5465 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5465));
*(&local2) = $tmp5464;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5464));
// unreffing REF($60:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
// line 2634
org$pandalanguage$pandac$FixedArray* $tmp5466 = *(&local2);
panda$core$Bit $tmp5467 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5468 = $tmp5467.value;
if ($tmp5468) goto block6; else goto block7;
block6:;
// line 2635
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5469 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5469));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5470 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5470));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2637
org$pandalanguage$pandac$parser$Token $tmp5471 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5472 = $tmp5471.kind;
panda$core$Int64 $tmp5473 = $tmp5472.$rawValue;
panda$core$Int64 $tmp5474 = (panda$core$Int64) {18};
panda$core$Bit $tmp5475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5474);
bool $tmp5476 = $tmp5475.value;
if ($tmp5476) goto block9; else goto block10;
block9:;
// line 2639
org$pandalanguage$pandac$ASTNode* $tmp5477 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5478 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5479 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5477, $tmp5478);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5479));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5479));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5480 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5480));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5481 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5481));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5479;
block10:;
panda$core$Int64 $tmp5482 = (panda$core$Int64) {19};
panda$core$Bit $tmp5483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5482);
bool $tmp5484 = $tmp5483.value;
if ($tmp5484) goto block11; else goto block12;
block11:;
// line 2642
org$pandalanguage$pandac$ASTNode* $tmp5485 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5486 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5487 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5485, $tmp5486);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5487));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5487));
// unreffing REF($125:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5488 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5488));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5489 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5489));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5487;
block12:;
panda$core$Int64 $tmp5490 = (panda$core$Int64) {20};
panda$core$Bit $tmp5491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5490);
bool $tmp5492 = $tmp5491.value;
if ($tmp5492) goto block13; else goto block14;
block13:;
// line 2645
org$pandalanguage$pandac$ASTNode* $tmp5493 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5494 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5495 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5493, $tmp5494);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5495));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5495));
// unreffing REF($149:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5496 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5496));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5497 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5497));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5495;
block14:;
panda$core$Int64 $tmp5498 = (panda$core$Int64) {22};
panda$core$Bit $tmp5499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5498);
bool $tmp5500 = $tmp5499.value;
if ($tmp5500) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5501 = (panda$core$Int64) {21};
panda$core$Bit $tmp5502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5501);
bool $tmp5503 = $tmp5502.value;
if ($tmp5503) goto block15; else goto block17;
block15:;
// line 2648
org$pandalanguage$pandac$ASTNode* $tmp5504 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5505 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5506 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5504, $tmp5505);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5506));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5506));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5507 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5507));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5508 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5508));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5506;
block17:;
panda$core$Int64 $tmp5509 = (panda$core$Int64) {23};
panda$core$Bit $tmp5510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5509);
bool $tmp5511 = $tmp5510.value;
if ($tmp5511) goto block18; else goto block19;
block18:;
// line 2651
org$pandalanguage$pandac$ASTNode* $tmp5512 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5513 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5514 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5512, $tmp5513);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5514));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5514));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5515 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5515));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5516 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5516));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5514;
block19:;
panda$core$Int64 $tmp5517 = (panda$core$Int64) {24};
panda$core$Bit $tmp5518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5517);
bool $tmp5519 = $tmp5518.value;
if ($tmp5519) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp5520 = (panda$core$Int64) {25};
panda$core$Bit $tmp5521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5520);
bool $tmp5522 = $tmp5521.value;
if ($tmp5522) goto block20; else goto block22;
block22:;
panda$core$Int64 $tmp5523 = (panda$core$Int64) {26};
panda$core$Bit $tmp5524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5523);
bool $tmp5525 = $tmp5524.value;
if ($tmp5525) goto block20; else goto block23;
block23:;
panda$core$Int64 $tmp5526 = (panda$core$Int64) {27};
panda$core$Bit $tmp5527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5473, $tmp5526);
bool $tmp5528 = $tmp5527.value;
if ($tmp5528) goto block20; else goto block24;
block20:;
// line 2654
org$pandalanguage$pandac$ASTNode* $tmp5529 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5530 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5531 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5529, $tmp5530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5531));
// unreffing REF($237:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5532 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5532));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5533 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5533));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5531;
block24:;
// line 2658
panda$core$Int64 $tmp5534 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5535 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5534);
org$pandalanguage$pandac$parser$Token$nullable $tmp5536 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5535, &$s5537);
// line 2659
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5538 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5538));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5539 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5539));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
panda$core$Bit $tmp5540 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5541 = $tmp5540.value;
if ($tmp5541) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp5542 = (panda$core$Int64) {2621};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5543, $tmp5542, &$s5544);
abort(); // unreachable
block25:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
// line 2668
panda$core$Int64 $tmp5545 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5546 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5545);
org$pandalanguage$pandac$parser$Token$nullable $tmp5547 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5546, &$s5548);
*(&local0) = $tmp5547;
// line 2669
org$pandalanguage$pandac$parser$Token$nullable $tmp5549 = *(&local0);
panda$core$Bit $tmp5550 = panda$core$Bit$init$builtin_bit(!$tmp5549.nonnull);
bool $tmp5551 = $tmp5550.value;
if ($tmp5551) goto block1; else goto block2;
block1:;
// line 2670
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2672
panda$core$Int64 $tmp5552 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5553 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5552);
org$pandalanguage$pandac$parser$Token$nullable $tmp5554 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5553, &$s5555);
*(&local1) = $tmp5554;
// line 2673
org$pandalanguage$pandac$parser$Token$nullable $tmp5556 = *(&local1);
panda$core$Bit $tmp5557 = panda$core$Bit$init$builtin_bit(!$tmp5556.nonnull);
bool $tmp5558 = $tmp5557.value;
if ($tmp5558) goto block3; else goto block4;
block3:;
// line 2674
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2676
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2677
org$pandalanguage$pandac$parser$Token $tmp5559 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5560 = $tmp5559.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5561;
$tmp5561 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5561->value = $tmp5560;
panda$core$Int64 $tmp5562 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5563 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5562);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5564;
$tmp5564 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5564->value = $tmp5563;
ITable* $tmp5565 = ((panda$core$Equatable*) $tmp5561)->$class->itable;
while ($tmp5565->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5565 = $tmp5565->next;
}
$fn5567 $tmp5566 = $tmp5565->methods[0];
panda$core$Bit $tmp5568 = $tmp5566(((panda$core$Equatable*) $tmp5561), ((panda$core$Equatable*) $tmp5564));
bool $tmp5569 = $tmp5568.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5564)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5561)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5569) goto block5; else goto block7;
block5:;
// line 2678
org$pandalanguage$pandac$FixedArray* $tmp5570 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5570));
org$pandalanguage$pandac$FixedArray* $tmp5571 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5571));
*(&local2) = $tmp5570;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5570));
// unreffing REF($51:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2679
org$pandalanguage$pandac$FixedArray* $tmp5572 = *(&local2);
panda$core$Bit $tmp5573 = panda$core$Bit$init$builtin_bit($tmp5572 == NULL);
bool $tmp5574 = $tmp5573.value;
if ($tmp5574) goto block8; else goto block9;
block8:;
// line 2680
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5575 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5575));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2684
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5576 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5576));
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block6;
block6:;
// line 2686
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2687
org$pandalanguage$pandac$parser$Token $tmp5577 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5578 = $tmp5577.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5579;
$tmp5579 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5579->value = $tmp5578;
panda$core$Int64 $tmp5580 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5581 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5580);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5582;
$tmp5582 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5582->value = $tmp5581;
ITable* $tmp5583 = ((panda$core$Equatable*) $tmp5579)->$class->itable;
while ($tmp5583->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5583 = $tmp5583->next;
}
$fn5585 $tmp5584 = $tmp5583->methods[0];
panda$core$Bit $tmp5586 = $tmp5584(((panda$core$Equatable*) $tmp5579), ((panda$core$Equatable*) $tmp5582));
bool $tmp5587 = $tmp5586.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5582)));
// unreffing REF($95:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5579)));
// unreffing REF($91:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5587) goto block10; else goto block12;
block10:;
// line 2688
org$pandalanguage$pandac$FixedArray* $tmp5588 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5588));
org$pandalanguage$pandac$FixedArray* $tmp5589 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5589));
*(&local3) = $tmp5588;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5588));
// unreffing REF($107:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2689
org$pandalanguage$pandac$FixedArray* $tmp5590 = *(&local3);
panda$core$Bit $tmp5591 = panda$core$Bit$init$builtin_bit($tmp5590 == NULL);
bool $tmp5592 = $tmp5591.value;
if ($tmp5592) goto block13; else goto block14;
block13:;
// line 2690
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5593 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5593));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5594 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5594));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2694
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5595 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5595));
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block11;
block11:;
// line 2696
panda$core$Int64 $tmp5596 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5597 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5596);
org$pandalanguage$pandac$parser$Token$nullable $tmp5598 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5597, &$s5599);
panda$core$Bit $tmp5600 = panda$core$Bit$init$builtin_bit(!$tmp5598.nonnull);
bool $tmp5601 = $tmp5600.value;
if ($tmp5601) goto block15; else goto block16;
block15:;
// line 2697
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5602 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5603 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5603));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2699
panda$collections$Array* $tmp5604 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5604);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5604));
panda$collections$Array* $tmp5605 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5605));
*(&local4) = $tmp5604;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5604));
// unreffing REF($170:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2700
goto block17;
block17:;
panda$core$Int64 $tmp5606 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5607 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5606);
org$pandalanguage$pandac$parser$Token$nullable $tmp5608 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5607);
panda$core$Bit $tmp5609 = panda$core$Bit$init$builtin_bit(!$tmp5608.nonnull);
bool $tmp5610 = $tmp5609.value;
if ($tmp5610) goto block18; else goto block19;
block18:;
// line 2701
org$pandalanguage$pandac$ASTNode* $tmp5611 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5611));
org$pandalanguage$pandac$ASTNode* $tmp5612 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5612));
*(&local5) = $tmp5611;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5611));
// unreffing REF($193:org.pandalanguage.pandac.ASTNode?)
// line 2702
org$pandalanguage$pandac$ASTNode* $tmp5613 = *(&local5);
panda$core$Bit $tmp5614 = panda$core$Bit$init$builtin_bit($tmp5613 == NULL);
bool $tmp5615 = $tmp5614.value;
if ($tmp5615) goto block20; else goto block21;
block20:;
// line 2703
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5616 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5616));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5617 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5617));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5618 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5618));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5619 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5619));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 2705
panda$collections$Array* $tmp5620 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5621 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp5620, ((panda$core$Object*) $tmp5621));
org$pandalanguage$pandac$ASTNode* $tmp5622 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5622));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block17;
block19:;
// line 2707
org$pandalanguage$pandac$ASTNode* $tmp5623 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5624 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp5625 = *(&local0);
org$pandalanguage$pandac$Position $tmp5626 = ((org$pandalanguage$pandac$parser$Token) $tmp5625.value).position;
panda$core$Int64 $tmp5627 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5628 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5627);
org$pandalanguage$pandac$parser$Token$nullable $tmp5629 = *(&local1);
panda$core$String* $tmp5630 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5629.value));
org$pandalanguage$pandac$FixedArray* $tmp5631 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp5632 = *(&local3);
panda$collections$Array* $tmp5633 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5634 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5633);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5623, $tmp5624, $tmp5626, param1, param2, $tmp5628, $tmp5630, $tmp5631, $tmp5632, $tmp5634);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5623));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5634));
// unreffing REF($262:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5630));
// unreffing REF($257:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5623));
// unreffing REF($248:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5635 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5635));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5636 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5636));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5637 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5637));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5623;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 2716
panda$core$Int64 $tmp5638 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$Kind $tmp5639 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5638);
org$pandalanguage$pandac$parser$Token$nullable $tmp5640 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5639, &$s5641);
*(&local0) = $tmp5640;
// line 2717
org$pandalanguage$pandac$parser$Token$nullable $tmp5642 = *(&local0);
panda$core$Bit $tmp5643 = panda$core$Bit$init$builtin_bit(!$tmp5642.nonnull);
bool $tmp5644 = $tmp5643.value;
if ($tmp5644) goto block1; else goto block2;
block1:;
// line 2718
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2720
panda$core$Int64 $tmp5645 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5646 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5645);
org$pandalanguage$pandac$parser$Token$nullable $tmp5647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5646, &$s5648);
*(&local1) = $tmp5647;
// line 2721
org$pandalanguage$pandac$parser$Token$nullable $tmp5649 = *(&local1);
panda$core$Bit $tmp5650 = panda$core$Bit$init$builtin_bit(!$tmp5649.nonnull);
bool $tmp5651 = $tmp5650.value;
if ($tmp5651) goto block3; else goto block4;
block3:;
// line 2722
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2724
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2725
org$pandalanguage$pandac$parser$Token $tmp5652 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5653 = $tmp5652.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5654;
$tmp5654 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5654->value = $tmp5653;
panda$core$Int64 $tmp5655 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5656 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5655);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5657;
$tmp5657 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5657->value = $tmp5656;
ITable* $tmp5658 = ((panda$core$Equatable*) $tmp5654)->$class->itable;
while ($tmp5658->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5658 = $tmp5658->next;
}
$fn5660 $tmp5659 = $tmp5658->methods[0];
panda$core$Bit $tmp5661 = $tmp5659(((panda$core$Equatable*) $tmp5654), ((panda$core$Equatable*) $tmp5657));
bool $tmp5662 = $tmp5661.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5657)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5654)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5662) goto block5; else goto block7;
block5:;
// line 2726
org$pandalanguage$pandac$FixedArray* $tmp5663 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5663));
org$pandalanguage$pandac$FixedArray* $tmp5664 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5664));
*(&local2) = $tmp5663;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5663));
// unreffing REF($51:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2727
org$pandalanguage$pandac$FixedArray* $tmp5665 = *(&local2);
panda$core$Bit $tmp5666 = panda$core$Bit$init$builtin_bit($tmp5665 == NULL);
bool $tmp5667 = $tmp5666.value;
if ($tmp5667) goto block8; else goto block9;
block8:;
// line 2728
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5668 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5668));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2732
org$pandalanguage$pandac$FixedArray* $tmp5669 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5669);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5669));
org$pandalanguage$pandac$FixedArray* $tmp5670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
*(&local2) = $tmp5669;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5669));
// unreffing REF($79:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
goto block6;
block6:;
// line 2734
panda$collections$Array* $tmp5671 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5671);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5671));
panda$collections$Array* $tmp5672 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5672));
*(&local3) = $tmp5671;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5671));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2735
panda$core$Int64 $tmp5673 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5674 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5673);
org$pandalanguage$pandac$parser$Token$nullable $tmp5675 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5674);
panda$core$Bit $tmp5676 = panda$core$Bit$init$builtin_bit($tmp5675.nonnull);
bool $tmp5677 = $tmp5676.value;
if ($tmp5677) goto block10; else goto block11;
block10:;
// line 2736
org$pandalanguage$pandac$ASTNode* $tmp5678 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
org$pandalanguage$pandac$ASTNode* $tmp5679 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5679));
*(&local4) = $tmp5678;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
// unreffing REF($116:org.pandalanguage.pandac.ASTNode?)
// line 2737
org$pandalanguage$pandac$ASTNode* $tmp5680 = *(&local4);
panda$core$Bit $tmp5681 = panda$core$Bit$init$builtin_bit($tmp5680 == NULL);
bool $tmp5682 = $tmp5681.value;
if ($tmp5682) goto block12; else goto block13;
block12:;
// line 2738
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5683 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5683));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5684 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5684));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5685 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5685));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2740
panda$collections$Array* $tmp5686 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5687 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5686, ((panda$core$Object*) $tmp5687));
// line 2741
goto block14;
block14:;
panda$core$Int64 $tmp5688 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5689 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5688);
org$pandalanguage$pandac$parser$Token$nullable $tmp5690 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5689);
panda$core$Bit $tmp5691 = panda$core$Bit$init$builtin_bit($tmp5690.nonnull);
bool $tmp5692 = $tmp5691.value;
if ($tmp5692) goto block15; else goto block16;
block15:;
// line 2742
org$pandalanguage$pandac$ASTNode* $tmp5693 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5693));
org$pandalanguage$pandac$ASTNode* $tmp5694 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5694));
*(&local4) = $tmp5693;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5693));
// unreffing REF($169:org.pandalanguage.pandac.ASTNode?)
// line 2743
org$pandalanguage$pandac$ASTNode* $tmp5695 = *(&local4);
panda$core$Bit $tmp5696 = panda$core$Bit$init$builtin_bit($tmp5695 == NULL);
bool $tmp5697 = $tmp5696.value;
if ($tmp5697) goto block17; else goto block18;
block17:;
// line 2744
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5698 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5698));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5699 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5699));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5700 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5700));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 2746
panda$collections$Array* $tmp5701 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5702 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5701, ((panda$core$Object*) $tmp5702));
goto block14;
block16:;
org$pandalanguage$pandac$ASTNode* $tmp5703 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5703));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 2749
panda$core$Int64 $tmp5704 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5705 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5704);
org$pandalanguage$pandac$parser$Token$nullable $tmp5706 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5705, &$s5707);
panda$core$Bit $tmp5708 = panda$core$Bit$init$builtin_bit(!$tmp5706.nonnull);
bool $tmp5709 = $tmp5708.value;
if ($tmp5709) goto block19; else goto block20;
block19:;
// line 2750
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5710 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5710));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5711 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5711));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 2752
panda$collections$Array* $tmp5712 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5712);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5712));
panda$collections$Array* $tmp5713 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5713));
*(&local5) = $tmp5712;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5712));
// unreffing REF($241:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2753
goto block21;
block21:;
panda$core$Int64 $tmp5714 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5715 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5714);
org$pandalanguage$pandac$parser$Token$nullable $tmp5716 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5715);
panda$core$Bit $tmp5717 = panda$core$Bit$init$builtin_bit(!$tmp5716.nonnull);
bool $tmp5718 = $tmp5717.value;
if ($tmp5718) goto block22; else goto block23;
block22:;
// line 2754
org$pandalanguage$pandac$ASTNode* $tmp5719 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5719));
org$pandalanguage$pandac$ASTNode* $tmp5720 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5720));
*(&local6) = $tmp5719;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5719));
// unreffing REF($264:org.pandalanguage.pandac.ASTNode?)
// line 2755
org$pandalanguage$pandac$ASTNode* $tmp5721 = *(&local6);
panda$core$Bit $tmp5722 = panda$core$Bit$init$builtin_bit($tmp5721 == NULL);
bool $tmp5723 = $tmp5722.value;
if ($tmp5723) goto block24; else goto block25;
block24:;
// line 2756
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5724 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5724));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5725 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5725));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5726 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5726));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5727 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5727));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 2758
panda$collections$Array* $tmp5728 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp5729 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5728, ((panda$core$Object*) $tmp5729));
org$pandalanguage$pandac$ASTNode* $tmp5730 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5730));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
// line 2760
org$pandalanguage$pandac$ASTNode* $tmp5731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5732 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp5733 = *(&local0);
org$pandalanguage$pandac$Position $tmp5734 = ((org$pandalanguage$pandac$parser$Token) $tmp5733.value).position;
panda$core$Int64 $tmp5735 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5736 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5735);
org$pandalanguage$pandac$parser$Token$nullable $tmp5737 = *(&local1);
panda$core$String* $tmp5738 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5737.value));
org$pandalanguage$pandac$FixedArray* $tmp5739 = *(&local2);
panda$collections$Array* $tmp5740 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp5741 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5740);
panda$collections$Array* $tmp5742 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp5743 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5742);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5731, $tmp5732, $tmp5734, param1, param2, $tmp5736, $tmp5738, $tmp5739, $tmp5741, $tmp5743);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5743));
// unreffing REF($337:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5741));
// unreffing REF($332:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5738));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
// unreffing REF($319:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5744 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5744));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5745 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5745));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5746 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5746));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5731;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 2769
org$pandalanguage$pandac$parser$Token $tmp5747 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5748 = $tmp5747.kind;
panda$core$Int64 $tmp5749 = $tmp5748.$rawValue;
panda$core$Int64 $tmp5750 = (panda$core$Int64) {16};
panda$core$Bit $tmp5751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5749, $tmp5750);
bool $tmp5752 = $tmp5751.value;
if ($tmp5752) goto block2; else goto block3;
block2:;
// line 2771
org$pandalanguage$pandac$ASTNode* $tmp5753 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5753));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5753));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp5753;
block3:;
// line 2774
org$pandalanguage$pandac$ASTNode* $tmp5754 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5754));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5754));
// unreffing REF($17:org.pandalanguage.pandac.ASTNode?)
return $tmp5754;
block1:;
panda$core$Bit $tmp5755 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5756 = $tmp5755.value;
if ($tmp5756) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp5757 = (panda$core$Int64) {2768};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5758, $tmp5757, &$s5759);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2783
panda$collections$Array* $tmp5760 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5760);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5760));
panda$collections$Array* $tmp5761 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5761));
*(&local0) = $tmp5760;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5760));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2784
org$pandalanguage$pandac$parser$Token $tmp5762 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5763 = $tmp5762.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5764;
$tmp5764 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5764->value = $tmp5763;
panda$core$Int64 $tmp5765 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp5766 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5765);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5767;
$tmp5767 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5767->value = $tmp5766;
ITable* $tmp5768 = ((panda$core$Equatable*) $tmp5764)->$class->itable;
while ($tmp5768->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5768 = $tmp5768->next;
}
$fn5770 $tmp5769 = $tmp5768->methods[0];
panda$core$Bit $tmp5771 = $tmp5769(((panda$core$Equatable*) $tmp5764), ((panda$core$Equatable*) $tmp5767));
bool $tmp5772 = $tmp5771.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5767)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5764)));
// unreffing REF($17:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5772) goto block1; else goto block2;
block1:;
// line 2785
org$pandalanguage$pandac$ASTNode* $tmp5773 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5773));
org$pandalanguage$pandac$ASTNode* $tmp5774 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5774));
*(&local1) = $tmp5773;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5773));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
// line 2786
org$pandalanguage$pandac$ASTNode* $tmp5775 = *(&local1);
panda$core$Bit $tmp5776 = panda$core$Bit$init$builtin_bit($tmp5775 != NULL);
bool $tmp5777 = $tmp5776.value;
if ($tmp5777) goto block3; else goto block4;
block3:;
// line 2787
panda$collections$Array* $tmp5778 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5779 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp5778, ((panda$core$Object*) $tmp5779));
goto block4;
block4:;
org$pandalanguage$pandac$ASTNode* $tmp5780 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5780));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2790
goto block5;
block5:;
org$pandalanguage$pandac$parser$Token $tmp5781 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5782 = $tmp5781.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5783;
$tmp5783 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5783->value = $tmp5782;
panda$core$Int64 $tmp5784 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp5785 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5784);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5786;
$tmp5786 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5786->value = $tmp5785;
ITable* $tmp5787 = ((panda$core$Equatable*) $tmp5783)->$class->itable;
while ($tmp5787->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5787 = $tmp5787->next;
}
$fn5789 $tmp5788 = $tmp5787->methods[1];
panda$core$Bit $tmp5790 = $tmp5788(((panda$core$Equatable*) $tmp5783), ((panda$core$Equatable*) $tmp5786));
bool $tmp5791 = $tmp5790.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5786)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5783)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5791) goto block6; else goto block7;
block6:;
// line 2791
org$pandalanguage$pandac$ASTNode* $tmp5792 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5792));
org$pandalanguage$pandac$ASTNode* $tmp5793 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5793));
*(&local2) = $tmp5792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5792));
// unreffing REF($84:org.pandalanguage.pandac.ASTNode?)
// line 2792
org$pandalanguage$pandac$ASTNode* $tmp5794 = *(&local2);
panda$core$Bit $tmp5795 = panda$core$Bit$init$builtin_bit($tmp5794 == NULL);
bool $tmp5796 = $tmp5795.value;
if ($tmp5796) goto block8; else goto block9;
block8:;
// line 2793
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5797 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5797));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5798 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5798));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2795
panda$core$Bit* $tmp5799 = &param0->inSpeculative;
panda$core$Bit $tmp5800 = *$tmp5799;
panda$core$Bit $tmp5801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5800);
bool $tmp5802 = $tmp5801.value;
if ($tmp5802) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp5803 = (panda$core$Int64) {2795};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5804, $tmp5803);
abort(); // unreachable
block10:;
// line 2796
panda$collections$Array* $tmp5805 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5806 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5805, ((panda$core$Object*) $tmp5806));
org$pandalanguage$pandac$ASTNode* $tmp5807 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5807));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block7:;
// line 2798
org$pandalanguage$pandac$ASTNode* $tmp5808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5809 = (panda$core$Int64) {19};
panda$collections$Array* $tmp5810 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp5811 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5810);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5808, $tmp5809, $tmp5811);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5811));
// unreffing REF($142:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5808));
// unreffing REF($138:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5812 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5812));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp5808;

}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* param0) {

// line 13
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$parser$Lexer** $tmp5813 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp5814 = *$tmp5813;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5814));
org$pandalanguage$regex$RegexParser** $tmp5815 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp5816 = *$tmp5815;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5816));
panda$threads$MessageQueue** $tmp5817 = &param0->errors;
panda$threads$MessageQueue* $tmp5818 = *$tmp5817;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5818));
panda$io$File** $tmp5819 = &param0->path;
panda$io$File* $tmp5820 = *$tmp5819;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5820));
panda$core$String** $tmp5821 = &param0->source;
panda$core$String* $tmp5822 = *$tmp5821;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5822));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5823 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5824 = *$tmp5823;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5824));
panda$collections$Stack** $tmp5825 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp5826 = *$tmp5825;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5826));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5827 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5828 = *$tmp5827;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5828));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp5829 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp5830 = *$tmp5829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5830));
return;

}

