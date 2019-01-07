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
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$arrayLiteral$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

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
typedef org$pandalanguage$pandac$Position (*$fn2749)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn2901)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3012)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3023)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3035)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3074)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3253)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn3306)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3790)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3815)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn3856)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn3873)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn4210)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn4299)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4307)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Bit (*$fn4632)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4665)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4676)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4801)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4823)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4844)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn4904)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn4977)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn5003)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5068)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn5166)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5196)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn5378)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5491)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5509)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5584)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5694)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn5713)(panda$core$Equatable*, panda$core$Equatable*);

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
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x61\x6c\x6c\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, 4799290866155849891, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x70\x72\x65\x66\x69\x78\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 123, 7025835381767841785, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x6d\x75\x6c\x74\x69\x70\x6c\x69\x63\x61\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 131, 1288059034360540827, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x64\x64\x69\x74\x69\x76\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 125, -6498999101577693159, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x61\x6e\x67\x65\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 4989268421802719344, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 127, 5520043150958930526, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x64\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 120, -4330199518315084178, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s3286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x4f\x72\x41\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 129, 1041864171980171049, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x74\x75\x72\x6e\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 122, 3710200635956915444, NULL };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x74\x65\x72\x6d\x69\x6e\x61\x6c\x53\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 124, -6217056272548492480, NULL };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x6e\x79\x4c\x6f\x6f\x70\x28\x6c\x61\x62\x65\x6c\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 138, 5346443027079530942, NULL };
static panda$core$String $s4181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -5695239785840128988, NULL };
static panda$core$String $s4356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s5049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s5056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 118, 5129060284430572773, NULL };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x62\x6f\x64\x79\x45\x6e\x74\x72\x79\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 116, -2097092122738507249, NULL };
static panda$core$String $s5728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
panda$core$Int64 $tmp806 = (panda$core$Int64) {43};
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
panda$core$Int64 $tmp1021 = (panda$core$Int64) {43};
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
panda$core$Int64 $tmp1052 = (panda$core$Int64) {39};
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
panda$core$Int64 $tmp1093 = (panda$core$Int64) {43};
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
panda$core$Int64 $tmp1115 = (panda$core$Int64) {39};
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
panda$core$Int64 $tmp1150 = (panda$core$Int64) {39};
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
panda$core$Int64 $tmp1188 = (panda$core$Int64) {39};
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
panda$core$Int64 $tmp1213 = (panda$core$Int64) {21};
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
panda$core$Int64 $tmp1239 = (panda$core$Int64) {32};
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
panda$core$Int64 $tmp1274 = (panda$core$Int64) {32};
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
panda$core$Int64 $tmp1312 = (panda$core$Int64) {44};
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
panda$core$Int64 $tmp1345 = (panda$core$Int64) {21};
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
panda$core$Int64 $tmp1384 = (panda$core$Int64) {46};
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
panda$core$Int64 $tmp1426 = (panda$core$Int64) {46};
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
panda$core$Int64 $tmp1573 = (panda$core$Int64) {32};
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
panda$core$Int64 $tmp1596 = (panda$core$Int64) {44};
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
panda$core$Int64 $tmp1609 = (panda$core$Int64) {21};
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
panda$core$Int64 $tmp1629 = (panda$core$Int64) {46};
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
panda$core$Int64 $tmp1818 = (panda$core$Int64) {21};
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
panda$core$Int64 $tmp1827 = (panda$core$Int64) {23};
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
panda$core$Int64 $tmp1837 = (panda$core$Int64) {23};
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
panda$core$Int64 $tmp1852 = (panda$core$Int64) {23};
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
panda$core$Int64 $tmp1867 = (panda$core$Int64) {35};
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
panda$core$Int64 $tmp1877 = (panda$core$Int64) {38};
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
panda$core$Int64 $tmp1884 = (panda$core$Int64) {40};
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
panda$core$Int64 $tmp1891 = (panda$core$Int64) {29};
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
panda$core$Int64 $tmp2003 = (panda$core$Int64) {21};
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
panda$core$Int64 $tmp2304 = (panda$core$Int64) {28};
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
panda$core$Int64 $tmp2375 = (panda$core$Int64) {43};
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
panda$core$Int64 $tmp2459 = (panda$core$Int64) {20};
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
panda$core$Int64 $tmp2477 = (panda$core$Int64) {30};
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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$String* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
panda$core$String* local7 = NULL;
panda$collections$Array* local8 = NULL;
org$pandalanguage$pandac$ASTNode* local9 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local10;
panda$core$Bit local11;
org$pandalanguage$pandac$parser$Token local12;
panda$core$Bit local13;
// line 1014
org$pandalanguage$pandac$ASTNode* $tmp2486 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2486));
org$pandalanguage$pandac$ASTNode* $tmp2487 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2487));
*(&local0) = $tmp2486;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2486));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1015
org$pandalanguage$pandac$ASTNode* $tmp2488 = *(&local0);
panda$core$Bit $tmp2489 = panda$core$Bit$init$builtin_bit($tmp2488 == NULL);
bool $tmp2490 = $tmp2489.value;
if ($tmp2490) goto block1; else goto block2;
block1:;
// line 1016
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2491 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1018
goto block3;
block3:;
// line 1019
org$pandalanguage$pandac$parser$Token $tmp2492 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2492;
// line 1020
org$pandalanguage$pandac$parser$Token $tmp2493 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2494 = $tmp2493.kind;
panda$core$Int64 $tmp2495 = $tmp2494.$rawValue;
panda$core$Int64 $tmp2496 = (panda$core$Int64) {104};
panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2495, $tmp2496);
bool $tmp2498 = $tmp2497.value;
if ($tmp2498) goto block6; else goto block7;
block6:;
// line 1022
panda$collections$Stack** $tmp2499 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2500 = *$tmp2499;
panda$core$Bit $tmp2501 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp2502;
$tmp2502 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp2502->value = $tmp2501;
panda$collections$Stack$push$panda$collections$Stack$T($tmp2500, ((panda$core$Object*) $tmp2502));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
// unreffing REF($45:panda.collections.Stack.T)
// line 1023
panda$collections$Array* $tmp2503 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2503);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
panda$collections$Array* $tmp2504 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2504));
*(&local2) = $tmp2503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
// unreffing REF($51:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1024
panda$core$Int64 $tmp2505 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2506 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2505);
org$pandalanguage$pandac$parser$Token$nullable $tmp2507 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2506);
panda$core$Bit $tmp2508 = panda$core$Bit$init$builtin_bit(!$tmp2507.nonnull);
bool $tmp2509 = $tmp2508.value;
if ($tmp2509) goto block8; else goto block9;
block8:;
// line 1025
org$pandalanguage$pandac$ASTNode* $tmp2510 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
org$pandalanguage$pandac$ASTNode* $tmp2511 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
*(&local3) = $tmp2510;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
// unreffing REF($73:org.pandalanguage.pandac.ASTNode?)
// line 1026
org$pandalanguage$pandac$ASTNode* $tmp2512 = *(&local3);
panda$core$Bit $tmp2513 = panda$core$Bit$init$builtin_bit($tmp2512 == NULL);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block10; else goto block11;
block10:;
// line 1027
panda$collections$Stack** $tmp2515 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2516 = *$tmp2515;
panda$core$Object* $tmp2517 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2516);
panda$core$Panda$unref$panda$core$Object$Q($tmp2517);
// unreffing REF($94:panda.collections.Stack.T)
// line 1028
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2518 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2519 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2520 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1030
panda$collections$Array* $tmp2521 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2522 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2521, ((panda$core$Object*) $tmp2522));
// line 1031
goto block12;
block12:;
panda$core$Int64 $tmp2523 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2524 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2523);
org$pandalanguage$pandac$parser$Token$nullable $tmp2525 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2524);
panda$core$Bit $tmp2526 = panda$core$Bit$init$builtin_bit($tmp2525.nonnull);
bool $tmp2527 = $tmp2526.value;
if ($tmp2527) goto block13; else goto block14;
block13:;
// line 1032
org$pandalanguage$pandac$ASTNode* $tmp2528 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
org$pandalanguage$pandac$ASTNode* $tmp2529 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
*(&local3) = $tmp2528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// unreffing REF($135:org.pandalanguage.pandac.ASTNode?)
// line 1033
org$pandalanguage$pandac$ASTNode* $tmp2530 = *(&local3);
panda$core$Bit $tmp2531 = panda$core$Bit$init$builtin_bit($tmp2530 == NULL);
bool $tmp2532 = $tmp2531.value;
if ($tmp2532) goto block15; else goto block16;
block15:;
// line 1034
panda$collections$Stack** $tmp2533 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2534 = *$tmp2533;
panda$core$Object* $tmp2535 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2534);
panda$core$Panda$unref$panda$core$Object$Q($tmp2535);
// unreffing REF($155:panda.collections.Stack.T)
// line 1035
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2536 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2537 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2538 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1037
panda$collections$Array* $tmp2539 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp2540 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp2539, ((panda$core$Object*) $tmp2540));
goto block12;
block14:;
// line 1039
panda$core$Int64 $tmp2541 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp2542 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2541);
org$pandalanguage$pandac$parser$Token$nullable $tmp2543 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2542, &$s2544);
panda$core$Bit $tmp2545 = panda$core$Bit$init$builtin_bit(!$tmp2543.nonnull);
bool $tmp2546 = $tmp2545.value;
if ($tmp2546) goto block17; else goto block18;
block17:;
// line 1040
panda$collections$Stack** $tmp2547 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2548 = *$tmp2547;
panda$core$Object* $tmp2549 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2548);
panda$core$Panda$unref$panda$core$Object$Q($tmp2549);
// unreffing REF($199:panda.collections.Stack.T)
// line 1041
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2550 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2551 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2552 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
org$pandalanguage$pandac$ASTNode* $tmp2553 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 1044
panda$collections$Stack** $tmp2554 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2555 = *$tmp2554;
panda$core$Object* $tmp2556 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp2555);
panda$core$Panda$unref$panda$core$Object$Q($tmp2556);
// unreffing REF($233:panda.collections.Stack.T)
// line 1045
org$pandalanguage$pandac$ASTNode* $tmp2557 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2558 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token $tmp2559 = *(&local1);
org$pandalanguage$pandac$Position $tmp2560 = $tmp2559.position;
org$pandalanguage$pandac$ASTNode* $tmp2561 = *(&local0);
panda$collections$Array* $tmp2562 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp2563 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2562);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2557, $tmp2558, $tmp2560, $tmp2561, $tmp2563);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
org$pandalanguage$pandac$ASTNode* $tmp2564 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2564));
*(&local0) = $tmp2557;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// unreffing REF($247:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp2565 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
goto block5;
block7:;
panda$core$Int64 $tmp2566 = (panda$core$Int64) {102};
panda$core$Bit $tmp2567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2495, $tmp2566);
bool $tmp2568 = $tmp2567.value;
if ($tmp2568) goto block19; else goto block20;
block19:;
// line 1049
org$pandalanguage$pandac$ASTNode* $tmp2569 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
org$pandalanguage$pandac$ASTNode* $tmp2570 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
*(&local4) = $tmp2569;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing REF($274:org.pandalanguage.pandac.ASTNode?)
// line 1050
org$pandalanguage$pandac$ASTNode* $tmp2571 = *(&local4);
panda$core$Bit $tmp2572 = panda$core$Bit$init$builtin_bit($tmp2571 == NULL);
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block21; else goto block22;
block21:;
// line 1051
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2574 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2575 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1053
panda$core$Int64 $tmp2576 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp2577 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2576);
org$pandalanguage$pandac$parser$Token$nullable $tmp2578 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2577, &$s2579);
panda$core$Bit $tmp2580 = panda$core$Bit$init$builtin_bit(!$tmp2578.nonnull);
bool $tmp2581 = $tmp2580.value;
if ($tmp2581) goto block23; else goto block24;
block23:;
// line 1054
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2582 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2583 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block24:;
// line 1056
org$pandalanguage$pandac$ASTNode* $tmp2584 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2585 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2586 = *(&local1);
org$pandalanguage$pandac$Position $tmp2587 = $tmp2586.position;
org$pandalanguage$pandac$ASTNode* $tmp2588 = *(&local0);
panda$core$Int64 $tmp2589 = (panda$core$Int64) {102};
org$pandalanguage$pandac$parser$Token$Kind $tmp2590 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2589);
org$pandalanguage$pandac$ASTNode* $tmp2591 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2584, $tmp2585, $tmp2587, $tmp2588, $tmp2590, $tmp2591);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
org$pandalanguage$pandac$ASTNode* $tmp2592 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
*(&local0) = $tmp2584;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
// unreffing REF($328:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2593 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing arg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block20:;
panda$core$Int64 $tmp2594 = (panda$core$Int64) {99};
panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2495, $tmp2594);
bool $tmp2596 = $tmp2595.value;
if ($tmp2596) goto block25; else goto block26;
block25:;
// line 1059
*(&local5) = ((panda$core$String*) NULL);
// line 1060
panda$core$Int64 $tmp2597 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp2598 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2597);
org$pandalanguage$pandac$parser$Token$nullable $tmp2599 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2598);
panda$core$Bit $tmp2600 = panda$core$Bit$init$builtin_bit($tmp2599.nonnull);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block27; else goto block29;
block27:;
// line 1061
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2602));
panda$core$String* $tmp2603 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
*(&local5) = &$s2602;
goto block28;
block29:;
// line 1
// line 1064
panda$core$String* $tmp2604 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
panda$core$String* $tmp2605 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
*(&local5) = $tmp2604;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
// unreffing REF($380:panda.core.String?)
// line 1065
panda$core$String* $tmp2606 = *(&local5);
panda$core$Bit $tmp2607 = panda$core$Bit$init$builtin_bit($tmp2606 == NULL);
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block30; else goto block31;
block30:;
// line 1066
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp2609 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2610 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block31:;
goto block28;
block28:;
// line 1069
org$pandalanguage$pandac$ASTNode* $tmp2611 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2612 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token $tmp2613 = *(&local1);
org$pandalanguage$pandac$Position $tmp2614 = $tmp2613.position;
org$pandalanguage$pandac$ASTNode* $tmp2615 = *(&local0);
panda$core$String* $tmp2616 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2611, $tmp2612, $tmp2614, $tmp2615, $tmp2616);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
org$pandalanguage$pandac$ASTNode* $tmp2617 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
*(&local0) = $tmp2611;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2611));
// unreffing REF($412:org.pandalanguage.pandac.ASTNode)
panda$core$String* $tmp2618 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
// unreffing name
*(&local5) = ((panda$core$String*) NULL);
goto block5;
block26:;
panda$core$Int64 $tmp2619 = (panda$core$Int64) {90};
panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2495, $tmp2619);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block32; else goto block33;
block32:;
// line 1072
org$pandalanguage$pandac$ASTNode* $tmp2622 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
org$pandalanguage$pandac$ASTNode* $tmp2623 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
*(&local6) = $tmp2622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
// unreffing REF($442:org.pandalanguage.pandac.ASTNode?)
// line 1073
org$pandalanguage$pandac$ASTNode* $tmp2624 = *(&local6);
panda$core$Bit $tmp2625 = panda$core$Bit$init$builtin_bit($tmp2624 == NULL);
bool $tmp2626 = $tmp2625.value;
if ($tmp2626) goto block34; else goto block35;
block34:;
// line 1074
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2627 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2628 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block35:;
// line 1076
org$pandalanguage$pandac$ASTNode* $tmp2629 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2630 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2631 = *(&local1);
org$pandalanguage$pandac$Position $tmp2632 = $tmp2631.position;
org$pandalanguage$pandac$ASTNode* $tmp2633 = *(&local0);
panda$core$Int64 $tmp2634 = (panda$core$Int64) {90};
org$pandalanguage$pandac$parser$Token$Kind $tmp2635 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2634);
org$pandalanguage$pandac$ASTNode* $tmp2636 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2629, $tmp2630, $tmp2632, $tmp2633, $tmp2635, $tmp2636);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
org$pandalanguage$pandac$ASTNode* $tmp2637 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
*(&local0) = $tmp2629;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing REF($474:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2638 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
// unreffing target
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block33:;
panda$core$Int64 $tmp2639 = (panda$core$Int64) {63};
panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2495, $tmp2639);
bool $tmp2641 = $tmp2640.value;
if ($tmp2641) goto block36; else goto block37;
block36:;
// line 1081
org$pandalanguage$pandac$parser$Token $tmp2642 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2642);
// line 1082
org$pandalanguage$pandac$ASTNode* $tmp2643 = *(&local0);
panda$core$String* $tmp2644 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q($tmp2643);
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
panda$core$String* $tmp2645 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
*(&local7) = $tmp2644;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
// unreffing REF($511:panda.core.String?)
// line 1083
panda$core$String* $tmp2646 = *(&local7);
panda$core$Bit $tmp2647 = panda$core$Bit$init$builtin_bit($tmp2646 != NULL);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block38; else goto block39;
block38:;
// line 1084
org$pandalanguage$pandac$parser$Parser$startSpeculative(param0);
// line 1085
org$pandalanguage$pandac$parser$Token $tmp2649 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1088
panda$collections$Array* $tmp2650 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp2650);
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
panda$collections$Array* $tmp2651 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2651));
*(&local8) = $tmp2650;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
// unreffing REF($533:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1089
panda$core$Bit $tmp2652 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2653 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2652);
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
org$pandalanguage$pandac$ASTNode* $tmp2654 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2654));
*(&local9) = $tmp2653;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
// unreffing REF($548:org.pandalanguage.pandac.ASTNode?)
// line 1090
org$pandalanguage$pandac$ASTNode* $tmp2655 = *(&local9);
panda$core$Bit $tmp2656 = panda$core$Bit$init$builtin_bit($tmp2655 == NULL);
bool $tmp2657 = $tmp2656.value;
if ($tmp2657) goto block40; else goto block41;
block40:;
// line 1091
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1092
org$pandalanguage$pandac$ASTNode* $tmp2658 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
org$pandalanguage$pandac$ASTNode* $tmp2659 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2660 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2661 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2661));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2662 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2658;
block41:;
// line 1094
panda$collections$Array* $tmp2663 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2664 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2663, ((panda$core$Object*) $tmp2664));
// line 1095
goto block42;
block42:;
panda$core$Int64 $tmp2665 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp2666 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2665);
org$pandalanguage$pandac$parser$Token$nullable $tmp2667 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2666);
panda$core$Bit $tmp2668 = panda$core$Bit$init$builtin_bit($tmp2667.nonnull);
bool $tmp2669 = $tmp2668.value;
if ($tmp2669) goto block43; else goto block44;
block43:;
// line 1096
panda$core$Bit $tmp2670 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp2671 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp2670);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
org$pandalanguage$pandac$ASTNode* $tmp2672 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
*(&local9) = $tmp2671;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
// unreffing REF($610:org.pandalanguage.pandac.ASTNode?)
// line 1097
org$pandalanguage$pandac$ASTNode* $tmp2673 = *(&local9);
panda$core$Bit $tmp2674 = panda$core$Bit$init$builtin_bit($tmp2673 == NULL);
bool $tmp2675 = $tmp2674.value;
if ($tmp2675) goto block45; else goto block46;
block45:;
// line 1098
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1099
org$pandalanguage$pandac$ASTNode* $tmp2676 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
org$pandalanguage$pandac$ASTNode* $tmp2677 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2678 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2678));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2679 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2679));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2680 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2680));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2676;
block46:;
// line 1101
panda$collections$Array* $tmp2681 = *(&local8);
org$pandalanguage$pandac$ASTNode* $tmp2682 = *(&local9);
panda$collections$Array$add$panda$collections$Array$T($tmp2681, ((panda$core$Object*) $tmp2682));
goto block42;
block44:;
// line 1103
panda$core$Int64 $tmp2683 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2684 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2683);
org$pandalanguage$pandac$parser$Token$nullable $tmp2685 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2684, &$s2686);
*(&local10) = $tmp2685;
// line 1104
org$pandalanguage$pandac$parser$Token$nullable $tmp2687 = *(&local10);
panda$core$Bit $tmp2688 = panda$core$Bit$init$builtin_bit(!$tmp2687.nonnull);
bool $tmp2689 = $tmp2688.value;
if ($tmp2689) goto block47; else goto block48;
block47:;
// line 1105
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1106
org$pandalanguage$pandac$ASTNode* $tmp2690 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
org$pandalanguage$pandac$ASTNode* $tmp2691 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2692 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2693 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2694 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2690;
block48:;
// line 1135
// line 1136
panda$collections$Stack** $tmp2695 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp2696 = *$tmp2695;
panda$core$Int64 $tmp2697 = (panda$core$Int64) {0};
panda$core$Object* $tmp2698 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T($tmp2696, $tmp2697);
bool $tmp2699 = ((panda$core$Bit$wrapper*) $tmp2698)->value.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp2698);
// unreffing REF($705:panda.collections.Stack.T)
if ($tmp2699) goto block49; else goto block51;
block49:;
// line 1137
org$pandalanguage$pandac$parser$Token $tmp2700 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local12) = $tmp2700;
// line 1138
org$pandalanguage$pandac$parser$Token $tmp2701 = *(&local12);
org$pandalanguage$pandac$parser$Token$Kind $tmp2702 = $tmp2701.kind;
panda$core$Int64 $tmp2703 = $tmp2702.$rawValue;
panda$core$Int64 $tmp2704 = (panda$core$Int64) {99};
panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2703, $tmp2704);
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block53; else goto block54;
block54:;
panda$core$Int64 $tmp2707 = (panda$core$Int64) {106};
panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2703, $tmp2707);
bool $tmp2709 = $tmp2708.value;
if ($tmp2709) goto block53; else goto block55;
block55:;
panda$core$Int64 $tmp2710 = (panda$core$Int64) {90};
panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2703, $tmp2710);
bool $tmp2712 = $tmp2711.value;
if ($tmp2712) goto block53; else goto block56;
block53:;
// line 1140
panda$core$Bit $tmp2713 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2713;
goto block52;
block56:;
panda$core$Int64 $tmp2714 = (panda$core$Int64) {104};
panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2703, $tmp2714);
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block57; else goto block58;
block57:;
// line 1143
org$pandalanguage$pandac$parser$Token $tmp2717 = *(&local12);
org$pandalanguage$pandac$Position $tmp2718 = $tmp2717.position;
panda$core$Int64 $tmp2719 = $tmp2718.line;
org$pandalanguage$pandac$parser$Token$nullable $tmp2720 = *(&local10);
org$pandalanguage$pandac$Position $tmp2721 = ((org$pandalanguage$pandac$parser$Token) $tmp2720.value).position;
panda$core$Int64 $tmp2722 = $tmp2721.line;
panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2719, $tmp2722);
bool $tmp2724 = $tmp2723.value;
if ($tmp2724) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$parser$Token $tmp2725 = *(&local12);
org$pandalanguage$pandac$Position $tmp2726 = $tmp2725.position;
panda$core$Int64 $tmp2727 = $tmp2726.column;
org$pandalanguage$pandac$parser$Token$nullable $tmp2728 = *(&local10);
org$pandalanguage$pandac$Position $tmp2729 = ((org$pandalanguage$pandac$parser$Token) $tmp2728.value).position;
panda$core$Int64 $tmp2730 = $tmp2729.column;
panda$core$Int64 $tmp2731 = (panda$core$Int64) {1};
int64_t $tmp2732 = $tmp2730.value;
int64_t $tmp2733 = $tmp2731.value;
int64_t $tmp2734 = $tmp2732 + $tmp2733;
panda$core$Int64 $tmp2735 = (panda$core$Int64) {$tmp2734};
panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2727, $tmp2735);
*(&local13) = $tmp2736;
goto block61;
block60:;
*(&local13) = $tmp2723;
goto block61;
block61:;
panda$core$Bit $tmp2737 = *(&local13);
*(&local11) = $tmp2737;
goto block52;
block58:;
// line 1147
panda$core$Bit $tmp2738 = panda$core$Bit$init$builtin_bit(false);
*(&local11) = $tmp2738;
goto block52;
block52:;
// line 1150
panda$core$Bit $tmp2739 = *(&local11);
bool $tmp2740 = $tmp2739.value;
if ($tmp2740) goto block62; else goto block63;
block62:;
// line 1151
org$pandalanguage$pandac$parser$Token $tmp2741 = *(&local12);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2741);
goto block63;
block63:;
goto block50;
block51:;
// line 1
// line 1155
panda$core$Bit $tmp2742 = panda$core$Bit$init$builtin_bit(true);
*(&local11) = $tmp2742;
goto block50;
block50:;
// line 1157
panda$core$Bit $tmp2743 = *(&local11);
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block64; else goto block66;
block64:;
// line 1158
org$pandalanguage$pandac$parser$Parser$accept(param0);
// line 1159
org$pandalanguage$pandac$ASTNode* $tmp2745 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2746 = (panda$core$Int64) {20};
org$pandalanguage$pandac$ASTNode* $tmp2747 = *(&local0);
$fn2749 $tmp2748 = ($fn2749) $tmp2747->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp2750 = $tmp2748($tmp2747);
panda$core$String* $tmp2751 = *(&local7);
panda$collections$Array* $tmp2752 = *(&local8);
org$pandalanguage$pandac$FixedArray* $tmp2753 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp2752);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2745, $tmp2746, $tmp2750, $tmp2751, $tmp2753);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
org$pandalanguage$pandac$ASTNode* $tmp2754 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
*(&local0) = $tmp2745;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
// unreffing REF($805:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
// unreffing REF($795:org.pandalanguage.pandac.ASTNode)
// line 1161
org$pandalanguage$pandac$ASTNode* $tmp2755 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2756 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2757 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
goto block3;
block66:;
// line 1
// line 1164
org$pandalanguage$pandac$parser$Parser$rewind(param0);
// line 1165
org$pandalanguage$pandac$ASTNode* $tmp2758 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
org$pandalanguage$pandac$ASTNode* $tmp2759 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2760 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
panda$core$String* $tmp2761 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2762 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2762));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2758;
block65:;
org$pandalanguage$pandac$ASTNode* $tmp2763 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
// unreffing t
*(&local9) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp2764 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
// unreffing types
*(&local8) = ((panda$collections$Array*) NULL);
goto block39;
block39:;
// line 1168
org$pandalanguage$pandac$ASTNode* $tmp2765 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
panda$core$String* $tmp2766 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
// unreffing name
*(&local7) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2767 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2767));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2765;
block37:;
// line 1171
org$pandalanguage$pandac$parser$Token $tmp2768 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2768);
// line 1172
org$pandalanguage$pandac$ASTNode* $tmp2769 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
org$pandalanguage$pandac$ASTNode* $tmp2770 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2769;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2771 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2772 = $tmp2771.value;
if ($tmp2772) goto block67; else goto block68;
block68:;
panda$core$Int64 $tmp2773 = (panda$core$Int64) {1013};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2774, $tmp2773, &$s2775);
abort(); // unreachable
block67:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1182
org$pandalanguage$pandac$ASTNode* $tmp2776 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
org$pandalanguage$pandac$ASTNode* $tmp2777 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
*(&local0) = $tmp2776;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1183
org$pandalanguage$pandac$ASTNode* $tmp2778 = *(&local0);
panda$core$Bit $tmp2779 = panda$core$Bit$init$builtin_bit($tmp2778 == NULL);
bool $tmp2780 = $tmp2779.value;
if ($tmp2780) goto block1; else goto block2;
block1:;
// line 1184
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2781 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1186
goto block3;
block3:;
// line 1187
panda$core$Int64 $tmp2782 = (panda$core$Int64) {58};
org$pandalanguage$pandac$parser$Token$Kind $tmp2783 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2782);
org$pandalanguage$pandac$parser$Token$nullable $tmp2784 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp2783);
*(&local1) = $tmp2784;
// line 1188
org$pandalanguage$pandac$parser$Token$nullable $tmp2785 = *(&local1);
panda$core$Bit $tmp2786 = panda$core$Bit$init$builtin_bit(!$tmp2785.nonnull);
bool $tmp2787 = $tmp2786.value;
if ($tmp2787) goto block5; else goto block6;
block5:;
// line 1189
goto block4;
block6:;
// line 1191
org$pandalanguage$pandac$ASTNode* $tmp2788 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
org$pandalanguage$pandac$ASTNode* $tmp2789 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
*(&local2) = $tmp2788;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
// line 1192
org$pandalanguage$pandac$ASTNode* $tmp2790 = *(&local2);
panda$core$Bit $tmp2791 = panda$core$Bit$init$builtin_bit($tmp2790 == NULL);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block7; else goto block8;
block7:;
// line 1193
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2793 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2794 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2794));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1195
org$pandalanguage$pandac$ASTNode* $tmp2795 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2796 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token$nullable $tmp2797 = *(&local1);
org$pandalanguage$pandac$Position $tmp2798 = ((org$pandalanguage$pandac$parser$Token) $tmp2797.value).position;
org$pandalanguage$pandac$ASTNode* $tmp2799 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp2800 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2801 = ((org$pandalanguage$pandac$parser$Token) $tmp2800.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp2802 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2795, $tmp2796, $tmp2798, $tmp2799, $tmp2801, $tmp2802);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
org$pandalanguage$pandac$ASTNode* $tmp2803 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
*(&local0) = $tmp2795;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2804 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2804));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1197
org$pandalanguage$pandac$ASTNode* $tmp2805 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
org$pandalanguage$pandac$ASTNode* $tmp2806 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2805;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1204
org$pandalanguage$pandac$parser$Token $tmp2807 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp2807;
// line 1205
org$pandalanguage$pandac$parser$Token $tmp2808 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2809 = $tmp2808.kind;
panda$core$Int64 $tmp2810 = $tmp2809.$rawValue;
panda$core$Int64 $tmp2811 = (panda$core$Int64) {53};
panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2810, $tmp2811);
bool $tmp2813 = $tmp2812.value;
if ($tmp2813) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2814 = (panda$core$Int64) {50};
panda$core$Bit $tmp2815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2810, $tmp2814);
bool $tmp2816 = $tmp2815.value;
if ($tmp2816) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp2817 = (panda$core$Int64) {51};
panda$core$Bit $tmp2818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2810, $tmp2817);
bool $tmp2819 = $tmp2818.value;
if ($tmp2819) goto block2; else goto block5;
block2:;
// line 1207
org$pandalanguage$pandac$ASTNode* $tmp2820 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
org$pandalanguage$pandac$ASTNode* $tmp2821 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
*(&local1) = $tmp2820;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
// unreffing REF($20:org.pandalanguage.pandac.ASTNode?)
// line 1208
org$pandalanguage$pandac$ASTNode* $tmp2822 = *(&local1);
panda$core$Bit $tmp2823 = panda$core$Bit$init$builtin_bit($tmp2822 == NULL);
bool $tmp2824 = $tmp2823.value;
if ($tmp2824) goto block6; else goto block7;
block6:;
// line 1209
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2825 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1211
org$pandalanguage$pandac$ASTNode* $tmp2826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2827 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token $tmp2828 = *(&local0);
org$pandalanguage$pandac$Position $tmp2829 = $tmp2828.position;
org$pandalanguage$pandac$parser$Token $tmp2830 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2831 = $tmp2830.kind;
org$pandalanguage$pandac$ASTNode* $tmp2832 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2826, $tmp2827, $tmp2829, $tmp2831, $tmp2832);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
// unreffing REF($47:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2833 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
// unreffing base
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2826;
block5:;
// line 1214
org$pandalanguage$pandac$parser$Token $tmp2834 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2834);
// line 1215
org$pandalanguage$pandac$ASTNode* $tmp2835 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
// unreffing REF($72:org.pandalanguage.pandac.ASTNode?)
return $tmp2835;
block1:;
panda$core$Bit $tmp2836 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2837 = $tmp2836.value;
if ($tmp2837) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp2838 = (panda$core$Int64) {1203};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2839, $tmp2838, &$s2840);
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
// line 1227
org$pandalanguage$pandac$ASTNode* $tmp2841 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
org$pandalanguage$pandac$ASTNode* $tmp2842 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
*(&local0) = $tmp2841;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1228
org$pandalanguage$pandac$ASTNode* $tmp2843 = *(&local0);
panda$core$Bit $tmp2844 = panda$core$Bit$init$builtin_bit($tmp2843 == NULL);
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block1; else goto block2;
block1:;
// line 1229
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2846 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1231
goto block3;
block3:;
// line 1232
org$pandalanguage$pandac$parser$Token $tmp2847 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2847;
// line 1233
org$pandalanguage$pandac$parser$Token $tmp2848 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2849 = $tmp2848.kind;
panda$core$Int64 $tmp2850 = $tmp2849.$rawValue;
panda$core$Int64 $tmp2851 = (panda$core$Int64) {54};
panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2851);
bool $tmp2853 = $tmp2852.value;
if ($tmp2853) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2854 = (panda$core$Int64) {55};
panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2854);
bool $tmp2856 = $tmp2855.value;
if ($tmp2856) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2857 = (panda$core$Int64) {56};
panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2857);
bool $tmp2859 = $tmp2858.value;
if ($tmp2859) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp2860 = (panda$core$Int64) {57};
panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2860);
bool $tmp2862 = $tmp2861.value;
if ($tmp2862) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp2863 = (panda$core$Int64) {73};
panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2863);
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp2866 = (panda$core$Int64) {68};
panda$core$Bit $tmp2867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2866);
bool $tmp2868 = $tmp2867.value;
if ($tmp2868) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp2869 = (panda$core$Int64) {70};
panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2869);
bool $tmp2871 = $tmp2870.value;
if ($tmp2871) goto block6; else goto block13;
block6:;
// line 1236
org$pandalanguage$pandac$ASTNode* $tmp2872 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
org$pandalanguage$pandac$ASTNode* $tmp2873 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
*(&local2) = $tmp2872;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
// unreffing REF($65:org.pandalanguage.pandac.ASTNode?)
// line 1237
org$pandalanguage$pandac$ASTNode* $tmp2874 = *(&local2);
panda$core$Bit $tmp2875 = panda$core$Bit$init$builtin_bit($tmp2874 == NULL);
bool $tmp2876 = $tmp2875.value;
if ($tmp2876) goto block14; else goto block15;
block14:;
// line 1238
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2877 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2877));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2878 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2878));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1240
org$pandalanguage$pandac$ASTNode* $tmp2879 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2880 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2881 = *(&local1);
org$pandalanguage$pandac$Position $tmp2882 = $tmp2881.position;
org$pandalanguage$pandac$ASTNode* $tmp2883 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2884 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2885 = $tmp2884.kind;
org$pandalanguage$pandac$ASTNode* $tmp2886 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2879, $tmp2880, $tmp2882, $tmp2883, $tmp2885, $tmp2886);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
org$pandalanguage$pandac$ASTNode* $tmp2887 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2887));
*(&local0) = $tmp2879;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
// unreffing REF($97:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2888 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2888));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block13:;
panda$core$Int64 $tmp2889 = (panda$core$Int64) {64};
panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, $tmp2889);
bool $tmp2891 = $tmp2890.value;
if ($tmp2891) goto block16; else goto block17;
block16:;
// line 1243
org$pandalanguage$pandac$parser$Token $tmp2892 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp2892;
// line 1244
org$pandalanguage$pandac$parser$Token $tmp2893 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp2894 = $tmp2893.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2895;
$tmp2895 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2895->value = $tmp2894;
panda$core$Int64 $tmp2896 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp2897 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2896);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2898;
$tmp2898 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp2898->value = $tmp2897;
ITable* $tmp2899 = ((panda$core$Equatable*) $tmp2895)->$class->itable;
while ($tmp2899->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp2899 = $tmp2899->next;
}
$fn2901 $tmp2900 = $tmp2899->methods[0];
panda$core$Bit $tmp2902 = $tmp2900(((panda$core$Equatable*) $tmp2895), ((panda$core$Equatable*) $tmp2898));
bool $tmp2903 = $tmp2902.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2898)));
// unreffing REF($138:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp2895)));
// unreffing REF($134:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp2903) goto block18; else goto block20;
block18:;
// line 1246
org$pandalanguage$pandac$ASTNode* $tmp2904 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
org$pandalanguage$pandac$ASTNode* $tmp2905 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2905));
*(&local4) = $tmp2904;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
// unreffing REF($150:org.pandalanguage.pandac.ASTNode?)
// line 1247
org$pandalanguage$pandac$ASTNode* $tmp2906 = *(&local4);
panda$core$Bit $tmp2907 = panda$core$Bit$init$builtin_bit($tmp2906 == NULL);
bool $tmp2908 = $tmp2907.value;
if ($tmp2908) goto block21; else goto block22;
block21:;
// line 1248
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2909 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2909));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2910 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2910));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1250
org$pandalanguage$pandac$ASTNode* $tmp2911 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2912 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2913 = *(&local1);
org$pandalanguage$pandac$Position $tmp2914 = $tmp2913.position;
org$pandalanguage$pandac$ASTNode* $tmp2915 = *(&local0);
panda$core$Int64 $tmp2916 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$Token$Kind $tmp2917 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2916);
org$pandalanguage$pandac$ASTNode* $tmp2918 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2911, $tmp2912, $tmp2914, $tmp2915, $tmp2917, $tmp2918);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
org$pandalanguage$pandac$ASTNode* $tmp2919 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2919));
*(&local0) = $tmp2911;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2911));
// unreffing REF($182:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2920 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
// unreffing next
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block19;
block20:;
// line 1
// line 1253
org$pandalanguage$pandac$parser$Token $tmp2921 = *(&local3);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2921);
// line 1254
org$pandalanguage$pandac$parser$Token $tmp2922 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2922);
// line 1255
org$pandalanguage$pandac$ASTNode* $tmp2923 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2923));
org$pandalanguage$pandac$ASTNode* $tmp2924 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2924));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2923;
block19:;
goto block5;
block17:;
// line 1259
org$pandalanguage$pandac$parser$Token $tmp2925 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2925);
// line 1260
org$pandalanguage$pandac$ASTNode* $tmp2926 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
org$pandalanguage$pandac$ASTNode* $tmp2927 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2926;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2928 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2929 = $tmp2928.value;
if ($tmp2929) goto block23; else goto block24;
block24:;
panda$core$Int64 $tmp2930 = (panda$core$Int64) {1226};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2931, $tmp2930, &$s2932);
abort(); // unreachable
block23:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1271
org$pandalanguage$pandac$ASTNode* $tmp2933 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
org$pandalanguage$pandac$ASTNode* $tmp2934 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2934));
*(&local0) = $tmp2933;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1272
org$pandalanguage$pandac$ASTNode* $tmp2935 = *(&local0);
panda$core$Bit $tmp2936 = panda$core$Bit$init$builtin_bit($tmp2935 == NULL);
bool $tmp2937 = $tmp2936.value;
if ($tmp2937) goto block1; else goto block2;
block1:;
// line 1273
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2938 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2938));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1275
goto block3;
block3:;
// line 1276
org$pandalanguage$pandac$parser$Token $tmp2939 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2939;
// line 1277
org$pandalanguage$pandac$parser$Token $tmp2940 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2941 = $tmp2940.kind;
panda$core$Int64 $tmp2942 = $tmp2941.$rawValue;
panda$core$Int64 $tmp2943 = (panda$core$Int64) {52};
panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2942, $tmp2943);
bool $tmp2945 = $tmp2944.value;
if ($tmp2945) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp2946 = (panda$core$Int64) {53};
panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2942, $tmp2946);
bool $tmp2948 = $tmp2947.value;
if ($tmp2948) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp2949 = (panda$core$Int64) {72};
panda$core$Bit $tmp2950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2942, $tmp2949);
bool $tmp2951 = $tmp2950.value;
if ($tmp2951) goto block6; else goto block9;
block6:;
// line 1279
org$pandalanguage$pandac$ASTNode* $tmp2952 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2952));
org$pandalanguage$pandac$ASTNode* $tmp2953 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2953));
*(&local2) = $tmp2952;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2952));
// unreffing REF($49:org.pandalanguage.pandac.ASTNode?)
// line 1280
org$pandalanguage$pandac$ASTNode* $tmp2954 = *(&local2);
panda$core$Bit $tmp2955 = panda$core$Bit$init$builtin_bit($tmp2954 == NULL);
bool $tmp2956 = $tmp2955.value;
if ($tmp2956) goto block10; else goto block11;
block10:;
// line 1281
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2957 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2958 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1283
org$pandalanguage$pandac$ASTNode* $tmp2959 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp2960 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp2961 = *(&local1);
org$pandalanguage$pandac$Position $tmp2962 = $tmp2961.position;
org$pandalanguage$pandac$ASTNode* $tmp2963 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp2964 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2965 = $tmp2964.kind;
org$pandalanguage$pandac$ASTNode* $tmp2966 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2959, $tmp2960, $tmp2962, $tmp2963, $tmp2965, $tmp2966);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
org$pandalanguage$pandac$ASTNode* $tmp2967 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
*(&local0) = $tmp2959;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp2968 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block9:;
// line 1286
org$pandalanguage$pandac$parser$Token $tmp2969 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp2969);
// line 1287
org$pandalanguage$pandac$ASTNode* $tmp2970 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
org$pandalanguage$pandac$ASTNode* $tmp2971 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2971));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp2970;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp2972 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2973 = $tmp2972.value;
if ($tmp2973) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp2974 = (panda$core$Int64) {1270};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2975, $tmp2974, &$s2976);
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
// line 1298
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1299
org$pandalanguage$pandac$parser$Token $tmp2977 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp2978 = $tmp2977.kind;
panda$core$Int64 $tmp2979 = $tmp2978.$rawValue;
panda$core$Int64 $tmp2980 = (panda$core$Int64) {98};
panda$core$Bit $tmp2981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2979, $tmp2980);
bool $tmp2982 = $tmp2981.value;
if ($tmp2982) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp2983 = (panda$core$Int64) {97};
panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2979, $tmp2983);
bool $tmp2985 = $tmp2984.value;
if ($tmp2985) goto block2; else goto block4;
block2:;
// line 1301
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2986 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2986));
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block4:;
// line 1304
org$pandalanguage$pandac$ASTNode* $tmp2987 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
org$pandalanguage$pandac$ASTNode* $tmp2988 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2988));
*(&local0) = $tmp2987;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
// unreffing REF($23:org.pandalanguage.pandac.ASTNode?)
// line 1305
org$pandalanguage$pandac$ASTNode* $tmp2989 = *(&local0);
panda$core$Bit $tmp2990 = panda$core$Bit$init$builtin_bit($tmp2989 == NULL);
bool $tmp2991 = $tmp2990.value;
if ($tmp2991) goto block5; else goto block6;
block5:;
// line 1306
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp2992 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2992));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
goto block1;
block1:;
// line 1310
org$pandalanguage$pandac$parser$Token $tmp2993 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp2993;
// line 1311
org$pandalanguage$pandac$parser$Token $tmp2994 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp2995 = $tmp2994.kind;
panda$core$Int64 $tmp2996 = $tmp2995.$rawValue;
panda$core$Int64 $tmp2997 = (panda$core$Int64) {98};
panda$core$Bit $tmp2998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2996, $tmp2997);
bool $tmp2999 = $tmp2998.value;
if ($tmp2999) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3000 = (panda$core$Int64) {97};
panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2996, $tmp3000);
bool $tmp3002 = $tmp3001.value;
if ($tmp3002) goto block8; else goto block10;
block8:;
// line 1313
org$pandalanguage$pandac$parser$Token $tmp3003 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp3003;
// line 1314
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1315
org$pandalanguage$pandac$parser$Token $tmp3004 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp3005 = $tmp3004.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3006;
$tmp3006 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3006->value = $tmp3005;
panda$core$Int64 $tmp3007 = (panda$core$Int64) {103};
org$pandalanguage$pandac$parser$Token$Kind $tmp3008 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3007);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3009;
$tmp3009 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3009->value = $tmp3008;
ITable* $tmp3010 = ((panda$core$Equatable*) $tmp3006)->$class->itable;
while ($tmp3010->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3010 = $tmp3010->next;
}
$fn3012 $tmp3011 = $tmp3010->methods[1];
panda$core$Bit $tmp3013 = $tmp3011(((panda$core$Equatable*) $tmp3006), ((panda$core$Equatable*) $tmp3009));
bool $tmp3014 = $tmp3013.value;
if ($tmp3014) goto block13; else goto block14;
block13:;
org$pandalanguage$pandac$parser$Token $tmp3015 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp3016 = $tmp3015.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3017;
$tmp3017 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3017->value = $tmp3016;
panda$core$Int64 $tmp3018 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3019 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3018);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3020;
$tmp3020 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3020->value = $tmp3019;
ITable* $tmp3021 = ((panda$core$Equatable*) $tmp3017)->$class->itable;
while ($tmp3021->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3021 = $tmp3021->next;
}
$fn3023 $tmp3022 = $tmp3021->methods[1];
panda$core$Bit $tmp3024 = $tmp3022(((panda$core$Equatable*) $tmp3017), ((panda$core$Equatable*) $tmp3020));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3020)));
// unreffing REF($87:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3017)));
// unreffing REF($83:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local5) = $tmp3024;
goto block15;
block14:;
*(&local5) = $tmp3013;
goto block15;
block15:;
panda$core$Bit $tmp3025 = *(&local5);
bool $tmp3026 = $tmp3025.value;
if ($tmp3026) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$parser$Token $tmp3027 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp3028 = $tmp3027.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3029;
$tmp3029 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3029->value = $tmp3028;
panda$core$Int64 $tmp3030 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp3031 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3030);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3032;
$tmp3032 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3032->value = $tmp3031;
ITable* $tmp3033 = ((panda$core$Equatable*) $tmp3029)->$class->itable;
while ($tmp3033->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3033 = $tmp3033->next;
}
$fn3035 $tmp3034 = $tmp3033->methods[1];
panda$core$Bit $tmp3036 = $tmp3034(((panda$core$Equatable*) $tmp3029), ((panda$core$Equatable*) $tmp3032));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3032)));
// unreffing REF($109:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3029)));
// unreffing REF($105:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
*(&local4) = $tmp3036;
goto block18;
block17:;
*(&local4) = $tmp3025;
goto block18;
block18:;
panda$core$Bit $tmp3037 = *(&local4);
bool $tmp3038 = $tmp3037.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3009)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3006)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3038) goto block11; else goto block19;
block11:;
// line 1317
org$pandalanguage$pandac$ASTNode* $tmp3039 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3039));
org$pandalanguage$pandac$ASTNode* $tmp3040 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3040));
*(&local3) = $tmp3039;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3039));
// unreffing REF($132:org.pandalanguage.pandac.ASTNode?)
// line 1318
org$pandalanguage$pandac$ASTNode* $tmp3041 = *(&local3);
panda$core$Bit $tmp3042 = panda$core$Bit$init$builtin_bit($tmp3041 == NULL);
bool $tmp3043 = $tmp3042.value;
if ($tmp3043) goto block20; else goto block21;
block20:;
// line 1319
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3044 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3045 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3045));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
goto block12;
block19:;
// line 1
// line 1323
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3046 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3046));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block12:;
// line 1325
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1326
panda$core$Int64 $tmp3047 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token$Kind $tmp3048 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3047);
org$pandalanguage$pandac$parser$Token$nullable $tmp3049 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3048);
panda$core$Bit $tmp3050 = panda$core$Bit$init$builtin_bit($tmp3049.nonnull);
bool $tmp3051 = $tmp3050.value;
if ($tmp3051) goto block22; else goto block24;
block22:;
// line 1327
org$pandalanguage$pandac$ASTNode* $tmp3052 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
org$pandalanguage$pandac$ASTNode* $tmp3053 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3053));
*(&local6) = $tmp3052;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3052));
// unreffing REF($183:org.pandalanguage.pandac.ASTNode?)
// line 1328
org$pandalanguage$pandac$ASTNode* $tmp3054 = *(&local6);
panda$core$Bit $tmp3055 = panda$core$Bit$init$builtin_bit($tmp3054 == NULL);
bool $tmp3056 = $tmp3055.value;
if ($tmp3056) goto block25; else goto block26;
block25:;
// line 1329
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3057 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3057));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3058 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3058));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3059 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3059));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
goto block23;
block24:;
// line 1
// line 1333
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3060 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3060));
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block23;
block23:;
// line 1335
org$pandalanguage$pandac$ASTNode* $tmp3061 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3062 = (panda$core$Int64) {34};
org$pandalanguage$pandac$parser$Token $tmp3063 = *(&local1);
org$pandalanguage$pandac$Position $tmp3064 = $tmp3063.position;
org$pandalanguage$pandac$ASTNode* $tmp3065 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3066 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3067 = $tmp3066.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3068;
$tmp3068 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3068->value = $tmp3067;
panda$core$Int64 $tmp3069 = (panda$core$Int64) {97};
org$pandalanguage$pandac$parser$Token$Kind $tmp3070 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3069);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3071;
$tmp3071 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3071->value = $tmp3070;
ITable* $tmp3072 = ((panda$core$Equatable*) $tmp3068)->$class->itable;
while ($tmp3072->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3072 = $tmp3072->next;
}
$fn3074 $tmp3073 = $tmp3072->methods[0];
panda$core$Bit $tmp3075 = $tmp3073(((panda$core$Equatable*) $tmp3068), ((panda$core$Equatable*) $tmp3071));
org$pandalanguage$pandac$ASTNode* $tmp3076 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp3077 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q($tmp3061, $tmp3062, $tmp3064, $tmp3065, $tmp3075, $tmp3076, $tmp3077);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3061));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3071)));
// unreffing REF($240:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3068)));
// unreffing REF($236:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3061));
// unreffing REF($229:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3078 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3078));
// unreffing step
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3079 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3079));
// unreffing right
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3080 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3080));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3061;
block10:;
// line 1339
org$pandalanguage$pandac$parser$Token $tmp3081 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3081);
// line 1340
org$pandalanguage$pandac$ASTNode* $tmp3082 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3082));
org$pandalanguage$pandac$ASTNode* $tmp3083 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3083));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3082;
block7:;
panda$core$Bit $tmp3084 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3085 = $tmp3084.value;
if ($tmp3085) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3086 = (panda$core$Int64) {1297};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3087, $tmp3086, &$s3088);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1350
org$pandalanguage$pandac$ASTNode* $tmp3089 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
org$pandalanguage$pandac$ASTNode* $tmp3090 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
*(&local0) = $tmp3089;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3089));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1351
org$pandalanguage$pandac$ASTNode* $tmp3091 = *(&local0);
panda$core$Bit $tmp3092 = panda$core$Bit$init$builtin_bit($tmp3091 == NULL);
bool $tmp3093 = $tmp3092.value;
if ($tmp3093) goto block1; else goto block2;
block1:;
// line 1352
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3094 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3094));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1354
goto block3;
block3:;
// line 1355
org$pandalanguage$pandac$parser$Token $tmp3095 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3095;
// line 1356
org$pandalanguage$pandac$parser$Token $tmp3096 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3097 = $tmp3096.kind;
panda$core$Int64 $tmp3098 = $tmp3097.$rawValue;
panda$core$Int64 $tmp3099 = (panda$core$Int64) {59};
panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3099);
bool $tmp3101 = $tmp3100.value;
if ($tmp3101) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3102 = (panda$core$Int64) {60};
panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3102);
bool $tmp3104 = $tmp3103.value;
if ($tmp3104) goto block6; else goto block8;
block8:;
panda$core$Int64 $tmp3105 = (panda$core$Int64) {61};
panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3105);
bool $tmp3107 = $tmp3106.value;
if ($tmp3107) goto block6; else goto block9;
block9:;
panda$core$Int64 $tmp3108 = (panda$core$Int64) {62};
panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3108);
bool $tmp3110 = $tmp3109.value;
if ($tmp3110) goto block6; else goto block10;
block10:;
panda$core$Int64 $tmp3111 = (panda$core$Int64) {63};
panda$core$Bit $tmp3112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3111);
bool $tmp3113 = $tmp3112.value;
if ($tmp3113) goto block6; else goto block11;
block11:;
panda$core$Int64 $tmp3114 = (panda$core$Int64) {64};
panda$core$Bit $tmp3115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3114);
bool $tmp3116 = $tmp3115.value;
if ($tmp3116) goto block6; else goto block12;
block12:;
panda$core$Int64 $tmp3117 = (panda$core$Int64) {65};
panda$core$Bit $tmp3118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3117);
bool $tmp3119 = $tmp3118.value;
if ($tmp3119) goto block6; else goto block13;
block13:;
panda$core$Int64 $tmp3120 = (panda$core$Int64) {66};
panda$core$Bit $tmp3121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3098, $tmp3120);
bool $tmp3122 = $tmp3121.value;
if ($tmp3122) goto block6; else goto block14;
block6:;
// line 1365
org$pandalanguage$pandac$ASTNode* $tmp3123 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
org$pandalanguage$pandac$ASTNode* $tmp3124 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3124));
*(&local2) = $tmp3123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
// line 1366
org$pandalanguage$pandac$ASTNode* $tmp3125 = *(&local2);
panda$core$Bit $tmp3126 = panda$core$Bit$init$builtin_bit($tmp3125 == NULL);
bool $tmp3127 = $tmp3126.value;
if ($tmp3127) goto block15; else goto block16;
block15:;
// line 1367
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3128 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3129 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3129));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1369
org$pandalanguage$pandac$ASTNode* $tmp3130 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3131 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp3132 = *(&local1);
org$pandalanguage$pandac$Position $tmp3133 = $tmp3132.position;
org$pandalanguage$pandac$ASTNode* $tmp3134 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3135 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3136 = $tmp3135.kind;
org$pandalanguage$pandac$ASTNode* $tmp3137 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3130, $tmp3131, $tmp3133, $tmp3134, $tmp3136, $tmp3137);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3130));
org$pandalanguage$pandac$ASTNode* $tmp3138 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3138));
*(&local0) = $tmp3130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3130));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3139 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3139));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block14:;
// line 1372
org$pandalanguage$pandac$parser$Token $tmp3140 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3140);
// line 1373
org$pandalanguage$pandac$ASTNode* $tmp3141 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3141));
org$pandalanguage$pandac$ASTNode* $tmp3142 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3142));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3141;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3143 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3144 = $tmp3143.value;
if ($tmp3144) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp3145 = (panda$core$Int64) {1349};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3146, $tmp3145, &$s3147);
abort(); // unreachable
block17:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1383
org$pandalanguage$pandac$ASTNode* $tmp3148 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3148));
org$pandalanguage$pandac$ASTNode* $tmp3149 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3149));
*(&local0) = $tmp3148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3148));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1384
org$pandalanguage$pandac$ASTNode* $tmp3150 = *(&local0);
panda$core$Bit $tmp3151 = panda$core$Bit$init$builtin_bit($tmp3150 == NULL);
bool $tmp3152 = $tmp3151.value;
if ($tmp3152) goto block1; else goto block2;
block1:;
// line 1385
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3153 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3153));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1387
goto block3;
block3:;
// line 1388
org$pandalanguage$pandac$parser$Token $tmp3154 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3154;
// line 1389
org$pandalanguage$pandac$parser$Token $tmp3155 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3156 = $tmp3155.kind;
panda$core$Int64 $tmp3157 = $tmp3156.$rawValue;
panda$core$Int64 $tmp3158 = (panda$core$Int64) {67};
panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3157, $tmp3158);
bool $tmp3160 = $tmp3159.value;
if ($tmp3160) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp3161 = (panda$core$Int64) {71};
panda$core$Bit $tmp3162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3157, $tmp3161);
bool $tmp3163 = $tmp3162.value;
if ($tmp3163) goto block6; else goto block8;
block6:;
// line 1391
org$pandalanguage$pandac$ASTNode* $tmp3164 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3164));
org$pandalanguage$pandac$ASTNode* $tmp3165 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3165));
*(&local2) = $tmp3164;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3164));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
// line 1392
org$pandalanguage$pandac$ASTNode* $tmp3166 = *(&local2);
panda$core$Bit $tmp3167 = panda$core$Bit$init$builtin_bit($tmp3166 == NULL);
bool $tmp3168 = $tmp3167.value;
if ($tmp3168) goto block9; else goto block10;
block9:;
// line 1393
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3169 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3169));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3170 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3170));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1395
org$pandalanguage$pandac$ASTNode* $tmp3171 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3172 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token $tmp3173 = *(&local1);
org$pandalanguage$pandac$Position $tmp3174 = $tmp3173.position;
org$pandalanguage$pandac$ASTNode* $tmp3175 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3176 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3177 = $tmp3176.kind;
org$pandalanguage$pandac$ASTNode* $tmp3178 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3171, $tmp3172, $tmp3174, $tmp3175, $tmp3177, $tmp3178);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
org$pandalanguage$pandac$ASTNode* $tmp3179 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3179));
*(&local0) = $tmp3171;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
// unreffing REF($77:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3180 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3180));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block8:;
// line 1398
org$pandalanguage$pandac$parser$Token $tmp3181 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp3181);
// line 1399
org$pandalanguage$pandac$ASTNode* $tmp3182 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3182));
org$pandalanguage$pandac$ASTNode* $tmp3183 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3183));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3182;
block5:;
goto block3;
block4:;
panda$core$Bit $tmp3184 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3185 = $tmp3184.value;
if ($tmp3185) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp3186 = (panda$core$Int64) {1382};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3187, $tmp3186, &$s3188);
abort(); // unreachable
block11:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1409
org$pandalanguage$pandac$ASTNode* $tmp3189 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
org$pandalanguage$pandac$ASTNode* $tmp3190 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3190));
*(&local0) = $tmp3189;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3189));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1410
org$pandalanguage$pandac$ASTNode* $tmp3191 = *(&local0);
panda$core$Bit $tmp3192 = panda$core$Bit$init$builtin_bit($tmp3191 == NULL);
bool $tmp3193 = $tmp3192.value;
if ($tmp3193) goto block1; else goto block2;
block1:;
// line 1411
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3194 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3194));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1413
goto block3;
block3:;
// line 1414
panda$core$Int64 $tmp3195 = (panda$core$Int64) {69};
org$pandalanguage$pandac$parser$Token$Kind $tmp3196 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3195);
org$pandalanguage$pandac$parser$Token$nullable $tmp3197 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3196);
*(&local1) = $tmp3197;
// line 1415
org$pandalanguage$pandac$parser$Token$nullable $tmp3198 = *(&local1);
panda$core$Bit $tmp3199 = panda$core$Bit$init$builtin_bit(!$tmp3198.nonnull);
bool $tmp3200 = $tmp3199.value;
if ($tmp3200) goto block5; else goto block6;
block5:;
// line 1416
goto block4;
block6:;
// line 1418
org$pandalanguage$pandac$ASTNode* $tmp3201 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3201));
org$pandalanguage$pandac$ASTNode* $tmp3202 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3202));
*(&local2) = $tmp3201;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3201));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode?)
// line 1419
org$pandalanguage$pandac$ASTNode* $tmp3203 = *(&local2);
panda$core$Bit $tmp3204 = panda$core$Bit$init$builtin_bit($tmp3203 == NULL);
bool $tmp3205 = $tmp3204.value;
if ($tmp3205) goto block7; else goto block8;
block7:;
// line 1420
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3206 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3206));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3207 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3207));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1422
org$pandalanguage$pandac$ASTNode* $tmp3208 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3209 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$Token$nullable $tmp3210 = *(&local1);
org$pandalanguage$pandac$Position $tmp3211 = ((org$pandalanguage$pandac$parser$Token) $tmp3210.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3212 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp3213 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3214 = ((org$pandalanguage$pandac$parser$Token) $tmp3213.value).kind;
org$pandalanguage$pandac$ASTNode* $tmp3215 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3208, $tmp3209, $tmp3211, $tmp3212, $tmp3214, $tmp3215);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3208));
org$pandalanguage$pandac$ASTNode* $tmp3216 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3216));
*(&local0) = $tmp3208;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3208));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3217 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3217));
// unreffing next
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block4:;
// line 1424
org$pandalanguage$pandac$ASTNode* $tmp3218 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3218));
org$pandalanguage$pandac$ASTNode* $tmp3219 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3219));
// unreffing result
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3218;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1431
panda$core$Int64 $tmp3220 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3221 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3220);
org$pandalanguage$pandac$parser$Token$nullable $tmp3222 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3221, &$s3223);
*(&local0) = $tmp3222;
// line 1432
org$pandalanguage$pandac$parser$Token$nullable $tmp3224 = *(&local0);
panda$core$Bit $tmp3225 = panda$core$Bit$init$builtin_bit(!$tmp3224.nonnull);
bool $tmp3226 = $tmp3225.value;
if ($tmp3226) goto block1; else goto block2;
block1:;
// line 1433
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1435
org$pandalanguage$pandac$ASTNode* $tmp3227 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3227));
org$pandalanguage$pandac$ASTNode* $tmp3228 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3228));
*(&local1) = $tmp3227;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3227));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1436
org$pandalanguage$pandac$ASTNode* $tmp3229 = *(&local1);
panda$core$Bit $tmp3230 = panda$core$Bit$init$builtin_bit($tmp3229 == NULL);
bool $tmp3231 = $tmp3230.value;
if ($tmp3231) goto block3; else goto block4;
block3:;
// line 1437
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3232 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3232));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1439
org$pandalanguage$pandac$FixedArray* $tmp3233 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
org$pandalanguage$pandac$FixedArray* $tmp3234 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3234));
*(&local2) = $tmp3233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3233));
// unreffing REF($43:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1440
org$pandalanguage$pandac$FixedArray* $tmp3235 = *(&local2);
panda$core$Bit $tmp3236 = panda$core$Bit$init$builtin_bit($tmp3235 == NULL);
bool $tmp3237 = $tmp3236.value;
if ($tmp3237) goto block5; else goto block6;
block5:;
// line 1441
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3238 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3238));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3239 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3239));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1443
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1444
panda$core$Int64 $tmp3240 = (panda$core$Int64) {38};
org$pandalanguage$pandac$parser$Token$Kind $tmp3241 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3240);
org$pandalanguage$pandac$parser$Token$nullable $tmp3242 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3241);
panda$core$Bit $tmp3243 = panda$core$Bit$init$builtin_bit($tmp3242.nonnull);
bool $tmp3244 = $tmp3243.value;
if ($tmp3244) goto block7; else goto block9;
block7:;
// line 1445
org$pandalanguage$pandac$parser$Token $tmp3245 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3246 = $tmp3245.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3247;
$tmp3247 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3247->value = $tmp3246;
panda$core$Int64 $tmp3248 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp3249 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3248);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3250;
$tmp3250 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3250->value = $tmp3249;
ITable* $tmp3251 = ((panda$core$Equatable*) $tmp3247)->$class->itable;
while ($tmp3251->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3251 = $tmp3251->next;
}
$fn3253 $tmp3252 = $tmp3251->methods[0];
panda$core$Bit $tmp3254 = $tmp3252(((panda$core$Equatable*) $tmp3247), ((panda$core$Equatable*) $tmp3250));
bool $tmp3255 = $tmp3254.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3250)));
// unreffing REF($91:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3247)));
// unreffing REF($87:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3255) goto block10; else goto block12;
block10:;
// line 1446
org$pandalanguage$pandac$ASTNode* $tmp3256 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
org$pandalanguage$pandac$ASTNode* $tmp3257 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3257));
*(&local3) = $tmp3256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3256));
// unreffing REF($103:org.pandalanguage.pandac.ASTNode?)
// line 1447
org$pandalanguage$pandac$ASTNode* $tmp3258 = *(&local3);
panda$core$Bit $tmp3259 = panda$core$Bit$init$builtin_bit($tmp3258 == NULL);
bool $tmp3260 = $tmp3259.value;
if ($tmp3260) goto block13; else goto block14;
block13:;
// line 1448
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3261 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3261));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3262 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3262));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3263 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3263));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1452
org$pandalanguage$pandac$ASTNode* $tmp3264 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
org$pandalanguage$pandac$ASTNode* $tmp3265 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3265));
*(&local3) = $tmp3264;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3264));
// unreffing REF($141:org.pandalanguage.pandac.ASTNode?)
// line 1453
org$pandalanguage$pandac$ASTNode* $tmp3266 = *(&local3);
panda$core$Bit $tmp3267 = panda$core$Bit$init$builtin_bit($tmp3266 == NULL);
bool $tmp3268 = $tmp3267.value;
if ($tmp3268) goto block15; else goto block16;
block15:;
// line 1454
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3269 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3269));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3270 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3270));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3271 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3271));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
goto block11;
block11:;
goto block8;
block9:;
// line 1
// line 1459
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3272 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3272));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
// line 1461
org$pandalanguage$pandac$ASTNode* $tmp3273 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3274 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$nullable $tmp3275 = *(&local0);
org$pandalanguage$pandac$Position $tmp3276 = ((org$pandalanguage$pandac$parser$Token) $tmp3275.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3277 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3278 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3279 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp3273, $tmp3274, $tmp3276, $tmp3277, $tmp3278, $tmp3279);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3273));
// unreffing REF($188:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3280 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3280));
// unreffing ifFalse
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3281 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3281));
// unreffing ifTrue
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3282 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3282));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3273;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1468
panda$core$Int64 $tmp3283 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3284 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3283);
org$pandalanguage$pandac$parser$Token$nullable $tmp3285 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3284, &$s3286);
panda$core$Bit $tmp3287 = panda$core$Bit$init$builtin_bit(!$tmp3285.nonnull);
bool $tmp3288 = $tmp3287.value;
if ($tmp3288) goto block1; else goto block2;
block1:;
// line 1469
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1471
panda$core$Bit $tmp3289 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$ASTNode* $tmp3290 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp3289);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3290));
// unreffing REF($14:org.pandalanguage.pandac.ASTNode?)
return $tmp3290;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1478
panda$core$Int64 $tmp3291 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp3292 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3291);
org$pandalanguage$pandac$parser$Token$nullable $tmp3293 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3292, &$s3294);
*(&local0) = $tmp3293;
// line 1479
org$pandalanguage$pandac$parser$Token$nullable $tmp3295 = *(&local0);
panda$core$Bit $tmp3296 = panda$core$Bit$init$builtin_bit(!$tmp3295.nonnull);
bool $tmp3297 = $tmp3296.value;
if ($tmp3297) goto block1; else goto block2;
block1:;
// line 1480
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1482
org$pandalanguage$pandac$parser$Token $tmp3298 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3299 = $tmp3298.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3300;
$tmp3300 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3300->value = $tmp3299;
panda$core$Int64 $tmp3301 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp3302 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3301);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3303;
$tmp3303 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3303->value = $tmp3302;
ITable* $tmp3304 = ((panda$core$Equatable*) $tmp3300)->$class->itable;
while ($tmp3304->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3304 = $tmp3304->next;
}
$fn3306 $tmp3305 = $tmp3304->methods[0];
panda$core$Bit $tmp3307 = $tmp3305(((panda$core$Equatable*) $tmp3300), ((panda$core$Equatable*) $tmp3303));
bool $tmp3308 = $tmp3307.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3303)));
// unreffing REF($22:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3300)));
// unreffing REF($18:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3308) goto block3; else goto block4;
block3:;
// line 1483
org$pandalanguage$pandac$ASTNode* $tmp3309 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
org$pandalanguage$pandac$ASTNode* $tmp3310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3310));
*(&local1) = $tmp3309;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3309));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode?)
// line 1484
org$pandalanguage$pandac$ASTNode* $tmp3311 = *(&local1);
panda$core$Bit $tmp3312 = panda$core$Bit$init$builtin_bit($tmp3311 == NULL);
bool $tmp3313 = $tmp3312.value;
if ($tmp3313) goto block5; else goto block6;
block5:;
// line 1485
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3314 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3314));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1487
org$pandalanguage$pandac$ASTNode* $tmp3315 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3316 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp3317 = *(&local0);
org$pandalanguage$pandac$Position $tmp3318 = ((org$pandalanguage$pandac$parser$Token) $tmp3317.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3319 = *(&local0);
panda$core$String* $tmp3320 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3319.value));
org$pandalanguage$pandac$ASTNode* $tmp3321 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3315, $tmp3316, $tmp3318, $tmp3320, $tmp3321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
// unreffing REF($68:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
// unreffing REF($61:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3322 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3322));
// unreffing type
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3315;
block4:;
// line 1489
org$pandalanguage$pandac$ASTNode* $tmp3323 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3324 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp3325 = *(&local0);
org$pandalanguage$pandac$Position $tmp3326 = ((org$pandalanguage$pandac$parser$Token) $tmp3325.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3327 = *(&local0);
panda$core$String* $tmp3328 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3327.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3323, $tmp3324, $tmp3326, $tmp3328);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3323));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3328));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3323));
// unreffing REF($87:org.pandalanguage.pandac.ASTNode)
return $tmp3323;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
// line 1496
panda$core$Int64 $tmp3329 = (panda$core$Int64) {33};
org$pandalanguage$pandac$parser$Token$Kind $tmp3330 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3329);
org$pandalanguage$pandac$parser$Token$nullable $tmp3331 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3330, &$s3332);
*(&local0) = $tmp3331;
// line 1497
org$pandalanguage$pandac$parser$Token$nullable $tmp3333 = *(&local0);
panda$core$Bit $tmp3334 = panda$core$Bit$init$builtin_bit(!$tmp3333.nonnull);
bool $tmp3335 = $tmp3334.value;
if ($tmp3335) goto block1; else goto block2;
block1:;
// line 1498
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1500
org$pandalanguage$pandac$ASTNode* $tmp3336 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3336));
org$pandalanguage$pandac$ASTNode* $tmp3337 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3337));
*(&local1) = $tmp3336;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3336));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1501
org$pandalanguage$pandac$ASTNode* $tmp3338 = *(&local1);
panda$core$Bit $tmp3339 = panda$core$Bit$init$builtin_bit($tmp3338 == NULL);
bool $tmp3340 = $tmp3339.value;
if ($tmp3340) goto block3; else goto block4;
block3:;
// line 1502
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3341 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3341));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1504
panda$core$Int64 $tmp3342 = (panda$core$Int64) {35};
org$pandalanguage$pandac$parser$Token$Kind $tmp3343 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3342);
org$pandalanguage$pandac$parser$Token$nullable $tmp3344 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3343, &$s3345);
panda$core$Bit $tmp3346 = panda$core$Bit$init$builtin_bit(!$tmp3344.nonnull);
bool $tmp3347 = $tmp3346.value;
if ($tmp3347) goto block5; else goto block6;
block5:;
// line 1505
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3348 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3348));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1507
org$pandalanguage$pandac$ASTNode* $tmp3349 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
org$pandalanguage$pandac$ASTNode* $tmp3350 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3350));
*(&local2) = $tmp3349;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3349));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
// line 1508
org$pandalanguage$pandac$ASTNode* $tmp3351 = *(&local2);
panda$core$Bit $tmp3352 = panda$core$Bit$init$builtin_bit($tmp3351 == NULL);
bool $tmp3353 = $tmp3352.value;
if ($tmp3353) goto block7; else goto block8;
block7:;
// line 1509
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3354 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3354));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3355 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1511
org$pandalanguage$pandac$FixedArray* $tmp3356 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
org$pandalanguage$pandac$FixedArray* $tmp3357 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3357));
*(&local3) = $tmp3356;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
// unreffing REF($92:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1512
org$pandalanguage$pandac$FixedArray* $tmp3358 = *(&local3);
panda$core$Bit $tmp3359 = panda$core$Bit$init$builtin_bit($tmp3358 == NULL);
bool $tmp3360 = $tmp3359.value;
if ($tmp3360) goto block9; else goto block10;
block9:;
// line 1513
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3361 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3361));
// unreffing block
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3362 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3362));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3363 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3363));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 1515
org$pandalanguage$pandac$ASTNode* $tmp3364 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3365 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$nullable $tmp3366 = *(&local0);
org$pandalanguage$pandac$Position $tmp3367 = ((org$pandalanguage$pandac$parser$Token) $tmp3366.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3368 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3369 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3370 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3364, $tmp3365, $tmp3367, param1, $tmp3368, $tmp3369, $tmp3370);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3364));
// unreffing REF($129:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3371 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3371));
// unreffing block
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3372 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
// unreffing list
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3373 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3373));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3364;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
// line 1522
panda$core$Int64 $tmp3374 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3375 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3374);
org$pandalanguage$pandac$parser$Token$nullable $tmp3376 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3375, &$s3377);
*(&local0) = $tmp3376;
// line 1523
org$pandalanguage$pandac$parser$Token$nullable $tmp3378 = *(&local0);
panda$core$Bit $tmp3379 = panda$core$Bit$init$builtin_bit(!$tmp3378.nonnull);
bool $tmp3380 = $tmp3379.value;
if ($tmp3380) goto block1; else goto block2;
block1:;
// line 1524
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1526
org$pandalanguage$pandac$ASTNode* $tmp3381 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3381));
org$pandalanguage$pandac$ASTNode* $tmp3382 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3382));
*(&local1) = $tmp3381;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3381));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1527
org$pandalanguage$pandac$ASTNode* $tmp3383 = *(&local1);
panda$core$Bit $tmp3384 = panda$core$Bit$init$builtin_bit($tmp3383 == NULL);
bool $tmp3385 = $tmp3384.value;
if ($tmp3385) goto block3; else goto block4;
block3:;
// line 1528
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3386 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3386));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1530
org$pandalanguage$pandac$FixedArray* $tmp3387 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
org$pandalanguage$pandac$FixedArray* $tmp3388 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3388));
*(&local2) = $tmp3387;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3387));
// unreffing REF($43:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1531
org$pandalanguage$pandac$FixedArray* $tmp3389 = *(&local2);
panda$core$Bit $tmp3390 = panda$core$Bit$init$builtin_bit($tmp3389 == NULL);
bool $tmp3391 = $tmp3390.value;
if ($tmp3391) goto block5; else goto block6;
block5:;
// line 1532
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3392 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3392));
// unreffing body
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3393 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3393));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1534
org$pandalanguage$pandac$ASTNode* $tmp3394 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3395 = (panda$core$Int64) {50};
org$pandalanguage$pandac$parser$Token$nullable $tmp3396 = *(&local0);
org$pandalanguage$pandac$Position $tmp3397 = ((org$pandalanguage$pandac$parser$Token) $tmp3396.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3398 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3399 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3394, $tmp3395, $tmp3397, param1, $tmp3398, $tmp3399);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3394));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3394));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3400 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3400));
// unreffing body
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3401 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3401));
// unreffing test
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3394;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1541
panda$core$Int64 $tmp3402 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp3403 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3402);
org$pandalanguage$pandac$parser$Token$nullable $tmp3404 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3403, &$s3405);
*(&local0) = $tmp3404;
// line 1542
org$pandalanguage$pandac$parser$Token$nullable $tmp3406 = *(&local0);
panda$core$Bit $tmp3407 = panda$core$Bit$init$builtin_bit(!$tmp3406.nonnull);
bool $tmp3408 = $tmp3407.value;
if ($tmp3408) goto block1; else goto block2;
block1:;
// line 1543
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1545
org$pandalanguage$pandac$FixedArray* $tmp3409 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3409));
org$pandalanguage$pandac$FixedArray* $tmp3410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3410));
*(&local1) = $tmp3409;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3409));
// unreffing REF($16:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1546
org$pandalanguage$pandac$FixedArray* $tmp3411 = *(&local1);
panda$core$Bit $tmp3412 = panda$core$Bit$init$builtin_bit($tmp3411 == NULL);
bool $tmp3413 = $tmp3412.value;
if ($tmp3413) goto block3; else goto block4;
block3:;
// line 1547
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3414 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3414));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1549
panda$core$Int64 $tmp3415 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$Kind $tmp3416 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3415);
org$pandalanguage$pandac$parser$Token$nullable $tmp3417 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3416, &$s3418);
panda$core$Bit $tmp3419 = panda$core$Bit$init$builtin_bit(!$tmp3417.nonnull);
bool $tmp3420 = $tmp3419.value;
if ($tmp3420) goto block5; else goto block6;
block5:;
// line 1550
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3421 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3421));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1552
org$pandalanguage$pandac$ASTNode* $tmp3422 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3422));
org$pandalanguage$pandac$ASTNode* $tmp3423 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3423));
*(&local2) = $tmp3422;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3422));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
// line 1553
org$pandalanguage$pandac$ASTNode* $tmp3424 = *(&local2);
panda$core$Bit $tmp3425 = panda$core$Bit$init$builtin_bit($tmp3424 == NULL);
bool $tmp3426 = $tmp3425.value;
if ($tmp3426) goto block7; else goto block8;
block7:;
// line 1554
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3427 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3427));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3428 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3428));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1556
org$pandalanguage$pandac$ASTNode* $tmp3429 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3430 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$nullable $tmp3431 = *(&local0);
org$pandalanguage$pandac$Position $tmp3432 = ((org$pandalanguage$pandac$parser$Token) $tmp3431.value).position;
org$pandalanguage$pandac$FixedArray* $tmp3433 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3434 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3429, $tmp3430, $tmp3432, param1, $tmp3433, $tmp3434);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3429));
// unreffing REF($92:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3435 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3435));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3436 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3436));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp3429;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
// line 1563
panda$core$Int64 $tmp3437 = (panda$core$Int64) {36};
org$pandalanguage$pandac$parser$Token$Kind $tmp3438 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3437);
org$pandalanguage$pandac$parser$Token$nullable $tmp3439 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3438, &$s3440);
*(&local0) = $tmp3439;
// line 1564
org$pandalanguage$pandac$parser$Token$nullable $tmp3441 = *(&local0);
panda$core$Bit $tmp3442 = panda$core$Bit$init$builtin_bit(!$tmp3441.nonnull);
bool $tmp3443 = $tmp3442.value;
if ($tmp3443) goto block1; else goto block2;
block1:;
// line 1565
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1567
org$pandalanguage$pandac$FixedArray* $tmp3444 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3444));
org$pandalanguage$pandac$FixedArray* $tmp3445 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3445));
*(&local1) = $tmp3444;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3444));
// unreffing REF($16:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1568
org$pandalanguage$pandac$FixedArray* $tmp3446 = *(&local1);
panda$core$Bit $tmp3447 = panda$core$Bit$init$builtin_bit($tmp3446 == NULL);
bool $tmp3448 = $tmp3447.value;
if ($tmp3448) goto block3; else goto block4;
block3:;
// line 1569
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3449 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3449));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1571
org$pandalanguage$pandac$ASTNode* $tmp3450 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3451 = (panda$core$Int64) {25};
org$pandalanguage$pandac$parser$Token$nullable $tmp3452 = *(&local0);
org$pandalanguage$pandac$Position $tmp3453 = ((org$pandalanguage$pandac$parser$Token) $tmp3452.value).position;
org$pandalanguage$pandac$FixedArray* $tmp3454 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3450, $tmp3451, $tmp3453, param1, $tmp3454);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3450));
// unreffing REF($43:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3455 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3455));
// unreffing body
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp3450;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1578
panda$core$Int64 $tmp3456 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$Kind $tmp3457 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3456);
org$pandalanguage$pandac$parser$Token$nullable $tmp3458 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3457, &$s3459);
*(&local0) = $tmp3458;
// line 1579
org$pandalanguage$pandac$parser$Token$nullable $tmp3460 = *(&local0);
panda$core$Bit $tmp3461 = panda$core$Bit$init$builtin_bit(!$tmp3460.nonnull);
bool $tmp3462 = $tmp3461.value;
if ($tmp3462) goto block1; else goto block2;
block1:;
// line 1580
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1582
org$pandalanguage$pandac$ASTNode* $tmp3463 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3463));
org$pandalanguage$pandac$ASTNode* $tmp3464 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
*(&local1) = $tmp3463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3463));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1583
org$pandalanguage$pandac$ASTNode* $tmp3465 = *(&local1);
panda$core$Bit $tmp3466 = panda$core$Bit$init$builtin_bit($tmp3465 == NULL);
bool $tmp3467 = $tmp3466.value;
if ($tmp3467) goto block3; else goto block4;
block3:;
// line 1584
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3468 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3468));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1586
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1587
panda$core$Int64 $tmp3469 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3470 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3469);
org$pandalanguage$pandac$parser$Token$nullable $tmp3471 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3470);
panda$core$Bit $tmp3472 = panda$core$Bit$init$builtin_bit($tmp3471.nonnull);
bool $tmp3473 = $tmp3472.value;
if ($tmp3473) goto block5; else goto block7;
block5:;
// line 1588
org$pandalanguage$pandac$ASTNode* $tmp3474 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3474));
org$pandalanguage$pandac$ASTNode* $tmp3475 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3475));
*(&local2) = $tmp3474;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3474));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
// line 1589
org$pandalanguage$pandac$ASTNode* $tmp3476 = *(&local2);
panda$core$Bit $tmp3477 = panda$core$Bit$init$builtin_bit($tmp3476 == NULL);
bool $tmp3478 = $tmp3477.value;
if ($tmp3478) goto block8; else goto block9;
block8:;
// line 1590
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3479 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3479));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3480 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3480));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 1594
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3481 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3481));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1596
org$pandalanguage$pandac$ASTNode* $tmp3482 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3483 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$Token$nullable $tmp3484 = *(&local0);
org$pandalanguage$pandac$Position $tmp3485 = ((org$pandalanguage$pandac$parser$Token) $tmp3484.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3486 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3487 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3482, $tmp3483, $tmp3485, $tmp3486, $tmp3487);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3482));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3482));
// unreffing REF($94:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3488 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3488));
// unreffing message
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3489 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3482;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
panda$core$Bit* $tmp3490 = &param0->allowLambdas;
panda$core$Bit $tmp3491 = *$tmp3490;
bool $tmp3492 = $tmp3491.value;
if ($tmp3492) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp3493 = (panda$core$Int64) {1604};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3494, $tmp3493, &$s3495);
abort(); // unreachable
block1:;
// line 1605
panda$core$Int64 $tmp3496 = (panda$core$Int64) {40};
org$pandalanguage$pandac$parser$Token$Kind $tmp3497 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3496);
org$pandalanguage$pandac$parser$Token$nullable $tmp3498 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3497, &$s3499);
*(&local0) = $tmp3498;
// line 1606
org$pandalanguage$pandac$parser$Token$nullable $tmp3500 = *(&local0);
panda$core$Bit $tmp3501 = panda$core$Bit$init$builtin_bit(!$tmp3500.nonnull);
bool $tmp3502 = $tmp3501.value;
if ($tmp3502) goto block3; else goto block4;
block3:;
// line 1607
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1609
panda$core$Bit $tmp3503 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3504 = &param0->allowLambdas;
*$tmp3504 = $tmp3503;
// line 1610
panda$collections$Array* $tmp3505 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3505);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
panda$collections$Array* $tmp3506 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3506));
*(&local1) = $tmp3505;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
// unreffing REF($27:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1611
org$pandalanguage$pandac$ASTNode* $tmp3507 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3507));
org$pandalanguage$pandac$ASTNode* $tmp3508 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3508));
*(&local2) = $tmp3507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3507));
// unreffing REF($41:org.pandalanguage.pandac.ASTNode?)
// line 1612
org$pandalanguage$pandac$ASTNode* $tmp3509 = *(&local2);
panda$core$Bit $tmp3510 = panda$core$Bit$init$builtin_bit($tmp3509 == NULL);
bool $tmp3511 = $tmp3510.value;
if ($tmp3511) goto block5; else goto block6;
block5:;
// line 1613
panda$core$Bit $tmp3512 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3513 = &param0->allowLambdas;
*$tmp3513 = $tmp3512;
// line 1614
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3514 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3514));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3515 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1616
panda$collections$Array* $tmp3516 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3517 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3516, ((panda$core$Object*) $tmp3517));
// line 1617
goto block7;
block7:;
panda$core$Int64 $tmp3518 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3519 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3518);
org$pandalanguage$pandac$parser$Token$nullable $tmp3520 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3519);
panda$core$Bit $tmp3521 = panda$core$Bit$init$builtin_bit($tmp3520.nonnull);
bool $tmp3522 = $tmp3521.value;
if ($tmp3522) goto block8; else goto block9;
block8:;
// line 1618
org$pandalanguage$pandac$ASTNode* $tmp3523 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3523));
org$pandalanguage$pandac$ASTNode* $tmp3524 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3524));
*(&local2) = $tmp3523;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3523));
// unreffing REF($93:org.pandalanguage.pandac.ASTNode?)
// line 1619
org$pandalanguage$pandac$ASTNode* $tmp3525 = *(&local2);
panda$core$Bit $tmp3526 = panda$core$Bit$init$builtin_bit($tmp3525 == NULL);
bool $tmp3527 = $tmp3526.value;
if ($tmp3527) goto block10; else goto block11;
block10:;
// line 1620
panda$core$Bit $tmp3528 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3529 = &param0->allowLambdas;
*$tmp3529 = $tmp3528;
// line 1621
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3530 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3530));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3531 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3531));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1623
panda$collections$Array* $tmp3532 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3533 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3532, ((panda$core$Object*) $tmp3533));
goto block7;
block9:;
// line 1625
panda$core$Bit $tmp3534 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3535 = &param0->allowLambdas;
*$tmp3535 = $tmp3534;
// line 1626
org$pandalanguage$pandac$FixedArray* $tmp3536 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
org$pandalanguage$pandac$FixedArray* $tmp3537 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3537));
*(&local3) = $tmp3536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3536));
// unreffing REF($140:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1627
org$pandalanguage$pandac$FixedArray* $tmp3538 = *(&local3);
panda$core$Bit $tmp3539 = panda$core$Bit$init$builtin_bit($tmp3538 == NULL);
bool $tmp3540 = $tmp3539.value;
if ($tmp3540) goto block12; else goto block13;
block12:;
// line 1628
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3541 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3541));
// unreffing statements
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3542 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3542));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3543 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3543));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1630
org$pandalanguage$pandac$ASTNode* $tmp3544 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3545 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$nullable $tmp3546 = *(&local0);
org$pandalanguage$pandac$Position $tmp3547 = ((org$pandalanguage$pandac$parser$Token) $tmp3546.value).position;
panda$collections$Array* $tmp3548 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3549 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3548);
org$pandalanguage$pandac$FixedArray* $tmp3550 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3544, $tmp3545, $tmp3547, $tmp3549, $tmp3550);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3544));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3549));
// unreffing REF($184:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3544));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3551 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3551));
// unreffing statements
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3552 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3552));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3553 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3553));
// unreffing expressions
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3544;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
org$pandalanguage$pandac$parser$Token local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token local6;
// line 1637
panda$core$Int64 $tmp3554 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$Kind $tmp3555 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3554);
org$pandalanguage$pandac$parser$Token$nullable $tmp3556 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3555, &$s3557);
*(&local0) = $tmp3556;
// line 1638
org$pandalanguage$pandac$parser$Token$nullable $tmp3558 = *(&local0);
panda$core$Bit $tmp3559 = panda$core$Bit$init$builtin_bit(!$tmp3558.nonnull);
bool $tmp3560 = $tmp3559.value;
if ($tmp3560) goto block1; else goto block2;
block1:;
// line 1639
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1641
org$pandalanguage$pandac$ASTNode* $tmp3561 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
org$pandalanguage$pandac$ASTNode* $tmp3562 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3562));
*(&local1) = $tmp3561;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3561));
// unreffing REF($16:org.pandalanguage.pandac.ASTNode?)
// line 1642
org$pandalanguage$pandac$ASTNode* $tmp3563 = *(&local1);
panda$core$Bit $tmp3564 = panda$core$Bit$init$builtin_bit($tmp3563 == NULL);
bool $tmp3565 = $tmp3564.value;
if ($tmp3565) goto block3; else goto block4;
block3:;
// line 1643
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3566 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3566));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1645
panda$core$Int64 $tmp3567 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3568 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3567);
org$pandalanguage$pandac$parser$Token$nullable $tmp3569 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3568, &$s3570);
panda$core$Bit $tmp3571 = panda$core$Bit$init$builtin_bit(!$tmp3569.nonnull);
bool $tmp3572 = $tmp3571.value;
if ($tmp3572) goto block5; else goto block6;
block5:;
// line 1646
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3573 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3573));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 1648
panda$collections$Array* $tmp3574 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3574);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3574));
panda$collections$Array* $tmp3575 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3575));
*(&local2) = $tmp3574;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3574));
// unreffing REF($60:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1649
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3576 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3576));
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 1650
goto block7;
block7:;
// line 1651
org$pandalanguage$pandac$parser$Token $tmp3577 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local4) = $tmp3577;
// line 1652
org$pandalanguage$pandac$parser$Token $tmp3578 = *(&local4);
org$pandalanguage$pandac$parser$Token$Kind $tmp3579 = $tmp3578.kind;
panda$core$Int64 $tmp3580 = $tmp3579.$rawValue;
panda$core$Int64 $tmp3581 = (panda$core$Int64) {101};
panda$core$Bit $tmp3582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, $tmp3581);
bool $tmp3583 = $tmp3582.value;
if ($tmp3583) goto block10; else goto block11;
block10:;
// line 1654
goto block8;
block11:;
panda$core$Int64 $tmp3584 = (panda$core$Int64) {40};
panda$core$Bit $tmp3585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, $tmp3584);
bool $tmp3586 = $tmp3585.value;
if ($tmp3586) goto block12; else goto block13;
block12:;
// line 1657
org$pandalanguage$pandac$ASTNode* $tmp3587 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3587));
org$pandalanguage$pandac$ASTNode* $tmp3588 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3588));
*(&local5) = $tmp3587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3587));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
// line 1658
org$pandalanguage$pandac$ASTNode* $tmp3589 = *(&local5);
panda$core$Bit $tmp3590 = panda$core$Bit$init$builtin_bit($tmp3589 == NULL);
bool $tmp3591 = $tmp3590.value;
if ($tmp3591) goto block14; else goto block15;
block14:;
// line 1659
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3592 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3592));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp3593 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3593));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3594 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3594));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3595 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3595));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
// line 1661
panda$collections$Array* $tmp3596 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3597 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp3596, ((panda$core$Object*) $tmp3597));
org$pandalanguage$pandac$ASTNode* $tmp3598 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3598));
// unreffing w
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block13:;
panda$core$Int64 $tmp3599 = (panda$core$Int64) {41};
panda$core$Bit $tmp3600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3580, $tmp3599);
bool $tmp3601 = $tmp3600.value;
if ($tmp3601) goto block16; else goto block17;
block16:;
// line 1664
org$pandalanguage$pandac$parser$Token $tmp3602 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local6) = $tmp3602;
// line 1665
org$pandalanguage$pandac$FixedArray* $tmp3603 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
org$pandalanguage$pandac$FixedArray* $tmp3604 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3604));
*(&local3) = $tmp3603;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3603));
// unreffing REF($163:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1666
org$pandalanguage$pandac$FixedArray* $tmp3605 = *(&local3);
panda$core$Bit $tmp3606 = panda$core$Bit$init$builtin_bit($tmp3605 == NULL);
bool $tmp3607 = $tmp3606.value;
if ($tmp3607) goto block18; else goto block19;
block18:;
// line 1667
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3608 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3608));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3609 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3609));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3610 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3610));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block19:;
// line 1669
goto block8;
block17:;
// line 1672
org$pandalanguage$pandac$parser$Token $tmp3611 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1673
org$pandalanguage$pandac$parser$Token $tmp3612 = *(&local4);
org$pandalanguage$pandac$parser$Token $tmp3613 = *(&local4);
panda$core$String* $tmp3614 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp3613);
panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3616, $tmp3614);
panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3618);
panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3620, $tmp3617);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3612, $tmp3619);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
// unreffing REF($208:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3617));
// unreffing REF($207:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3615));
// unreffing REF($206:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3614));
// unreffing REF($205:panda.core.String)
// line 1675
goto block8;
block9:;
goto block7;
block8:;
// line 1679
panda$core$Int64 $tmp3621 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3622 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3621);
org$pandalanguage$pandac$parser$Token$nullable $tmp3623 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3622, &$s3624);
panda$core$Bit $tmp3625 = panda$core$Bit$init$builtin_bit(!$tmp3623.nonnull);
bool $tmp3626 = $tmp3625.value;
if ($tmp3626) goto block20; else goto block21;
block20:;
// line 1680
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3627 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3627));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3628 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3628));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3629 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3629));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 1682
org$pandalanguage$pandac$FixedArray* $tmp3630 = *(&local3);
panda$core$Bit $tmp3631 = panda$core$Bit$init$builtin_bit($tmp3630 != NULL);
bool $tmp3632 = $tmp3631.value;
if ($tmp3632) goto block22; else goto block23;
block22:;
// line 1683
org$pandalanguage$pandac$ASTNode* $tmp3633 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3634 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp3635 = *(&local0);
org$pandalanguage$pandac$Position $tmp3636 = ((org$pandalanguage$pandac$parser$Token) $tmp3635.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3637 = *(&local1);
panda$collections$Array* $tmp3638 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3639 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3638);
org$pandalanguage$pandac$FixedArray* $tmp3640 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3633, $tmp3634, $tmp3636, $tmp3637, $tmp3639, $tmp3640);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3633));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3639));
// unreffing REF($268:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3633));
// unreffing REF($259:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3641 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3641));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3642 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3642));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3643 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3643));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3633;
block23:;
// line 1685
org$pandalanguage$pandac$ASTNode* $tmp3644 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3645 = (panda$core$Int64) {26};
org$pandalanguage$pandac$parser$Token$nullable $tmp3646 = *(&local0);
org$pandalanguage$pandac$Position $tmp3647 = ((org$pandalanguage$pandac$parser$Token) $tmp3646.value).position;
org$pandalanguage$pandac$ASTNode* $tmp3648 = *(&local1);
panda$collections$Array* $tmp3649 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3650 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3649);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3644, $tmp3645, $tmp3647, $tmp3648, $tmp3650, ((org$pandalanguage$pandac$FixedArray*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3644));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3650));
// unreffing REF($307:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3644));
// unreffing REF($298:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3651 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3651));
// unreffing other
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$collections$Array* $tmp3652 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3652));
// unreffing whens
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3653 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3653));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3644;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1692
panda$core$Int64 $tmp3654 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp3655 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3654);
org$pandalanguage$pandac$parser$Token$nullable $tmp3656 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3655, &$s3657);
*(&local0) = $tmp3656;
// line 1693
org$pandalanguage$pandac$parser$Token$nullable $tmp3658 = *(&local0);
panda$core$Bit $tmp3659 = panda$core$Bit$init$builtin_bit(!$tmp3658.nonnull);
bool $tmp3660 = $tmp3659.value;
if ($tmp3660) goto block1; else goto block2;
block1:;
// line 1694
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 1696
panda$collections$Array* $tmp3661 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3661);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3661));
panda$collections$Array* $tmp3662 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3662));
*(&local1) = $tmp3661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3661));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1697
goto block3;
block3:;
// line 1698
org$pandalanguage$pandac$parser$Token $tmp3663 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3664 = $tmp3663.kind;
panda$core$Int64 $tmp3665 = $tmp3664.$rawValue;
panda$core$Int64 $tmp3666 = (panda$core$Int64) {101};
panda$core$Bit $tmp3667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3665, $tmp3666);
bool $tmp3668 = $tmp3667.value;
if ($tmp3668) goto block6; else goto block7;
block6:;
// line 1700
org$pandalanguage$pandac$parser$Token $tmp3669 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 1701
goto block4;
block7:;
panda$core$Int64 $tmp3670 = (panda$core$Int64) {29};
panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3665, $tmp3670);
bool $tmp3672 = $tmp3671.value;
if ($tmp3672) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp3673 = (panda$core$Int64) {30};
panda$core$Bit $tmp3674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3665, $tmp3673);
bool $tmp3675 = $tmp3674.value;
if ($tmp3675) goto block8; else goto block10;
block10:;
panda$core$Int64 $tmp3676 = (panda$core$Int64) {28};
panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3665, $tmp3676);
bool $tmp3678 = $tmp3677.value;
if ($tmp3678) goto block8; else goto block11;
block8:;
// line 1704
org$pandalanguage$pandac$ASTNode* $tmp3679 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3679));
org$pandalanguage$pandac$ASTNode* $tmp3680 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3680));
*(&local2) = $tmp3679;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3679));
// unreffing REF($56:org.pandalanguage.pandac.ASTNode?)
// line 1705
org$pandalanguage$pandac$ASTNode* $tmp3681 = *(&local2);
panda$core$Bit $tmp3682 = panda$core$Bit$init$builtin_bit($tmp3681 == NULL);
bool $tmp3683 = $tmp3682.value;
if ($tmp3683) goto block12; else goto block13;
block12:;
// line 1706
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3684 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3684));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3685 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3685));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block13:;
// line 1708
panda$core$Int64 $tmp3686 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp3687 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3686);
org$pandalanguage$pandac$parser$Token$nullable $tmp3688 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3687, &$s3689);
panda$core$Bit $tmp3690 = panda$core$Bit$init$builtin_bit(!$tmp3688.nonnull);
bool $tmp3691 = $tmp3690.value;
if ($tmp3691) goto block14; else goto block15;
block14:;
// line 1709
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3692 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3692));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3693 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3693));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block15:;
// line 1711
panda$collections$Array* $tmp3694 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3695 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp3694, ((panda$core$Object*) $tmp3695));
// line 1712
org$pandalanguage$pandac$ASTNode* $tmp3696 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3696));
// unreffing stmt
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block11:;
// line 1715
org$pandalanguage$pandac$ASTNode* $tmp3697 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3697));
org$pandalanguage$pandac$ASTNode* $tmp3698 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3698));
*(&local3) = $tmp3697;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3697));
// unreffing REF($124:org.pandalanguage.pandac.ASTNode?)
// line 1716
org$pandalanguage$pandac$ASTNode* $tmp3699 = *(&local3);
panda$core$Bit $tmp3700 = panda$core$Bit$init$builtin_bit($tmp3699 == NULL);
bool $tmp3701 = $tmp3700.value;
if ($tmp3701) goto block16; else goto block17;
block16:;
// line 1717
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3702 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3702));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3703 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3703));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block17:;
// line 1719
panda$collections$Array* $tmp3704 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp3705 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3704, ((panda$core$Object*) $tmp3705));
org$pandalanguage$pandac$ASTNode* $tmp3706 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3706));
// unreffing stmt
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block5:;
goto block3;
block4:;
// line 1723
panda$collections$Array* $tmp3707 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp3708 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3707);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3708));
// unreffing REF($172:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp3709 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3709));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp3708;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$FixedArray* local0 = NULL;
// line 1730
org$pandalanguage$pandac$FixedArray* $tmp3710 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3710));
org$pandalanguage$pandac$FixedArray* $tmp3711 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3711));
*(&local0) = $tmp3710;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3710));
// unreffing REF($1:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1731
org$pandalanguage$pandac$FixedArray* $tmp3712 = *(&local0);
panda$core$Bit $tmp3713 = panda$core$Bit$init$builtin_bit($tmp3712 == NULL);
bool $tmp3714 = $tmp3713.value;
if ($tmp3714) goto block1; else goto block2;
block1:;
// line 1732
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp3715 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3715));
// unreffing statements
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1734
org$pandalanguage$pandac$ASTNode* $tmp3716 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3717 = (panda$core$Int64) {7};
org$pandalanguage$pandac$Position $tmp3718 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$FixedArray* $tmp3719 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3716, $tmp3717, $tmp3718, $tmp3719);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3716));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3716));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp3720 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3720));
// unreffing statements
*(&local0) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp3716;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$parser$Token local1;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1741
org$pandalanguage$pandac$ASTNode* $tmp3721 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3721));
org$pandalanguage$pandac$ASTNode* $tmp3722 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3722));
*(&local0) = $tmp3721;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3721));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1742
org$pandalanguage$pandac$ASTNode* $tmp3723 = *(&local0);
panda$core$Bit $tmp3724 = panda$core$Bit$init$builtin_bit($tmp3723 == NULL);
bool $tmp3725 = $tmp3724.value;
if ($tmp3725) goto block1; else goto block2;
block1:;
// line 1743
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3726 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3726));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1745
org$pandalanguage$pandac$parser$Token $tmp3727 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3728 = $tmp3727.kind;
panda$core$Int64 $tmp3729 = $tmp3728.$rawValue;
panda$core$Int64 $tmp3730 = (panda$core$Int64) {74};
panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3730);
bool $tmp3732 = $tmp3731.value;
if ($tmp3732) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp3733 = (panda$core$Int64) {75};
panda$core$Bit $tmp3734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3733);
bool $tmp3735 = $tmp3734.value;
if ($tmp3735) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp3736 = (panda$core$Int64) {76};
panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3736);
bool $tmp3738 = $tmp3737.value;
if ($tmp3738) goto block4; else goto block7;
block7:;
panda$core$Int64 $tmp3739 = (panda$core$Int64) {77};
panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3739);
bool $tmp3741 = $tmp3740.value;
if ($tmp3741) goto block4; else goto block8;
block8:;
panda$core$Int64 $tmp3742 = (panda$core$Int64) {78};
panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3742);
bool $tmp3744 = $tmp3743.value;
if ($tmp3744) goto block4; else goto block9;
block9:;
panda$core$Int64 $tmp3745 = (panda$core$Int64) {79};
panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3745);
bool $tmp3747 = $tmp3746.value;
if ($tmp3747) goto block4; else goto block10;
block10:;
panda$core$Int64 $tmp3748 = (panda$core$Int64) {80};
panda$core$Bit $tmp3749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3748);
bool $tmp3750 = $tmp3749.value;
if ($tmp3750) goto block4; else goto block11;
block11:;
panda$core$Int64 $tmp3751 = (panda$core$Int64) {81};
panda$core$Bit $tmp3752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3751);
bool $tmp3753 = $tmp3752.value;
if ($tmp3753) goto block4; else goto block12;
block12:;
panda$core$Int64 $tmp3754 = (panda$core$Int64) {82};
panda$core$Bit $tmp3755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3754);
bool $tmp3756 = $tmp3755.value;
if ($tmp3756) goto block4; else goto block13;
block13:;
panda$core$Int64 $tmp3757 = (panda$core$Int64) {83};
panda$core$Bit $tmp3758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3757);
bool $tmp3759 = $tmp3758.value;
if ($tmp3759) goto block4; else goto block14;
block14:;
panda$core$Int64 $tmp3760 = (panda$core$Int64) {84};
panda$core$Bit $tmp3761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3760);
bool $tmp3762 = $tmp3761.value;
if ($tmp3762) goto block4; else goto block15;
block15:;
panda$core$Int64 $tmp3763 = (panda$core$Int64) {85};
panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3763);
bool $tmp3765 = $tmp3764.value;
if ($tmp3765) goto block4; else goto block16;
block16:;
panda$core$Int64 $tmp3766 = (panda$core$Int64) {86};
panda$core$Bit $tmp3767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3766);
bool $tmp3768 = $tmp3767.value;
if ($tmp3768) goto block4; else goto block17;
block17:;
panda$core$Int64 $tmp3769 = (panda$core$Int64) {87};
panda$core$Bit $tmp3770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3769);
bool $tmp3771 = $tmp3770.value;
if ($tmp3771) goto block4; else goto block18;
block18:;
panda$core$Int64 $tmp3772 = (panda$core$Int64) {88};
panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3772);
bool $tmp3774 = $tmp3773.value;
if ($tmp3774) goto block4; else goto block19;
block19:;
panda$core$Int64 $tmp3775 = (panda$core$Int64) {89};
panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3775);
bool $tmp3777 = $tmp3776.value;
if ($tmp3777) goto block4; else goto block20;
block4:;
// line 1751
org$pandalanguage$pandac$parser$Token $tmp3778 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local1) = $tmp3778;
// line 1752
org$pandalanguage$pandac$ASTNode* $tmp3779 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3779));
org$pandalanguage$pandac$ASTNode* $tmp3780 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3780));
*(&local2) = $tmp3779;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3779));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode?)
// line 1753
org$pandalanguage$pandac$ASTNode* $tmp3781 = *(&local2);
panda$core$Bit $tmp3782 = panda$core$Bit$init$builtin_bit($tmp3781 == NULL);
bool $tmp3783 = $tmp3782.value;
if ($tmp3783) goto block21; else goto block22;
block21:;
// line 1754
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3784 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3784));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3785 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3785));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
// line 1756
org$pandalanguage$pandac$ASTNode* $tmp3786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3787 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode* $tmp3788 = *(&local0);
$fn3790 $tmp3789 = ($fn3790) $tmp3788->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3791 = $tmp3789($tmp3788);
org$pandalanguage$pandac$ASTNode* $tmp3792 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3793 = *(&local1);
org$pandalanguage$pandac$parser$Token$Kind $tmp3794 = $tmp3793.kind;
org$pandalanguage$pandac$ASTNode* $tmp3795 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3786, $tmp3787, $tmp3791, $tmp3792, $tmp3794, $tmp3795);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3786));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3786));
// unreffing REF($131:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3796 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3796));
// unreffing rvalue
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3797 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3797));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3786;
block20:;
panda$core$Int64 $tmp3798 = (panda$core$Int64) {59};
panda$core$Bit $tmp3799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3729, $tmp3798);
bool $tmp3800 = $tmp3799.value;
if ($tmp3800) goto block23; else goto block24;
block23:;
// line 1759
org$pandalanguage$pandac$parser$Token $tmp3801 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3801, &$s3802);
// line 1760
org$pandalanguage$pandac$parser$Token $tmp3803 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local3) = $tmp3803;
// line 1761
org$pandalanguage$pandac$ASTNode* $tmp3804 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3804));
org$pandalanguage$pandac$ASTNode* $tmp3805 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3805));
*(&local4) = $tmp3804;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3804));
// unreffing REF($172:org.pandalanguage.pandac.ASTNode?)
// line 1762
org$pandalanguage$pandac$ASTNode* $tmp3806 = *(&local4);
panda$core$Bit $tmp3807 = panda$core$Bit$init$builtin_bit($tmp3806 == NULL);
bool $tmp3808 = $tmp3807.value;
if ($tmp3808) goto block25; else goto block26;
block25:;
// line 1763
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3809 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3809));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3810 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3810));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block26:;
// line 1765
org$pandalanguage$pandac$ASTNode* $tmp3811 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3812 = (panda$core$Int64) {5};
org$pandalanguage$pandac$ASTNode* $tmp3813 = *(&local0);
$fn3815 $tmp3814 = ($fn3815) $tmp3813->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3816 = $tmp3814($tmp3813);
org$pandalanguage$pandac$ASTNode* $tmp3817 = *(&local0);
org$pandalanguage$pandac$parser$Token $tmp3818 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind $tmp3819 = $tmp3818.kind;
org$pandalanguage$pandac$ASTNode* $tmp3820 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3811, $tmp3812, $tmp3816, $tmp3817, $tmp3819, $tmp3820);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3811));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3811));
// unreffing REF($204:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3821 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3821));
// unreffing rvalue
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3822 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3822));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3811;
block24:;
// line 1768
org$pandalanguage$pandac$ASTNode* $tmp3823 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3823));
org$pandalanguage$pandac$ASTNode* $tmp3824 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3824));
// unreffing start
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3823;
block3:;
panda$core$Bit $tmp3825 = panda$core$Bit$init$builtin_bit(false);
bool $tmp3826 = $tmp3825.value;
if ($tmp3826) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp3827 = (panda$core$Int64) {1740};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3828, $tmp3827, &$s3829);
abort(); // unreachable
block27:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 1777
org$pandalanguage$pandac$ASTNode* $tmp3830 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3830));
org$pandalanguage$pandac$ASTNode* $tmp3831 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3831));
*(&local0) = $tmp3830;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3830));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 1778
org$pandalanguage$pandac$ASTNode* $tmp3832 = *(&local0);
panda$core$Bit $tmp3833 = panda$core$Bit$init$builtin_bit($tmp3832 == NULL);
bool $tmp3834 = $tmp3833.value;
if ($tmp3834) goto block1; else goto block2;
block1:;
// line 1779
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3835 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3835));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1781
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1782
panda$core$Int64 $tmp3836 = (panda$core$Int64) {74};
org$pandalanguage$pandac$parser$Token$Kind $tmp3837 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3836);
org$pandalanguage$pandac$parser$Token$nullable $tmp3838 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3837);
panda$core$Bit $tmp3839 = panda$core$Bit$init$builtin_bit($tmp3838.nonnull);
bool $tmp3840 = $tmp3839.value;
if ($tmp3840) goto block3; else goto block5;
block3:;
// line 1783
org$pandalanguage$pandac$ASTNode* $tmp3841 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3841));
org$pandalanguage$pandac$ASTNode* $tmp3842 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3842));
*(&local1) = $tmp3841;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3841));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
// line 1784
org$pandalanguage$pandac$ASTNode* $tmp3843 = *(&local1);
panda$core$Bit $tmp3844 = panda$core$Bit$init$builtin_bit($tmp3843 == NULL);
bool $tmp3845 = $tmp3844.value;
if ($tmp3845) goto block6; else goto block7;
block6:;
// line 1785
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3846 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3846));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3847));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
goto block4;
block5:;
// line 1788
org$pandalanguage$pandac$parser$Token $tmp3848 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3849 = $tmp3848.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3850;
$tmp3850 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3850->value = $tmp3849;
panda$core$Int64 $tmp3851 = (panda$core$Int64) {59};
org$pandalanguage$pandac$parser$Token$Kind $tmp3852 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3851);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp3853;
$tmp3853 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp3853->value = $tmp3852;
ITable* $tmp3854 = ((panda$core$Equatable*) $tmp3850)->$class->itable;
while ($tmp3854->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp3854 = $tmp3854->next;
}
$fn3856 $tmp3855 = $tmp3854->methods[0];
panda$core$Bit $tmp3857 = $tmp3855(((panda$core$Equatable*) $tmp3850), ((panda$core$Equatable*) $tmp3853));
bool $tmp3858 = $tmp3857.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3853)));
// unreffing REF($76:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp3850)));
// unreffing REF($72:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp3858) goto block8; else goto block10;
block8:;
// line 1789
org$pandalanguage$pandac$parser$Token $tmp3859 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3859, &$s3860);
// line 1790
org$pandalanguage$pandac$ASTNode* $tmp3861 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3861));
org$pandalanguage$pandac$ASTNode* $tmp3862 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3862));
*(&local1) = $tmp3861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3861));
// unreffing REF($91:org.pandalanguage.pandac.ASTNode?)
// line 1791
org$pandalanguage$pandac$ASTNode* $tmp3863 = *(&local1);
panda$core$Bit $tmp3864 = panda$core$Bit$init$builtin_bit($tmp3863 == NULL);
bool $tmp3865 = $tmp3864.value;
if ($tmp3865) goto block11; else goto block12;
block11:;
// line 1792
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3866 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3866));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3867 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3867));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 1796
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3868 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3868));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
goto block4;
block4:;
// line 1798
org$pandalanguage$pandac$ASTNode* $tmp3869 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3870 = (panda$core$Int64) {14};
org$pandalanguage$pandac$ASTNode* $tmp3871 = *(&local0);
$fn3873 $tmp3872 = ($fn3873) $tmp3871->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp3874 = $tmp3872($tmp3871);
org$pandalanguage$pandac$ASTNode* $tmp3875 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp3876 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3869, $tmp3870, $tmp3874, $tmp3875, $tmp3876);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3869));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3877 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3877));
// unreffing value
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3878 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3878));
// unreffing t
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp3869;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$Variable$Kind local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 1805
org$pandalanguage$pandac$parser$Token $tmp3879 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp3879;
// line 1806
// line 1807
org$pandalanguage$pandac$parser$Token $tmp3880 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp3881 = $tmp3880.kind;
panda$core$Int64 $tmp3882 = $tmp3881.$rawValue;
panda$core$Int64 $tmp3883 = (panda$core$Int64) {24};
panda$core$Bit $tmp3884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3882, $tmp3883);
bool $tmp3885 = $tmp3884.value;
if ($tmp3885) goto block2; else goto block3;
block2:;
// line 1809
panda$core$Int64 $tmp3886 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Variable$Kind $tmp3887 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3886);
*(&local1) = $tmp3887;
goto block1;
block3:;
panda$core$Int64 $tmp3888 = (panda$core$Int64) {25};
panda$core$Bit $tmp3889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3882, $tmp3888);
bool $tmp3890 = $tmp3889.value;
if ($tmp3890) goto block4; else goto block5;
block4:;
// line 1812
panda$core$Int64 $tmp3891 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp3892 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3891);
*(&local1) = $tmp3892;
goto block1;
block5:;
panda$core$Int64 $tmp3893 = (panda$core$Int64) {26};
panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3882, $tmp3893);
bool $tmp3895 = $tmp3894.value;
if ($tmp3895) goto block6; else goto block7;
block6:;
// line 1815
panda$core$Int64 $tmp3896 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Variable$Kind $tmp3897 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3896);
*(&local1) = $tmp3897;
goto block1;
block7:;
panda$core$Int64 $tmp3898 = (panda$core$Int64) {27};
panda$core$Bit $tmp3899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3882, $tmp3898);
bool $tmp3900 = $tmp3899.value;
if ($tmp3900) goto block8; else goto block9;
block8:;
// line 1818
panda$core$Int64 $tmp3901 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Variable$Kind $tmp3902 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3901);
*(&local1) = $tmp3902;
goto block1;
block9:;
// line 1821
org$pandalanguage$pandac$parser$Token $tmp3903 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp3903, &$s3904);
goto block1;
block1:;
// line 1824
panda$collections$Array* $tmp3905 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3905);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3905));
panda$collections$Array* $tmp3906 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3906));
*(&local2) = $tmp3905;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3905));
// unreffing REF($49:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1825
org$pandalanguage$pandac$ASTNode* $tmp3907 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3907));
org$pandalanguage$pandac$ASTNode* $tmp3908 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3908));
*(&local3) = $tmp3907;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3907));
// unreffing REF($63:org.pandalanguage.pandac.ASTNode?)
// line 1826
org$pandalanguage$pandac$ASTNode* $tmp3909 = *(&local3);
panda$core$Bit $tmp3910 = panda$core$Bit$init$builtin_bit($tmp3909 == NULL);
bool $tmp3911 = $tmp3910.value;
if ($tmp3911) goto block10; else goto block11;
block10:;
// line 1827
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3912 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3912));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3913 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3913));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 1829
panda$collections$Array* $tmp3914 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3915 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3914, ((panda$core$Object*) $tmp3915));
// line 1830
goto block12;
block12:;
panda$core$Int64 $tmp3916 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3917 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3916);
org$pandalanguage$pandac$parser$Token$nullable $tmp3918 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3917);
panda$core$Bit $tmp3919 = panda$core$Bit$init$builtin_bit($tmp3918.nonnull);
bool $tmp3920 = $tmp3919.value;
if ($tmp3920) goto block13; else goto block14;
block13:;
// line 1831
org$pandalanguage$pandac$ASTNode* $tmp3921 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3921));
org$pandalanguage$pandac$ASTNode* $tmp3922 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3922));
*(&local4) = $tmp3921;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3921));
// unreffing REF($111:org.pandalanguage.pandac.ASTNode?)
// line 1832
org$pandalanguage$pandac$ASTNode* $tmp3923 = *(&local4);
panda$core$Bit $tmp3924 = panda$core$Bit$init$builtin_bit($tmp3923 == NULL);
bool $tmp3925 = $tmp3924.value;
if ($tmp3925) goto block15; else goto block16;
block15:;
// line 1833
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3926 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3926));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3927 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3927));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3928 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3928));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1835
panda$collections$Array* $tmp3929 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3930 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp3929, ((panda$core$Object*) $tmp3930));
org$pandalanguage$pandac$ASTNode* $tmp3931 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3931));
// unreffing decl
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block12;
block14:;
// line 1837
org$pandalanguage$pandac$ASTNode* $tmp3932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3933 = (panda$core$Int64) {48};
org$pandalanguage$pandac$parser$Token $tmp3934 = *(&local0);
org$pandalanguage$pandac$Position $tmp3935 = $tmp3934.position;
org$pandalanguage$pandac$Variable$Kind $tmp3936 = *(&local1);
panda$collections$Array* $tmp3937 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp3938 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp3937);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3932, $tmp3933, $tmp3935, $tmp3936, $tmp3938);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3932));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
// unreffing REF($168:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3932));
// unreffing REF($161:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp3939 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3939));
// unreffing decl
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3940 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3940));
// unreffing declarations
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp3932;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
// line 1844
panda$core$Int64 $tmp3941 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp3942 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3941);
org$pandalanguage$pandac$parser$Token$nullable $tmp3943 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3942, &$s3944);
*(&local0) = $tmp3943;
// line 1845
org$pandalanguage$pandac$parser$Token$nullable $tmp3945 = *(&local0);
panda$core$Bit $tmp3946 = panda$core$Bit$init$builtin_bit(!$tmp3945.nonnull);
bool $tmp3947 = $tmp3946.value;
if ($tmp3947) goto block1; else goto block2;
block1:;
// line 1846
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1848
panda$core$Int64 $tmp3948 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp3949 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3948);
org$pandalanguage$pandac$parser$Token$nullable $tmp3950 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3949, &$s3951);
panda$core$Bit $tmp3952 = panda$core$Bit$init$builtin_bit(!$tmp3950.nonnull);
bool $tmp3953 = $tmp3952.value;
if ($tmp3953) goto block3; else goto block4;
block3:;
// line 1849
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 1851
panda$collections$Stack** $tmp3954 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3955 = *$tmp3954;
panda$core$Bit $tmp3956 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit$wrapper* $tmp3957;
$tmp3957 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
$tmp3957->value = $tmp3956;
panda$collections$Stack$push$panda$collections$Stack$T($tmp3955, ((panda$core$Object*) $tmp3957));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3957));
// unreffing REF($32:panda.collections.Stack.T)
// line 1852
org$pandalanguage$pandac$ASTNode* $tmp3958 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp3959 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp3960 = *(&local0);
org$pandalanguage$pandac$Position $tmp3961 = ((org$pandalanguage$pandac$parser$Token) $tmp3960.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp3962 = *(&local0);
panda$core$String* $tmp3963 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp3962.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3958, $tmp3959, $tmp3961, $tmp3963);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3958));
org$pandalanguage$pandac$ASTNode* $tmp3964 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3964));
*(&local1) = $tmp3958;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3963));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3958));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode)
// line 1853
panda$collections$Array* $tmp3965 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp3965);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3965));
panda$collections$Array* $tmp3966 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3966));
*(&local2) = $tmp3965;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3965));
// unreffing REF($61:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1854
panda$core$Int64 $tmp3967 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp3968 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3967);
org$pandalanguage$pandac$parser$Token$nullable $tmp3969 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3968);
panda$core$Bit $tmp3970 = panda$core$Bit$init$builtin_bit(!$tmp3969.nonnull);
bool $tmp3971 = $tmp3970.value;
if ($tmp3971) goto block5; else goto block6;
block5:;
// line 1855
org$pandalanguage$pandac$ASTNode* $tmp3972 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3972));
org$pandalanguage$pandac$ASTNode* $tmp3973 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3973));
*(&local3) = $tmp3972;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3972));
// unreffing REF($83:org.pandalanguage.pandac.ASTNode?)
// line 1856
org$pandalanguage$pandac$ASTNode* $tmp3974 = *(&local3);
panda$core$Bit $tmp3975 = panda$core$Bit$init$builtin_bit($tmp3974 == NULL);
bool $tmp3976 = $tmp3975.value;
if ($tmp3976) goto block7; else goto block8;
block7:;
// line 1857
panda$collections$Stack** $tmp3977 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3978 = *$tmp3977;
panda$core$Object* $tmp3979 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3978);
panda$core$Panda$unref$panda$core$Object$Q($tmp3979);
// unreffing REF($104:panda.collections.Stack.T)
// line 1858
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3980 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3980));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3981 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3981));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp3982 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3982));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 1860
panda$collections$Array* $tmp3983 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp3984 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp3983, ((panda$core$Object*) $tmp3984));
// line 1861
goto block9;
block9:;
panda$core$Int64 $tmp3985 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp3986 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3985);
org$pandalanguage$pandac$parser$Token$nullable $tmp3987 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp3986);
panda$core$Bit $tmp3988 = panda$core$Bit$init$builtin_bit($tmp3987.nonnull);
bool $tmp3989 = $tmp3988.value;
if ($tmp3989) goto block10; else goto block11;
block10:;
// line 1862
org$pandalanguage$pandac$ASTNode* $tmp3990 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3990));
org$pandalanguage$pandac$ASTNode* $tmp3991 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3991));
*(&local3) = $tmp3990;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3990));
// unreffing REF($145:org.pandalanguage.pandac.ASTNode?)
// line 1863
org$pandalanguage$pandac$ASTNode* $tmp3992 = *(&local3);
panda$core$Bit $tmp3993 = panda$core$Bit$init$builtin_bit($tmp3992 == NULL);
bool $tmp3994 = $tmp3993.value;
if ($tmp3994) goto block12; else goto block13;
block12:;
// line 1864
panda$collections$Stack** $tmp3995 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp3996 = *$tmp3995;
panda$core$Object* $tmp3997 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp3996);
panda$core$Panda$unref$panda$core$Object$Q($tmp3997);
// unreffing REF($165:panda.collections.Stack.T)
// line 1865
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp3998 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3998));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp3999 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3999));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4000 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4000));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 1867
panda$collections$Array* $tmp4001 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4002 = *(&local3);
panda$collections$Array$add$panda$collections$Array$T($tmp4001, ((panda$core$Object*) $tmp4002));
goto block9;
block11:;
// line 1869
panda$core$Int64 $tmp4003 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4004 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4003);
org$pandalanguage$pandac$parser$Token$nullable $tmp4005 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4004, &$s4006);
panda$core$Bit $tmp4007 = panda$core$Bit$init$builtin_bit(!$tmp4005.nonnull);
bool $tmp4008 = $tmp4007.value;
if ($tmp4008) goto block14; else goto block15;
block14:;
// line 1870
panda$collections$Stack** $tmp4009 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4010 = *$tmp4009;
panda$core$Object* $tmp4011 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4010);
panda$core$Panda$unref$panda$core$Object$Q($tmp4011);
// unreffing REF($209:panda.collections.Stack.T)
// line 1871
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4012 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4012));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4013 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4013));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4014 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4014));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
org$pandalanguage$pandac$ASTNode* $tmp4015 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4015));
// unreffing expr
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 1874
panda$collections$Stack** $tmp4016 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp4017 = *$tmp4016;
panda$core$Object* $tmp4018 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp4017);
panda$core$Panda$unref$panda$core$Object$Q($tmp4018);
// unreffing REF($243:panda.collections.Stack.T)
// line 1875
org$pandalanguage$pandac$ASTNode* $tmp4019 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4020 = (panda$core$Int64) {9};
org$pandalanguage$pandac$parser$Token$nullable $tmp4021 = *(&local0);
org$pandalanguage$pandac$Position $tmp4022 = ((org$pandalanguage$pandac$parser$Token) $tmp4021.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4023 = *(&local1);
panda$collections$Array* $tmp4024 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4025 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4024);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4019, $tmp4020, $tmp4022, $tmp4023, $tmp4025);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4019));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
// unreffing REF($257:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4019));
// unreffing REF($249:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp4026 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4026));
// unreffing args
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4027 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4027));
// unreffing target
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4019;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1882
panda$core$Int64 $tmp4028 = (panda$core$Int64) {29};
org$pandalanguage$pandac$parser$Token$Kind $tmp4029 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4028);
org$pandalanguage$pandac$parser$Token$nullable $tmp4030 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4029, &$s4031);
*(&local0) = $tmp4030;
// line 1883
org$pandalanguage$pandac$parser$Token$nullable $tmp4032 = *(&local0);
panda$core$Bit $tmp4033 = panda$core$Bit$init$builtin_bit(!$tmp4032.nonnull);
bool $tmp4034 = $tmp4033.value;
if ($tmp4034) goto block1; else goto block2;
block1:;
// line 1884
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1886
panda$core$Int64 $tmp4035 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4036 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4035);
org$pandalanguage$pandac$parser$Token$nullable $tmp4037 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4036);
*(&local1) = $tmp4037;
// line 1887
org$pandalanguage$pandac$parser$Token$nullable $tmp4038 = *(&local1);
panda$core$Bit $tmp4039 = panda$core$Bit$init$builtin_bit($tmp4038.nonnull);
bool $tmp4040 = $tmp4039.value;
if ($tmp4040) goto block3; else goto block4;
block3:;
// line 1888
org$pandalanguage$pandac$ASTNode* $tmp4041 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4042 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp4043 = *(&local0);
org$pandalanguage$pandac$Position $tmp4044 = ((org$pandalanguage$pandac$parser$Token) $tmp4043.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4045 = *(&local1);
panda$core$String* $tmp4046 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4045.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4041, $tmp4042, $tmp4044, $tmp4046);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4046));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4041));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode)
return $tmp4041;
block4:;
// line 1890
org$pandalanguage$pandac$ASTNode* $tmp4047 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4048 = (panda$core$Int64) {8};
org$pandalanguage$pandac$parser$Token$nullable $tmp4049 = *(&local0);
org$pandalanguage$pandac$Position $tmp4050 = ((org$pandalanguage$pandac$parser$Token) $tmp4049.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4047, $tmp4048, $tmp4050, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4047));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4047));
// unreffing REF($48:org.pandalanguage.pandac.ASTNode)
return $tmp4047;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 1897
panda$core$Int64 $tmp4051 = (panda$core$Int64) {30};
org$pandalanguage$pandac$parser$Token$Kind $tmp4052 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4051);
org$pandalanguage$pandac$parser$Token$nullable $tmp4053 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4052, &$s4054);
*(&local0) = $tmp4053;
// line 1898
org$pandalanguage$pandac$parser$Token$nullable $tmp4055 = *(&local0);
panda$core$Bit $tmp4056 = panda$core$Bit$init$builtin_bit(!$tmp4055.nonnull);
bool $tmp4057 = $tmp4056.value;
if ($tmp4057) goto block1; else goto block2;
block1:;
// line 1899
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1901
panda$core$Int64 $tmp4058 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4059 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4058);
org$pandalanguage$pandac$parser$Token$nullable $tmp4060 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4059);
*(&local1) = $tmp4060;
// line 1902
org$pandalanguage$pandac$parser$Token$nullable $tmp4061 = *(&local1);
panda$core$Bit $tmp4062 = panda$core$Bit$init$builtin_bit($tmp4061.nonnull);
bool $tmp4063 = $tmp4062.value;
if ($tmp4063) goto block3; else goto block4;
block3:;
// line 1903
org$pandalanguage$pandac$ASTNode* $tmp4064 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4065 = (panda$core$Int64) {13};
org$pandalanguage$pandac$parser$Token$nullable $tmp4066 = *(&local0);
org$pandalanguage$pandac$Position $tmp4067 = ((org$pandalanguage$pandac$parser$Token) $tmp4066.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4068 = *(&local1);
panda$core$String* $tmp4069 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4068.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4064, $tmp4065, $tmp4067, $tmp4069);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4064));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4069));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4064));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode)
return $tmp4064;
block4:;
// line 1905
org$pandalanguage$pandac$ASTNode* $tmp4070 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4071 = (panda$core$Int64) {13};
org$pandalanguage$pandac$parser$Token$nullable $tmp4072 = *(&local0);
org$pandalanguage$pandac$Position $tmp4073 = ((org$pandalanguage$pandac$parser$Token) $tmp4072.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4070, $tmp4071, $tmp4073, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4070));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4070));
// unreffing REF($48:org.pandalanguage.pandac.ASTNode)
return $tmp4070;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 1912
panda$core$Int64 $tmp4074 = (panda$core$Int64) {28};
org$pandalanguage$pandac$parser$Token$Kind $tmp4075 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4074);
org$pandalanguage$pandac$parser$Token$nullable $tmp4076 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4075, &$s4077);
*(&local0) = $tmp4076;
// line 1913
org$pandalanguage$pandac$parser$Token$nullable $tmp4078 = *(&local0);
panda$core$Bit $tmp4079 = panda$core$Bit$init$builtin_bit(!$tmp4078.nonnull);
bool $tmp4080 = $tmp4079.value;
if ($tmp4080) goto block1; else goto block2;
block1:;
// line 1914
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 1916
org$pandalanguage$pandac$parser$Token $tmp4081 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4082 = $tmp4081.kind;
panda$core$Int64 $tmp4083 = $tmp4082.$rawValue;
panda$core$Int64 $tmp4084 = (panda$core$Int64) {101};
panda$core$Bit $tmp4085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4083, $tmp4084);
bool $tmp4086 = $tmp4085.value;
if ($tmp4086) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp4087 = (panda$core$Int64) {40};
panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4083, $tmp4087);
bool $tmp4089 = $tmp4088.value;
if ($tmp4089) goto block4; else goto block6;
block6:;
panda$core$Int64 $tmp4090 = (panda$core$Int64) {41};
panda$core$Bit $tmp4091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4083, $tmp4090);
bool $tmp4092 = $tmp4091.value;
if ($tmp4092) goto block4; else goto block7;
block4:;
// line 1918
org$pandalanguage$pandac$ASTNode* $tmp4093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4094 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$nullable $tmp4095 = *(&local0);
org$pandalanguage$pandac$Position $tmp4096 = ((org$pandalanguage$pandac$parser$Token) $tmp4095.value).position;
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4093, $tmp4094, $tmp4096, ((org$pandalanguage$pandac$ASTNode*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4093));
// unreffing REF($32:org.pandalanguage.pandac.ASTNode)
return $tmp4093;
block7:;
// line 1921
panda$collections$Array* $tmp4097 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4097);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4097));
panda$collections$Array* $tmp4098 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4098));
*(&local1) = $tmp4097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4097));
// unreffing REF($46:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 1922
org$pandalanguage$pandac$ASTNode* $tmp4099 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4099));
org$pandalanguage$pandac$ASTNode* $tmp4100 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4100));
*(&local2) = $tmp4099;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4099));
// unreffing REF($60:org.pandalanguage.pandac.ASTNode?)
// line 1923
org$pandalanguage$pandac$ASTNode* $tmp4101 = *(&local2);
panda$core$Bit $tmp4102 = panda$core$Bit$init$builtin_bit($tmp4101 == NULL);
bool $tmp4103 = $tmp4102.value;
if ($tmp4103) goto block8; else goto block9;
block8:;
// line 1924
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4104 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4104));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4105 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4105));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1926
panda$collections$Array* $tmp4106 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4107 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4106, ((panda$core$Object*) $tmp4107));
// line 1927
org$pandalanguage$pandac$ASTNode* $tmp4108 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4109 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$nullable $tmp4110 = *(&local0);
org$pandalanguage$pandac$Position $tmp4111 = ((org$pandalanguage$pandac$parser$Token) $tmp4110.value).position;
org$pandalanguage$pandac$ASTNode* $tmp4112 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4108, $tmp4109, $tmp4111, $tmp4112);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4108));
// unreffing REF($99:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4113 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4113));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4114 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4114));
// unreffing children
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4108;
block3:;
panda$core$Bit $tmp4115 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4116 = $tmp4115.value;
if ($tmp4116) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4117 = (panda$core$Int64) {1911};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4118, $tmp4117, &$s4119);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 1936
org$pandalanguage$pandac$parser$Token $tmp4120 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4121 = $tmp4120.kind;
panda$core$Int64 $tmp4122 = $tmp4121.$rawValue;
panda$core$Int64 $tmp4123 = (panda$core$Int64) {29};
panda$core$Bit $tmp4124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4122, $tmp4123);
bool $tmp4125 = $tmp4124.value;
if ($tmp4125) goto block2; else goto block3;
block2:;
// line 1937
org$pandalanguage$pandac$ASTNode* $tmp4126 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4126));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4126;
block3:;
panda$core$Int64 $tmp4127 = (panda$core$Int64) {30};
panda$core$Bit $tmp4128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4122, $tmp4127);
bool $tmp4129 = $tmp4128.value;
if ($tmp4129) goto block4; else goto block5;
block4:;
// line 1938
org$pandalanguage$pandac$ASTNode* $tmp4130 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4130));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4130;
block5:;
panda$core$Int64 $tmp4131 = (panda$core$Int64) {28};
panda$core$Bit $tmp4132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4122, $tmp4131);
bool $tmp4133 = $tmp4132.value;
if ($tmp4133) goto block6; else goto block7;
block6:;
// line 1939
org$pandalanguage$pandac$ASTNode* $tmp4134 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4134));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4134;
block7:;
// line 1940
panda$core$Bit $tmp4135 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4136 = $tmp4135.value;
if ($tmp4136) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp4137 = (panda$core$Int64) {1940};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4138, $tmp4137);
abort(); // unreachable
block8:;
goto block1;
block1:;
panda$core$Bit $tmp4139 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4140 = $tmp4139.value;
if ($tmp4140) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4141 = (panda$core$Int64) {1935};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4142, $tmp4141, &$s4143);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, panda$core$String* param1) {

// line 1948
org$pandalanguage$pandac$parser$Token $tmp4144 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4145 = $tmp4144.kind;
panda$core$Int64 $tmp4146 = $tmp4145.$rawValue;
panda$core$Int64 $tmp4147 = (panda$core$Int64) {31};
panda$core$Bit $tmp4148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4146, $tmp4147);
bool $tmp4149 = $tmp4148.value;
if ($tmp4149) goto block2; else goto block3;
block2:;
// line 1949
org$pandalanguage$pandac$ASTNode* $tmp4150 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4150));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4150));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4150;
block3:;
panda$core$Int64 $tmp4151 = (panda$core$Int64) {33};
panda$core$Bit $tmp4152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4146, $tmp4151);
bool $tmp4153 = $tmp4152.value;
if ($tmp4153) goto block4; else goto block5;
block4:;
// line 1950
org$pandalanguage$pandac$ASTNode* $tmp4154 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4154));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4154));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4154;
block5:;
panda$core$Int64 $tmp4155 = (panda$core$Int64) {36};
panda$core$Bit $tmp4156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4146, $tmp4155);
bool $tmp4157 = $tmp4156.value;
if ($tmp4157) goto block6; else goto block7;
block6:;
// line 1951
org$pandalanguage$pandac$ASTNode* $tmp4158 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4158));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4158;
block7:;
panda$core$Int64 $tmp4159 = (panda$core$Int64) {32};
panda$core$Bit $tmp4160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4146, $tmp4159);
bool $tmp4161 = $tmp4160.value;
if ($tmp4161) goto block8; else goto block9;
block8:;
// line 1952
org$pandalanguage$pandac$ASTNode* $tmp4162 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4162));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4162));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
return $tmp4162;
block9:;
// line 1955
panda$core$Int64 $tmp4163 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$Kind $tmp4164 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4163);
org$pandalanguage$pandac$parser$Token$nullable $tmp4165 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4164, &$s4166);
// line 1956
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4167 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4168 = $tmp4167.value;
if ($tmp4168) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp4169 = (panda$core$Int64) {1947};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4170, $tmp4169, &$s4171);
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
// line 1965
// line 1966
panda$core$Int64 $tmp4172 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4173 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4172);
org$pandalanguage$pandac$parser$Token$nullable $tmp4174 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4173);
*(&local1) = $tmp4174;
// line 1967
org$pandalanguage$pandac$parser$Token$nullable $tmp4175 = *(&local1);
panda$core$Bit $tmp4176 = panda$core$Bit$init$builtin_bit(!$tmp4175.nonnull);
bool $tmp4177 = $tmp4176.value;
if ($tmp4177) goto block1; else goto block3;
block1:;
// line 1968
panda$core$Int64 $tmp4178 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4179 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4178);
org$pandalanguage$pandac$parser$Token$nullable $tmp4180 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4179, &$s4181);
*(&local1) = $tmp4180;
// line 1969
org$pandalanguage$pandac$parser$Token$nullable $tmp4182 = *(&local1);
panda$core$Bit $tmp4183 = panda$core$Bit$init$builtin_bit(!$tmp4182.nonnull);
bool $tmp4184 = $tmp4183.value;
if ($tmp4184) goto block4; else goto block5;
block4:;
// line 1970
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 1972
panda$core$Int64 $tmp4185 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4186 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4185);
*(&local0) = $tmp4186;
goto block2;
block3:;
// line 1
// line 1975
panda$core$Int64 $tmp4187 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4188 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4187);
*(&local0) = $tmp4188;
goto block2;
block2:;
// line 1977
panda$core$Int64 $tmp4189 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4190 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4189);
org$pandalanguage$pandac$parser$Token$nullable $tmp4191 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4190, &$s4192);
*(&local2) = $tmp4191;
// line 1978
org$pandalanguage$pandac$parser$Token$nullable $tmp4193 = *(&local2);
panda$core$Bit $tmp4194 = panda$core$Bit$init$builtin_bit(!$tmp4193.nonnull);
bool $tmp4195 = $tmp4194.value;
if ($tmp4195) goto block6; else goto block7;
block6:;
// line 1979
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 1981
org$pandalanguage$pandac$FixedArray* $tmp4196 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
org$pandalanguage$pandac$FixedArray* $tmp4197 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4197));
*(&local3) = $tmp4196;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
// unreffing REF($54:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1982
org$pandalanguage$pandac$FixedArray* $tmp4198 = *(&local3);
panda$core$Bit $tmp4199 = panda$core$Bit$init$builtin_bit($tmp4198 == NULL);
bool $tmp4200 = $tmp4199.value;
if ($tmp4200) goto block8; else goto block9;
block8:;
// line 1983
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4201 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 1985
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 1986
org$pandalanguage$pandac$parser$Token $tmp4202 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4203 = $tmp4202.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4204;
$tmp4204 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4204->value = $tmp4203;
panda$core$Int64 $tmp4205 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4206 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4205);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4207;
$tmp4207 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4207->value = $tmp4206;
ITable* $tmp4208 = ((panda$core$Equatable*) $tmp4204)->$class->itable;
while ($tmp4208->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4208 = $tmp4208->next;
}
$fn4210 $tmp4209 = $tmp4208->methods[0];
panda$core$Bit $tmp4211 = $tmp4209(((panda$core$Equatable*) $tmp4204), ((panda$core$Equatable*) $tmp4207));
bool $tmp4212 = $tmp4211.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4207)));
// unreffing REF($89:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4204)));
// unreffing REF($85:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4212) goto block10; else goto block12;
block10:;
// line 1987
org$pandalanguage$pandac$ASTNode* $tmp4213 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4213));
org$pandalanguage$pandac$ASTNode* $tmp4214 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4214));
*(&local4) = $tmp4213;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4213));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
// line 1988
org$pandalanguage$pandac$ASTNode* $tmp4215 = *(&local4);
panda$core$Bit $tmp4216 = panda$core$Bit$init$builtin_bit($tmp4215 == NULL);
bool $tmp4217 = $tmp4216.value;
if ($tmp4217) goto block13; else goto block14;
block13:;
// line 1989
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4218 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4218));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4219 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4219));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 1993
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4220 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4220));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 1995
org$pandalanguage$pandac$FixedArray* $tmp4221 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4221));
org$pandalanguage$pandac$FixedArray* $tmp4222 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4222));
*(&local5) = $tmp4221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4221));
// unreffing REF($142:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 1996
org$pandalanguage$pandac$FixedArray* $tmp4223 = *(&local5);
panda$core$Bit $tmp4224 = panda$core$Bit$init$builtin_bit($tmp4223 == NULL);
bool $tmp4225 = $tmp4224.value;
if ($tmp4225) goto block15; else goto block16;
block15:;
// line 1997
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4226 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4226));
// unreffing body
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4227 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4227));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4228 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4228));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 1999
org$pandalanguage$pandac$ASTNode* $tmp4229 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4230 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp4231 = *(&local1);
org$pandalanguage$pandac$Position $tmp4232 = ((org$pandalanguage$pandac$parser$Token) $tmp4231.value).position;
org$pandalanguage$pandac$FixedArray* $tmp4233 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp4233);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4234 = *(&local0);
org$pandalanguage$pandac$parser$Token$nullable $tmp4235 = *(&local2);
panda$core$String* $tmp4236 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4235.value));
org$pandalanguage$pandac$FixedArray* $tmp4237 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp4238 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp4239 = *(&local5);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4229, $tmp4230, $tmp4232, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4233, $tmp4234, $tmp4236, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp4237, $tmp4238, $tmp4239);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4229));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4236));
// unreffing REF($190:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4233));
// unreffing REF($184:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4229));
// unreffing REF($179:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp4240 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4240));
// unreffing body
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4241 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4241));
// unreffing returnType
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4242 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4242));
// unreffing params
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp4229;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
// line 2008
org$pandalanguage$pandac$parser$Token $tmp4243 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4244 = $tmp4243.kind;
panda$core$Int64 $tmp4245 = $tmp4244.$rawValue;
panda$core$Int64 $tmp4246 = (panda$core$Int64) {37};
panda$core$Bit $tmp4247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4246);
bool $tmp4248 = $tmp4247.value;
if ($tmp4248) goto block2; else goto block3;
block2:;
// line 2009
org$pandalanguage$pandac$ASTNode* $tmp4249 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4249));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4249));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp4249;
block3:;
panda$core$Int64 $tmp4250 = (panda$core$Int64) {33};
panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4250);
bool $tmp4252 = $tmp4251.value;
if ($tmp4252) goto block4; else goto block5;
block4:;
// line 2010
org$pandalanguage$pandac$ASTNode* $tmp4253 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4253));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4253));
// unreffing REF($21:org.pandalanguage.pandac.ASTNode?)
return $tmp4253;
block5:;
panda$core$Int64 $tmp4254 = (panda$core$Int64) {32};
panda$core$Bit $tmp4255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4254);
bool $tmp4256 = $tmp4255.value;
if ($tmp4256) goto block6; else goto block7;
block6:;
// line 2011
org$pandalanguage$pandac$ASTNode* $tmp4257 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4257));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
return $tmp4257;
block7:;
panda$core$Int64 $tmp4258 = (panda$core$Int64) {31};
panda$core$Bit $tmp4259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4258);
bool $tmp4260 = $tmp4259.value;
if ($tmp4260) goto block8; else goto block9;
block8:;
// line 2012
org$pandalanguage$pandac$ASTNode* $tmp4261 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4261));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4261));
// unreffing REF($45:org.pandalanguage.pandac.ASTNode?)
return $tmp4261;
block9:;
panda$core$Int64 $tmp4262 = (panda$core$Int64) {36};
panda$core$Bit $tmp4263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4262);
bool $tmp4264 = $tmp4263.value;
if ($tmp4264) goto block10; else goto block11;
block10:;
// line 2013
org$pandalanguage$pandac$ASTNode* $tmp4265 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, ((panda$core$String*) NULL));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4265));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4265));
// unreffing REF($57:org.pandalanguage.pandac.ASTNode?)
return $tmp4265;
block11:;
panda$core$Int64 $tmp4266 = (panda$core$Int64) {45};
panda$core$Bit $tmp4267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4266);
bool $tmp4268 = $tmp4267.value;
if ($tmp4268) goto block12; else goto block13;
block12:;
// line 2014
org$pandalanguage$pandac$ASTNode* $tmp4269 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4269));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4269));
// unreffing REF($69:org.pandalanguage.pandac.ASTNode?)
return $tmp4269;
block13:;
panda$core$Int64 $tmp4270 = (panda$core$Int64) {39};
panda$core$Bit $tmp4271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4270);
bool $tmp4272 = $tmp4271.value;
if ($tmp4272) goto block14; else goto block15;
block14:;
// line 2015
org$pandalanguage$pandac$ASTNode* $tmp4273 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4273));
// unreffing REF($81:org.pandalanguage.pandac.ASTNode?)
return $tmp4273;
block15:;
panda$core$Int64 $tmp4274 = (panda$core$Int64) {100};
panda$core$Bit $tmp4275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4274);
bool $tmp4276 = $tmp4275.value;
if ($tmp4276) goto block16; else goto block17;
block16:;
// line 2016
org$pandalanguage$pandac$ASTNode* $tmp4277 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
// unreffing REF($93:org.pandalanguage.pandac.ASTNode?)
return $tmp4277;
block17:;
panda$core$Int64 $tmp4278 = (panda$core$Int64) {49};
panda$core$Bit $tmp4279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4278);
bool $tmp4280 = $tmp4279.value;
if ($tmp4280) goto block18; else goto block19;
block18:;
// line 2018
org$pandalanguage$pandac$parser$Token $tmp4281 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp4281;
// line 2019
panda$core$Int64 $tmp4282 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4283 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4282);
org$pandalanguage$pandac$parser$Token$nullable $tmp4284 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4283);
*(&local1) = $tmp4284;
// line 2020
org$pandalanguage$pandac$parser$Token$nullable $tmp4285 = *(&local1);
panda$core$Bit $tmp4286 = panda$core$Bit$init$builtin_bit($tmp4285.nonnull);
bool $tmp4287 = $tmp4286.value;
if ($tmp4287) goto block20; else goto block21;
block20:;
// line 2021
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4288 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4289 = *$tmp4288;
panda$core$Bit $tmp4290 = panda$core$Bit$init$builtin_bit($tmp4289 != NULL);
bool $tmp4291 = $tmp4290.value;
if ($tmp4291) goto block22; else goto block23;
block22:;
// line 2022
org$pandalanguage$pandac$parser$Token$nullable $tmp4292 = *(&local1);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4292.value));
// line 2023
org$pandalanguage$pandac$parser$Token $tmp4293 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4293);
// line 2024
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4294 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4295 = *$tmp4294;
panda$core$Int64 $tmp4296 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4297 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4296);
$fn4299 $tmp4298 = ($fn4299) $tmp4295->$class->vtable[3];
$tmp4298($tmp4295, $tmp4297);
// line 2025
org$pandalanguage$pandac$parser$Token $tmp4300 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2026
org$pandalanguage$pandac$parser$Token $tmp4301 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2027
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp4302 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp4303 = *$tmp4302;
panda$core$Int64 $tmp4304 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4305 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4304);
$fn4307 $tmp4306 = ($fn4307) $tmp4303->$class->vtable[4];
$tmp4306($tmp4303, $tmp4305);
goto block23;
block23:;
// line 2029
org$pandalanguage$pandac$parser$Token $tmp4308 = *(&local0);
panda$core$String* $tmp4309 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4308);
org$pandalanguage$pandac$ASTNode* $tmp4310 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp4309);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4310));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4310));
// unreffing REF($157:org.pandalanguage.pandac.ASTNode?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4309));
// unreffing REF($155:panda.core.String)
return $tmp4310;
block21:;
// line 2031
org$pandalanguage$pandac$parser$Token $tmp4311 = *(&local0);
org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(param0, $tmp4311);
// line 2032
org$pandalanguage$pandac$ASTNode* $tmp4312 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4312));
// unreffing REF($171:org.pandalanguage.pandac.ASTNode?)
return $tmp4312;
block19:;
panda$core$Int64 $tmp4313 = (panda$core$Int64) {47};
panda$core$Bit $tmp4314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4313);
bool $tmp4315 = $tmp4314.value;
if ($tmp4315) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp4316 = (panda$core$Int64) {48};
panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4316);
bool $tmp4318 = $tmp4317.value;
if ($tmp4318) goto block24; else goto block26;
block24:;
// line 2035
org$pandalanguage$pandac$ASTNode* $tmp4319 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4319));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4319));
// unreffing REF($187:org.pandalanguage.pandac.ASTNode?)
return $tmp4319;
block26:;
panda$core$Int64 $tmp4320 = (panda$core$Int64) {24};
panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4320);
bool $tmp4322 = $tmp4321.value;
if ($tmp4322) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp4323 = (panda$core$Int64) {25};
panda$core$Bit $tmp4324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4323);
bool $tmp4325 = $tmp4324.value;
if ($tmp4325) goto block27; else goto block29;
block29:;
panda$core$Int64 $tmp4326 = (panda$core$Int64) {26};
panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4326);
bool $tmp4328 = $tmp4327.value;
if ($tmp4328) goto block27; else goto block30;
block30:;
panda$core$Int64 $tmp4329 = (panda$core$Int64) {27};
panda$core$Bit $tmp4330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4329);
bool $tmp4331 = $tmp4330.value;
if ($tmp4331) goto block27; else goto block31;
block27:;
// line 2038
org$pandalanguage$pandac$ASTNode* $tmp4332 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4332));
// unreffing REF($211:org.pandalanguage.pandac.ASTNode?)
return $tmp4332;
block31:;
panda$core$Int64 $tmp4333 = (panda$core$Int64) {23};
panda$core$Bit $tmp4334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4333);
bool $tmp4335 = $tmp4334.value;
if ($tmp4335) goto block32; else goto block33;
block32:;
// line 2041
org$pandalanguage$pandac$ASTNode* $tmp4336 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4336));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4336));
// unreffing REF($223:org.pandalanguage.pandac.ASTNode?)
return $tmp4336;
block33:;
panda$core$Int64 $tmp4337 = (panda$core$Int64) {22};
panda$core$Bit $tmp4338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4337);
bool $tmp4339 = $tmp4338.value;
if ($tmp4339) goto block34; else goto block35;
block35:;
panda$core$Int64 $tmp4340 = (panda$core$Int64) {21};
panda$core$Bit $tmp4341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4245, $tmp4340);
bool $tmp4342 = $tmp4341.value;
if ($tmp4342) goto block34; else goto block36;
block34:;
// line 2044
org$pandalanguage$pandac$ASTNode* $tmp4343 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4343));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4343));
// unreffing REF($239:org.pandalanguage.pandac.ASTNode?)
return $tmp4343;
block36:;
// line 2048
panda$core$Int64 $tmp4344 = (panda$core$Int64) {37};
org$pandalanguage$pandac$parser$Token$Kind $tmp4345 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4344);
org$pandalanguage$pandac$parser$Token$nullable $tmp4346 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4345, &$s4347);
// line 2049
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block1:;
panda$core$Bit $tmp4348 = panda$core$Bit$init$builtin_bit(false);
bool $tmp4349 = $tmp4348.value;
if ($tmp4349) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp4350 = (panda$core$Int64) {2007};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4351, $tmp4350, &$s4352);
abort(); // unreachable
block37:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2058
panda$core$Int64 $tmp4353 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp4354 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4353);
org$pandalanguage$pandac$parser$Token$nullable $tmp4355 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4354, &$s4356);
*(&local0) = $tmp4355;
// line 2059
org$pandalanguage$pandac$parser$Token$nullable $tmp4357 = *(&local0);
panda$core$Bit $tmp4358 = panda$core$Bit$init$builtin_bit(!$tmp4357.nonnull);
bool $tmp4359 = $tmp4358.value;
if ($tmp4359) goto block1; else goto block2;
block1:;
// line 2060
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2062
panda$core$Int64 $tmp4360 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4361 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4360);
org$pandalanguage$pandac$parser$Token$nullable $tmp4362 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4361, &$s4363);
*(&local1) = $tmp4362;
// line 2063
org$pandalanguage$pandac$parser$Token$nullable $tmp4364 = *(&local1);
panda$core$Bit $tmp4365 = panda$core$Bit$init$builtin_bit(!$tmp4364.nonnull);
bool $tmp4366 = $tmp4365.value;
if ($tmp4366) goto block3; else goto block4;
block3:;
// line 2064
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2066
panda$core$MutableString* $tmp4367 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4368 = *(&local1);
panda$core$String* $tmp4369 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4368.value));
panda$core$MutableString$init$panda$core$String($tmp4367, $tmp4369);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4367));
panda$core$MutableString* $tmp4370 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4370));
*(&local2) = $tmp4367;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4369));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4367));
// unreffing REF($31:panda.core.MutableString)
// line 2067
goto block5;
block5:;
// line 2068
panda$core$Int64 $tmp4371 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4372 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4371);
org$pandalanguage$pandac$parser$Token$nullable $tmp4373 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4372);
*(&local1) = $tmp4373;
// line 2069
org$pandalanguage$pandac$parser$Token$nullable $tmp4374 = *(&local1);
panda$core$Bit $tmp4375 = panda$core$Bit$init$builtin_bit(!$tmp4374.nonnull);
bool $tmp4376 = $tmp4375.value;
if ($tmp4376) goto block7; else goto block8;
block7:;
// line 2070
goto block6;
block8:;
// line 2072
panda$core$MutableString* $tmp4377 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4377, &$s4378);
// line 2073
panda$core$Int64 $tmp4379 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4380 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4379);
org$pandalanguage$pandac$parser$Token$nullable $tmp4381 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4380, &$s4382);
*(&local1) = $tmp4381;
// line 2074
org$pandalanguage$pandac$parser$Token$nullable $tmp4383 = *(&local1);
panda$core$Bit $tmp4384 = panda$core$Bit$init$builtin_bit(!$tmp4383.nonnull);
bool $tmp4385 = $tmp4384.value;
if ($tmp4385) goto block9; else goto block10;
block9:;
// line 2075
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4386 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4386));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2077
panda$core$MutableString* $tmp4387 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4388 = *(&local1);
panda$core$String* $tmp4389 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4388.value));
panda$core$MutableString$append$panda$core$String($tmp4387, $tmp4389);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4389));
// unreffing REF($91:panda.core.String)
goto block5;
block6:;
// line 2079
org$pandalanguage$pandac$ASTNode* $tmp4390 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4391 = (panda$core$Int64) {31};
org$pandalanguage$pandac$parser$Token$nullable $tmp4392 = *(&local0);
org$pandalanguage$pandac$Position $tmp4393 = ((org$pandalanguage$pandac$parser$Token) $tmp4392.value).position;
panda$core$MutableString* $tmp4394 = *(&local2);
panda$core$String* $tmp4395 = panda$core$MutableString$finish$R$panda$core$String($tmp4394);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4390, $tmp4391, $tmp4393, $tmp4395);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4390));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4396 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4396));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4390;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$MutableString* local2 = NULL;
// line 2086
panda$core$Int64 $tmp4397 = (panda$core$Int64) {16};
org$pandalanguage$pandac$parser$Token$Kind $tmp4398 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4397);
org$pandalanguage$pandac$parser$Token$nullable $tmp4399 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4398, &$s4400);
*(&local0) = $tmp4399;
// line 2087
org$pandalanguage$pandac$parser$Token$nullable $tmp4401 = *(&local0);
panda$core$Bit $tmp4402 = panda$core$Bit$init$builtin_bit(!$tmp4401.nonnull);
bool $tmp4403 = $tmp4402.value;
if ($tmp4403) goto block1; else goto block2;
block1:;
// line 2088
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2090
panda$core$Int64 $tmp4404 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4405 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4404);
org$pandalanguage$pandac$parser$Token$nullable $tmp4406 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4405, &$s4407);
*(&local1) = $tmp4406;
// line 2091
org$pandalanguage$pandac$parser$Token$nullable $tmp4408 = *(&local1);
panda$core$Bit $tmp4409 = panda$core$Bit$init$builtin_bit(!$tmp4408.nonnull);
bool $tmp4410 = $tmp4409.value;
if ($tmp4410) goto block3; else goto block4;
block3:;
// line 2092
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2094
panda$core$MutableString* $tmp4411 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$parser$Token$nullable $tmp4412 = *(&local1);
panda$core$String* $tmp4413 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4412.value));
panda$core$MutableString$init$panda$core$String($tmp4411, $tmp4413);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4411));
panda$core$MutableString* $tmp4414 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4414));
*(&local2) = $tmp4411;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4413));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4411));
// unreffing REF($31:panda.core.MutableString)
// line 2095
goto block5;
block5:;
// line 2096
panda$core$Int64 $tmp4415 = (panda$core$Int64) {99};
org$pandalanguage$pandac$parser$Token$Kind $tmp4416 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4415);
org$pandalanguage$pandac$parser$Token$nullable $tmp4417 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4416);
*(&local1) = $tmp4417;
// line 2097
org$pandalanguage$pandac$parser$Token$nullable $tmp4418 = *(&local1);
panda$core$Bit $tmp4419 = panda$core$Bit$init$builtin_bit(!$tmp4418.nonnull);
bool $tmp4420 = $tmp4419.value;
if ($tmp4420) goto block7; else goto block8;
block7:;
// line 2098
goto block6;
block8:;
// line 2100
panda$core$MutableString* $tmp4421 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp4421, &$s4422);
// line 2101
panda$core$Int64 $tmp4423 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4424 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4423);
org$pandalanguage$pandac$parser$Token$nullable $tmp4425 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4424, &$s4426);
*(&local1) = $tmp4425;
// line 2102
org$pandalanguage$pandac$parser$Token$nullable $tmp4427 = *(&local1);
panda$core$Bit $tmp4428 = panda$core$Bit$init$builtin_bit(!$tmp4427.nonnull);
bool $tmp4429 = $tmp4428.value;
if ($tmp4429) goto block9; else goto block10;
block9:;
// line 2103
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4430 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4430));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block10:;
// line 2105
panda$core$MutableString* $tmp4431 = *(&local2);
org$pandalanguage$pandac$parser$Token$nullable $tmp4432 = *(&local1);
panda$core$String* $tmp4433 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4432.value));
panda$core$MutableString$append$panda$core$String($tmp4431, $tmp4433);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4433));
// unreffing REF($91:panda.core.String)
goto block5;
block6:;
// line 2107
org$pandalanguage$pandac$ASTNode* $tmp4434 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4435 = (panda$core$Int64) {47};
org$pandalanguage$pandac$parser$Token$nullable $tmp4436 = *(&local0);
org$pandalanguage$pandac$Position $tmp4437 = ((org$pandalanguage$pandac$parser$Token) $tmp4436.value).position;
panda$core$MutableString* $tmp4438 = *(&local2);
panda$core$String* $tmp4439 = panda$core$MutableString$finish$R$panda$core$String($tmp4438);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4434, $tmp4435, $tmp4437, $tmp4439);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4439));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4434));
// unreffing REF($98:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4440 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4440));
// unreffing name
*(&local2) = ((panda$core$MutableString*) NULL);
return $tmp4434;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$collections$Array* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
// line 2114
panda$core$Int64 $tmp4441 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4442 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4441);
org$pandalanguage$pandac$parser$Token$nullable $tmp4443 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4442, &$s4444);
*(&local0) = $tmp4443;
// line 2115
org$pandalanguage$pandac$parser$Token$nullable $tmp4445 = *(&local0);
panda$core$Bit $tmp4446 = panda$core$Bit$init$builtin_bit(!$tmp4445.nonnull);
bool $tmp4447 = $tmp4446.value;
if ($tmp4447) goto block1; else goto block2;
block1:;
// line 2116
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 2118
panda$core$Int64 $tmp4448 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4449 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4448);
org$pandalanguage$pandac$parser$Token$nullable $tmp4450 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4449, &$s4451);
*(&local1) = $tmp4450;
// line 2119
org$pandalanguage$pandac$parser$Token$nullable $tmp4452 = *(&local1);
panda$core$Bit $tmp4453 = panda$core$Bit$init$builtin_bit(!$tmp4452.nonnull);
bool $tmp4454 = $tmp4453.value;
if ($tmp4454) goto block3; else goto block4;
block3:;
// line 2120
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block4:;
// line 2122
panda$collections$Array* $tmp4455 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4455);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4455));
panda$collections$Array* $tmp4456 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4456));
*(&local2) = $tmp4455;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4455));
// unreffing REF($31:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2123
panda$core$Int64 $tmp4457 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4458 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4457);
org$pandalanguage$pandac$parser$Token$nullable $tmp4459 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4458);
panda$core$Bit $tmp4460 = panda$core$Bit$init$builtin_bit($tmp4459.nonnull);
bool $tmp4461 = $tmp4460.value;
if ($tmp4461) goto block5; else goto block7;
block5:;
// line 2124
org$pandalanguage$pandac$ASTNode* $tmp4462 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4462));
org$pandalanguage$pandac$ASTNode* $tmp4463 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4463));
*(&local3) = $tmp4462;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4462));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
// line 2125
org$pandalanguage$pandac$ASTNode* $tmp4464 = *(&local3);
panda$core$Bit $tmp4465 = panda$core$Bit$init$builtin_bit($tmp4464 == NULL);
bool $tmp4466 = $tmp4465.value;
if ($tmp4466) goto block8; else goto block9;
block8:;
// line 2126
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4467 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4467));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4468 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4468));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block9:;
// line 2128
panda$collections$Array* $tmp4469 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4470 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4471 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp4472 = *(&local1);
org$pandalanguage$pandac$Position $tmp4473 = ((org$pandalanguage$pandac$parser$Token) $tmp4472.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4474 = *(&local1);
panda$core$String* $tmp4475 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4474.value));
org$pandalanguage$pandac$ASTNode* $tmp4476 = *(&local3);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4470, $tmp4471, $tmp4473, $tmp4475, $tmp4476);
panda$collections$Array$add$panda$collections$Array$T($tmp4469, ((panda$core$Object*) $tmp4470));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4475));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4470));
// unreffing REF($87:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4477 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4477));
// unreffing t
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block7:;
// line 1
// line 2131
panda$collections$Array* $tmp4478 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4479 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4480 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp4481 = *(&local1);
org$pandalanguage$pandac$Position $tmp4482 = ((org$pandalanguage$pandac$parser$Token) $tmp4481.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4483 = *(&local1);
panda$core$String* $tmp4484 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4483.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4479, $tmp4480, $tmp4482, $tmp4484);
panda$collections$Array$add$panda$collections$Array$T($tmp4478, ((panda$core$Object*) $tmp4479));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4484));
// unreffing REF($122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4479));
// unreffing REF($115:org.pandalanguage.pandac.ASTNode)
goto block6;
block6:;
// line 2133
goto block10;
block10:;
panda$core$Int64 $tmp4485 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4486 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4485);
org$pandalanguage$pandac$parser$Token$nullable $tmp4487 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4486);
panda$core$Bit $tmp4488 = panda$core$Bit$init$builtin_bit($tmp4487.nonnull);
bool $tmp4489 = $tmp4488.value;
if ($tmp4489) goto block11; else goto block12;
block11:;
// line 2134
panda$core$Int64 $tmp4490 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4491 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4490);
org$pandalanguage$pandac$parser$Token$nullable $tmp4492 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4491, &$s4493);
*(&local1) = $tmp4492;
// line 2135
org$pandalanguage$pandac$parser$Token$nullable $tmp4494 = *(&local1);
panda$core$Bit $tmp4495 = panda$core$Bit$init$builtin_bit(!$tmp4494.nonnull);
bool $tmp4496 = $tmp4495.value;
if ($tmp4496) goto block13; else goto block14;
block13:;
// line 2136
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
panda$collections$Array* $tmp4497 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4497));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block14:;
// line 2138
panda$core$Int64 $tmp4498 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4499 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4498);
org$pandalanguage$pandac$parser$Token$nullable $tmp4500 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4499);
panda$core$Bit $tmp4501 = panda$core$Bit$init$builtin_bit($tmp4500.nonnull);
bool $tmp4502 = $tmp4501.value;
if ($tmp4502) goto block15; else goto block17;
block15:;
// line 2139
org$pandalanguage$pandac$ASTNode* $tmp4503 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4503));
org$pandalanguage$pandac$ASTNode* $tmp4504 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4504));
*(&local4) = $tmp4503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4503));
// unreffing REF($171:org.pandalanguage.pandac.ASTNode?)
// line 2140
org$pandalanguage$pandac$ASTNode* $tmp4505 = *(&local4);
panda$core$Bit $tmp4506 = panda$core$Bit$init$builtin_bit($tmp4505 == NULL);
bool $tmp4507 = $tmp4506.value;
if ($tmp4507) goto block18; else goto block19;
block18:;
// line 2141
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4508 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4508));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4509 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4509));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block19:;
// line 2143
panda$collections$Array* $tmp4510 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4511 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4512 = (panda$core$Int64) {45};
org$pandalanguage$pandac$parser$Token$nullable $tmp4513 = *(&local1);
org$pandalanguage$pandac$Position $tmp4514 = ((org$pandalanguage$pandac$parser$Token) $tmp4513.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4515 = *(&local1);
panda$core$String* $tmp4516 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4515.value));
org$pandalanguage$pandac$ASTNode* $tmp4517 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4511, $tmp4512, $tmp4514, $tmp4516, $tmp4517);
panda$collections$Array$add$panda$collections$Array$T($tmp4510, ((panda$core$Object*) $tmp4511));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4516));
// unreffing REF($212:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4511));
// unreffing REF($205:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4518 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block16;
block17:;
// line 1
// line 2146
panda$collections$Array* $tmp4519 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4520 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4521 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$nullable $tmp4522 = *(&local1);
org$pandalanguage$pandac$Position $tmp4523 = ((org$pandalanguage$pandac$parser$Token) $tmp4522.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4524 = *(&local1);
panda$core$String* $tmp4525 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4524.value));
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4520, $tmp4521, $tmp4523, $tmp4525);
panda$collections$Array$add$panda$collections$Array$T($tmp4519, ((panda$core$Object*) $tmp4520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4525));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4520));
// unreffing REF($233:org.pandalanguage.pandac.ASTNode)
goto block16;
block16:;
goto block10;
block12:;
// line 2149
panda$core$Int64 $tmp4526 = (panda$core$Int64) {64};
org$pandalanguage$pandac$parser$Token$Kind $tmp4527 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4526);
org$pandalanguage$pandac$parser$Token$nullable $tmp4528 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4527, &$s4529);
panda$core$Bit $tmp4530 = panda$core$Bit$init$builtin_bit(!$tmp4528.nonnull);
bool $tmp4531 = $tmp4530.value;
if ($tmp4531) goto block20; else goto block21;
block20:;
// line 2150
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
panda$collections$Array* $tmp4532 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4532));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block21:;
// line 2152
panda$collections$Array* $tmp4533 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4534 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4533);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4534));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4534));
// unreffing REF($272:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp4535 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4535));
// unreffing parameters
*(&local2) = ((panda$collections$Array*) NULL);
return $tmp4534;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2159
panda$core$Int64 $tmp4536 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4537 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4536);
org$pandalanguage$pandac$parser$Token$nullable $tmp4538 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4537, &$s4539);
*(&local0) = $tmp4538;
// line 2160
org$pandalanguage$pandac$parser$Token$nullable $tmp4540 = *(&local0);
panda$core$Bit $tmp4541 = panda$core$Bit$init$builtin_bit(!$tmp4540.nonnull);
bool $tmp4542 = $tmp4541.value;
if ($tmp4542) goto block1; else goto block2;
block1:;
// line 2161
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 2163
panda$collections$Array* $tmp4543 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4543);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4543));
panda$collections$Array* $tmp4544 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4544));
*(&local1) = $tmp4543;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4543));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2164
org$pandalanguage$pandac$ASTNode* $tmp4545 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
org$pandalanguage$pandac$ASTNode* $tmp4546 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4546));
*(&local2) = $tmp4545;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4545));
// unreffing REF($30:org.pandalanguage.pandac.ASTNode?)
// line 2165
org$pandalanguage$pandac$ASTNode* $tmp4547 = *(&local2);
panda$core$Bit $tmp4548 = panda$core$Bit$init$builtin_bit($tmp4547 == NULL);
bool $tmp4549 = $tmp4548.value;
if ($tmp4549) goto block3; else goto block4;
block3:;
// line 2166
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4550 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4550));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4551 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4551));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block4:;
// line 2168
panda$collections$Array* $tmp4552 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4553 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4552, ((panda$core$Object*) $tmp4553));
// line 2169
goto block5;
block5:;
panda$core$Int64 $tmp4554 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4555 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4554);
org$pandalanguage$pandac$parser$Token$nullable $tmp4556 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4555);
panda$core$Bit $tmp4557 = panda$core$Bit$init$builtin_bit($tmp4556.nonnull);
bool $tmp4558 = $tmp4557.value;
if ($tmp4558) goto block6; else goto block7;
block6:;
// line 2170
org$pandalanguage$pandac$ASTNode* $tmp4559 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
org$pandalanguage$pandac$ASTNode* $tmp4560 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
*(&local2) = $tmp4559;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4559));
// unreffing REF($78:org.pandalanguage.pandac.ASTNode?)
// line 2171
org$pandalanguage$pandac$ASTNode* $tmp4561 = *(&local2);
panda$core$Bit $tmp4562 = panda$core$Bit$init$builtin_bit($tmp4561 == NULL);
bool $tmp4563 = $tmp4562.value;
if ($tmp4563) goto block8; else goto block9;
block8:;
// line 2172
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4564 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4564));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4565 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4565));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block9:;
// line 2174
panda$collections$Array* $tmp4566 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4567 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4566, ((panda$core$Object*) $tmp4567));
goto block5;
block7:;
// line 2176
panda$collections$Array* $tmp4568 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp4569 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4568);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
// unreffing REF($119:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
org$pandalanguage$pandac$ASTNode* $tmp4570 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4570));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4571 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4571));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4569;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$parser$Token$nullable local3;
org$pandalanguage$pandac$parser$Token$nullable local4;
// line 2183
panda$core$Int64 $tmp4572 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4573 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4572);
org$pandalanguage$pandac$parser$Token$nullable $tmp4574 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4573, &$s4575);
*(&local0) = $tmp4574;
// line 2184
*(&local1) = ((panda$core$String*) NULL);
// line 2185
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4576 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4576));
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2186
panda$core$Int64 $tmp4577 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4578 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4577);
org$pandalanguage$pandac$parser$Token$nullable $tmp4579 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4578);
*(&local3) = $tmp4579;
// line 2187
org$pandalanguage$pandac$parser$Token$nullable $tmp4580 = *(&local3);
panda$core$Bit $tmp4581 = panda$core$Bit$init$builtin_bit($tmp4580.nonnull);
bool $tmp4582 = $tmp4581.value;
if ($tmp4582) goto block1; else goto block2;
block1:;
// line 2188
org$pandalanguage$pandac$ASTNode* $tmp4583 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
org$pandalanguage$pandac$ASTNode* $tmp4584 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4584));
*(&local2) = $tmp4583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4583));
// unreffing REF($27:org.pandalanguage.pandac.ASTNode?)
// line 2189
org$pandalanguage$pandac$ASTNode* $tmp4585 = *(&local2);
panda$core$Bit $tmp4586 = panda$core$Bit$init$builtin_bit($tmp4585 == NULL);
bool $tmp4587 = $tmp4586.value;
if ($tmp4587) goto block3; else goto block4;
block3:;
// line 2190
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4588 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4588));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4589 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4589));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2192
panda$core$Int64 $tmp4590 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4591 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4590);
org$pandalanguage$pandac$parser$Token$nullable $tmp4592 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4591, &$s4593);
*(&local4) = $tmp4592;
// line 2193
org$pandalanguage$pandac$parser$Token$nullable $tmp4594 = *(&local4);
panda$core$Bit $tmp4595 = panda$core$Bit$init$builtin_bit(!$tmp4594.nonnull);
bool $tmp4596 = $tmp4595.value;
if ($tmp4596) goto block5; else goto block6;
block5:;
// line 2194
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4597 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4598 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4598));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2196
panda$core$String** $tmp4599 = &param0->source;
panda$core$String* $tmp4600 = *$tmp4599;
panda$core$String** $tmp4601 = &param0->source;
panda$core$String* $tmp4602 = *$tmp4601;
org$pandalanguage$pandac$parser$Token$nullable $tmp4603 = *(&local3);
panda$core$String$Index $tmp4604 = ((org$pandalanguage$pandac$parser$Token) $tmp4603.value).start;
panda$core$String$Index $tmp4605 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index($tmp4602, $tmp4604);
org$pandalanguage$pandac$parser$Token$nullable $tmp4606 = *(&local4);
panda$core$String$Index $tmp4607 = ((org$pandalanguage$pandac$parser$Token) $tmp4606.value).start;
panda$core$Bit $tmp4608 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp4609 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp4605, $tmp4607, $tmp4608);
panda$core$String* $tmp4610 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp4600, $tmp4609);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
panda$core$String* $tmp4611 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4611));
*(&local1) = $tmp4610;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4610));
// unreffing REF($96:panda.core.String)
goto block2;
block2:;
// line 2198
org$pandalanguage$pandac$ASTNode* $tmp4612 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4613 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$nullable $tmp4614 = *(&local0);
org$pandalanguage$pandac$Position $tmp4615 = ((org$pandalanguage$pandac$parser$Token) $tmp4614.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4616 = *(&local0);
panda$core$String* $tmp4617 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4616.value));
panda$core$String* $tmp4618 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4619 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4612, $tmp4613, $tmp4615, $tmp4617, $tmp4618, $tmp4619);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4617));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4612));
// unreffing REF($109:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4620 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4620));
// unreffing expr
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp4621 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
// unreffing exprText
*(&local1) = ((panda$core$String*) NULL);
return $tmp4612;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2205
panda$collections$Array* $tmp4622 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4622);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
panda$collections$Array* $tmp4623 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4623));
*(&local0) = $tmp4622;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4622));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2206
goto block1;
block1:;
org$pandalanguage$pandac$parser$Token $tmp4624 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4625 = $tmp4624.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4626;
$tmp4626 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4626->value = $tmp4625;
panda$core$Int64 $tmp4627 = (panda$core$Int64) {14};
org$pandalanguage$pandac$parser$Token$Kind $tmp4628 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4627);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4629;
$tmp4629 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4629->value = $tmp4628;
ITable* $tmp4630 = ((panda$core$Equatable*) $tmp4626)->$class->itable;
while ($tmp4630->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4630 = $tmp4630->next;
}
$fn4632 $tmp4631 = $tmp4630->methods[0];
panda$core$Bit $tmp4633 = $tmp4631(((panda$core$Equatable*) $tmp4626), ((panda$core$Equatable*) $tmp4629));
bool $tmp4634 = $tmp4633.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4629)));
// unreffing REF($22:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4626)));
// unreffing REF($18:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4634) goto block2; else goto block3;
block2:;
// line 2207
org$pandalanguage$pandac$ASTNode* $tmp4635 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
org$pandalanguage$pandac$ASTNode* $tmp4636 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4636));
*(&local1) = $tmp4635;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4635));
// unreffing REF($34:org.pandalanguage.pandac.ASTNode?)
// line 2208
org$pandalanguage$pandac$ASTNode* $tmp4637 = *(&local1);
panda$core$Bit $tmp4638 = panda$core$Bit$init$builtin_bit($tmp4637 == NULL);
bool $tmp4639 = $tmp4638.value;
if ($tmp4639) goto block4; else goto block5;
block4:;
// line 2209
org$pandalanguage$pandac$ASTNode* $tmp4640 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4640));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block3;
block5:;
// line 2211
panda$collections$Array* $tmp4641 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp4642 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp4641, ((panda$core$Object*) $tmp4642));
org$pandalanguage$pandac$ASTNode* $tmp4643 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4643));
// unreffing a
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 2213
panda$collections$Array* $tmp4644 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp4645 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4644);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4645));
// unreffing REF($74:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp4646 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4646));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp4645;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$core$MutableString* local1 = NULL;
org$pandalanguage$pandac$parser$Token local2;
// line 2217
panda$core$Int64 $tmp4647 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4648 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4647);
org$pandalanguage$pandac$parser$Token$nullable $tmp4649 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4648, &$s4650);
*(&local0) = $tmp4649;
// line 2218
org$pandalanguage$pandac$parser$Token$nullable $tmp4651 = *(&local0);
panda$core$Bit $tmp4652 = panda$core$Bit$init$builtin_bit(!$tmp4651.nonnull);
bool $tmp4653 = $tmp4652.value;
if ($tmp4653) goto block1; else goto block2;
block1:;
// line 2219
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2221
panda$core$MutableString* $tmp4654 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp4654);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4654));
panda$core$MutableString* $tmp4655 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4655));
*(&local1) = $tmp4654;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4654));
// unreffing REF($16:panda.core.MutableString)
// line 2222
goto block3;
block3:;
// line 2223
org$pandalanguage$pandac$parser$Token $tmp4656 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local2) = $tmp4656;
// line 2224
org$pandalanguage$pandac$parser$Token $tmp4657 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4658 = $tmp4657.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4659;
$tmp4659 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4659->value = $tmp4658;
panda$core$Int64 $tmp4660 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp4661 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4660);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4662;
$tmp4662 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4662->value = $tmp4661;
ITable* $tmp4663 = ((panda$core$Equatable*) $tmp4659)->$class->itable;
while ($tmp4663->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4663 = $tmp4663->next;
}
$fn4665 $tmp4664 = $tmp4663->methods[0];
panda$core$Bit $tmp4666 = $tmp4664(((panda$core$Equatable*) $tmp4659), ((panda$core$Equatable*) $tmp4662));
bool $tmp4667 = $tmp4666.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4662)));
// unreffing REF($40:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4659)));
// unreffing REF($36:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4667) goto block5; else goto block6;
block5:;
// line 2225
goto block4;
block6:;
// line 2227
org$pandalanguage$pandac$parser$Token $tmp4668 = *(&local2);
org$pandalanguage$pandac$parser$Token$Kind $tmp4669 = $tmp4668.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4670;
$tmp4670 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4670->value = $tmp4669;
panda$core$Int64 $tmp4671 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp4672 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4671);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4673;
$tmp4673 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4673->value = $tmp4672;
ITable* $tmp4674 = ((panda$core$Equatable*) $tmp4670)->$class->itable;
while ($tmp4674->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4674 = $tmp4674->next;
}
$fn4676 $tmp4675 = $tmp4674->methods[0];
panda$core$Bit $tmp4677 = $tmp4675(((panda$core$Equatable*) $tmp4670), ((panda$core$Equatable*) $tmp4673));
bool $tmp4678 = $tmp4677.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4673)));
// unreffing REF($60:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4670)));
// unreffing REF($56:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4678) goto block7; else goto block8;
block7:;
// line 2228
org$pandalanguage$pandac$parser$Token$nullable $tmp4679 = *(&local0);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4679.value), &$s4680);
// line 2229
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$MutableString* $tmp4681 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4681));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2231
panda$core$MutableString* $tmp4682 = *(&local1);
org$pandalanguage$pandac$parser$Token $tmp4683 = *(&local2);
panda$core$String* $tmp4684 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp4683);
panda$core$MutableString$append$panda$core$String($tmp4682, $tmp4684);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4684));
// unreffing REF($87:panda.core.String)
goto block3;
block4:;
// line 2233
org$pandalanguage$pandac$ASTNode* $tmp4685 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4686 = (panda$core$Int64) {39};
org$pandalanguage$pandac$parser$Token$nullable $tmp4687 = *(&local0);
org$pandalanguage$pandac$Position $tmp4688 = ((org$pandalanguage$pandac$parser$Token) $tmp4687.value).position;
panda$core$MutableString* $tmp4689 = *(&local1);
panda$core$String* $tmp4690 = panda$core$MutableString$finish$R$panda$core$String($tmp4689);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4685, $tmp4686, $tmp4688, $tmp4690);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4685));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4690));
// unreffing REF($100:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4685));
// unreffing REF($94:org.pandalanguage.pandac.ASTNode)
panda$core$MutableString* $tmp4691 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4691));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
return $tmp4685;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
// line 2240
panda$core$Int64 $tmp4692 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4693 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4692);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4693);
// line 2241
panda$core$Int64 $tmp4694 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4695 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4694);
org$pandalanguage$pandac$parser$Token$nullable $tmp4696 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4695, &$s4697);
*(&local0) = $tmp4696;
// line 2242
panda$core$Int64 $tmp4698 = (panda$core$Int64) {5};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4699 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4698);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4699);
// line 2243
org$pandalanguage$pandac$parser$Token$nullable $tmp4700 = *(&local0);
panda$core$Bit $tmp4701 = panda$core$Bit$init$builtin_bit(!$tmp4700.nonnull);
bool $tmp4702 = $tmp4701.value;
if ($tmp4702) goto block1; else goto block2;
block1:;
// line 2244
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2246
org$pandalanguage$pandac$ASTNode* $tmp4703 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4703));
org$pandalanguage$pandac$ASTNode* $tmp4704 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4704));
*(&local1) = $tmp4703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4703));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
// line 2247
org$pandalanguage$pandac$ASTNode* $tmp4705 = *(&local1);
panda$core$Bit $tmp4706 = panda$core$Bit$init$builtin_bit($tmp4705 == NULL);
bool $tmp4707 = $tmp4706.value;
if ($tmp4707) goto block3; else goto block4;
block3:;
// line 2248
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4708 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4708));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2250
org$pandalanguage$pandac$ASTNode* $tmp4709 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4710 = (panda$core$Int64) {32};
org$pandalanguage$pandac$parser$Token$nullable $tmp4711 = *(&local0);
org$pandalanguage$pandac$Position $tmp4712 = ((org$pandalanguage$pandac$parser$Token) $tmp4711.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp4713 = *(&local0);
panda$core$String* $tmp4714 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp4713.value));
org$pandalanguage$pandac$ASTNode* $tmp4715 = *(&local1);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4709, $tmp4710, $tmp4712, $tmp4714, $tmp4715);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4714));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4709));
// unreffing REF($51:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4716 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4716));
// unreffing t
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4709;

}
org$pandalanguage$pandac$FixedArray* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2257
panda$core$Int64 $tmp4717 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4718 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4717);
org$pandalanguage$pandac$parser$Token$nullable $tmp4719 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4718, &$s4720);
*(&local0) = $tmp4719;
// line 2258
org$pandalanguage$pandac$parser$Token$nullable $tmp4721 = *(&local0);
panda$core$Bit $tmp4722 = panda$core$Bit$init$builtin_bit(!$tmp4721.nonnull);
bool $tmp4723 = $tmp4722.value;
if ($tmp4723) goto block1; else goto block2;
block1:;
// line 2259
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block2:;
// line 2261
panda$collections$Array* $tmp4724 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4724);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
panda$collections$Array* $tmp4725 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4725));
*(&local1) = $tmp4724;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4724));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2262
panda$core$Int64 $tmp4726 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4727 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4726);
org$pandalanguage$pandac$parser$Token$nullable $tmp4728 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4727);
panda$core$Bit $tmp4729 = panda$core$Bit$init$builtin_bit(!$tmp4728.nonnull);
bool $tmp4730 = $tmp4729.value;
if ($tmp4730) goto block3; else goto block4;
block3:;
// line 2263
org$pandalanguage$pandac$ASTNode* $tmp4731 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
org$pandalanguage$pandac$ASTNode* $tmp4732 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4732));
*(&local2) = $tmp4731;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
// unreffing REF($38:org.pandalanguage.pandac.ASTNode?)
// line 2264
org$pandalanguage$pandac$ASTNode* $tmp4733 = *(&local2);
panda$core$Bit $tmp4734 = panda$core$Bit$init$builtin_bit($tmp4733 == NULL);
bool $tmp4735 = $tmp4734.value;
if ($tmp4735) goto block5; else goto block6;
block5:;
// line 2265
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4736 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4736));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4737 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4737));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block6:;
// line 2267
panda$collections$Array* $tmp4738 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4739 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4738, ((panda$core$Object*) $tmp4739));
// line 2268
goto block7;
block7:;
panda$core$Int64 $tmp4740 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp4741 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4740);
org$pandalanguage$pandac$parser$Token$nullable $tmp4742 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4741);
panda$core$Bit $tmp4743 = panda$core$Bit$init$builtin_bit($tmp4742.nonnull);
bool $tmp4744 = $tmp4743.value;
if ($tmp4744) goto block8; else goto block9;
block8:;
// line 2269
org$pandalanguage$pandac$ASTNode* $tmp4745 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4745));
org$pandalanguage$pandac$ASTNode* $tmp4746 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4746));
*(&local2) = $tmp4745;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4745));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 2270
org$pandalanguage$pandac$ASTNode* $tmp4747 = *(&local2);
panda$core$Bit $tmp4748 = panda$core$Bit$init$builtin_bit($tmp4747 == NULL);
bool $tmp4749 = $tmp4748.value;
if ($tmp4749) goto block10; else goto block11;
block10:;
// line 2271
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4750 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4750));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4751 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4751));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block11:;
// line 2273
panda$collections$Array* $tmp4752 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp4753 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp4752, ((panda$core$Object*) $tmp4753));
goto block7;
block9:;
// line 2275
panda$core$Int64 $tmp4754 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4755 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4754);
org$pandalanguage$pandac$parser$Token$nullable $tmp4756 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4755, &$s4757);
panda$core$Bit $tmp4758 = panda$core$Bit$init$builtin_bit(!$tmp4756.nonnull);
bool $tmp4759 = $tmp4758.value;
if ($tmp4759) goto block12; else goto block13;
block12:;
// line 2276
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4760 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4760));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp4761 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4761));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$FixedArray*) NULL);
block13:;
org$pandalanguage$pandac$ASTNode* $tmp4762 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4762));
// unreffing param
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block4;
block4:;
// line 2279
panda$collections$Array* $tmp4763 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp4764 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp4763);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4764));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4764));
// unreffing REF($155:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$collections$Array* $tmp4765 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4765));
// unreffing result
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp4764;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$FixedArray* local3 = NULL;
org$pandalanguage$pandac$FixedArray* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$FixedArray* local6 = NULL;
// line 2287
// line 2288
panda$core$Int64 $tmp4766 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4767 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4766);
org$pandalanguage$pandac$parser$Token$nullable $tmp4768 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4767);
*(&local1) = $tmp4768;
// line 2289
org$pandalanguage$pandac$parser$Token$nullable $tmp4769 = *(&local1);
panda$core$Bit $tmp4770 = panda$core$Bit$init$builtin_bit(!$tmp4769.nonnull);
bool $tmp4771 = $tmp4770.value;
if ($tmp4771) goto block1; else goto block3;
block1:;
// line 2290
panda$core$Int64 $tmp4772 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4773 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4772);
org$pandalanguage$pandac$parser$Token$nullable $tmp4774 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4773, &$s4775);
*(&local1) = $tmp4774;
// line 2291
org$pandalanguage$pandac$parser$Token$nullable $tmp4776 = *(&local1);
panda$core$Bit $tmp4777 = panda$core$Bit$init$builtin_bit(!$tmp4776.nonnull);
bool $tmp4778 = $tmp4777.value;
if ($tmp4778) goto block4; else goto block5;
block4:;
// line 2292
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2294
panda$core$Int64 $tmp4779 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4780 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4779);
*(&local0) = $tmp4780;
goto block2;
block3:;
// line 1
// line 2297
panda$core$Int64 $tmp4781 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4782 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4781);
*(&local0) = $tmp4782;
goto block2;
block2:;
// line 2299
panda$core$Int64 $tmp4783 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4784 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4783);
org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4784);
// line 2300
panda$core$String* $tmp4785 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(param0);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4785));
panda$core$String* $tmp4786 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4786));
*(&local2) = $tmp4785;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4785));
// unreffing REF($43:panda.core.String?)
// line 2301
panda$core$Int64 $tmp4787 = (panda$core$Int64) {4};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4788 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp4787);
org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(param0, $tmp4788);
// line 2302
panda$core$String* $tmp4789 = *(&local2);
panda$core$Bit $tmp4790 = panda$core$Bit$init$builtin_bit($tmp4789 == NULL);
bool $tmp4791 = $tmp4790.value;
if ($tmp4791) goto block6; else goto block7;
block6:;
// line 2303
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$core$String* $tmp4792 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4792));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2305
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2306
org$pandalanguage$pandac$parser$Token $tmp4793 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4794 = $tmp4793.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4795;
$tmp4795 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4795->value = $tmp4794;
panda$core$Int64 $tmp4796 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp4797 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4796);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4798;
$tmp4798 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4798->value = $tmp4797;
ITable* $tmp4799 = ((panda$core$Equatable*) $tmp4795)->$class->itable;
while ($tmp4799->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4799 = $tmp4799->next;
}
$fn4801 $tmp4800 = $tmp4799->methods[0];
panda$core$Bit $tmp4802 = $tmp4800(((panda$core$Equatable*) $tmp4795), ((panda$core$Equatable*) $tmp4798));
bool $tmp4803 = $tmp4802.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4798)));
// unreffing REF($82:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4795)));
// unreffing REF($78:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4803) goto block8; else goto block10;
block8:;
// line 2307
org$pandalanguage$pandac$FixedArray* $tmp4804 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4804));
org$pandalanguage$pandac$FixedArray* $tmp4805 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4805));
*(&local3) = $tmp4804;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4804));
// unreffing REF($94:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
goto block9;
block10:;
// line 1
// line 2310
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4806 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4806));
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block9;
block9:;
// line 2312
org$pandalanguage$pandac$FixedArray* $tmp4807 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
org$pandalanguage$pandac$FixedArray* $tmp4808 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4808));
*(&local4) = $tmp4807;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4807));
// unreffing REF($115:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2313
org$pandalanguage$pandac$FixedArray* $tmp4809 = *(&local4);
panda$core$Bit $tmp4810 = panda$core$Bit$init$builtin_bit($tmp4809 == NULL);
bool $tmp4811 = $tmp4810.value;
if ($tmp4811) goto block11; else goto block12;
block11:;
// line 2314
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4812 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4812));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4813 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4813));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4814 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4814));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
// line 2316
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2317
org$pandalanguage$pandac$parser$Token $tmp4815 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4816 = $tmp4815.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4817;
$tmp4817 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4817->value = $tmp4816;
panda$core$Int64 $tmp4818 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4819 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4818);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4820;
$tmp4820 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4820->value = $tmp4819;
ITable* $tmp4821 = ((panda$core$Equatable*) $tmp4817)->$class->itable;
while ($tmp4821->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4821 = $tmp4821->next;
}
$fn4823 $tmp4822 = $tmp4821->methods[0];
panda$core$Bit $tmp4824 = $tmp4822(((panda$core$Equatable*) $tmp4817), ((panda$core$Equatable*) $tmp4820));
bool $tmp4825 = $tmp4824.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4820)));
// unreffing REF($160:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4817)));
// unreffing REF($156:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4825) goto block13; else goto block15;
block13:;
// line 2318
org$pandalanguage$pandac$ASTNode* $tmp4826 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4826));
org$pandalanguage$pandac$ASTNode* $tmp4827 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4827));
*(&local5) = $tmp4826;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4826));
// unreffing REF($172:org.pandalanguage.pandac.ASTNode?)
// line 2319
org$pandalanguage$pandac$ASTNode* $tmp4828 = *(&local5);
panda$core$Bit $tmp4829 = panda$core$Bit$init$builtin_bit($tmp4828 == NULL);
bool $tmp4830 = $tmp4829.value;
if ($tmp4830) goto block16; else goto block17;
block16:;
// line 2320
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4831 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4831));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4832 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4832));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4833 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4833));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4834 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4834));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block17:;
goto block14;
block15:;
// line 1
// line 2324
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4835 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block14:;
// line 2326
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2327
org$pandalanguage$pandac$parser$Token $tmp4836 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4837 = $tmp4836.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4838;
$tmp4838 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4838->value = $tmp4837;
panda$core$Int64 $tmp4839 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp4840 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4839);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4841;
$tmp4841 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4841->value = $tmp4840;
ITable* $tmp4842 = ((panda$core$Equatable*) $tmp4838)->$class->itable;
while ($tmp4842->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4842 = $tmp4842->next;
}
$fn4844 $tmp4843 = $tmp4842->methods[0];
panda$core$Bit $tmp4845 = $tmp4843(((panda$core$Equatable*) $tmp4838), ((panda$core$Equatable*) $tmp4841));
bool $tmp4846 = $tmp4845.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4841)));
// unreffing REF($231:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4838)));
// unreffing REF($227:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4846) goto block18; else goto block20;
block18:;
// line 2328
org$pandalanguage$pandac$FixedArray* $tmp4847 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
org$pandalanguage$pandac$FixedArray* $tmp4848 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4848));
*(&local6) = $tmp4847;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4847));
// unreffing REF($243:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2329
org$pandalanguage$pandac$FixedArray* $tmp4849 = *(&local6);
panda$core$Bit $tmp4850 = panda$core$Bit$init$builtin_bit($tmp4849 == NULL);
bool $tmp4851 = $tmp4850.value;
if ($tmp4851) goto block21; else goto block22;
block21:;
// line 2330
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4852 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4852));
// unreffing body
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4853 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4853));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4854 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4854));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4855 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4855));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4856 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4856));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block22:;
goto block19;
block20:;
// line 1
// line 2334
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4857 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4857));
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block19;
block19:;
// line 2336
org$pandalanguage$pandac$ASTNode* $tmp4858 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4859 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp4860 = *(&local1);
org$pandalanguage$pandac$Position $tmp4861 = ((org$pandalanguage$pandac$parser$Token) $tmp4860.value).position;
org$pandalanguage$pandac$MethodDecl$Kind $tmp4862 = *(&local0);
panda$core$String* $tmp4863 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp4864 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp4865 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp4866 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp4867 = *(&local6);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4858, $tmp4859, $tmp4861, param1, param2, $tmp4862, $tmp4863, $tmp4864, $tmp4865, $tmp4866, $tmp4867);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4858));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4858));
// unreffing REF($299:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp4868 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4868));
// unreffing body
*(&local6) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4869 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4869));
// unreffing returnType
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4870 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4870));
// unreffing params
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4871 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4871));
// unreffing generics
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp4872 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4872));
// unreffing name
*(&local2) = ((panda$core$String*) NULL);
return $tmp4858;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$MethodDecl$Kind local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$FixedArray* local4 = NULL;
// line 2344
// line 2345
panda$core$Int64 $tmp4873 = (panda$core$Int64) {21};
org$pandalanguage$pandac$parser$Token$Kind $tmp4874 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4873);
org$pandalanguage$pandac$parser$Token$nullable $tmp4875 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4874);
*(&local1) = $tmp4875;
// line 2346
org$pandalanguage$pandac$parser$Token$nullable $tmp4876 = *(&local1);
panda$core$Bit $tmp4877 = panda$core$Bit$init$builtin_bit(!$tmp4876.nonnull);
bool $tmp4878 = $tmp4877.value;
if ($tmp4878) goto block1; else goto block3;
block1:;
// line 2347
panda$core$Int64 $tmp4879 = (panda$core$Int64) {22};
org$pandalanguage$pandac$parser$Token$Kind $tmp4880 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4879);
org$pandalanguage$pandac$parser$Token$nullable $tmp4881 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4880, &$s4882);
*(&local1) = $tmp4881;
// line 2348
org$pandalanguage$pandac$parser$Token$nullable $tmp4883 = *(&local1);
panda$core$Bit $tmp4884 = panda$core$Bit$init$builtin_bit(!$tmp4883.nonnull);
bool $tmp4885 = $tmp4884.value;
if ($tmp4885) goto block4; else goto block5;
block4:;
// line 2349
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
// line 2351
panda$core$Int64 $tmp4886 = (panda$core$Int64) {0};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4887 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4886);
*(&local0) = $tmp4887;
goto block2;
block3:;
// line 1
// line 2354
panda$core$Int64 $tmp4888 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4889 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4888);
*(&local0) = $tmp4889;
goto block2;
block2:;
// line 2356
org$pandalanguage$pandac$FixedArray* $tmp4890 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4890));
org$pandalanguage$pandac$FixedArray* $tmp4891 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4891));
*(&local2) = $tmp4890;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4890));
// unreffing REF($39:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2357
org$pandalanguage$pandac$FixedArray* $tmp4892 = *(&local2);
panda$core$Bit $tmp4893 = panda$core$Bit$init$builtin_bit($tmp4892 == NULL);
bool $tmp4894 = $tmp4893.value;
if ($tmp4894) goto block6; else goto block7;
block6:;
// line 2358
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4895 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4895));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2360
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2361
org$pandalanguage$pandac$parser$Token $tmp4896 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4897 = $tmp4896.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4898;
$tmp4898 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4898->value = $tmp4897;
panda$core$Int64 $tmp4899 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp4900 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4899);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4901;
$tmp4901 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4901->value = $tmp4900;
ITable* $tmp4902 = ((panda$core$Equatable*) $tmp4898)->$class->itable;
while ($tmp4902->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp4902 = $tmp4902->next;
}
$fn4904 $tmp4903 = $tmp4902->methods[0];
panda$core$Bit $tmp4905 = $tmp4903(((panda$core$Equatable*) $tmp4898), ((panda$core$Equatable*) $tmp4901));
bool $tmp4906 = $tmp4905.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4901)));
// unreffing REF($74:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4898)));
// unreffing REF($70:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp4906) goto block8; else goto block10;
block8:;
// line 2362
org$pandalanguage$pandac$ASTNode* $tmp4907 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4907));
org$pandalanguage$pandac$ASTNode* $tmp4908 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4908));
*(&local3) = $tmp4907;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4907));
// unreffing REF($86:org.pandalanguage.pandac.ASTNode?)
// line 2363
org$pandalanguage$pandac$ASTNode* $tmp4909 = *(&local3);
panda$core$Bit $tmp4910 = panda$core$Bit$init$builtin_bit($tmp4909 == NULL);
bool $tmp4911 = $tmp4910.value;
if ($tmp4911) goto block11; else goto block12;
block11:;
// line 2364
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4912 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4912));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4913 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4913));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block12:;
goto block9;
block10:;
// line 1
// line 2368
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4914 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4914));
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block9;
block9:;
// line 2370
org$pandalanguage$pandac$FixedArray* $tmp4915 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4915));
org$pandalanguage$pandac$FixedArray* $tmp4916 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
*(&local4) = $tmp4915;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4915));
// unreffing REF($127:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2371
org$pandalanguage$pandac$FixedArray* $tmp4917 = *(&local4);
panda$core$Bit $tmp4918 = panda$core$Bit$init$builtin_bit($tmp4917 == NULL);
bool $tmp4919 = $tmp4918.value;
if ($tmp4919) goto block13; else goto block14;
block13:;
// line 2372
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4920 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4920));
// unreffing body
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4921 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4921));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4922 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4922));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
// line 2374
org$pandalanguage$pandac$ASTNode* $tmp4923 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4924 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp4925 = *(&local1);
org$pandalanguage$pandac$Position $tmp4926 = ((org$pandalanguage$pandac$parser$Token) $tmp4925.value).position;
org$pandalanguage$pandac$FixedArray* $tmp4927 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp4927);
org$pandalanguage$pandac$MethodDecl$Kind $tmp4928 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp4929 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp4930 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp4931 = *(&local4);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4923, $tmp4924, $tmp4926, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4927, $tmp4928, &$s4932, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp4929, $tmp4930, $tmp4931);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4927));
// unreffing REF($169:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4923));
// unreffing REF($164:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp4933 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4933));
// unreffing body
*(&local4) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp4934 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
// unreffing returnType
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4935 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4935));
// unreffing params
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp4923;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$FixedArray* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
// line 2382
panda$core$Int64 $tmp4936 = (panda$core$Int64) {23};
org$pandalanguage$pandac$parser$Token$Kind $tmp4937 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4936);
org$pandalanguage$pandac$parser$Token$nullable $tmp4938 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4937, &$s4939);
*(&local0) = $tmp4938;
// line 2383
org$pandalanguage$pandac$parser$Token$nullable $tmp4940 = *(&local0);
panda$core$Bit $tmp4941 = panda$core$Bit$init$builtin_bit(!$tmp4940.nonnull);
bool $tmp4942 = $tmp4941.value;
if ($tmp4942) goto block1; else goto block2;
block1:;
// line 2384
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2386
org$pandalanguage$pandac$FixedArray* $tmp4943 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4943));
org$pandalanguage$pandac$FixedArray* $tmp4944 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4944));
*(&local1) = $tmp4943;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4943));
// unreffing REF($16:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2387
org$pandalanguage$pandac$FixedArray* $tmp4945 = *(&local1);
panda$core$Bit $tmp4946 = panda$core$Bit$init$builtin_bit($tmp4945 == NULL);
bool $tmp4947 = $tmp4946.value;
if ($tmp4947) goto block3; else goto block4;
block3:;
// line 2388
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4948 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4948));
// unreffing params
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2390
org$pandalanguage$pandac$FixedArray* $tmp4949 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4949));
org$pandalanguage$pandac$FixedArray* $tmp4950 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4950));
*(&local2) = $tmp4949;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4949));
// unreffing REF($43:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2391
org$pandalanguage$pandac$FixedArray* $tmp4951 = *(&local2);
panda$core$Bit $tmp4952 = panda$core$Bit$init$builtin_bit($tmp4951 == NULL);
bool $tmp4953 = $tmp4952.value;
if ($tmp4953) goto block5; else goto block6;
block5:;
// line 2392
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp4954 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4954));
// unreffing b
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4955 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4955));
// unreffing params
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block6:;
// line 2394
org$pandalanguage$pandac$ASTNode* $tmp4956 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4957 = (panda$core$Int64) {27};
org$pandalanguage$pandac$parser$Token$nullable $tmp4958 = *(&local0);
org$pandalanguage$pandac$Position $tmp4959 = ((org$pandalanguage$pandac$parser$Token) $tmp4958.value).position;
panda$core$Int64 $tmp4960 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp4961 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp4960);
org$pandalanguage$pandac$FixedArray* $tmp4962 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp4963 = *(&local2);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4956, $tmp4957, $tmp4959, param1, param2, $tmp4961, &$s4964, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp4962, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp4963);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4956));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4956));
// unreffing REF($75:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp4965 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4965));
// unreffing b
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp4966 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
// unreffing params
*(&local1) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp4956;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$ASTNode* local0 = NULL;
// line 2402
org$pandalanguage$pandac$ASTNode* $tmp4967 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
org$pandalanguage$pandac$ASTNode* $tmp4968 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4968));
*(&local0) = $tmp4967;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
// unreffing REF($1:org.pandalanguage.pandac.ASTNode?)
// line 2403
org$pandalanguage$pandac$ASTNode* $tmp4969 = *(&local0);
panda$core$Bit $tmp4970 = panda$core$Bit$init$builtin_bit($tmp4969 == NULL);
bool $tmp4971 = $tmp4970.value;
if ($tmp4971) goto block1; else goto block2;
block1:;
// line 2404
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp4972 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4972));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2406
org$pandalanguage$pandac$ASTNode* $tmp4973 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp4974 = (panda$core$Int64) {17};
org$pandalanguage$pandac$ASTNode* $tmp4975 = *(&local0);
$fn4977 $tmp4976 = ($fn4977) $tmp4975->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp4978 = $tmp4976($tmp4975);
org$pandalanguage$pandac$ASTNode* $tmp4979 = *(&local0);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4973, $tmp4974, $tmp4978, param1, param2, $tmp4979);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4973));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4973));
// unreffing REF($28:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$ASTNode* $tmp4980 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4980));
// unreffing decl
*(&local0) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp4973;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1) {

org$pandalanguage$pandac$parser$Token$nullable local0;
panda$collections$Array* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2413
panda$core$Int64 $tmp4981 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp4982 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4981);
org$pandalanguage$pandac$parser$Token$nullable $tmp4983 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4982, &$s4984);
*(&local0) = $tmp4983;
// line 2414
org$pandalanguage$pandac$parser$Token$nullable $tmp4985 = *(&local0);
panda$core$Bit $tmp4986 = panda$core$Bit$init$builtin_bit(!$tmp4985.nonnull);
bool $tmp4987 = $tmp4986.value;
if ($tmp4987) goto block1; else goto block2;
block1:;
// line 2415
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2417
panda$collections$Array* $tmp4988 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp4988);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4988));
panda$collections$Array* $tmp4989 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4989));
*(&local1) = $tmp4988;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4988));
// unreffing REF($16:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2418
panda$core$Int64 $tmp4990 = (panda$core$Int64) {104};
org$pandalanguage$pandac$parser$Token$Kind $tmp4991 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4990);
org$pandalanguage$pandac$parser$Token$nullable $tmp4992 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp4991);
panda$core$Bit $tmp4993 = panda$core$Bit$init$builtin_bit($tmp4992.nonnull);
bool $tmp4994 = $tmp4993.value;
if ($tmp4994) goto block3; else goto block4;
block3:;
// line 2419
org$pandalanguage$pandac$parser$Token $tmp4995 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp4996 = $tmp4995.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp4997;
$tmp4997 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp4997->value = $tmp4996;
panda$core$Int64 $tmp4998 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp4999 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp4998);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5000;
$tmp5000 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5000->value = $tmp4999;
ITable* $tmp5001 = ((panda$core$Equatable*) $tmp4997)->$class->itable;
while ($tmp5001->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5001 = $tmp5001->next;
}
$fn5003 $tmp5002 = $tmp5001->methods[1];
panda$core$Bit $tmp5004 = $tmp5002(((panda$core$Equatable*) $tmp4997), ((panda$core$Equatable*) $tmp5000));
bool $tmp5005 = $tmp5004.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5000)));
// unreffing REF($44:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4997)));
// unreffing REF($40:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5005) goto block5; else goto block6;
block5:;
// line 2420
org$pandalanguage$pandac$ASTNode* $tmp5006 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5006));
org$pandalanguage$pandac$ASTNode* $tmp5007 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5007));
*(&local2) = $tmp5006;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5006));
// unreffing REF($56:org.pandalanguage.pandac.ASTNode?)
// line 2421
org$pandalanguage$pandac$ASTNode* $tmp5008 = *(&local2);
panda$core$Bit $tmp5009 = panda$core$Bit$init$builtin_bit($tmp5008 == NULL);
bool $tmp5010 = $tmp5009.value;
if ($tmp5010) goto block7; else goto block8;
block7:;
// line 2422
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5011 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5011));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5012 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5012));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
// line 2424
panda$collections$Array* $tmp5013 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5014 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5013, ((panda$core$Object*) $tmp5014));
// line 2425
goto block9;
block9:;
panda$core$Int64 $tmp5015 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5016 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5015);
org$pandalanguage$pandac$parser$Token$nullable $tmp5017 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5016);
panda$core$Bit $tmp5018 = panda$core$Bit$init$builtin_bit($tmp5017.nonnull);
bool $tmp5019 = $tmp5018.value;
if ($tmp5019) goto block10; else goto block11;
block10:;
// line 2426
org$pandalanguage$pandac$ASTNode* $tmp5020 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
org$pandalanguage$pandac$ASTNode* $tmp5021 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5021));
*(&local2) = $tmp5020;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
// unreffing REF($104:org.pandalanguage.pandac.ASTNode?)
// line 2427
org$pandalanguage$pandac$ASTNode* $tmp5022 = *(&local2);
panda$core$Bit $tmp5023 = panda$core$Bit$init$builtin_bit($tmp5022 == NULL);
bool $tmp5024 = $tmp5023.value;
if ($tmp5024) goto block12; else goto block13;
block12:;
// line 2428
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5025 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5025));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5026 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2430
panda$collections$Array* $tmp5027 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp5028 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5027, ((panda$core$Object*) $tmp5028));
goto block9;
block11:;
org$pandalanguage$pandac$ASTNode* $tmp5029 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5029));
// unreffing field
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
// line 2433
panda$core$Int64 $tmp5030 = (panda$core$Int64) {105};
org$pandalanguage$pandac$parser$Token$Kind $tmp5031 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5030);
org$pandalanguage$pandac$parser$Token$nullable $tmp5032 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5031, &$s5033);
panda$core$Bit $tmp5034 = panda$core$Bit$init$builtin_bit(!$tmp5032.nonnull);
bool $tmp5035 = $tmp5034.value;
if ($tmp5035) goto block14; else goto block15;
block14:;
// line 2434
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5036 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5036));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block15:;
goto block4;
block4:;
// line 2437
org$pandalanguage$pandac$ASTNode* $tmp5037 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5038 = (panda$core$Int64) {10};
org$pandalanguage$pandac$parser$Token$nullable $tmp5039 = *(&local0);
org$pandalanguage$pandac$Position $tmp5040 = ((org$pandalanguage$pandac$parser$Token) $tmp5039.value).position;
org$pandalanguage$pandac$parser$Token$nullable $tmp5041 = *(&local0);
panda$core$String* $tmp5042 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5041.value));
panda$collections$Array* $tmp5043 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5044 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5043);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5037, $tmp5038, $tmp5040, param1, $tmp5042, $tmp5044);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5037));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5044));
// unreffing REF($177:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5042));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5037));
// unreffing REF($167:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5045 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5045));
// unreffing fields
*(&local1) = ((panda$collections$Array*) NULL);
return $tmp5037;

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
// line 2447
panda$core$Int64 $tmp5046 = (panda$core$Int64) {20};
org$pandalanguage$pandac$parser$Token$Kind $tmp5047 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5046);
org$pandalanguage$pandac$parser$Token$nullable $tmp5048 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5047, &$s5049);
*(&local0) = $tmp5048;
// line 2448
org$pandalanguage$pandac$parser$Token$nullable $tmp5050 = *(&local0);
panda$core$Bit $tmp5051 = panda$core$Bit$init$builtin_bit(!$tmp5050.nonnull);
bool $tmp5052 = $tmp5051.value;
if ($tmp5052) goto block1; else goto block2;
block1:;
// line 2449
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2451
panda$core$Int64 $tmp5053 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5054 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5053);
org$pandalanguage$pandac$parser$Token$nullable $tmp5055 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5054, &$s5056);
*(&local1) = $tmp5055;
// line 2452
org$pandalanguage$pandac$parser$Token$nullable $tmp5057 = *(&local1);
panda$core$Bit $tmp5058 = panda$core$Bit$init$builtin_bit(!$tmp5057.nonnull);
bool $tmp5059 = $tmp5058.value;
if ($tmp5059) goto block3; else goto block4;
block3:;
// line 2453
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2455
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2456
org$pandalanguage$pandac$parser$Token $tmp5060 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5061 = $tmp5060.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5062;
$tmp5062 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5062->value = $tmp5061;
panda$core$Int64 $tmp5063 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5064 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5063);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5065;
$tmp5065 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5065->value = $tmp5064;
ITable* $tmp5066 = ((panda$core$Equatable*) $tmp5062)->$class->itable;
while ($tmp5066->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5066 = $tmp5066->next;
}
$fn5068 $tmp5067 = $tmp5066->methods[0];
panda$core$Bit $tmp5069 = $tmp5067(((panda$core$Equatable*) $tmp5062), ((panda$core$Equatable*) $tmp5065));
bool $tmp5070 = $tmp5069.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5065)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5062)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5070) goto block5; else goto block7;
block5:;
// line 2457
org$pandalanguage$pandac$FixedArray* $tmp5071 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5071));
org$pandalanguage$pandac$FixedArray* $tmp5072 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5072));
*(&local2) = $tmp5071;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5071));
// unreffing REF($51:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2458
org$pandalanguage$pandac$FixedArray* $tmp5073 = *(&local2);
panda$core$Bit $tmp5074 = panda$core$Bit$init$builtin_bit($tmp5073 == NULL);
bool $tmp5075 = $tmp5074.value;
if ($tmp5075) goto block8; else goto block9;
block8:;
// line 2459
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5076 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5076));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2463
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5077 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5077));
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block6;
block6:;
// line 2465
panda$core$Int64 $tmp5078 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5079 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5078);
org$pandalanguage$pandac$parser$Token$nullable $tmp5080 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5079, &$s5081);
panda$core$Bit $tmp5082 = panda$core$Bit$init$builtin_bit(!$tmp5080.nonnull);
bool $tmp5083 = $tmp5082.value;
if ($tmp5083) goto block10; else goto block11;
block10:;
// line 2466
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5084 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5084));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block11:;
// line 2468
panda$collections$Array* $tmp5085 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5085);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5085));
panda$collections$Array* $tmp5086 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5086));
*(&local3) = $tmp5085;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5085));
// unreffing REF($104:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2469
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5087 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5087));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2470
goto block12;
block12:;
// line 2471
org$pandalanguage$pandac$parser$Token $tmp5088 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local5) = $tmp5088;
// line 2472
org$pandalanguage$pandac$parser$Token $tmp5089 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp5090 = $tmp5089.kind;
panda$core$Int64 $tmp5091 = $tmp5090.$rawValue;
panda$core$Int64 $tmp5092 = (panda$core$Int64) {18};
panda$core$Bit $tmp5093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5092);
bool $tmp5094 = $tmp5093.value;
if ($tmp5094) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5095 = (panda$core$Int64) {19};
panda$core$Bit $tmp5096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5095);
bool $tmp5097 = $tmp5096.value;
if ($tmp5097) goto block15; else goto block17;
block17:;
panda$core$Int64 $tmp5098 = (panda$core$Int64) {20};
panda$core$Bit $tmp5099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5098);
bool $tmp5100 = $tmp5099.value;
if ($tmp5100) goto block15; else goto block18;
block18:;
panda$core$Int64 $tmp5101 = (panda$core$Int64) {22};
panda$core$Bit $tmp5102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5101);
bool $tmp5103 = $tmp5102.value;
if ($tmp5103) goto block15; else goto block19;
block19:;
panda$core$Int64 $tmp5104 = (panda$core$Int64) {21};
panda$core$Bit $tmp5105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5104);
bool $tmp5106 = $tmp5105.value;
if ($tmp5106) goto block15; else goto block20;
block20:;
panda$core$Int64 $tmp5107 = (panda$core$Int64) {14};
panda$core$Bit $tmp5108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5107);
bool $tmp5109 = $tmp5108.value;
if ($tmp5109) goto block15; else goto block21;
block21:;
panda$core$Int64 $tmp5110 = (panda$core$Int64) {24};
panda$core$Bit $tmp5111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5110);
bool $tmp5112 = $tmp5111.value;
if ($tmp5112) goto block15; else goto block22;
block22:;
panda$core$Int64 $tmp5113 = (panda$core$Int64) {25};
panda$core$Bit $tmp5114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5113);
bool $tmp5115 = $tmp5114.value;
if ($tmp5115) goto block15; else goto block23;
block23:;
panda$core$Int64 $tmp5116 = (panda$core$Int64) {26};
panda$core$Bit $tmp5117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5116);
bool $tmp5118 = $tmp5117.value;
if ($tmp5118) goto block15; else goto block24;
block24:;
panda$core$Int64 $tmp5119 = (panda$core$Int64) {27};
panda$core$Bit $tmp5120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5119);
bool $tmp5121 = $tmp5120.value;
if ($tmp5121) goto block15; else goto block25;
block15:;
// line 2476
goto block13;
block25:;
panda$core$Int64 $tmp5122 = (panda$core$Int64) {12};
panda$core$Bit $tmp5123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5122);
bool $tmp5124 = $tmp5123.value;
if ($tmp5124) goto block26; else goto block27;
block26:;
// line 2479
org$pandalanguage$pandac$ASTNode* $tmp5125 = *(&local4);
panda$core$Bit $tmp5126 = panda$core$Bit$init$builtin_bit($tmp5125 != NULL);
bool $tmp5127 = $tmp5126.value;
if ($tmp5127) goto block28; else goto block29;
block28:;
// line 2480
org$pandalanguage$pandac$parser$Token $tmp5128 = *(&local5);
org$pandalanguage$pandac$parser$Token $tmp5129 = *(&local5);
panda$core$String* $tmp5130 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5129);
panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5132, $tmp5130);
panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, &$s5134);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5128, $tmp5133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5133));
// unreffing REF($191:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5131));
// unreffing REF($190:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5130));
// unreffing REF($189:panda.core.String)
goto block29;
block29:;
// line 2482
org$pandalanguage$pandac$ASTNode* $tmp5135 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5135));
org$pandalanguage$pandac$ASTNode* $tmp5136 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5136));
*(&local4) = $tmp5135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5135));
// unreffing REF($204:org.pandalanguage.pandac.ASTNode?)
goto block14;
block27:;
panda$core$Int64 $tmp5137 = (panda$core$Int64) {49};
panda$core$Bit $tmp5138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5091, $tmp5137);
bool $tmp5139 = $tmp5138.value;
if ($tmp5139) goto block30; else goto block31;
block30:;
// line 2485
org$pandalanguage$pandac$ASTNode* $tmp5140 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5141 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5140);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5141));
org$pandalanguage$pandac$ASTNode* $tmp5142 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5142));
*(&local6) = $tmp5141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5141));
// unreffing REF($221:org.pandalanguage.pandac.ASTNode?)
// line 2486
org$pandalanguage$pandac$ASTNode* $tmp5143 = *(&local6);
panda$core$Bit $tmp5144 = panda$core$Bit$init$builtin_bit($tmp5143 == NULL);
bool $tmp5145 = $tmp5144.value;
if ($tmp5145) goto block32; else goto block33;
block32:;
// line 2487
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5146 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5146));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5147 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5147));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5148 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5148));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5149 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5149));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block33:;
// line 2489
panda$collections$Array* $tmp5150 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5151 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5150, ((panda$core$Object*) $tmp5151));
// line 2490
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5152 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5152));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5153 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5153));
// unreffing c
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block31:;
// line 2493
goto block13;
block14:;
goto block12;
block13:;
// line 2497
org$pandalanguage$pandac$FixedArray* $tmp5154 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5154);
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5154));
org$pandalanguage$pandac$FixedArray* $tmp5155 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5155));
*(&local7) = $tmp5154;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5154));
// unreffing REF($286:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
// line 2498
goto block34;
block34:;
// line 2499
org$pandalanguage$pandac$parser$Token $tmp5156 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local8) = $tmp5156;
// line 2500
org$pandalanguage$pandac$parser$Token $tmp5157 = *(&local8);
org$pandalanguage$pandac$parser$Token$Kind $tmp5158 = $tmp5157.kind;
panda$core$Int64 $tmp5159 = $tmp5158.$rawValue;
panda$core$Int64 $tmp5160 = (panda$core$Int64) {14};
panda$core$Bit $tmp5161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5160);
bool $tmp5162 = $tmp5161.value;
if ($tmp5162) goto block37; else goto block38;
block37:;
// line 2502
org$pandalanguage$pandac$FixedArray* $tmp5163 = *(&local7);
ITable* $tmp5164 = ((panda$collections$CollectionView*) $tmp5163)->$class->itable;
while ($tmp5164->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5164 = $tmp5164->next;
}
$fn5166 $tmp5165 = $tmp5164->methods[0];
panda$core$Int64 $tmp5167 = $tmp5165(((panda$collections$CollectionView*) $tmp5163));
panda$core$Int64 $tmp5168 = (panda$core$Int64) {0};
int64_t $tmp5169 = $tmp5167.value;
int64_t $tmp5170 = $tmp5168.value;
bool $tmp5171 = $tmp5169 > $tmp5170;
panda$core$Bit $tmp5172 = (panda$core$Bit) {$tmp5171};
bool $tmp5173 = $tmp5172.value;
if ($tmp5173) goto block39; else goto block40;
block39:;
// line 2503
org$pandalanguage$pandac$parser$Token $tmp5174 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5175 = *(&local8);
panda$core$String* $tmp5176 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5175);
panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5178, $tmp5176);
panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, &$s5180);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5174, $tmp5179);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5179));
// unreffing REF($329:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5177));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5176));
// unreffing REF($327:panda.core.String)
// line 2504
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5181 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5182 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5182));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5183 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5183));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5184 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5184));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block40:;
// line 2506
org$pandalanguage$pandac$FixedArray* $tmp5185 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
org$pandalanguage$pandac$FixedArray* $tmp5186 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5186));
*(&local7) = $tmp5185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
// unreffing REF($365:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
goto block36;
block38:;
panda$core$Int64 $tmp5187 = (panda$core$Int64) {12};
panda$core$Bit $tmp5188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5187);
bool $tmp5189 = $tmp5188.value;
if ($tmp5189) goto block41; else goto block42;
block41:;
// line 2509
org$pandalanguage$pandac$ASTNode* $tmp5190 = *(&local4);
panda$core$Bit $tmp5191 = panda$core$Bit$init$builtin_bit($tmp5190 != NULL);
bool $tmp5192 = $tmp5191.value;
if ($tmp5192) goto block45; else goto block46;
block45:;
*(&local9) = $tmp5191;
goto block47;
block46:;
org$pandalanguage$pandac$FixedArray* $tmp5193 = *(&local7);
ITable* $tmp5194 = ((panda$collections$CollectionView*) $tmp5193)->$class->itable;
while ($tmp5194->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp5194 = $tmp5194->next;
}
$fn5196 $tmp5195 = $tmp5194->methods[0];
panda$core$Int64 $tmp5197 = $tmp5195(((panda$collections$CollectionView*) $tmp5193));
panda$core$Int64 $tmp5198 = (panda$core$Int64) {0};
int64_t $tmp5199 = $tmp5197.value;
int64_t $tmp5200 = $tmp5198.value;
bool $tmp5201 = $tmp5199 > $tmp5200;
panda$core$Bit $tmp5202 = (panda$core$Bit) {$tmp5201};
*(&local9) = $tmp5202;
goto block47;
block47:;
panda$core$Bit $tmp5203 = *(&local9);
bool $tmp5204 = $tmp5203.value;
if ($tmp5204) goto block43; else goto block44;
block43:;
// line 2510
org$pandalanguage$pandac$parser$Token $tmp5205 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5206 = *(&local8);
panda$core$String* $tmp5207 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5206);
panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5209, $tmp5207);
panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, &$s5211);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5205, $tmp5210);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5210));
// unreffing REF($407:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5208));
// unreffing REF($406:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5207));
// unreffing REF($405:panda.core.String)
// line 2511
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5212 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5212));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5213 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5213));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5214 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5214));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5215 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5215));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block44:;
// line 2513
org$pandalanguage$pandac$ASTNode* $tmp5216 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5216));
org$pandalanguage$pandac$ASTNode* $tmp5217 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5217));
*(&local4) = $tmp5216;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5216));
// unreffing REF($443:org.pandalanguage.pandac.ASTNode?)
goto block36;
block42:;
panda$core$Int64 $tmp5218 = (panda$core$Int64) {18};
panda$core$Bit $tmp5219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5218);
bool $tmp5220 = $tmp5219.value;
if ($tmp5220) goto block48; else goto block49;
block48:;
// line 2516
org$pandalanguage$pandac$ASTNode* $tmp5221 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5222 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5223 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5221, $tmp5222);
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5223));
org$pandalanguage$pandac$ASTNode* $tmp5224 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5224));
*(&local10) = $tmp5223;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5223));
// unreffing REF($461:org.pandalanguage.pandac.ASTNode?)
// line 2517
org$pandalanguage$pandac$ASTNode* $tmp5225 = *(&local10);
panda$core$Bit $tmp5226 = panda$core$Bit$init$builtin_bit($tmp5225 == NULL);
bool $tmp5227 = $tmp5226.value;
if ($tmp5227) goto block50; else goto block51;
block50:;
// line 2518
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5228 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5228));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5229 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5229));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5230 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5230));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5231 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5231));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5232 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5232));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block51:;
// line 2520
panda$collections$Array* $tmp5233 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5234 = *(&local10);
panda$collections$Array$add$panda$collections$Array$T($tmp5233, ((panda$core$Object*) $tmp5234));
// line 2521
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5235 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5235));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2522
org$pandalanguage$pandac$FixedArray* $tmp5236 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5236);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5236));
org$pandalanguage$pandac$FixedArray* $tmp5237 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5237));
*(&local7) = $tmp5236;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5236));
// unreffing REF($522:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5238 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5238));
// unreffing decl
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block49:;
panda$core$Int64 $tmp5239 = (panda$core$Int64) {19};
panda$core$Bit $tmp5240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5239);
bool $tmp5241 = $tmp5240.value;
if ($tmp5241) goto block52; else goto block53;
block52:;
// line 2525
org$pandalanguage$pandac$ASTNode* $tmp5242 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5243 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5244 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5242, $tmp5243);
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5244));
org$pandalanguage$pandac$ASTNode* $tmp5245 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5245));
*(&local11) = $tmp5244;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5244));
// unreffing REF($547:org.pandalanguage.pandac.ASTNode?)
// line 2526
org$pandalanguage$pandac$ASTNode* $tmp5246 = *(&local11);
panda$core$Bit $tmp5247 = panda$core$Bit$init$builtin_bit($tmp5246 == NULL);
bool $tmp5248 = $tmp5247.value;
if ($tmp5248) goto block54; else goto block55;
block54:;
// line 2527
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5249 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5249));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5250 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5250));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5251 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5251));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5252 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5252));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5253 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5253));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block55:;
// line 2529
panda$collections$Array* $tmp5254 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5255 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp5254, ((panda$core$Object*) $tmp5255));
// line 2530
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5256 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5256));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2531
org$pandalanguage$pandac$FixedArray* $tmp5257 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5257);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5257));
org$pandalanguage$pandac$FixedArray* $tmp5258 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5258));
*(&local7) = $tmp5257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5257));
// unreffing REF($608:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5259 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
// unreffing decl
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block53:;
panda$core$Int64 $tmp5260 = (panda$core$Int64) {20};
panda$core$Bit $tmp5261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5260);
bool $tmp5262 = $tmp5261.value;
if ($tmp5262) goto block56; else goto block57;
block56:;
// line 2534
org$pandalanguage$pandac$ASTNode* $tmp5263 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5264 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5265 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5263, $tmp5264);
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5265));
org$pandalanguage$pandac$ASTNode* $tmp5266 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5266));
*(&local12) = $tmp5265;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5265));
// unreffing REF($633:org.pandalanguage.pandac.ASTNode?)
// line 2535
org$pandalanguage$pandac$ASTNode* $tmp5267 = *(&local12);
panda$core$Bit $tmp5268 = panda$core$Bit$init$builtin_bit($tmp5267 == NULL);
bool $tmp5269 = $tmp5268.value;
if ($tmp5269) goto block58; else goto block59;
block58:;
// line 2536
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5270 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5270));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5271 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5271));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5272 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5272));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5273 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5273));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5274 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5274));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block59:;
// line 2538
panda$collections$Array* $tmp5275 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5276 = *(&local12);
panda$collections$Array$add$panda$collections$Array$T($tmp5275, ((panda$core$Object*) $tmp5276));
// line 2539
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5277 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5277));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2540
org$pandalanguage$pandac$FixedArray* $tmp5278 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5278);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5278));
org$pandalanguage$pandac$FixedArray* $tmp5279 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5279));
*(&local7) = $tmp5278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5278));
// unreffing REF($694:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5280 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5280));
// unreffing decl
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block57:;
panda$core$Int64 $tmp5281 = (panda$core$Int64) {22};
panda$core$Bit $tmp5282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5281);
bool $tmp5283 = $tmp5282.value;
if ($tmp5283) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp5284 = (panda$core$Int64) {21};
panda$core$Bit $tmp5285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5284);
bool $tmp5286 = $tmp5285.value;
if ($tmp5286) goto block60; else goto block62;
block60:;
// line 2543
org$pandalanguage$pandac$ASTNode* $tmp5287 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5288 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5289 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5287, $tmp5288);
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
org$pandalanguage$pandac$ASTNode* $tmp5290 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5290));
*(&local13) = $tmp5289;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5289));
// unreffing REF($723:org.pandalanguage.pandac.ASTNode?)
// line 2544
org$pandalanguage$pandac$ASTNode* $tmp5291 = *(&local13);
panda$core$Bit $tmp5292 = panda$core$Bit$init$builtin_bit($tmp5291 == NULL);
bool $tmp5293 = $tmp5292.value;
if ($tmp5293) goto block63; else goto block64;
block63:;
// line 2545
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5294 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5294));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5295 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5295));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5296 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5296));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5297 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5297));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5298 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5298));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block64:;
// line 2547
panda$collections$Array* $tmp5299 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5300 = *(&local13);
panda$collections$Array$add$panda$collections$Array$T($tmp5299, ((panda$core$Object*) $tmp5300));
// line 2548
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5301 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5301));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2549
org$pandalanguage$pandac$FixedArray* $tmp5302 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5302);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5302));
org$pandalanguage$pandac$FixedArray* $tmp5303 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5303));
*(&local7) = $tmp5302;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5302));
// unreffing REF($784:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5304 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5304));
// unreffing decl
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block62:;
panda$core$Int64 $tmp5305 = (panda$core$Int64) {24};
panda$core$Bit $tmp5306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5305);
bool $tmp5307 = $tmp5306.value;
if ($tmp5307) goto block65; else goto block66;
block66:;
panda$core$Int64 $tmp5308 = (panda$core$Int64) {25};
panda$core$Bit $tmp5309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5308);
bool $tmp5310 = $tmp5309.value;
if ($tmp5310) goto block65; else goto block67;
block67:;
panda$core$Int64 $tmp5311 = (panda$core$Int64) {26};
panda$core$Bit $tmp5312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5311);
bool $tmp5313 = $tmp5312.value;
if ($tmp5313) goto block65; else goto block68;
block68:;
panda$core$Int64 $tmp5314 = (panda$core$Int64) {27};
panda$core$Bit $tmp5315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5314);
bool $tmp5316 = $tmp5315.value;
if ($tmp5316) goto block65; else goto block69;
block65:;
// line 2552
org$pandalanguage$pandac$ASTNode* $tmp5317 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5318 = *(&local7);
org$pandalanguage$pandac$ASTNode* $tmp5319 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5317, $tmp5318);
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5319));
org$pandalanguage$pandac$ASTNode* $tmp5320 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5320));
*(&local14) = $tmp5319;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5319));
// unreffing REF($821:org.pandalanguage.pandac.ASTNode?)
// line 2553
org$pandalanguage$pandac$ASTNode* $tmp5321 = *(&local14);
panda$core$Bit $tmp5322 = panda$core$Bit$init$builtin_bit($tmp5321 == NULL);
bool $tmp5323 = $tmp5322.value;
if ($tmp5323) goto block70; else goto block71;
block70:;
// line 2554
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5324 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5324));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5325 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5325));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5326 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5326));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5327 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5327));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5328 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5328));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block71:;
// line 2556
panda$collections$Array* $tmp5329 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5330 = *(&local14);
panda$collections$Array$add$panda$collections$Array$T($tmp5329, ((panda$core$Object*) $tmp5330));
// line 2557
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5331 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5331));
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2558
org$pandalanguage$pandac$FixedArray* $tmp5332 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5332);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
org$pandalanguage$pandac$FixedArray* $tmp5333 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5333));
*(&local7) = $tmp5332;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
// unreffing REF($882:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
org$pandalanguage$pandac$ASTNode* $tmp5334 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5334));
// unreffing decl
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block36;
block69:;
panda$core$Int64 $tmp5335 = (panda$core$Int64) {101};
panda$core$Bit $tmp5336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5159, $tmp5335);
bool $tmp5337 = $tmp5336.value;
if ($tmp5337) goto block72; else goto block73;
block72:;
// line 2561
panda$core$Int64 $tmp5338 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5339 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5338);
org$pandalanguage$pandac$parser$Token$nullable $tmp5340 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5339, &$s5341);
// line 2562
goto block35;
block73:;
// line 2565
org$pandalanguage$pandac$parser$Token $tmp5342 = *(&local8);
org$pandalanguage$pandac$parser$Token $tmp5343 = *(&local8);
panda$core$String* $tmp5344 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, $tmp5343);
panda$core$String* $tmp5345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5346, $tmp5344);
panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5345, &$s5348);
org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(param0, $tmp5342, $tmp5347);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5347));
// unreffing REF($915:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5345));
// unreffing REF($914:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5344));
// unreffing REF($913:panda.core.String)
// line 2566
org$pandalanguage$pandac$parser$Token $tmp5349 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(param0);
// line 2567
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5350 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5350));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5351 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5351));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5352 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5352));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5353 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5353));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block36:;
goto block34;
block35:;
// line 2571
org$pandalanguage$pandac$ASTNode* $tmp5354 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5355 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp5356 = *(&local0);
org$pandalanguage$pandac$Position $tmp5357 = ((org$pandalanguage$pandac$parser$Token) $tmp5356.value).position;
panda$core$Int64 $tmp5358 = (panda$core$Int64) {2};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5359 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5358);
org$pandalanguage$pandac$parser$Token$nullable $tmp5360 = *(&local1);
panda$core$String* $tmp5361 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5360.value));
org$pandalanguage$pandac$FixedArray* $tmp5362 = *(&local2);
panda$collections$Array* $tmp5363 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp5364 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5363);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5354, $tmp5355, $tmp5357, param1, param2, $tmp5359, $tmp5361, $tmp5362, ((org$pandalanguage$pandac$FixedArray*) NULL), $tmp5364);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5364));
// unreffing REF($967:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5361));
// unreffing REF($963:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5354));
// unreffing REF($954:org.pandalanguage.pandac.ASTNode)
org$pandalanguage$pandac$FixedArray* $tmp5365 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5365));
// unreffing a
*(&local7) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5366 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5366));
// unreffing dc
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5367 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5367));
// unreffing members
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5368 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5368));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5354;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

org$pandalanguage$pandac$parser$Token local0;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
// line 2581
org$pandalanguage$pandac$parser$Token $tmp5369 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
*(&local0) = $tmp5369;
// line 2582
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
// line 2583
org$pandalanguage$pandac$parser$Token $tmp5370 = *(&local0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5371 = $tmp5370.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5372;
$tmp5372 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5372->value = $tmp5371;
panda$core$Int64 $tmp5373 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$Kind $tmp5374 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5373);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5375;
$tmp5375 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5375->value = $tmp5374;
ITable* $tmp5376 = ((panda$core$Equatable*) $tmp5372)->$class->itable;
while ($tmp5376->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5376 = $tmp5376->next;
}
$fn5378 $tmp5377 = $tmp5376->methods[0];
panda$core$Bit $tmp5379 = $tmp5377(((panda$core$Equatable*) $tmp5372), ((panda$core$Equatable*) $tmp5375));
bool $tmp5380 = $tmp5379.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5375)));
// unreffing REF($12:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5372)));
// unreffing REF($8:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5380) goto block1; else goto block3;
block1:;
// line 2584
org$pandalanguage$pandac$ASTNode* $tmp5381 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5381));
org$pandalanguage$pandac$ASTNode* $tmp5382 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5382));
*(&local1) = $tmp5381;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5381));
// unreffing REF($24:org.pandalanguage.pandac.ASTNode?)
// line 2585
org$pandalanguage$pandac$ASTNode* $tmp5383 = *(&local1);
panda$core$Bit $tmp5384 = panda$core$Bit$init$builtin_bit($tmp5383 == NULL);
bool $tmp5385 = $tmp5384.value;
if ($tmp5385) goto block4; else goto block5;
block4:;
// line 2586
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5386 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5386));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block5:;
goto block2;
block3:;
// line 1
// line 2590
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5387 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5387));
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2592
org$pandalanguage$pandac$FixedArray* $tmp5388 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(param0);
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5388));
org$pandalanguage$pandac$FixedArray* $tmp5389 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5389));
*(&local2) = $tmp5388;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5388));
// unreffing REF($60:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
// line 2593
org$pandalanguage$pandac$FixedArray* $tmp5390 = *(&local2);
panda$core$Bit $tmp5391 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5392 = $tmp5391.value;
if ($tmp5392) goto block6; else goto block7;
block6:;
// line 2594
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5393 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5393));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5394 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5394));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block7:;
// line 2596
org$pandalanguage$pandac$parser$Token $tmp5395 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5396 = $tmp5395.kind;
panda$core$Int64 $tmp5397 = $tmp5396.$rawValue;
panda$core$Int64 $tmp5398 = (panda$core$Int64) {18};
panda$core$Bit $tmp5399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5398);
bool $tmp5400 = $tmp5399.value;
if ($tmp5400) goto block9; else goto block10;
block9:;
// line 2598
org$pandalanguage$pandac$ASTNode* $tmp5401 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5402 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5403 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5401, $tmp5402);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5403));
// unreffing REF($101:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5404 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5404));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5405 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5405));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5403;
block10:;
panda$core$Int64 $tmp5406 = (panda$core$Int64) {19};
panda$core$Bit $tmp5407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5406);
bool $tmp5408 = $tmp5407.value;
if ($tmp5408) goto block11; else goto block12;
block11:;
// line 2601
org$pandalanguage$pandac$ASTNode* $tmp5409 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5410 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5411 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5409, $tmp5410);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5411));
// unreffing REF($125:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5412 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5412));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5413 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5413));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5411;
block12:;
panda$core$Int64 $tmp5414 = (panda$core$Int64) {20};
panda$core$Bit $tmp5415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5414);
bool $tmp5416 = $tmp5415.value;
if ($tmp5416) goto block13; else goto block14;
block13:;
// line 2604
org$pandalanguage$pandac$ASTNode* $tmp5417 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5418 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5419 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5417, $tmp5418);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5419));
// unreffing REF($149:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5420 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5420));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5421 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5421));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5419;
block14:;
panda$core$Int64 $tmp5422 = (panda$core$Int64) {22};
panda$core$Bit $tmp5423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5422);
bool $tmp5424 = $tmp5423.value;
if ($tmp5424) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp5425 = (panda$core$Int64) {21};
panda$core$Bit $tmp5426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5425);
bool $tmp5427 = $tmp5426.value;
if ($tmp5427) goto block15; else goto block17;
block15:;
// line 2607
org$pandalanguage$pandac$ASTNode* $tmp5428 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5429 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5430 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5428, $tmp5429);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5430));
// unreffing REF($177:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5431 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5431));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5432 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5432));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5430;
block17:;
panda$core$Int64 $tmp5433 = (panda$core$Int64) {23};
panda$core$Bit $tmp5434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5433);
bool $tmp5435 = $tmp5434.value;
if ($tmp5435) goto block18; else goto block19;
block18:;
// line 2610
org$pandalanguage$pandac$ASTNode* $tmp5436 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5437 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5438 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5436, $tmp5437);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5438));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5438));
// unreffing REF($201:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5439 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5439));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5440 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5438;
block19:;
panda$core$Int64 $tmp5441 = (panda$core$Int64) {24};
panda$core$Bit $tmp5442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5441);
bool $tmp5443 = $tmp5442.value;
if ($tmp5443) goto block20; else goto block21;
block21:;
panda$core$Int64 $tmp5444 = (panda$core$Int64) {25};
panda$core$Bit $tmp5445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5444);
bool $tmp5446 = $tmp5445.value;
if ($tmp5446) goto block20; else goto block22;
block22:;
panda$core$Int64 $tmp5447 = (panda$core$Int64) {26};
panda$core$Bit $tmp5448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5447);
bool $tmp5449 = $tmp5448.value;
if ($tmp5449) goto block20; else goto block23;
block23:;
panda$core$Int64 $tmp5450 = (panda$core$Int64) {27};
panda$core$Bit $tmp5451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397, $tmp5450);
bool $tmp5452 = $tmp5451.value;
if ($tmp5452) goto block20; else goto block24;
block20:;
// line 2613
org$pandalanguage$pandac$ASTNode* $tmp5453 = *(&local1);
org$pandalanguage$pandac$FixedArray* $tmp5454 = *(&local2);
org$pandalanguage$pandac$ASTNode* $tmp5455 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(param0, $tmp5453, $tmp5454);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5455));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5455));
// unreffing REF($237:org.pandalanguage.pandac.ASTNode?)
org$pandalanguage$pandac$FixedArray* $tmp5456 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5456));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5457 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5457));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp5455;
block24:;
// line 2617
panda$core$Int64 $tmp5458 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5459 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5458);
org$pandalanguage$pandac$parser$Token$nullable $tmp5460 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5459, &$s5461);
// line 2618
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5462 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5462));
// unreffing a
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp5463 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
// unreffing dc
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block8:;
panda$core$Bit $tmp5464 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5465 = $tmp5464.value;
if ($tmp5465) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp5466 = (panda$core$Int64) {2580};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5467, $tmp5466, &$s5468);
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
// line 2627
panda$core$Int64 $tmp5469 = (panda$core$Int64) {18};
org$pandalanguage$pandac$parser$Token$Kind $tmp5470 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5469);
org$pandalanguage$pandac$parser$Token$nullable $tmp5471 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5470, &$s5472);
*(&local0) = $tmp5471;
// line 2628
org$pandalanguage$pandac$parser$Token$nullable $tmp5473 = *(&local0);
panda$core$Bit $tmp5474 = panda$core$Bit$init$builtin_bit(!$tmp5473.nonnull);
bool $tmp5475 = $tmp5474.value;
if ($tmp5475) goto block1; else goto block2;
block1:;
// line 2629
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2631
panda$core$Int64 $tmp5476 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5477 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5476);
org$pandalanguage$pandac$parser$Token$nullable $tmp5478 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5477, &$s5479);
*(&local1) = $tmp5478;
// line 2632
org$pandalanguage$pandac$parser$Token$nullable $tmp5480 = *(&local1);
panda$core$Bit $tmp5481 = panda$core$Bit$init$builtin_bit(!$tmp5480.nonnull);
bool $tmp5482 = $tmp5481.value;
if ($tmp5482) goto block3; else goto block4;
block3:;
// line 2633
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2635
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2636
org$pandalanguage$pandac$parser$Token $tmp5483 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5484 = $tmp5483.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5485;
$tmp5485 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5485->value = $tmp5484;
panda$core$Int64 $tmp5486 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5487 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5486);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5488;
$tmp5488 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5488->value = $tmp5487;
ITable* $tmp5489 = ((panda$core$Equatable*) $tmp5485)->$class->itable;
while ($tmp5489->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5489 = $tmp5489->next;
}
$fn5491 $tmp5490 = $tmp5489->methods[0];
panda$core$Bit $tmp5492 = $tmp5490(((panda$core$Equatable*) $tmp5485), ((panda$core$Equatable*) $tmp5488));
bool $tmp5493 = $tmp5492.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5488)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5485)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5493) goto block5; else goto block7;
block5:;
// line 2637
org$pandalanguage$pandac$FixedArray* $tmp5494 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5494));
org$pandalanguage$pandac$FixedArray* $tmp5495 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5495));
*(&local2) = $tmp5494;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5494));
// unreffing REF($51:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2638
org$pandalanguage$pandac$FixedArray* $tmp5496 = *(&local2);
panda$core$Bit $tmp5497 = panda$core$Bit$init$builtin_bit($tmp5496 == NULL);
bool $tmp5498 = $tmp5497.value;
if ($tmp5498) goto block8; else goto block9;
block8:;
// line 2639
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5499 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5499));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2643
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5500 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5500));
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block6;
block6:;
// line 2645
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2646
org$pandalanguage$pandac$parser$Token $tmp5501 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5502 = $tmp5501.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5503;
$tmp5503 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5503->value = $tmp5502;
panda$core$Int64 $tmp5504 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5505 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5504);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5506;
$tmp5506 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5506->value = $tmp5505;
ITable* $tmp5507 = ((panda$core$Equatable*) $tmp5503)->$class->itable;
while ($tmp5507->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5507 = $tmp5507->next;
}
$fn5509 $tmp5508 = $tmp5507->methods[0];
panda$core$Bit $tmp5510 = $tmp5508(((panda$core$Equatable*) $tmp5503), ((panda$core$Equatable*) $tmp5506));
bool $tmp5511 = $tmp5510.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5506)));
// unreffing REF($95:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5503)));
// unreffing REF($91:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5511) goto block10; else goto block12;
block10:;
// line 2647
org$pandalanguage$pandac$FixedArray* $tmp5512 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5512));
org$pandalanguage$pandac$FixedArray* $tmp5513 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5513));
*(&local3) = $tmp5512;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5512));
// unreffing REF($107:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2648
org$pandalanguage$pandac$FixedArray* $tmp5514 = *(&local3);
panda$core$Bit $tmp5515 = panda$core$Bit$init$builtin_bit($tmp5514 == NULL);
bool $tmp5516 = $tmp5515.value;
if ($tmp5516) goto block13; else goto block14;
block13:;
// line 2649
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5517 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5517));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5518 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5518));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block14:;
goto block11;
block12:;
// line 1
// line 2653
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$FixedArray*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5519 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5519));
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block11;
block11:;
// line 2655
panda$core$Int64 $tmp5520 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5521 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5520);
org$pandalanguage$pandac$parser$Token$nullable $tmp5522 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5521, &$s5523);
panda$core$Bit $tmp5524 = panda$core$Bit$init$builtin_bit(!$tmp5522.nonnull);
bool $tmp5525 = $tmp5524.value;
if ($tmp5525) goto block15; else goto block16;
block15:;
// line 2656
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5526 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5526));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5527 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5527));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block16:;
// line 2658
panda$collections$Array* $tmp5528 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5528);
*(&local4) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5528));
panda$collections$Array* $tmp5529 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5529));
*(&local4) = $tmp5528;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5528));
// unreffing REF($170:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2659
goto block17;
block17:;
panda$core$Int64 $tmp5530 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5531 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5530);
org$pandalanguage$pandac$parser$Token$nullable $tmp5532 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5531);
panda$core$Bit $tmp5533 = panda$core$Bit$init$builtin_bit(!$tmp5532.nonnull);
bool $tmp5534 = $tmp5533.value;
if ($tmp5534) goto block18; else goto block19;
block18:;
// line 2660
org$pandalanguage$pandac$ASTNode* $tmp5535 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5535));
org$pandalanguage$pandac$ASTNode* $tmp5536 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5536));
*(&local5) = $tmp5535;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5535));
// unreffing REF($193:org.pandalanguage.pandac.ASTNode?)
// line 2661
org$pandalanguage$pandac$ASTNode* $tmp5537 = *(&local5);
panda$core$Bit $tmp5538 = panda$core$Bit$init$builtin_bit($tmp5537 == NULL);
bool $tmp5539 = $tmp5538.value;
if ($tmp5539) goto block20; else goto block21;
block20:;
// line 2662
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5540 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5540));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5541 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5541));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5542 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5542));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5543 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5543));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block21:;
// line 2664
panda$collections$Array* $tmp5544 = *(&local4);
org$pandalanguage$pandac$ASTNode* $tmp5545 = *(&local5);
panda$collections$Array$add$panda$collections$Array$T($tmp5544, ((panda$core$Object*) $tmp5545));
org$pandalanguage$pandac$ASTNode* $tmp5546 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5546));
// unreffing member
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block17;
block19:;
// line 2666
org$pandalanguage$pandac$ASTNode* $tmp5547 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5548 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp5549 = *(&local0);
org$pandalanguage$pandac$Position $tmp5550 = ((org$pandalanguage$pandac$parser$Token) $tmp5549.value).position;
panda$core$Int64 $tmp5551 = (panda$core$Int64) {0};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5552 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5551);
org$pandalanguage$pandac$parser$Token$nullable $tmp5553 = *(&local1);
panda$core$String* $tmp5554 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5553.value));
org$pandalanguage$pandac$FixedArray* $tmp5555 = *(&local2);
org$pandalanguage$pandac$FixedArray* $tmp5556 = *(&local3);
panda$collections$Array* $tmp5557 = *(&local4);
org$pandalanguage$pandac$FixedArray* $tmp5558 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5557);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5547, $tmp5548, $tmp5550, param1, param2, $tmp5552, $tmp5554, $tmp5555, $tmp5556, $tmp5558);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5547));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5558));
// unreffing REF($262:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5554));
// unreffing REF($257:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5547));
// unreffing REF($248:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5559 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5559));
// unreffing members
*(&local4) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5560 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5560));
// unreffing stypes
*(&local3) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5561 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5561));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5547;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0, org$pandalanguage$pandac$ASTNode* param1, org$pandalanguage$pandac$FixedArray* param2) {

org$pandalanguage$pandac$parser$Token$nullable local0;
org$pandalanguage$pandac$parser$Token$nullable local1;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
panda$collections$Array* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
// line 2675
panda$core$Int64 $tmp5562 = (panda$core$Int64) {19};
org$pandalanguage$pandac$parser$Token$Kind $tmp5563 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5562);
org$pandalanguage$pandac$parser$Token$nullable $tmp5564 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5563, &$s5565);
*(&local0) = $tmp5564;
// line 2676
org$pandalanguage$pandac$parser$Token$nullable $tmp5566 = *(&local0);
panda$core$Bit $tmp5567 = panda$core$Bit$init$builtin_bit(!$tmp5566.nonnull);
bool $tmp5568 = $tmp5567.value;
if ($tmp5568) goto block1; else goto block2;
block1:;
// line 2677
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 2679
panda$core$Int64 $tmp5569 = (panda$core$Int64) {49};
org$pandalanguage$pandac$parser$Token$Kind $tmp5570 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5569);
org$pandalanguage$pandac$parser$Token$nullable $tmp5571 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5570, &$s5572);
*(&local1) = $tmp5571;
// line 2680
org$pandalanguage$pandac$parser$Token$nullable $tmp5573 = *(&local1);
panda$core$Bit $tmp5574 = panda$core$Bit$init$builtin_bit(!$tmp5573.nonnull);
bool $tmp5575 = $tmp5574.value;
if ($tmp5575) goto block3; else goto block4;
block3:;
// line 2681
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block4:;
// line 2683
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
// line 2684
org$pandalanguage$pandac$parser$Token $tmp5576 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5577 = $tmp5576.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5578;
$tmp5578 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5578->value = $tmp5577;
panda$core$Int64 $tmp5579 = (panda$core$Int64) {63};
org$pandalanguage$pandac$parser$Token$Kind $tmp5580 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5579);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5581;
$tmp5581 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5581->value = $tmp5580;
ITable* $tmp5582 = ((panda$core$Equatable*) $tmp5578)->$class->itable;
while ($tmp5582->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5582 = $tmp5582->next;
}
$fn5584 $tmp5583 = $tmp5582->methods[0];
panda$core$Bit $tmp5585 = $tmp5583(((panda$core$Equatable*) $tmp5578), ((panda$core$Equatable*) $tmp5581));
bool $tmp5586 = $tmp5585.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5581)));
// unreffing REF($39:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5578)));
// unreffing REF($35:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5586) goto block5; else goto block7;
block5:;
// line 2685
org$pandalanguage$pandac$FixedArray* $tmp5587 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5587));
org$pandalanguage$pandac$FixedArray* $tmp5588 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5588));
*(&local2) = $tmp5587;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5587));
// unreffing REF($51:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>?)
// line 2686
org$pandalanguage$pandac$FixedArray* $tmp5589 = *(&local2);
panda$core$Bit $tmp5590 = panda$core$Bit$init$builtin_bit($tmp5589 == NULL);
bool $tmp5591 = $tmp5590.value;
if ($tmp5591) goto block8; else goto block9;
block8:;
// line 2687
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$FixedArray* $tmp5592 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5592));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
goto block6;
block7:;
// line 1
// line 2691
org$pandalanguage$pandac$FixedArray* $tmp5593 = (org$pandalanguage$pandac$FixedArray*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$FixedArray$class);
org$pandalanguage$pandac$FixedArray$init($tmp5593);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5593));
org$pandalanguage$pandac$FixedArray* $tmp5594 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5594));
*(&local2) = $tmp5593;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5593));
// unreffing REF($79:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.ASTNode>)
goto block6;
block6:;
// line 2693
panda$collections$Array* $tmp5595 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5595);
*(&local3) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5595));
panda$collections$Array* $tmp5596 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5596));
*(&local3) = $tmp5595;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5595));
// unreffing REF($94:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2694
panda$core$Int64 $tmp5597 = (panda$core$Int64) {96};
org$pandalanguage$pandac$parser$Token$Kind $tmp5598 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5597);
org$pandalanguage$pandac$parser$Token$nullable $tmp5599 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5598);
panda$core$Bit $tmp5600 = panda$core$Bit$init$builtin_bit($tmp5599.nonnull);
bool $tmp5601 = $tmp5600.value;
if ($tmp5601) goto block10; else goto block11;
block10:;
// line 2695
org$pandalanguage$pandac$ASTNode* $tmp5602 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
org$pandalanguage$pandac$ASTNode* $tmp5603 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5603));
*(&local4) = $tmp5602;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5602));
// unreffing REF($116:org.pandalanguage.pandac.ASTNode?)
// line 2696
org$pandalanguage$pandac$ASTNode* $tmp5604 = *(&local4);
panda$core$Bit $tmp5605 = panda$core$Bit$init$builtin_bit($tmp5604 == NULL);
bool $tmp5606 = $tmp5605.value;
if ($tmp5606) goto block12; else goto block13;
block12:;
// line 2697
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5607 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5607));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5608 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5608));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5609 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5609));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block13:;
// line 2699
panda$collections$Array* $tmp5610 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5611 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5610, ((panda$core$Object*) $tmp5611));
// line 2700
goto block14;
block14:;
panda$core$Int64 $tmp5612 = (panda$core$Int64) {106};
org$pandalanguage$pandac$parser$Token$Kind $tmp5613 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5612);
org$pandalanguage$pandac$parser$Token$nullable $tmp5614 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5613);
panda$core$Bit $tmp5615 = panda$core$Bit$init$builtin_bit($tmp5614.nonnull);
bool $tmp5616 = $tmp5615.value;
if ($tmp5616) goto block15; else goto block16;
block15:;
// line 2701
org$pandalanguage$pandac$ASTNode* $tmp5617 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5617));
org$pandalanguage$pandac$ASTNode* $tmp5618 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5618));
*(&local4) = $tmp5617;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5617));
// unreffing REF($169:org.pandalanguage.pandac.ASTNode?)
// line 2702
org$pandalanguage$pandac$ASTNode* $tmp5619 = *(&local4);
panda$core$Bit $tmp5620 = panda$core$Bit$init$builtin_bit($tmp5619 == NULL);
bool $tmp5621 = $tmp5620.value;
if ($tmp5621) goto block17; else goto block18;
block17:;
// line 2703
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5622 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5622));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5623 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5623));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5624 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5624));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block18:;
// line 2705
panda$collections$Array* $tmp5625 = *(&local3);
org$pandalanguage$pandac$ASTNode* $tmp5626 = *(&local4);
panda$collections$Array$add$panda$collections$Array$T($tmp5625, ((panda$core$Object*) $tmp5626));
goto block14;
block16:;
org$pandalanguage$pandac$ASTNode* $tmp5627 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5627));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block11;
block11:;
// line 2708
panda$core$Int64 $tmp5628 = (panda$core$Int64) {100};
org$pandalanguage$pandac$parser$Token$Kind $tmp5629 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5628);
org$pandalanguage$pandac$parser$Token$nullable $tmp5630 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5629, &$s5631);
panda$core$Bit $tmp5632 = panda$core$Bit$init$builtin_bit(!$tmp5630.nonnull);
bool $tmp5633 = $tmp5632.value;
if ($tmp5633) goto block19; else goto block20;
block19:;
// line 2709
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
panda$collections$Array* $tmp5634 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5634));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5635 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5635));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block20:;
// line 2711
panda$collections$Array* $tmp5636 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5636);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5636));
panda$collections$Array* $tmp5637 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5637));
*(&local5) = $tmp5636;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5636));
// unreffing REF($241:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2712
goto block21;
block21:;
panda$core$Int64 $tmp5638 = (panda$core$Int64) {101};
org$pandalanguage$pandac$parser$Token$Kind $tmp5639 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5638);
org$pandalanguage$pandac$parser$Token$nullable $tmp5640 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(param0, $tmp5639);
panda$core$Bit $tmp5641 = panda$core$Bit$init$builtin_bit(!$tmp5640.nonnull);
bool $tmp5642 = $tmp5641.value;
if ($tmp5642) goto block22; else goto block23;
block22:;
// line 2713
org$pandalanguage$pandac$ASTNode* $tmp5643 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5643));
org$pandalanguage$pandac$ASTNode* $tmp5644 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5644));
*(&local6) = $tmp5643;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5643));
// unreffing REF($264:org.pandalanguage.pandac.ASTNode?)
// line 2714
org$pandalanguage$pandac$ASTNode* $tmp5645 = *(&local6);
panda$core$Bit $tmp5646 = panda$core$Bit$init$builtin_bit($tmp5645 == NULL);
bool $tmp5647 = $tmp5646.value;
if ($tmp5647) goto block24; else goto block25;
block24:;
// line 2715
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5648 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5648));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5649 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5649));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5650 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5650));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5651 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5651));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block25:;
// line 2717
panda$collections$Array* $tmp5652 = *(&local5);
org$pandalanguage$pandac$ASTNode* $tmp5653 = *(&local6);
panda$collections$Array$add$panda$collections$Array$T($tmp5652, ((panda$core$Object*) $tmp5653));
org$pandalanguage$pandac$ASTNode* $tmp5654 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5654));
// unreffing member
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block21;
block23:;
// line 2719
org$pandalanguage$pandac$ASTNode* $tmp5655 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5656 = (panda$core$Int64) {12};
org$pandalanguage$pandac$parser$Token$nullable $tmp5657 = *(&local0);
org$pandalanguage$pandac$Position $tmp5658 = ((org$pandalanguage$pandac$parser$Token) $tmp5657.value).position;
panda$core$Int64 $tmp5659 = (panda$core$Int64) {1};
org$pandalanguage$pandac$ClassDecl$Kind $tmp5660 = org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64($tmp5659);
org$pandalanguage$pandac$parser$Token$nullable $tmp5661 = *(&local1);
panda$core$String* $tmp5662 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param0, ((org$pandalanguage$pandac$parser$Token) $tmp5661.value));
org$pandalanguage$pandac$FixedArray* $tmp5663 = *(&local2);
panda$collections$Array* $tmp5664 = *(&local3);
org$pandalanguage$pandac$FixedArray* $tmp5665 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5664);
panda$collections$Array* $tmp5666 = *(&local5);
org$pandalanguage$pandac$FixedArray* $tmp5667 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5666);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5655, $tmp5656, $tmp5658, param1, param2, $tmp5660, $tmp5662, $tmp5663, $tmp5665, $tmp5667);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5667));
// unreffing REF($337:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5665));
// unreffing REF($332:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5662));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
// unreffing REF($319:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5668 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5668));
// unreffing members
*(&local5) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp5669 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5669));
// unreffing intfs
*(&local3) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp5670 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5670));
// unreffing generics
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp5655;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

// line 2728
org$pandalanguage$pandac$parser$Token $tmp5671 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5672 = $tmp5671.kind;
panda$core$Int64 $tmp5673 = $tmp5672.$rawValue;
panda$core$Int64 $tmp5674 = (panda$core$Int64) {16};
panda$core$Bit $tmp5675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5673, $tmp5674);
bool $tmp5676 = $tmp5675.value;
if ($tmp5676) goto block2; else goto block3;
block2:;
// line 2730
org$pandalanguage$pandac$ASTNode* $tmp5677 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5677));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5677));
// unreffing REF($9:org.pandalanguage.pandac.ASTNode?)
return $tmp5677;
block3:;
// line 2733
org$pandalanguage$pandac$ASTNode* $tmp5678 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5678));
// unreffing REF($17:org.pandalanguage.pandac.ASTNode?)
return $tmp5678;
block1:;
panda$core$Bit $tmp5679 = panda$core$Bit$init$builtin_bit(false);
bool $tmp5680 = $tmp5679.value;
if ($tmp5680) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp5681 = (panda$core$Int64) {2727};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5682, $tmp5681, &$s5683);
abort(); // unreachable
block4:;
abort(); // unreachable

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
// line 2742
panda$collections$Array* $tmp5684 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp5684);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5684));
panda$collections$Array* $tmp5685 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5685));
*(&local0) = $tmp5684;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5684));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 2743
org$pandalanguage$pandac$parser$Token $tmp5686 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5687 = $tmp5686.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5688;
$tmp5688 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5688->value = $tmp5687;
panda$core$Int64 $tmp5689 = (panda$core$Int64) {15};
org$pandalanguage$pandac$parser$Token$Kind $tmp5690 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5689);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5691;
$tmp5691 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5691->value = $tmp5690;
ITable* $tmp5692 = ((panda$core$Equatable*) $tmp5688)->$class->itable;
while ($tmp5692->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5692 = $tmp5692->next;
}
$fn5694 $tmp5693 = $tmp5692->methods[0];
panda$core$Bit $tmp5695 = $tmp5693(((panda$core$Equatable*) $tmp5688), ((panda$core$Equatable*) $tmp5691));
bool $tmp5696 = $tmp5695.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5691)));
// unreffing REF($21:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5688)));
// unreffing REF($17:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5696) goto block1; else goto block2;
block1:;
// line 2744
org$pandalanguage$pandac$ASTNode* $tmp5697 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5697));
org$pandalanguage$pandac$ASTNode* $tmp5698 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5698));
*(&local1) = $tmp5697;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5697));
// unreffing REF($33:org.pandalanguage.pandac.ASTNode?)
// line 2745
org$pandalanguage$pandac$ASTNode* $tmp5699 = *(&local1);
panda$core$Bit $tmp5700 = panda$core$Bit$init$builtin_bit($tmp5699 != NULL);
bool $tmp5701 = $tmp5700.value;
if ($tmp5701) goto block3; else goto block4;
block3:;
// line 2746
panda$collections$Array* $tmp5702 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5703 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp5702, ((panda$core$Object*) $tmp5703));
goto block4;
block4:;
org$pandalanguage$pandac$ASTNode* $tmp5704 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5704));
// unreffing decl
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block2;
block2:;
// line 2749
goto block5;
block5:;
org$pandalanguage$pandac$parser$Token $tmp5705 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(param0);
org$pandalanguage$pandac$parser$Token$Kind $tmp5706 = $tmp5705.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5707;
$tmp5707 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5707->value = $tmp5706;
panda$core$Int64 $tmp5708 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp5709 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5708);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp5710;
$tmp5710 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp5710->value = $tmp5709;
ITable* $tmp5711 = ((panda$core$Equatable*) $tmp5707)->$class->itable;
while ($tmp5711->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp5711 = $tmp5711->next;
}
$fn5713 $tmp5712 = $tmp5711->methods[1];
panda$core$Bit $tmp5714 = $tmp5712(((panda$core$Equatable*) $tmp5707), ((panda$core$Equatable*) $tmp5710));
bool $tmp5715 = $tmp5714.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5710)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp5707)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp5715) goto block6; else goto block7;
block6:;
// line 2750
org$pandalanguage$pandac$ASTNode* $tmp5716 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(param0);
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5716));
org$pandalanguage$pandac$ASTNode* $tmp5717 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5717));
*(&local2) = $tmp5716;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5716));
// unreffing REF($84:org.pandalanguage.pandac.ASTNode?)
// line 2751
org$pandalanguage$pandac$ASTNode* $tmp5718 = *(&local2);
panda$core$Bit $tmp5719 = panda$core$Bit$init$builtin_bit($tmp5718 == NULL);
bool $tmp5720 = $tmp5719.value;
if ($tmp5720) goto block8; else goto block9;
block8:;
// line 2752
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
org$pandalanguage$pandac$ASTNode* $tmp5721 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5721));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$Array* $tmp5722 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5722));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block9:;
// line 2754
panda$core$Bit* $tmp5723 = &param0->inSpeculative;
panda$core$Bit $tmp5724 = *$tmp5723;
panda$core$Bit $tmp5725 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5724);
bool $tmp5726 = $tmp5725.value;
if ($tmp5726) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp5727 = (panda$core$Int64) {2754};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5728, $tmp5727);
abort(); // unreachable
block10:;
// line 2755
panda$collections$Array* $tmp5729 = *(&local0);
org$pandalanguage$pandac$ASTNode* $tmp5730 = *(&local2);
panda$collections$Array$add$panda$collections$Array$T($tmp5729, ((panda$core$Object*) $tmp5730));
org$pandalanguage$pandac$ASTNode* $tmp5731 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
// unreffing entry
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block5;
block7:;
// line 2757
org$pandalanguage$pandac$ASTNode* $tmp5732 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp5733 = (panda$core$Int64) {18};
panda$collections$Array* $tmp5734 = *(&local0);
org$pandalanguage$pandac$FixedArray* $tmp5735 = org$pandalanguage$pandac$FixedArray$from$panda$collections$Array$LTorg$pandalanguage$pandac$FixedArray$T$GT$R$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$FixedArray$T$GT($tmp5734);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5732, $tmp5733, $tmp5735);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5735));
// unreffing REF($142:org.pandalanguage.pandac.FixedArray<org.pandalanguage.pandac.FixedArray.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
// unreffing REF($138:org.pandalanguage.pandac.ASTNode)
panda$collections$Array* $tmp5736 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5736));
// unreffing entries
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp5732;

}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* param0) {

// line 13
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$parser$Lexer** $tmp5737 = &param0->lexer;
org$pandalanguage$pandac$parser$Lexer* $tmp5738 = *$tmp5737;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5738));
org$pandalanguage$regex$RegexParser** $tmp5739 = &param0->regexParser;
org$pandalanguage$regex$RegexParser* $tmp5740 = *$tmp5739;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5740));
panda$threads$MessageQueue** $tmp5741 = &param0->errors;
panda$threads$MessageQueue* $tmp5742 = *$tmp5741;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5742));
panda$io$File** $tmp5743 = &param0->path;
panda$io$File* $tmp5744 = *$tmp5743;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5744));
panda$core$String** $tmp5745 = &param0->source;
panda$core$String* $tmp5746 = *$tmp5745;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5746));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5747 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5748 = *$tmp5747;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5748));
panda$collections$Stack** $tmp5749 = &param0->commaSeparatedExpressionContext;
panda$collections$Stack* $tmp5750 = *$tmp5749;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5750));
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT** $tmp5751 = &param0->speculativeBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5752 = *$tmp5751;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5752));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp5753 = &param0->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp5754 = *$tmp5753;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5754));
return;

}

