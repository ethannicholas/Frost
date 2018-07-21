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
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/MutableString.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "org/pandalanguage/regex/RegexLexer.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn31)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn34)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn41)(panda$collections$CollectionView*);
typedef void (*$fn47)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn67)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn70)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn71)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn146)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn156)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn161)(panda$collections$CollectionView*);
typedef void (*$fn166)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn167)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn170)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn178)(panda$collections$CollectionView*);
typedef void (*$fn217)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn218)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn262)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn319)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn386)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn512)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn596)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn604)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn613)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn621)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn731)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn815)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn823)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn832)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn847)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn874)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn882)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn897)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn914)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1409)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1410)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1416)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1418)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn1985)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1993)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2164)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2422)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3758)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3785)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3839)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4302)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4305)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn5061)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn5281)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5306)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x28\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27\x54\x27", 27, 251182849216656286, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s4057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s4104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s5138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s5843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s5857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$pandac$parser$Parser* self, panda$threads$MessageQueue* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp2;
    org$pandalanguage$pandac$parser$Lexer* $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6;
    panda$collections$Stack* $tmp8;
    panda$collections$Stack* $tmp9;
    panda$core$Bit $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp12;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp13;
    panda$core$Bit $tmp15;
    panda$core$Bit $tmp16;
    panda$threads$MessageQueue* $tmp17;
    panda$threads$MessageQueue* $tmp18;
    panda$core$Object* $tmp19;
    panda$core$Bit $tmp20;
    org$pandalanguage$regex$RegexParser* $tmp22;
    org$pandalanguage$regex$RegexParser* $tmp23;
    org$pandalanguage$regex$RegexParser* $tmp24;
    self->lexer = NULL;
    self->regexParser = NULL;
    self->errors = NULL;
    self->path = NULL;
    self->source = NULL;
    self->pushbackBuffer = NULL;
    self->commaSeparatedExpressionContext = NULL;
    self->speculativeBuffer = NULL;
    self->syntaxHighlighter = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp4 = (org$pandalanguage$pandac$parser$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class);
    org$pandalanguage$pandac$parser$Lexer$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->lexer = $tmp2;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->pushbackBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    panda$collections$Stack* $tmp10 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->commaSeparatedExpressionContext = $tmp8;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    panda$core$Bit$init$builtin_bit(&$tmp11, false);
    self->inSpeculative = $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp14 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp14);
    $tmp13 = $tmp14;
    $tmp12 = $tmp13;
    self->speculativeBuffer = $tmp12;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
    panda$core$Bit$init$builtin_bit(&$tmp15, true);
    self->allowLambdas = $tmp15;
    panda$core$Bit$init$builtin_bit(&$tmp16, true);
    self->reportErrors = $tmp16;
    {
        $tmp17 = self->errors;
        $tmp18 = p_errors;
        self->errors = $tmp18;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
    }
    panda$core$Bit$init$builtin_bit(&$tmp20, false);
    panda$core$Bit$wrapper* $tmp21;
    $tmp21 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp21->value = $tmp20;
    $tmp19 = ((panda$core$Object*) $tmp21);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp19);
    panda$core$Panda$unref$panda$core$Object$Q($tmp19);
    {
        $tmp22 = self->regexParser;
        org$pandalanguage$regex$RegexParser* $tmp25 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
        org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp25, p_errors);
        $tmp24 = $tmp25;
        $tmp23 = $tmp24;
        self->regexParser = $tmp23;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
    }
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$core$Bit $tmp26;
    panda$io$File* $tmp27;
    panda$io$File* $tmp28;
    panda$core$String* $tmp29;
    panda$core$String* $tmp30;
    panda$core$Bit$init$builtin_bit(&$tmp26, true);
    self->reportErrors = $tmp26;
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp27 = self->path;
        $tmp28 = p_path;
        self->path = $tmp28;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
    }
    {
        $tmp29 = self->source;
        $tmp30 = p_source;
        self->source = $tmp30;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
    org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(self->regexParser, p_path, p_source);
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn31) self->syntaxHighlighter->$class->vtable[2])(self->syntaxHighlighter);
    }
    }
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp36;
    panda$core$Int64 idx38;
    panda$core$Int64 $tmp43;
    org$pandalanguage$pandac$parser$Token result45;
    org$pandalanguage$pandac$parser$Token $returnValue48;
    org$pandalanguage$pandac$parser$Token result50;
    panda$core$Int64 $tmp52;
    panda$core$Int64 $tmp56;
    panda$core$Object* $tmp59;
    panda$core$Int64 $tmp60;
    panda$core$Int64 $tmp62;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp65;
    panda$core$Int64 $tmp66;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp68;
    panda$core$Int64 $tmp69;
    ITable* $tmp32 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp32->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp32 = $tmp32->next;
    }
    $fn34 $tmp33 = $tmp32->methods[0];
    panda$core$Int64 $tmp35 = $tmp33(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp36, 0);
    panda$core$Bit $tmp37 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp35, $tmp36);
    if ($tmp37.value) {
    {
        ITable* $tmp39 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
        while ($tmp39->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp39 = $tmp39->next;
        }
        $fn41 $tmp40 = $tmp39->methods[0];
        panda$core$Int64 $tmp42 = $tmp40(((panda$collections$CollectionView*) self->pushbackBuffer));
        panda$core$Int64$init$builtin_int64(&$tmp43, 1);
        panda$core$Int64 $tmp44 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp42, $tmp43);
        idx38 = $tmp44;
        org$pandalanguage$pandac$parser$Token $tmp46 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx38);
        result45 = $tmp46;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx38);
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn47) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, result45);
        }
        }
        $returnValue48 = result45;
        return $returnValue48;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp51 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result50 = $tmp51;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp52, 12);
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result50.kind.$rawValue, $tmp52);
        if ($tmp53.value) {
        {
            panda$core$Int64 $tmp55 = panda$collections$Stack$get_count$R$panda$core$Int64(self->syntaxHighlighter->stack);
            panda$core$Int64$init$builtin_int64(&$tmp56, 0);
            panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp55, $tmp56);
            bool $tmp54 = $tmp57.value;
            if ($tmp54) goto $l58;
            panda$core$Int64$init$builtin_int64(&$tmp60, 0);
            panda$core$Object* $tmp61 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->syntaxHighlighter->stack, $tmp60);
            $tmp59 = $tmp61;
            panda$core$Int64$init$builtin_int64(&$tmp62, 2);
            panda$core$Bit $tmp63 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp59)->value.$rawValue, $tmp62);
            $tmp54 = $tmp63.value;
            panda$core$Panda$unref$panda$core$Object$Q($tmp59);
            $l58:;
            panda$core$Bit $tmp64 = { $tmp54 };
            if ($tmp64.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp66, 2);
                org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp65, $tmp66);
                (($fn67) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp65);
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp69, 2);
                org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp68, $tmp69);
                (($fn70) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp68);
            }
            }
        }
        }
        (($fn71) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, result50);
    }
    }
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result50);
    }
    }
    $returnValue48 = result50;
    return $returnValue48;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result75;
    org$pandalanguage$pandac$parser$Token$Kind $match$108_1377;
    panda$core$Int64 $tmp78;
    panda$core$Int64 $tmp80;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto85 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp86;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp87;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp89;
    panda$core$Int64 $tmp90;
    org$pandalanguage$pandac$parser$Token t93;
    org$pandalanguage$pandac$parser$Token$Kind $match$115_2595;
    panda$core$Int64 $tmp96;
    panda$core$String* $tmp98;
    panda$core$Char8 $tmp100;
    panda$core$UInt8 $tmp101;
    panda$core$Int64 $tmp103;
    org$pandalanguage$pandac$parser$Token $returnValue105;
    panda$core$Int64 $tmp109;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto114 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp115;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp116;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp118;
    panda$core$Int64 $tmp119;
    org$pandalanguage$pandac$parser$Token t122;
    org$pandalanguage$pandac$parser$Token$Kind $match$128_25124;
    panda$core$Int64 $tmp125;
    panda$core$Int64 $tmp127;
    panda$core$Bit $tmp130;
    $l73:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp76 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result75 = $tmp76;
        {
            $match$108_1377 = result75.kind;
            panda$core$Int64$init$builtin_int64(&$tmp78, 13);
            panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1377.$rawValue, $tmp78);
            if ($tmp79.value) {
            {
                goto $l73;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp80, 9);
            panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1377.$rawValue, $tmp80);
            if ($tmp81.value) {
            {
                int $tmp84;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp88 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp90, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp89, $tmp90);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp88, self, $tmp89);
                    $tmp87 = $tmp88;
                    $tmp86 = $tmp87;
                    auto85 = $tmp86;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
                    $l91:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp94 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        t93 = $tmp94;
                        {
                            $match$115_2595 = t93.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp96, 13);
                            panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_2595.$rawValue, $tmp96);
                            if ($tmp97.value) {
                            {
                                panda$core$String* $tmp99 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t93);
                                $tmp98 = $tmp99;
                                panda$core$UInt8$init$builtin_uint8(&$tmp101, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp100, $tmp101);
                                panda$core$Bit $tmp102 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp98, $tmp100);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
                                if ($tmp102.value) {
                                {
                                    goto $l92;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp103, 0);
                            panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_2595.$rawValue, $tmp103);
                            if ($tmp104.value) {
                            {
                                $returnValue105 = t93;
                                $tmp84 = 0;
                                goto $l82;
                                $l106:;
                                return $returnValue105;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l92:;
                }
                $tmp84 = -1;
                goto $l82;
                $l82:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) auto85));
                auto85 = NULL;
                switch ($tmp84) {
                    case 0: goto $l106;
                    case -1: goto $l108;
                }
                $l108:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp109, 10);
            panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1377.$rawValue, $tmp109);
            if ($tmp110.value) {
            {
                int $tmp113;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp117 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp119, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp118, $tmp119);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp117, self, $tmp118);
                    $tmp116 = $tmp117;
                    $tmp115 = $tmp116;
                    auto114 = $tmp115;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
                    $l120:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp123 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        t122 = $tmp123;
                        {
                            $match$128_25124 = t122.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp125, 11);
                            panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_25124.$rawValue, $tmp125);
                            if ($tmp126.value) {
                            {
                                goto $l121;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp127, 0);
                            panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_25124.$rawValue, $tmp127);
                            if ($tmp128.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result75, &$s129);
                                panda$core$Bit$init$builtin_bit(&$tmp130, false);
                                self->reportErrors = $tmp130;
                                $returnValue105 = t122;
                                $tmp113 = 0;
                                goto $l111;
                                $l131:;
                                return $returnValue105;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l121:;
                }
                $tmp113 = -1;
                goto $l111;
                $l111:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) auto114));
                auto114 = NULL;
                switch ($tmp113) {
                    case 0: goto $l131;
                    case -1: goto $l133;
                }
                $l133:;
            }
            }
            else {
            {
                $returnValue105 = result75;
                return $returnValue105;
            }
            }
            }
            }
        }
    }
    }
    $l74:;
    if (false) goto $l135; else goto $l136;
    $l136:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s137, (panda$core$Int64) { 105 }, &$s138);
    abort();
    $l135:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp142;
    panda$core$Object* $tmp143;
    panda$core$Int64 $tmp148;
    panda$core$String* $tmp152;
    panda$core$Object* $tmp158;
    panda$core$Int64 $tmp163;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        $l139:;
        ITable* $tmp144 = ((panda$collections$CollectionView*) self->syntaxHighlighter->tokens)->$class->itable;
        while ($tmp144->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp144 = $tmp144->next;
        }
        $fn146 $tmp145 = $tmp144->methods[0];
        panda$core$Int64 $tmp147 = $tmp145(((panda$collections$CollectionView*) self->syntaxHighlighter->tokens));
        panda$core$Int64$init$builtin_int64(&$tmp148, 1);
        panda$core$Int64 $tmp149 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp147, $tmp148);
        panda$core$Object* $tmp150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp149);
        $tmp143 = $tmp150;
        panda$core$String* $tmp151 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp143)->first)->value);
        $tmp142 = $tmp151;
        panda$core$String* $tmp153 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, p_token);
        $tmp152 = $tmp153;
        ITable* $tmp154 = ((panda$core$Equatable*) $tmp142)->$class->itable;
        while ($tmp154->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp154 = $tmp154->next;
        }
        $fn156 $tmp155 = $tmp154->methods[1];
        panda$core$Bit $tmp157 = $tmp155(((panda$core$Equatable*) $tmp142), ((panda$core$Equatable*) $tmp152));
        bool $tmp141 = $tmp157.value;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
        panda$core$Panda$unref$panda$core$Object$Q($tmp143);
        if (!$tmp141) goto $l140;
        {
            ITable* $tmp159 = ((panda$collections$CollectionView*) self->syntaxHighlighter->tokens)->$class->itable;
            while ($tmp159->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp159 = $tmp159->next;
            }
            $fn161 $tmp160 = $tmp159->methods[0];
            panda$core$Int64 $tmp162 = $tmp160(((panda$collections$CollectionView*) self->syntaxHighlighter->tokens));
            panda$core$Int64$init$builtin_int64(&$tmp163, 1);
            panda$core$Int64 $tmp164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp162, $tmp163);
            panda$core$Object* $tmp165 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp164);
            $tmp158 = $tmp165;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp158)->first)->value);
            panda$core$Panda$unref$panda$core$Object$Q($tmp158);
            (($fn166) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
        }
        goto $l139;
        $l140:;
        (($fn167) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp172;
    org$pandalanguage$pandac$parser$Token $returnValue175;
    panda$core$Int64 $tmp180;
    ITable* $tmp168 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp168->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp168 = $tmp168->next;
    }
    $fn170 $tmp169 = $tmp168->methods[0];
    panda$core$Int64 $tmp171 = $tmp169(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp172, 0);
    panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp171, $tmp172);
    if ($tmp173.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp174 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp174);
    }
    }
    ITable* $tmp176 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp176->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp176 = $tmp176->next;
    }
    $fn178 $tmp177 = $tmp176->methods[0];
    panda$core$Int64 $tmp179 = $tmp177(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp180, 1);
    panda$core$Int64 $tmp181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp179, $tmp180);
    org$pandalanguage$pandac$parser$Token $tmp182 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp181);
    $returnValue175 = $tmp182;
    return $returnValue175;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result184;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue187;
    org$pandalanguage$pandac$parser$Token $tmp185 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result184 = $tmp185;
    panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result184.kind.$rawValue, p_kind.$rawValue);
    if ($tmp186.value) {
    {
        $returnValue187 = ((org$pandalanguage$pandac$parser$Token$nullable) { result184, true });
        return $returnValue187;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result184);
    $returnValue187 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue187;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result190;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue193;
    panda$core$String* $tmp195;
    panda$core$String* $tmp196;
    panda$core$String* $tmp197;
    panda$core$String* $tmp198;
    panda$core$String* $tmp203;
    org$pandalanguage$pandac$parser$Token $tmp191 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result190 = $tmp191;
    panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result190.kind.$rawValue, p_kind.$rawValue);
    if ($tmp192.value) {
    {
        $returnValue193 = ((org$pandalanguage$pandac$parser$Token$nullable) { result190, true });
        return $returnValue193;
    }
    }
    panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s199, p_expected);
    $tmp198 = $tmp200;
    panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s201);
    $tmp197 = $tmp202;
    panda$core$String* $tmp204 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result190);
    $tmp203 = $tmp204;
    panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, $tmp203);
    $tmp196 = $tmp205;
    panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s206);
    $tmp195 = $tmp207;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result190, $tmp195);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
    $returnValue193 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue193;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp213;
    panda$core$Bit $tmp210 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp209 = $tmp210.value;
    if (!$tmp209) goto $l211;
    $tmp209 = self->reportErrors.value;
    $l211:;
    panda$core$Bit $tmp212 = { $tmp209 };
    if ($tmp212.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp214 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp214, self->path, p_token.position, p_msg);
        $tmp213 = $tmp214;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp213));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
        panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_msg, &$s215);
        if ($tmp216.value) {
        {
            panda$io$Console$printLine$panda$core$String(p_msg);
            panda$core$System$crash();
        }
        }
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn217) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn218) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp231;
    int $tmp221;
    {
        panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp222.value) goto $l223; else goto $l224;
        $l224:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s225, (panda$core$Int64) { 205 }, &$s226);
        abort();
        $l223:;
        panda$core$Bit $tmp227 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp227.value) goto $l228; else goto $l229;
        $l229:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s230, (panda$core$Int64) { 206 });
        abort();
        $l228:;
        panda$core$Bit$init$builtin_bit(&$tmp231, true);
        self->inSpeculative = $tmp231;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp221 = -1;
    goto $l219;
    $l219:;
    if (self->inSpeculative.value) goto $l233; else goto $l234;
    $l234:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s235, (panda$core$Int64) { 205 }, &$s236);
    abort();
    $l233:;
    switch ($tmp221) {
        case -1: goto $l232;
    }
    $l232:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp244;
    int $tmp239;
    {
        if (self->inSpeculative.value) goto $l240; else goto $l241;
        $l241:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s242, (panda$core$Int64) { 214 }, &$s243);
        abort();
        $l240:;
        panda$core$Bit$init$builtin_bit(&$tmp244, false);
        self->inSpeculative = $tmp244;
    }
    $tmp239 = -1;
    goto $l237;
    $l237:;
    panda$core$Bit $tmp246 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp246.value) goto $l247; else goto $l248;
    $l248:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s249, (panda$core$Int64) { 214 }, &$s250);
    abort();
    $l247:;
    switch ($tmp239) {
        case -1: goto $l245;
    }
    $l245:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp258;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp259;
    panda$core$Int64 $tmp264;
    panda$core$Int64 $tmp266;
    panda$core$Int64 $tmp267;
    panda$core$Bit $tmp268;
    int $tmp253;
    {
        if (self->inSpeculative.value) goto $l254; else goto $l255;
        $l255:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s256, (panda$core$Int64) { 220 }, &$s257);
        abort();
        $l254:;
        panda$core$Bit$init$builtin_bit(&$tmp258, false);
        self->inSpeculative = $tmp258;
        ITable* $tmp260 = ((panda$collections$CollectionView*) self->speculativeBuffer)->$class->itable;
        while ($tmp260->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp260 = $tmp260->next;
        }
        $fn262 $tmp261 = $tmp260->methods[0];
        panda$core$Int64 $tmp263 = $tmp261(((panda$collections$CollectionView*) self->speculativeBuffer));
        panda$core$Int64$init$builtin_int64(&$tmp264, 1);
        panda$core$Int64 $tmp265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp263, $tmp264);
        panda$core$Int64$init$builtin_int64(&$tmp266, 0);
        panda$core$Int64$init$builtin_int64(&$tmp267, -1);
        panda$core$Bit$init$builtin_bit(&$tmp268, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp259, $tmp265, $tmp266, $tmp267, $tmp268);
        int64_t $tmp270 = $tmp259.start.value;
        panda$core$Int64 i269 = { $tmp270 };
        int64_t $tmp272 = $tmp259.end.value;
        int64_t $tmp273 = $tmp259.step.value;
        bool $tmp274 = $tmp259.inclusive.value;
        bool $tmp281 = $tmp273 > 0;
        if ($tmp281) goto $l279; else goto $l280;
        $l279:;
        if ($tmp274) goto $l282; else goto $l283;
        $l282:;
        if ($tmp270 <= $tmp272) goto $l275; else goto $l277;
        $l283:;
        if ($tmp270 < $tmp272) goto $l275; else goto $l277;
        $l280:;
        if ($tmp274) goto $l284; else goto $l285;
        $l284:;
        if ($tmp270 >= $tmp272) goto $l275; else goto $l277;
        $l285:;
        if ($tmp270 > $tmp272) goto $l275; else goto $l277;
        $l275:;
        {
            org$pandalanguage$pandac$parser$Token $tmp287 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i269);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp287);
        }
        $l278:;
        if ($tmp281) goto $l289; else goto $l290;
        $l289:;
        int64_t $tmp291 = $tmp272 - i269.value;
        if ($tmp274) goto $l292; else goto $l293;
        $l292:;
        if ((uint64_t) $tmp291 >= $tmp273) goto $l288; else goto $l277;
        $l293:;
        if ((uint64_t) $tmp291 > $tmp273) goto $l288; else goto $l277;
        $l290:;
        int64_t $tmp295 = i269.value - $tmp272;
        if ($tmp274) goto $l296; else goto $l297;
        $l296:;
        if ((uint64_t) $tmp295 >= -$tmp273) goto $l288; else goto $l277;
        $l297:;
        if ((uint64_t) $tmp295 > -$tmp273) goto $l288; else goto $l277;
        $l288:;
        i269.value += $tmp273;
        goto $l275;
        $l277:;
    }
    $tmp253 = -1;
    goto $l251;
    $l251:;
    panda$core$Bit $tmp300 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp300.value) goto $l301; else goto $l302;
    $l302:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s303, (panda$core$Int64) { 220 }, &$s304);
    abort();
    $l301:;
    switch ($tmp253) {
        case -1: goto $l299;
    }
    $l299:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp307;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp308;
    panda$core$Bit $tmp309;
    panda$core$Bit$init$builtin_bit(&$tmp309, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp308, p_token.start, p_token.end, $tmp309);
    panda$core$String* $tmp310 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp308);
    $tmp307 = $tmp310;
    $tmp306 = $tmp307;
    $returnValue305 = $tmp306;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
    return $returnValue305;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue312;
    org$pandalanguage$pandac$ASTNode* $tmp313;
    org$pandalanguage$pandac$ASTNode* $tmp315;
    org$pandalanguage$pandac$ASTNode* $tmp316;
    panda$core$Int64 $tmp318;
    org$pandalanguage$pandac$parser$Token$Kind $tmp321;
    panda$core$Int64 $tmp322;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp313 = p_chunk;
        $returnValue312 = $tmp313;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
        return $returnValue312;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp317 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp318, 4);
    org$pandalanguage$pandac$Position $tmp320 = (($fn319) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp322, 52);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp321, $tmp322);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp317, $tmp318, $tmp320, p_string, $tmp321, p_chunk);
    $tmp316 = $tmp317;
    $tmp315 = $tmp316;
    $returnValue312 = $tmp315;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp316));
    return $returnValue312;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result327 = NULL;
    panda$core$MutableString* $tmp328;
    panda$core$MutableString* $tmp329;
    org$pandalanguage$pandac$parser$Token token333;
    org$pandalanguage$pandac$parser$Token$Kind $match$242_13335;
    panda$core$Int64 $tmp336;
    panda$core$String* str341 = NULL;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$Char8 $tmp345;
    panda$core$UInt8 $tmp346;
    panda$core$String* $returnValue349;
    panda$core$String* $tmp350;
    panda$core$Int64 $tmp355;
    panda$core$String* $tmp358;
    panda$core$Int64 $tmp361;
    org$pandalanguage$pandac$parser$Token escape366;
    panda$core$Int64 $tmp368;
    panda$core$String* $tmp371;
    panda$core$String* escapeText375 = NULL;
    panda$core$String* $tmp376;
    panda$core$String* $tmp377;
    panda$core$Char8 c379;
    panda$core$Object* $tmp380;
    panda$collections$ListView* $tmp381;
    panda$core$Int64 $tmp383;
    panda$core$Char8 $match$261_21388;
    panda$core$Char8 $tmp389;
    panda$core$UInt8 $tmp390;
    panda$core$Char8 $tmp392;
    panda$core$UInt8 $tmp393;
    panda$core$Char8 $tmp394;
    panda$core$UInt8 $tmp395;
    panda$core$Char8 $tmp397;
    panda$core$UInt8 $tmp398;
    panda$core$Char8 $tmp399;
    panda$core$UInt8 $tmp400;
    panda$core$Char8 $tmp402;
    panda$core$UInt8 $tmp403;
    panda$core$Char8 $tmp404;
    panda$core$UInt8 $tmp405;
    panda$core$Char8 $tmp407;
    panda$core$UInt8 $tmp408;
    panda$core$Char8 $tmp409;
    panda$core$UInt8 $tmp410;
    panda$core$Char8 $tmp412;
    panda$core$UInt8 $tmp413;
    panda$core$Char8 $tmp414;
    panda$core$UInt8 $tmp415;
    panda$core$Char8 $tmp417;
    panda$core$UInt8 $tmp418;
    panda$core$Char8 $tmp419;
    panda$core$UInt8 $tmp420;
    panda$core$Char8 $tmp422;
    panda$core$UInt8 $tmp423;
    panda$core$String* $tmp425;
    panda$core$String* $tmp429;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp430;
    panda$core$Bit $tmp433;
    panda$core$Int64 $tmp436;
    panda$core$String* $tmp438;
    panda$core$String* $tmp439;
    panda$core$String* $tmp443;
    int $tmp326;
    {
        panda$core$MutableString* $tmp330 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp330);
        $tmp329 = $tmp330;
        $tmp328 = $tmp329;
        result327 = $tmp328;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
        $l331:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp334 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token333 = $tmp334;
            {
                $match$242_13335 = token333.kind;
                panda$core$Int64$init$builtin_int64(&$tmp336, 13);
                panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13335.$rawValue, $tmp336);
                if ($tmp337.value) {
                {
                    int $tmp340;
                    {
                        panda$core$String* $tmp344 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token333);
                        $tmp343 = $tmp344;
                        $tmp342 = $tmp343;
                        str341 = $tmp342;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
                        panda$core$UInt8$init$builtin_uint8(&$tmp346, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp345, $tmp346);
                        panda$core$Bit $tmp347 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str341, $tmp345);
                        if ($tmp347.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token333, &$s348);
                            $tmp350 = NULL;
                            $returnValue349 = $tmp350;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
                            $tmp340 = 0;
                            goto $l338;
                            $l351:;
                            $tmp326 = 0;
                            goto $l324;
                            $l352:;
                            return $returnValue349;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result327, str341);
                    }
                    $tmp340 = -1;
                    goto $l338;
                    $l338:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) str341));
                    str341 = NULL;
                    switch ($tmp340) {
                        case 0: goto $l351;
                        case -1: goto $l354;
                    }
                    $l354:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp355, 0);
                panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13335.$rawValue, $tmp355);
                if ($tmp356.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token333, &$s357);
                    $tmp358 = NULL;
                    $returnValue349 = $tmp358;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
                    $tmp326 = 1;
                    goto $l324;
                    $l359:;
                    return $returnValue349;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp361, 107);
                panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13335.$rawValue, $tmp361);
                if ($tmp362.value) {
                {
                    int $tmp365;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp367 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape366 = $tmp367;
                        panda$core$Int64$init$builtin_int64(&$tmp368, 0);
                        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape366.kind.$rawValue, $tmp368);
                        if ($tmp369.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token333, &$s370);
                            $tmp371 = NULL;
                            $returnValue349 = $tmp371;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
                            $tmp365 = 0;
                            goto $l363;
                            $l372:;
                            $tmp326 = 2;
                            goto $l324;
                            $l373:;
                            return $returnValue349;
                        }
                        }
                        panda$core$String* $tmp378 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape366);
                        $tmp377 = $tmp378;
                        $tmp376 = $tmp377;
                        escapeText375 = $tmp376;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
                        panda$collections$ListView* $tmp382 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText375);
                        $tmp381 = $tmp382;
                        panda$core$Int64$init$builtin_int64(&$tmp383, 0);
                        ITable* $tmp384 = $tmp381->$class->itable;
                        while ($tmp384->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp384 = $tmp384->next;
                        }
                        $fn386 $tmp385 = $tmp384->methods[0];
                        panda$core$Object* $tmp387 = $tmp385($tmp381, $tmp383);
                        $tmp380 = $tmp387;
                        c379 = ((panda$core$Char8$wrapper*) $tmp380)->value;
                        panda$core$Panda$unref$panda$core$Object$Q($tmp380);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
                        {
                            $match$261_21388 = c379;
                            panda$core$UInt8$init$builtin_uint8(&$tmp390, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp389, $tmp390);
                            panda$core$Bit $tmp391 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp389);
                            if ($tmp391.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp393, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp392, $tmp393);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp392);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp395, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp394, $tmp395);
                            panda$core$Bit $tmp396 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp394);
                            if ($tmp396.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp398, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp397, $tmp398);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp397);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp400, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp399, $tmp400);
                            panda$core$Bit $tmp401 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp399);
                            if ($tmp401.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp403, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp402, $tmp403);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp402);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp405, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp404, $tmp405);
                            panda$core$Bit $tmp406 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp404);
                            if ($tmp406.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp408, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp407, $tmp408);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp407);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp410, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp409, $tmp410);
                            panda$core$Bit $tmp411 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp409);
                            if ($tmp411.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp413, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp412, $tmp413);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp412);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp415, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp414, $tmp415);
                            panda$core$Bit $tmp416 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp414);
                            if ($tmp416.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp418, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp417, $tmp418);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp417);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp420, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp419, $tmp420);
                            panda$core$Bit $tmp421 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21388, $tmp419);
                            if ($tmp421.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp423, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp422, $tmp423);
                                panda$core$MutableString$append$panda$core$Char8(result327, $tmp422);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token333, &$s424);
                                $tmp425 = NULL;
                                $returnValue349 = $tmp425;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
                                $tmp365 = 1;
                                goto $l363;
                                $l426:;
                                $tmp326 = 3;
                                goto $l324;
                                $l427:;
                                return $returnValue349;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp431 = panda$core$String$start$R$panda$core$String$Index(escapeText375);
                        panda$core$String$Index $tmp432 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText375, $tmp431);
                        panda$core$Bit$init$builtin_bit(&$tmp433, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp430, ((panda$core$String$Index$nullable) { $tmp432, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp433);
                        panda$core$String* $tmp434 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText375, $tmp430);
                        $tmp429 = $tmp434;
                        panda$core$MutableString$append$panda$core$String(result327, $tmp429);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
                    }
                    $tmp365 = -1;
                    goto $l363;
                    $l363:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) escapeText375));
                    escapeText375 = NULL;
                    switch ($tmp365) {
                        case 0: goto $l372;
                        case -1: goto $l435;
                        case 1: goto $l426;
                    }
                    $l435:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp436, 101);
                panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13335.$rawValue, $tmp436);
                if ($tmp437.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token333);
                    panda$core$String* $tmp440 = panda$core$MutableString$finish$R$panda$core$String(result327);
                    $tmp439 = $tmp440;
                    $tmp438 = $tmp439;
                    $returnValue349 = $tmp438;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp439));
                    $tmp326 = 4;
                    goto $l324;
                    $l441:;
                    return $returnValue349;
                }
                }
                else {
                {
                    panda$core$String* $tmp444 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token333);
                    $tmp443 = $tmp444;
                    panda$core$MutableString$append$panda$core$String(result327, $tmp443);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
                }
                }
                }
                }
                }
            }
        }
        }
        $l332:;
    }
    $tmp326 = -1;
    goto $l324;
    $l324:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result327));
    result327 = NULL;
    switch ($tmp326) {
        case 4: goto $l441;
        case -1: goto $l445;
        case 0: goto $l352;
        case 3: goto $l427;
        case 2: goto $l373;
        case 1: goto $l359;
    }
    $l445:;
    if (false) goto $l446; else goto $l447;
    $l447:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s448, (panda$core$Int64) { 238 }, &$s449);
    abort();
    $l446:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result453 = NULL;
    panda$core$MutableString* $tmp454;
    panda$core$MutableString* $tmp455;
    org$pandalanguage$pandac$parser$Token token459;
    org$pandalanguage$pandac$parser$Token$Kind $match$287_13461;
    panda$core$Int64 $tmp462;
    panda$core$String* str467 = NULL;
    panda$core$String* $tmp468;
    panda$core$String* $tmp469;
    panda$core$Char8 $tmp471;
    panda$core$UInt8 $tmp472;
    panda$core$String* $returnValue475;
    panda$core$String* $tmp476;
    panda$core$Int64 $tmp481;
    panda$core$String* $tmp484;
    panda$core$Int64 $tmp487;
    org$pandalanguage$pandac$parser$Token escape492;
    panda$core$Int64 $tmp494;
    panda$core$String* $tmp497;
    panda$core$String* escapeText501 = NULL;
    panda$core$String* $tmp502;
    panda$core$String* $tmp503;
    panda$core$Char8 c505;
    panda$core$Object* $tmp506;
    panda$collections$ListView* $tmp507;
    panda$core$Int64 $tmp509;
    panda$core$Char8 $match$306_21514;
    panda$core$Char8 $tmp515;
    panda$core$UInt8 $tmp516;
    panda$core$Char8 $tmp518;
    panda$core$UInt8 $tmp519;
    panda$core$Char8 $tmp520;
    panda$core$UInt8 $tmp521;
    panda$core$Char8 $tmp523;
    panda$core$UInt8 $tmp524;
    panda$core$Char8 $tmp525;
    panda$core$UInt8 $tmp526;
    panda$core$Char8 $tmp528;
    panda$core$UInt8 $tmp529;
    panda$core$Char8 $tmp530;
    panda$core$UInt8 $tmp531;
    panda$core$Char8 $tmp533;
    panda$core$UInt8 $tmp534;
    panda$core$Char8 $tmp535;
    panda$core$UInt8 $tmp536;
    panda$core$Char8 $tmp538;
    panda$core$UInt8 $tmp539;
    panda$core$Char8 $tmp540;
    panda$core$UInt8 $tmp541;
    panda$core$Char8 $tmp543;
    panda$core$UInt8 $tmp544;
    panda$core$Char8 $tmp545;
    panda$core$UInt8 $tmp546;
    panda$core$Char8 $tmp548;
    panda$core$UInt8 $tmp549;
    panda$core$Char8 $tmp550;
    panda$core$UInt8 $tmp551;
    panda$core$Char8 $tmp553;
    panda$core$UInt8 $tmp554;
    panda$core$String* $tmp556;
    panda$core$String* $tmp560;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp561;
    panda$core$Bit $tmp564;
    panda$core$Int64 $tmp567;
    panda$core$String* $tmp569;
    panda$core$String* $tmp570;
    panda$core$Int64 $tmp574;
    panda$core$String* $tmp576;
    panda$core$String* $tmp577;
    panda$core$String* $tmp581;
    int $tmp452;
    {
        panda$core$MutableString* $tmp456 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp456);
        $tmp455 = $tmp456;
        $tmp454 = $tmp455;
        result453 = $tmp454;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
        $l457:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp460 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token459 = $tmp460;
            {
                $match$287_13461 = token459.kind;
                panda$core$Int64$init$builtin_int64(&$tmp462, 13);
                panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13461.$rawValue, $tmp462);
                if ($tmp463.value) {
                {
                    int $tmp466;
                    {
                        panda$core$String* $tmp470 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token459);
                        $tmp469 = $tmp470;
                        $tmp468 = $tmp469;
                        str467 = $tmp468;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
                        panda$core$UInt8$init$builtin_uint8(&$tmp472, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp471, $tmp472);
                        panda$core$Bit $tmp473 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str467, $tmp471);
                        if ($tmp473.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token459, &$s474);
                            $tmp476 = NULL;
                            $returnValue475 = $tmp476;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
                            $tmp466 = 0;
                            goto $l464;
                            $l477:;
                            $tmp452 = 0;
                            goto $l450;
                            $l478:;
                            return $returnValue475;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result453, str467);
                    }
                    $tmp466 = -1;
                    goto $l464;
                    $l464:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) str467));
                    str467 = NULL;
                    switch ($tmp466) {
                        case -1: goto $l480;
                        case 0: goto $l477;
                    }
                    $l480:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp481, 0);
                panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13461.$rawValue, $tmp481);
                if ($tmp482.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token459, &$s483);
                    $tmp484 = NULL;
                    $returnValue475 = $tmp484;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
                    $tmp452 = 1;
                    goto $l450;
                    $l485:;
                    return $returnValue475;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp487, 107);
                panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13461.$rawValue, $tmp487);
                if ($tmp488.value) {
                {
                    int $tmp491;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp493 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape492 = $tmp493;
                        panda$core$Int64$init$builtin_int64(&$tmp494, 0);
                        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape492.kind.$rawValue, $tmp494);
                        if ($tmp495.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token459, &$s496);
                            $tmp497 = NULL;
                            $returnValue475 = $tmp497;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
                            $tmp491 = 0;
                            goto $l489;
                            $l498:;
                            $tmp452 = 2;
                            goto $l450;
                            $l499:;
                            return $returnValue475;
                        }
                        }
                        panda$core$String* $tmp504 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape492);
                        $tmp503 = $tmp504;
                        $tmp502 = $tmp503;
                        escapeText501 = $tmp502;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
                        panda$collections$ListView* $tmp508 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText501);
                        $tmp507 = $tmp508;
                        panda$core$Int64$init$builtin_int64(&$tmp509, 0);
                        ITable* $tmp510 = $tmp507->$class->itable;
                        while ($tmp510->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp510 = $tmp510->next;
                        }
                        $fn512 $tmp511 = $tmp510->methods[0];
                        panda$core$Object* $tmp513 = $tmp511($tmp507, $tmp509);
                        $tmp506 = $tmp513;
                        c505 = ((panda$core$Char8$wrapper*) $tmp506)->value;
                        panda$core$Panda$unref$panda$core$Object$Q($tmp506);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
                        {
                            $match$306_21514 = c505;
                            panda$core$UInt8$init$builtin_uint8(&$tmp516, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp515, $tmp516);
                            panda$core$Bit $tmp517 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp515);
                            if ($tmp517.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp519, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp518, $tmp519);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp518);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp521, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp520, $tmp521);
                            panda$core$Bit $tmp522 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp520);
                            if ($tmp522.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp524, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp523, $tmp524);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp523);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp526, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp525, $tmp526);
                            panda$core$Bit $tmp527 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp525);
                            if ($tmp527.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp529, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp528, $tmp529);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp528);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp531, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp530, $tmp531);
                            panda$core$Bit $tmp532 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp530);
                            if ($tmp532.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp534, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp533, $tmp534);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp533);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp536, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp535, $tmp536);
                            panda$core$Bit $tmp537 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp535);
                            if ($tmp537.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp539, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp538, $tmp539);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp538);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp541, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp540, $tmp541);
                            panda$core$Bit $tmp542 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp540);
                            if ($tmp542.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp544, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp543, $tmp544);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp543);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp546, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp545, $tmp546);
                            panda$core$Bit $tmp547 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp545);
                            if ($tmp547.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp549, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp548, $tmp549);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp548);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp551, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp550, $tmp551);
                            panda$core$Bit $tmp552 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21514, $tmp550);
                            if ($tmp552.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp554, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp553, $tmp554);
                                panda$core$MutableString$append$panda$core$Char8(result453, $tmp553);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token459, &$s555);
                                $tmp556 = NULL;
                                $returnValue475 = $tmp556;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
                                $tmp491 = 1;
                                goto $l489;
                                $l557:;
                                $tmp452 = 3;
                                goto $l450;
                                $l558:;
                                return $returnValue475;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp562 = panda$core$String$start$R$panda$core$String$Index(escapeText501);
                        panda$core$String$Index $tmp563 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText501, $tmp562);
                        panda$core$Bit$init$builtin_bit(&$tmp564, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp561, ((panda$core$String$Index$nullable) { $tmp563, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp564);
                        panda$core$String* $tmp565 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText501, $tmp561);
                        $tmp560 = $tmp565;
                        panda$core$MutableString$append$panda$core$String(result453, $tmp560);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
                    }
                    $tmp491 = -1;
                    goto $l489;
                    $l489:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) escapeText501));
                    escapeText501 = NULL;
                    switch ($tmp491) {
                        case -1: goto $l566;
                        case 1: goto $l557;
                        case 0: goto $l498;
                    }
                    $l566:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp567, 96);
                panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13461.$rawValue, $tmp567);
                if ($tmp568.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token459);
                    panda$core$String* $tmp571 = panda$core$MutableString$finish$R$panda$core$String(result453);
                    $tmp570 = $tmp571;
                    $tmp569 = $tmp570;
                    $returnValue475 = $tmp569;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
                    $tmp452 = 4;
                    goto $l450;
                    $l572:;
                    return $returnValue475;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp574, 101);
                panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13461.$rawValue, $tmp574);
                if ($tmp575.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token459);
                    panda$core$String* $tmp578 = panda$core$MutableString$finish$R$panda$core$String(result453);
                    $tmp577 = $tmp578;
                    $tmp576 = $tmp577;
                    $returnValue475 = $tmp576;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
                    $tmp452 = 5;
                    goto $l450;
                    $l579:;
                    return $returnValue475;
                }
                }
                else {
                {
                    panda$core$String* $tmp582 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token459);
                    $tmp581 = $tmp582;
                    panda$core$MutableString$append$panda$core$String(result453, $tmp581);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l458:;
    }
    $tmp452 = -1;
    goto $l450;
    $l450:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result453));
    result453 = NULL;
    switch ($tmp452) {
        case 3: goto $l558;
        case 2: goto $l499;
        case 0: goto $l478;
        case 5: goto $l579;
        case -1: goto $l583;
        case 4: goto $l572;
        case 1: goto $l485;
    }
    $l583:;
    if (false) goto $l584; else goto $l585;
    $l585:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s586, (panda$core$Int64) { 283 }, &$s587);
    abort();
    $l584:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot591 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp592;
    org$pandalanguage$pandac$ASTNode* $tmp593;
    panda$core$Int64 $tmp595;
    org$pandalanguage$pandac$ASTNode* call599 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp600;
    org$pandalanguage$pandac$ASTNode* $tmp601;
    panda$core$Int64 $tmp603;
    panda$collections$ImmutableArray* $tmp606;
    org$pandalanguage$pandac$ASTNode* stringType608 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp609;
    org$pandalanguage$pandac$ASTNode* $tmp610;
    panda$core$Int64 $tmp612;
    org$pandalanguage$pandac$ASTNode* $returnValue616;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    org$pandalanguage$pandac$ASTNode* $tmp618;
    panda$core$Int64 $tmp620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp623;
    panda$core$Int64 $tmp624;
    int $tmp590;
    {
        org$pandalanguage$pandac$ASTNode* $tmp594 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp595, 15);
        org$pandalanguage$pandac$Position $tmp597 = (($fn596) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp594, $tmp595, $tmp597, p_expr, &$s598);
        $tmp593 = $tmp594;
        $tmp592 = $tmp593;
        dot591 = $tmp592;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
        org$pandalanguage$pandac$ASTNode* $tmp602 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp603, 8);
        org$pandalanguage$pandac$Position $tmp605 = (($fn604) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp607 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp607);
        $tmp606 = $tmp607;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp602, $tmp603, $tmp605, dot591, $tmp606);
        $tmp601 = $tmp602;
        $tmp600 = $tmp601;
        call599 = $tmp600;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
        org$pandalanguage$pandac$ASTNode* $tmp611 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp612, 42);
        org$pandalanguage$pandac$Position $tmp614 = (($fn613) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp611, $tmp612, $tmp614, &$s615);
        $tmp610 = $tmp611;
        $tmp609 = $tmp610;
        stringType608 = $tmp609;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
        org$pandalanguage$pandac$ASTNode* $tmp619 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp620, 4);
        org$pandalanguage$pandac$Position $tmp622 = (($fn621) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp624, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp623, $tmp624);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp619, $tmp620, $tmp622, call599, $tmp623, stringType608);
        $tmp618 = $tmp619;
        $tmp617 = $tmp618;
        $returnValue616 = $tmp617;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
        $tmp590 = 0;
        goto $l588;
        $l625:;
        return $returnValue616;
    }
    $l588:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stringType608));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) call599));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) dot591));
    dot591 = NULL;
    call599 = NULL;
    stringType608 = NULL;
    switch ($tmp590) {
        case 0: goto $l625;
    }
    $l627:;
    if (false) goto $l628; else goto $l629;
    $l629:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s630, (panda$core$Int64) { 333 }, &$s631);
    abort();
    $l628:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1635;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto639 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp640;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp641;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp643;
    panda$core$Int64 $tmp644;
    org$pandalanguage$pandac$parser$Token start645;
    panda$core$Int64 $tmp648;
    panda$core$Int64 $tmp651;
    panda$core$String* $tmp654;
    panda$core$String* $tmp655;
    panda$core$String* $tmp657;
    org$pandalanguage$pandac$ASTNode* $returnValue662;
    org$pandalanguage$pandac$ASTNode* $tmp663;
    org$pandalanguage$pandac$ASTNode* result667 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp668;
    panda$core$MutableString* chunk669 = NULL;
    panda$core$MutableString* $tmp670;
    panda$core$MutableString* $tmp671;
    org$pandalanguage$pandac$parser$Token token675;
    org$pandalanguage$pandac$parser$Token$Kind $match$355_13678;
    panda$core$Int64 $tmp679;
    panda$core$String* str684 = NULL;
    panda$core$String* $tmp685;
    panda$core$String* $tmp686;
    panda$core$Char8 $tmp688;
    panda$core$UInt8 $tmp689;
    org$pandalanguage$pandac$ASTNode* $tmp692;
    panda$core$Int64 $tmp698;
    org$pandalanguage$pandac$ASTNode* $tmp701;
    panda$core$Int64 $tmp705;
    org$pandalanguage$pandac$parser$Token escape710;
    panda$core$Int64 $tmp712;
    org$pandalanguage$pandac$ASTNode* $tmp715;
    panda$core$String* escapeText720 = NULL;
    panda$core$String* $tmp721;
    panda$core$String* $tmp722;
    panda$core$Char8 c724;
    panda$core$Object* $tmp725;
    panda$collections$ListView* $tmp726;
    panda$core$Int64 $tmp728;
    panda$core$Char8 $match$374_21733;
    panda$core$Char8 $tmp734;
    panda$core$UInt8 $tmp735;
    panda$core$Char8 $tmp737;
    panda$core$UInt8 $tmp738;
    panda$core$Char8 $tmp739;
    panda$core$UInt8 $tmp740;
    panda$core$Char8 $tmp742;
    panda$core$UInt8 $tmp743;
    panda$core$Char8 $tmp744;
    panda$core$UInt8 $tmp745;
    panda$core$Char8 $tmp747;
    panda$core$UInt8 $tmp748;
    panda$core$Char8 $tmp749;
    panda$core$UInt8 $tmp750;
    panda$core$Char8 $tmp752;
    panda$core$UInt8 $tmp753;
    panda$core$Char8 $tmp754;
    panda$core$UInt8 $tmp755;
    panda$core$Char8 $tmp757;
    panda$core$UInt8 $tmp758;
    panda$core$Char8 $tmp759;
    panda$core$UInt8 $tmp760;
    panda$core$Char8 $tmp762;
    panda$core$UInt8 $tmp763;
    panda$core$Char8 $tmp764;
    panda$core$UInt8 $tmp765;
    panda$core$Bit oldAllow770;
    panda$core$Bit $tmp771;
    org$pandalanguage$pandac$ASTNode* expr772 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp773;
    org$pandalanguage$pandac$ASTNode* $tmp774;
    org$pandalanguage$pandac$ASTNode* $tmp776;
    panda$core$String* align782 = NULL;
    panda$core$String* $tmp783;
    panda$core$String* format784 = NULL;
    panda$core$String* $tmp785;
    org$pandalanguage$pandac$parser$Token$Kind $tmp786;
    panda$core$Int64 $tmp787;
    panda$core$String* $tmp789;
    panda$core$String* $tmp790;
    panda$core$String* $tmp791;
    org$pandalanguage$pandac$parser$Token$Kind $tmp793;
    panda$core$Int64 $tmp794;
    panda$core$String* $tmp799;
    panda$core$String* $tmp800;
    panda$core$String* $tmp801;
    org$pandalanguage$pandac$ASTNode* $tmp803;
    org$pandalanguage$pandac$ASTNode* formattable810 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp811;
    org$pandalanguage$pandac$ASTNode* $tmp812;
    panda$core$Int64 $tmp814;
    org$pandalanguage$pandac$ASTNode* cast818 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp819;
    org$pandalanguage$pandac$ASTNode* $tmp820;
    panda$core$Int64 $tmp822;
    org$pandalanguage$pandac$parser$Token$Kind $tmp825;
    panda$core$Int64 $tmp826;
    org$pandalanguage$pandac$ASTNode* dot827 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    panda$core$Int64 $tmp831;
    panda$collections$Array* callArgs835 = NULL;
    panda$collections$Array* $tmp836;
    panda$collections$Array* $tmp837;
    org$pandalanguage$pandac$ASTNode* $tmp839;
    panda$core$Int64 $tmp841;
    org$pandalanguage$pandac$ASTNode* $tmp842;
    org$pandalanguage$pandac$ASTNode* $tmp843;
    org$pandalanguage$pandac$ASTNode* $tmp844;
    panda$core$Int64 $tmp846;
    panda$collections$ImmutableArray* $tmp849;
    org$pandalanguage$pandac$parser$Token$Kind $tmp852;
    panda$core$Int64 $tmp853;
    org$pandalanguage$pandac$ASTNode* $tmp856;
    org$pandalanguage$pandac$ASTNode* $tmp865;
    org$pandalanguage$pandac$ASTNode* $tmp866;
    org$pandalanguage$pandac$ASTNode* $tmp867;
    org$pandalanguage$pandac$ASTNode* pandaType869 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp870;
    org$pandalanguage$pandac$ASTNode* $tmp871;
    panda$core$Int64 $tmp873;
    org$pandalanguage$pandac$ASTNode* callTarget877 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp878;
    org$pandalanguage$pandac$ASTNode* $tmp879;
    panda$core$Int64 $tmp881;
    panda$collections$Array* callArgs885 = NULL;
    panda$collections$Array* $tmp886;
    panda$collections$Array* $tmp887;
    org$pandalanguage$pandac$ASTNode* $tmp889;
    panda$core$Int64 $tmp891;
    org$pandalanguage$pandac$ASTNode* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp893;
    org$pandalanguage$pandac$ASTNode* $tmp894;
    panda$core$Int64 $tmp896;
    panda$collections$ImmutableArray* $tmp899;
    panda$core$String* text902 = NULL;
    panda$core$String* $tmp903;
    panda$core$String* $tmp904;
    panda$core$MutableString* $tmp906;
    panda$core$MutableString* $tmp907;
    panda$core$MutableString* $tmp908;
    org$pandalanguage$pandac$ASTNode* $tmp918;
    org$pandalanguage$pandac$ASTNode* $tmp919;
    org$pandalanguage$pandac$ASTNode* $tmp920;
    org$pandalanguage$pandac$ASTNode* $tmp921;
    panda$core$Int64 $tmp923;
    org$pandalanguage$pandac$ASTNode* $tmp925;
    org$pandalanguage$pandac$ASTNode* $tmp926;
    org$pandalanguage$pandac$ASTNode* $tmp927;
    org$pandalanguage$pandac$ASTNode* $tmp929;
    org$pandalanguage$pandac$ASTNode* $tmp930;
    org$pandalanguage$pandac$ASTNode* $tmp931;
    org$pandalanguage$pandac$ASTNode* $tmp935;
    panda$core$String* $tmp940;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp941;
    panda$core$Bit $tmp944;
    panda$core$String* $tmp947;
    org$pandalanguage$pandac$ASTNode* $tmp949;
    org$pandalanguage$pandac$ASTNode* $tmp950;
    org$pandalanguage$pandac$ASTNode* $tmp951;
    panda$core$Int64 $tmp953;
    panda$core$String* $tmp954;
    int $tmp634;
    {
        $atPre1635 = self->allowLambdas;
        int $tmp638;
        {
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp642 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
            panda$core$Int64$init$builtin_int64(&$tmp644, 10);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp643, $tmp644);
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp642, self, $tmp643);
            $tmp641 = $tmp642;
            $tmp640 = $tmp641;
            auto639 = $tmp640;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
            org$pandalanguage$pandac$parser$Token $tmp646 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start645 = $tmp646;
            panda$core$Int64$init$builtin_int64(&$tmp648, 8);
            panda$core$Bit $tmp649 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start645.kind.$rawValue, $tmp648);
            bool $tmp647 = $tmp649.value;
            if (!$tmp647) goto $l650;
            panda$core$Int64$init$builtin_int64(&$tmp651, 7);
            panda$core$Bit $tmp652 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start645.kind.$rawValue, $tmp651);
            $tmp647 = $tmp652.value;
            $l650:;
            panda$core$Bit $tmp653 = { $tmp647 };
            if ($tmp653.value) {
            {
                panda$core$String* $tmp658 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start645);
                $tmp657 = $tmp658;
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s656, $tmp657);
                $tmp655 = $tmp659;
                panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp655, &$s660);
                $tmp654 = $tmp661;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start645, $tmp654);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
                $tmp663 = NULL;
                $returnValue662 = $tmp663;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
                $tmp638 = 0;
                goto $l636;
                $l664:;
                $tmp634 = 0;
                goto $l632;
                $l665:;
                return $returnValue662;
            }
            }
            $tmp668 = NULL;
            result667 = $tmp668;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
            panda$core$MutableString* $tmp672 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp672);
            $tmp671 = $tmp672;
            $tmp670 = $tmp671;
            chunk669 = $tmp670;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
            $l673:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp676 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token675 = $tmp676;
                panda$core$Bit $tmp677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token675.kind.$rawValue, start645.kind.$rawValue);
                if ($tmp677.value) {
                {
                    goto $l674;
                }
                }
                {
                    $match$355_13678 = token675.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp679, 13);
                    panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13678.$rawValue, $tmp679);
                    if ($tmp680.value) {
                    {
                        int $tmp683;
                        {
                            panda$core$String* $tmp687 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token675);
                            $tmp686 = $tmp687;
                            $tmp685 = $tmp686;
                            str684 = $tmp685;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
                            panda$core$UInt8$init$builtin_uint8(&$tmp689, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp688, $tmp689);
                            panda$core$Bit $tmp690 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str684, $tmp688);
                            if ($tmp690.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start645, &$s691);
                                $tmp692 = NULL;
                                $returnValue662 = $tmp692;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
                                $tmp683 = 0;
                                goto $l681;
                                $l693:;
                                $tmp638 = 1;
                                goto $l636;
                                $l694:;
                                $tmp634 = 1;
                                goto $l632;
                                $l695:;
                                return $returnValue662;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk669, str684);
                        }
                        $tmp683 = -1;
                        goto $l681;
                        $l681:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) str684));
                        str684 = NULL;
                        switch ($tmp683) {
                            case -1: goto $l697;
                            case 0: goto $l693;
                        }
                        $l697:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp698, 0);
                    panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13678.$rawValue, $tmp698);
                    if ($tmp699.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start645, &$s700);
                        $tmp701 = NULL;
                        $returnValue662 = $tmp701;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
                        $tmp638 = 2;
                        goto $l636;
                        $l702:;
                        $tmp634 = 2;
                        goto $l632;
                        $l703:;
                        return $returnValue662;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp705, 107);
                    panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13678.$rawValue, $tmp705);
                    if ($tmp706.value) {
                    {
                        int $tmp709;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp711 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape710 = $tmp711;
                            panda$core$Int64$init$builtin_int64(&$tmp712, 0);
                            panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape710.kind.$rawValue, $tmp712);
                            if ($tmp713.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start645, &$s714);
                                $tmp715 = NULL;
                                $returnValue662 = $tmp715;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
                                $tmp709 = 0;
                                goto $l707;
                                $l716:;
                                $tmp638 = 3;
                                goto $l636;
                                $l717:;
                                $tmp634 = 3;
                                goto $l632;
                                $l718:;
                                return $returnValue662;
                            }
                            }
                            panda$core$String* $tmp723 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape710);
                            $tmp722 = $tmp723;
                            $tmp721 = $tmp722;
                            escapeText720 = $tmp721;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
                            panda$collections$ListView* $tmp727 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText720);
                            $tmp726 = $tmp727;
                            panda$core$Int64$init$builtin_int64(&$tmp728, 0);
                            ITable* $tmp729 = $tmp726->$class->itable;
                            while ($tmp729->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp729 = $tmp729->next;
                            }
                            $fn731 $tmp730 = $tmp729->methods[0];
                            panda$core$Object* $tmp732 = $tmp730($tmp726, $tmp728);
                            $tmp725 = $tmp732;
                            c724 = ((panda$core$Char8$wrapper*) $tmp725)->value;
                            panda$core$Panda$unref$panda$core$Object$Q($tmp725);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
                            {
                                $match$374_21733 = c724;
                                panda$core$UInt8$init$builtin_uint8(&$tmp735, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp734, $tmp735);
                                panda$core$Bit $tmp736 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp734);
                                if ($tmp736.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp738, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp737, $tmp738);
                                    panda$core$MutableString$append$panda$core$Char8(chunk669, $tmp737);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp740, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp739, $tmp740);
                                panda$core$Bit $tmp741 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp739);
                                if ($tmp741.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp743, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp742, $tmp743);
                                    panda$core$MutableString$append$panda$core$Char8(chunk669, $tmp742);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp745, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp744, $tmp745);
                                panda$core$Bit $tmp746 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp744);
                                if ($tmp746.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp748, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp747, $tmp748);
                                    panda$core$MutableString$append$panda$core$Char8(chunk669, $tmp747);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp750, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp749, $tmp750);
                                panda$core$Bit $tmp751 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp749);
                                if ($tmp751.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp753, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp752, $tmp753);
                                    panda$core$MutableString$append$panda$core$Char8(chunk669, $tmp752);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp755, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp754, $tmp755);
                                panda$core$Bit $tmp756 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp754);
                                if ($tmp756.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp758, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp757, $tmp758);
                                    panda$core$MutableString$append$panda$core$Char8(chunk669, $tmp757);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp760, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp759, $tmp760);
                                panda$core$Bit $tmp761 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp759);
                                if ($tmp761.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp763, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp762, $tmp763);
                                    panda$core$MutableString$append$panda$core$Char8(chunk669, $tmp762);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp765, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp764, $tmp765);
                                panda$core$Bit $tmp766 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21733, $tmp764);
                                if ($tmp766.value) {
                                {
                                    {
                                        int $tmp769;
                                        {
                                            oldAllow770 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp771, false);
                                            self->allowLambdas = $tmp771;
                                            org$pandalanguage$pandac$ASTNode* $tmp775 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp774 = $tmp775;
                                            $tmp773 = $tmp774;
                                            expr772 = $tmp773;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
                                            self->allowLambdas = oldAllow770;
                                            if (((panda$core$Bit) { expr772 == NULL }).value) {
                                            {
                                                $tmp776 = NULL;
                                                $returnValue662 = $tmp776;
                                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
                                                $tmp769 = 0;
                                                goto $l767;
                                                $l777:;
                                                $tmp709 = 1;
                                                goto $l707;
                                                $l778:;
                                                $tmp638 = 4;
                                                goto $l636;
                                                $l779:;
                                                $tmp634 = 4;
                                                goto $l632;
                                                $l780:;
                                                return $returnValue662;
                                            }
                                            }
                                            $tmp783 = NULL;
                                            align782 = $tmp783;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
                                            $tmp785 = NULL;
                                            format784 = $tmp785;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
                                            panda$core$Int64$init$builtin_int64(&$tmp787, 106);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp786, $tmp787);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp788 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp786);
                                            if (((panda$core$Bit) { $tmp788.nonnull }).value) {
                                            {
                                                {
                                                    $tmp789 = align782;
                                                    panda$core$String* $tmp792 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start645);
                                                    $tmp791 = $tmp792;
                                                    $tmp790 = $tmp791;
                                                    align782 = $tmp790;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp794, 96);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp793, $tmp794);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp795 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp793);
                                            if (((panda$core$Bit) { $tmp795.nonnull }).value) {
                                            {
                                                int $tmp798;
                                                {
                                                    {
                                                        $tmp799 = format784;
                                                        panda$core$String* $tmp802 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start645);
                                                        $tmp801 = $tmp802;
                                                        $tmp800 = $tmp801;
                                                        format784 = $tmp800;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
                                                    }
                                                    if (((panda$core$Bit) { format784 == NULL }).value) {
                                                    {
                                                        $tmp803 = NULL;
                                                        $returnValue662 = $tmp803;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
                                                        $tmp798 = 0;
                                                        goto $l796;
                                                        $l804:;
                                                        $tmp769 = 1;
                                                        goto $l767;
                                                        $l805:;
                                                        $tmp709 = 2;
                                                        goto $l707;
                                                        $l806:;
                                                        $tmp638 = 5;
                                                        goto $l636;
                                                        $l807:;
                                                        $tmp634 = 5;
                                                        goto $l632;
                                                        $l808:;
                                                        return $returnValue662;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp813 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp814, 42);
                                                    org$pandalanguage$pandac$Position $tmp816 = (($fn815) expr772->$class->vtable[2])(expr772);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp813, $tmp814, $tmp816, &$s817);
                                                    $tmp812 = $tmp813;
                                                    $tmp811 = $tmp812;
                                                    formattable810 = $tmp811;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
                                                    org$pandalanguage$pandac$ASTNode* $tmp821 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp822, 4);
                                                    org$pandalanguage$pandac$Position $tmp824 = (($fn823) expr772->$class->vtable[2])(expr772);
                                                    panda$core$Int64$init$builtin_int64(&$tmp826, 90);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp825, $tmp826);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp821, $tmp822, $tmp824, expr772, $tmp825, formattable810);
                                                    $tmp820 = $tmp821;
                                                    $tmp819 = $tmp820;
                                                    cast818 = $tmp819;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
                                                    org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp831, 15);
                                                    org$pandalanguage$pandac$Position $tmp833 = (($fn832) expr772->$class->vtable[2])(expr772);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp830, $tmp831, $tmp833, cast818, &$s834);
                                                    $tmp829 = $tmp830;
                                                    $tmp828 = $tmp829;
                                                    dot827 = $tmp828;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
                                                    panda$collections$Array* $tmp838 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp838);
                                                    $tmp837 = $tmp838;
                                                    $tmp836 = $tmp837;
                                                    callArgs835 = $tmp836;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp837));
                                                    org$pandalanguage$pandac$ASTNode* $tmp840 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp841, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp840, $tmp841, start645.position, format784);
                                                    $tmp839 = $tmp840;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs835, ((panda$core$Object*) $tmp839));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
                                                    {
                                                        $tmp842 = expr772;
                                                        org$pandalanguage$pandac$ASTNode* $tmp845 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp846, 8);
                                                        org$pandalanguage$pandac$Position $tmp848 = (($fn847) expr772->$class->vtable[2])(expr772);
                                                        panda$collections$ImmutableArray* $tmp850 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs835);
                                                        $tmp849 = $tmp850;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp845, $tmp846, $tmp848, dot827, $tmp849);
                                                        $tmp844 = $tmp845;
                                                        $tmp843 = $tmp844;
                                                        expr772 = $tmp843;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
                                                    }
                                                }
                                                $tmp798 = -1;
                                                goto $l796;
                                                $l796:;
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) callArgs835));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) dot827));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cast818));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) formattable810));
                                                formattable810 = NULL;
                                                cast818 = NULL;
                                                dot827 = NULL;
                                                callArgs835 = NULL;
                                                switch ($tmp798) {
                                                    case 0: goto $l804;
                                                    case -1: goto $l851;
                                                }
                                                $l851:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp853, 101);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp852, $tmp853);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp855 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp852, &$s854);
                                            if (((panda$core$Bit) { !$tmp855.nonnull }).value) {
                                            {
                                                $tmp856 = NULL;
                                                $returnValue662 = $tmp856;
                                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
                                                $tmp769 = 2;
                                                goto $l767;
                                                $l857:;
                                                $tmp709 = 3;
                                                goto $l707;
                                                $l858:;
                                                $tmp638 = 6;
                                                goto $l636;
                                                $l859:;
                                                $tmp634 = 6;
                                                goto $l632;
                                                $l860:;
                                                return $returnValue662;
                                            }
                                            }
                                            if (((panda$core$Bit) { align782 != NULL }).value) {
                                            {
                                                int $tmp864;
                                                {
                                                    if (((panda$core$Bit) { format784 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp865 = expr772;
                                                            org$pandalanguage$pandac$ASTNode* $tmp868 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr772);
                                                            $tmp867 = $tmp868;
                                                            $tmp866 = $tmp867;
                                                            expr772 = $tmp866;
                                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
                                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp865));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp872 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp873, 42);
                                                    org$pandalanguage$pandac$Position $tmp875 = (($fn874) expr772->$class->vtable[2])(expr772);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp872, $tmp873, $tmp875, &$s876);
                                                    $tmp871 = $tmp872;
                                                    $tmp870 = $tmp871;
                                                    pandaType869 = $tmp870;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
                                                    org$pandalanguage$pandac$ASTNode* $tmp880 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp881, 15);
                                                    org$pandalanguage$pandac$Position $tmp883 = (($fn882) expr772->$class->vtable[2])(expr772);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp880, $tmp881, $tmp883, pandaType869, &$s884);
                                                    $tmp879 = $tmp880;
                                                    $tmp878 = $tmp879;
                                                    callTarget877 = $tmp878;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp878));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
                                                    panda$collections$Array* $tmp888 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp888);
                                                    $tmp887 = $tmp888;
                                                    $tmp886 = $tmp887;
                                                    callArgs885 = $tmp886;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs885, ((panda$core$Object*) expr772));
                                                    org$pandalanguage$pandac$ASTNode* $tmp890 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp891, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp890, $tmp891, start645.position, align782);
                                                    $tmp889 = $tmp890;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs885, ((panda$core$Object*) $tmp889));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp889));
                                                    {
                                                        $tmp892 = expr772;
                                                        org$pandalanguage$pandac$ASTNode* $tmp895 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp896, 8);
                                                        org$pandalanguage$pandac$Position $tmp898 = (($fn897) expr772->$class->vtable[2])(expr772);
                                                        panda$collections$ImmutableArray* $tmp900 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs885);
                                                        $tmp899 = $tmp900;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp895, $tmp896, $tmp898, callTarget877, $tmp899);
                                                        $tmp894 = $tmp895;
                                                        $tmp893 = $tmp894;
                                                        expr772 = $tmp893;
                                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp894));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
                                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
                                                    }
                                                }
                                                $tmp864 = -1;
                                                goto $l862;
                                                $l862:;
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) callArgs885));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) callTarget877));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) pandaType869));
                                                pandaType869 = NULL;
                                                callTarget877 = NULL;
                                                callArgs885 = NULL;
                                                switch ($tmp864) {
                                                    case -1: goto $l901;
                                                }
                                                $l901:;
                                            }
                                            }
                                            panda$core$String* $tmp905 = panda$core$MutableString$finish$R$panda$core$String(chunk669);
                                            $tmp904 = $tmp905;
                                            $tmp903 = $tmp904;
                                            text902 = $tmp903;
                                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
                                            {
                                                $tmp906 = chunk669;
                                                panda$core$MutableString* $tmp909 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp909);
                                                $tmp908 = $tmp909;
                                                $tmp907 = $tmp908;
                                                chunk669 = $tmp907;
                                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
                                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp906));
                                            }
                                            ITable* $tmp912 = ((panda$core$Equatable*) text902)->$class->itable;
                                            while ($tmp912->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                                                $tmp912 = $tmp912->next;
                                            }
                                            $fn914 $tmp913 = $tmp912->methods[1];
                                            panda$core$Bit $tmp915 = $tmp913(((panda$core$Equatable*) text902), ((panda$core$Equatable*) &$s911));
                                            bool $tmp910 = $tmp915.value;
                                            if ($tmp910) goto $l916;
                                            $tmp910 = ((panda$core$Bit) { result667 != NULL }).value;
                                            $l916:;
                                            panda$core$Bit $tmp917 = { $tmp910 };
                                            if ($tmp917.value) {
                                            {
                                                {
                                                    $tmp918 = result667;
                                                    org$pandalanguage$pandac$ASTNode* $tmp922 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp923, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp922, $tmp923, start645.position, text902);
                                                    $tmp921 = $tmp922;
                                                    org$pandalanguage$pandac$ASTNode* $tmp924 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result667, $tmp921);
                                                    $tmp920 = $tmp924;
                                                    $tmp919 = $tmp920;
                                                    result667 = $tmp919;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
                                                }
                                                {
                                                    $tmp925 = result667;
                                                    org$pandalanguage$pandac$ASTNode* $tmp928 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result667, expr772);
                                                    $tmp927 = $tmp928;
                                                    $tmp926 = $tmp927;
                                                    result667 = $tmp926;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp925));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp929 = result667;
                                                    org$pandalanguage$pandac$ASTNode* $tmp932 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr772);
                                                    $tmp931 = $tmp932;
                                                    $tmp930 = $tmp931;
                                                    result667 = $tmp930;
                                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
                                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
                                                }
                                            }
                                            }
                                        }
                                        $tmp769 = -1;
                                        goto $l767;
                                        $l767:;
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) text902));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) format784));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) align782));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr772));
                                        expr772 = NULL;
                                        text902 = NULL;
                                        switch ($tmp769) {
                                            case -1: goto $l933;
                                            case 2: goto $l857;
                                            case 0: goto $l777;
                                            case 1: goto $l805;
                                        }
                                        $l933:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token675, &$s934);
                                    $tmp935 = NULL;
                                    $returnValue662 = $tmp935;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
                                    $tmp709 = 4;
                                    goto $l707;
                                    $l936:;
                                    $tmp638 = 7;
                                    goto $l636;
                                    $l937:;
                                    $tmp634 = 7;
                                    goto $l632;
                                    $l938:;
                                    return $returnValue662;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp942 = panda$core$String$start$R$panda$core$String$Index(escapeText720);
                            panda$core$String$Index $tmp943 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText720, $tmp942);
                            panda$core$Bit$init$builtin_bit(&$tmp944, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp941, ((panda$core$String$Index$nullable) { $tmp943, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp944);
                            panda$core$String* $tmp945 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText720, $tmp941);
                            $tmp940 = $tmp945;
                            panda$core$MutableString$append$panda$core$String(chunk669, $tmp940);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
                        }
                        $tmp709 = -1;
                        goto $l707;
                        $l707:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) escapeText720));
                        escapeText720 = NULL;
                        switch ($tmp709) {
                            case 4: goto $l936;
                            case -1: goto $l946;
                            case 1: goto $l778;
                            case 0: goto $l716;
                            case 3: goto $l858;
                            case 2: goto $l806;
                        }
                        $l946:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp948 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token675);
                        $tmp947 = $tmp948;
                        panda$core$MutableString$append$panda$core$String(chunk669, $tmp947);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l674:;
            org$pandalanguage$pandac$ASTNode* $tmp952 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp953, 38);
            panda$core$String* $tmp955 = panda$core$MutableString$finish$R$panda$core$String(chunk669);
            $tmp954 = $tmp955;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp952, $tmp953, start645.position, $tmp954);
            $tmp951 = $tmp952;
            org$pandalanguage$pandac$ASTNode* $tmp956 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result667, $tmp951);
            $tmp950 = $tmp956;
            $tmp949 = $tmp950;
            $returnValue662 = $tmp949;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
            $tmp638 = 8;
            goto $l636;
            $l957:;
            $tmp634 = 8;
            goto $l632;
            $l958:;
            return $returnValue662;
        }
        $l636:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) chunk669));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result667));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) auto639));
        auto639 = NULL;
        chunk669 = NULL;
        switch ($tmp638) {
            case 7: goto $l937;
            case 2: goto $l702;
            case 0: goto $l664;
            case 1: goto $l694;
            case 4: goto $l779;
            case 3: goto $l717;
            case 8: goto $l957;
            case 6: goto $l859;
            case 5: goto $l807;
        }
        $l960:;
        if (false) goto $l961; else goto $l962;
        $l962:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s963, (panda$core$Int64) { 341 }, &$s964);
        abort();
        $l961:;
    }
    $tmp634 = -1;
    goto $l632;
    $l632:;
    panda$core$Bit $tmp966 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1635);
    if ($tmp966.value) goto $l967; else goto $l968;
    $l968:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s969, (panda$core$Int64) { 341 }, &$s970);
    abort();
    $l967:;
    switch ($tmp634) {
        case 1: goto $l695;
        case 4: goto $l780;
        case 7: goto $l938;
        case 8: goto $l958;
        case 3: goto $l718;
        case 5: goto $l808;
        case 2: goto $l703;
        case 0: goto $l665;
        case -1: goto $l965;
        case 6: goto $l860;
    }
    $l965:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start974;
    org$pandalanguage$pandac$parser$Token$Kind $tmp975;
    panda$core$Int64 $tmp976;
    org$pandalanguage$pandac$ASTNode* $returnValue979;
    org$pandalanguage$pandac$ASTNode* $tmp980;
    org$pandalanguage$pandac$ASTNode* expr983 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp984;
    org$pandalanguage$pandac$ASTNode* $tmp985;
    org$pandalanguage$pandac$ASTNode* $tmp987;
    org$pandalanguage$pandac$ASTNode* $match$460_9993 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp994;
    panda$core$Int64 $tmp995;
    org$pandalanguage$pandac$Position firstPosition997;
    panda$core$String* firstName999 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1001;
    panda$core$Int64 $tmp1002;
    panda$collections$Array* parameters1007 = NULL;
    panda$collections$Array* $tmp1008;
    panda$collections$Array* $tmp1009;
    org$pandalanguage$pandac$ASTNode* firstType1011 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    org$pandalanguage$pandac$ASTNode* $tmp1013;
    org$pandalanguage$pandac$ASTNode* $tmp1015;
    org$pandalanguage$pandac$ASTNode* $tmp1020;
    panda$core$Int64 $tmp1022;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1026;
    panda$core$Int64 $tmp1027;
    org$pandalanguage$pandac$parser$Token$nullable nextName1032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1033;
    panda$core$Int64 $tmp1034;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1037;
    panda$core$Int64 $tmp1038;
    org$pandalanguage$pandac$ASTNode* $tmp1041;
    org$pandalanguage$pandac$ASTNode* nextType1047 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1048;
    org$pandalanguage$pandac$ASTNode* $tmp1049;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    org$pandalanguage$pandac$ASTNode* $tmp1057;
    panda$core$Int64 $tmp1059;
    panda$core$String* $tmp1060;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1063;
    panda$core$Int64 $tmp1064;
    org$pandalanguage$pandac$ASTNode* $tmp1067;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1072;
    panda$core$Int64 $tmp1073;
    org$pandalanguage$pandac$ASTNode* $tmp1076;
    org$pandalanguage$pandac$ASTNode* body1081 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1082;
    org$pandalanguage$pandac$ASTNode* $tmp1083;
    org$pandalanguage$pandac$ASTNode* $tmp1085;
    org$pandalanguage$pandac$ASTNode* $tmp1090;
    org$pandalanguage$pandac$ASTNode* $tmp1091;
    panda$core$Int64 $tmp1093;
    panda$collections$ImmutableArray* $tmp1094;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1101;
    panda$core$Int64 $tmp1102;
    panda$collections$Array* parameters1107 = NULL;
    panda$collections$Array* $tmp1108;
    panda$collections$Array* $tmp1109;
    panda$core$Bit validLambda1111;
    panda$core$Bit $tmp1112;
    org$pandalanguage$pandac$ASTNode* nextExpr1118 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1119;
    org$pandalanguage$pandac$ASTNode* $tmp1120;
    org$pandalanguage$pandac$ASTNode* $tmp1122;
    org$pandalanguage$pandac$ASTNode* $tmp1130;
    panda$core$Int64 $tmp1135;
    panda$core$Bit $tmp1137;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1141;
    panda$core$Int64 $tmp1142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1144;
    panda$core$Int64 $tmp1145;
    org$pandalanguage$pandac$ASTNode* $tmp1148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1155;
    panda$core$Int64 $tmp1156;
    org$pandalanguage$pandac$ASTNode* body1162 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1163;
    org$pandalanguage$pandac$ASTNode* $tmp1164;
    org$pandalanguage$pandac$ASTNode* $tmp1166;
    org$pandalanguage$pandac$ASTNode* $tmp1172;
    org$pandalanguage$pandac$ASTNode* $tmp1173;
    panda$core$Int64 $tmp1175;
    panda$collections$ImmutableArray* $tmp1176;
    org$pandalanguage$pandac$ASTNode* $tmp1185;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1191;
    panda$core$Int64 $tmp1192;
    org$pandalanguage$pandac$ASTNode* $tmp1195;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1199;
    panda$core$Int64 $tmp1200;
    panda$collections$Array* parameters1205 = NULL;
    panda$collections$Array* $tmp1206;
    panda$collections$Array* $tmp1207;
    org$pandalanguage$pandac$ASTNode* body1209 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1210;
    org$pandalanguage$pandac$ASTNode* $tmp1211;
    org$pandalanguage$pandac$ASTNode* $tmp1213;
    org$pandalanguage$pandac$ASTNode* $tmp1218;
    org$pandalanguage$pandac$ASTNode* $tmp1219;
    panda$core$Int64 $tmp1221;
    panda$collections$ImmutableArray* $tmp1222;
    org$pandalanguage$pandac$ASTNode* $tmp1229;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1236;
    panda$core$Int64 $tmp1237;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1239;
    panda$core$Int64 $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1242;
    panda$collections$Array* arguments1247 = NULL;
    panda$collections$Array* $tmp1248;
    panda$collections$Array* $tmp1249;
    org$pandalanguage$pandac$ASTNode* nextExpr1256 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1257;
    org$pandalanguage$pandac$ASTNode* $tmp1258;
    org$pandalanguage$pandac$ASTNode* $tmp1260;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1268;
    panda$core$Int64 $tmp1269;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1271;
    panda$core$Int64 $tmp1272;
    org$pandalanguage$pandac$ASTNode* $tmp1275;
    int $tmp973;
    {
        panda$core$Int64$init$builtin_int64(&$tmp976, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp975, $tmp976);
        org$pandalanguage$pandac$parser$Token$nullable $tmp978 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp975, &$s977);
        start974 = $tmp978;
        if (((panda$core$Bit) { !start974.nonnull }).value) {
        {
            $tmp980 = NULL;
            $returnValue979 = $tmp980;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
            $tmp973 = 0;
            goto $l971;
            $l981:;
            return $returnValue979;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp986 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp985 = $tmp986;
        $tmp984 = $tmp985;
        expr983 = $tmp984;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
        if (((panda$core$Bit) { expr983 == NULL }).value) {
        {
            $tmp987 = NULL;
            $returnValue979 = $tmp987;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
            $tmp973 = 1;
            goto $l971;
            $l988:;
            return $returnValue979;
        }
        }
        int $tmp992;
        {
            $tmp994 = expr983;
            $match$460_9993 = $tmp994;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
            panda$core$Int64$init$builtin_int64(&$tmp995, 20);
            panda$core$Bit $tmp996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_9993->$rawValue, $tmp995);
            if ($tmp996.value) {
            {
                org$pandalanguage$pandac$Position* $tmp998 = ((org$pandalanguage$pandac$Position*) ((char*) $match$460_9993->$data + 0));
                firstPosition997 = *$tmp998;
                panda$core$String** $tmp1000 = ((panda$core$String**) ((char*) $match$460_9993->$data + 16));
                firstName999 = *$tmp1000;
                panda$core$Int64$init$builtin_int64(&$tmp1002, 96);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1001, $tmp1002);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1003 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1001);
                if (((panda$core$Bit) { $tmp1003.nonnull }).value) {
                {
                    int $tmp1006;
                    {
                        panda$collections$Array* $tmp1010 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1010);
                        $tmp1009 = $tmp1010;
                        $tmp1008 = $tmp1009;
                        parameters1007 = $tmp1008;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
                        org$pandalanguage$pandac$ASTNode* $tmp1014 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1013 = $tmp1014;
                        $tmp1012 = $tmp1013;
                        firstType1011 = $tmp1012;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
                        if (((panda$core$Bit) { firstType1011 == NULL }).value) {
                        {
                            $tmp1015 = NULL;
                            $returnValue979 = $tmp1015;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
                            $tmp1006 = 0;
                            goto $l1004;
                            $l1016:;
                            $tmp992 = 0;
                            goto $l990;
                            $l1017:;
                            $tmp973 = 2;
                            goto $l971;
                            $l1018:;
                            return $returnValue979;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1021 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1022, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1021, $tmp1022, firstPosition997, firstName999, firstType1011);
                        $tmp1020 = $tmp1021;
                        panda$collections$Array$add$panda$collections$Array$T(parameters1007, ((panda$core$Object*) $tmp1020));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
                        $l1023:;
                        panda$core$Int64$init$builtin_int64(&$tmp1027, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1026, $tmp1027);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1028 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1026);
                        bool $tmp1025 = ((panda$core$Bit) { $tmp1028.nonnull }).value;
                        if (!$tmp1025) goto $l1024;
                        {
                            int $tmp1031;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp1034, 49);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1033, $tmp1034);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1033, &$s1035);
                                nextName1032 = $tmp1036;
                                panda$core$Int64$init$builtin_int64(&$tmp1038, 96);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1037, $tmp1038);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1040 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1037, &$s1039);
                                if (((panda$core$Bit) { !$tmp1040.nonnull }).value) {
                                {
                                    $tmp1041 = NULL;
                                    $returnValue979 = $tmp1041;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
                                    $tmp1031 = 0;
                                    goto $l1029;
                                    $l1042:;
                                    $tmp1006 = 1;
                                    goto $l1004;
                                    $l1043:;
                                    $tmp992 = 1;
                                    goto $l990;
                                    $l1044:;
                                    $tmp973 = 3;
                                    goto $l971;
                                    $l1045:;
                                    return $returnValue979;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1050 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1049 = $tmp1050;
                                $tmp1048 = $tmp1049;
                                nextType1047 = $tmp1048;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
                                if (((panda$core$Bit) { nextType1047 == NULL }).value) {
                                {
                                    $tmp1051 = NULL;
                                    $returnValue979 = $tmp1051;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
                                    $tmp1031 = 1;
                                    goto $l1029;
                                    $l1052:;
                                    $tmp1006 = 2;
                                    goto $l1004;
                                    $l1053:;
                                    $tmp992 = 2;
                                    goto $l990;
                                    $l1054:;
                                    $tmp973 = 4;
                                    goto $l971;
                                    $l1055:;
                                    return $returnValue979;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1058 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1059, 31);
                                panda$core$String* $tmp1061 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName1032.value));
                                $tmp1060 = $tmp1061;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1058, $tmp1059, ((org$pandalanguage$pandac$parser$Token) nextName1032.value).position, $tmp1060, nextType1047);
                                $tmp1057 = $tmp1058;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1007, ((panda$core$Object*) $tmp1057));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
                            }
                            $tmp1031 = -1;
                            goto $l1029;
                            $l1029:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) nextType1047));
                            nextType1047 = NULL;
                            switch ($tmp1031) {
                                case 0: goto $l1042;
                                case 1: goto $l1052;
                                case -1: goto $l1062;
                            }
                            $l1062:;
                        }
                        goto $l1023;
                        $l1024:;
                        panda$core$Int64$init$builtin_int64(&$tmp1064, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1063, $tmp1064);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1066 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1063, &$s1065);
                        if (((panda$core$Bit) { !$tmp1066.nonnull }).value) {
                        {
                            $tmp1067 = NULL;
                            $returnValue979 = $tmp1067;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
                            $tmp1006 = 3;
                            goto $l1004;
                            $l1068:;
                            $tmp992 = 3;
                            goto $l990;
                            $l1069:;
                            $tmp973 = 5;
                            goto $l971;
                            $l1070:;
                            return $returnValue979;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1073, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1072, $tmp1073);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1075 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1072, &$s1074);
                        if (((panda$core$Bit) { !$tmp1075.nonnull }).value) {
                        {
                            $tmp1076 = NULL;
                            $returnValue979 = $tmp1076;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
                            $tmp1006 = 4;
                            goto $l1004;
                            $l1077:;
                            $tmp992 = 4;
                            goto $l990;
                            $l1078:;
                            $tmp973 = 6;
                            goto $l971;
                            $l1079:;
                            return $returnValue979;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1084 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1083 = $tmp1084;
                        $tmp1082 = $tmp1083;
                        body1081 = $tmp1082;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
                        if (((panda$core$Bit) { body1081 == NULL }).value) {
                        {
                            $tmp1085 = NULL;
                            $returnValue979 = $tmp1085;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1085));
                            $tmp1006 = 5;
                            goto $l1004;
                            $l1086:;
                            $tmp992 = 5;
                            goto $l990;
                            $l1087:;
                            $tmp973 = 7;
                            goto $l971;
                            $l1088:;
                            return $returnValue979;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1092 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1093, 43);
                        panda$collections$ImmutableArray* $tmp1095 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1007);
                        $tmp1094 = $tmp1095;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1092, $tmp1093, ((org$pandalanguage$pandac$parser$Token) start974.value).position, $tmp1094, body1081);
                        $tmp1091 = $tmp1092;
                        $tmp1090 = $tmp1091;
                        $returnValue979 = $tmp1090;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
                        $tmp1006 = 6;
                        goto $l1004;
                        $l1096:;
                        $tmp992 = 6;
                        goto $l990;
                        $l1097:;
                        $tmp973 = 8;
                        goto $l971;
                        $l1098:;
                        return $returnValue979;
                    }
                    $l1004:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body1081));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) firstType1011));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1007));
                    parameters1007 = NULL;
                    firstType1011 = NULL;
                    body1081 = NULL;
                    switch ($tmp1006) {
                        case 0: goto $l1016;
                        case 4: goto $l1077;
                        case 3: goto $l1068;
                        case 2: goto $l1053;
                        case 6: goto $l1096;
                        case 1: goto $l1043;
                        case 5: goto $l1086;
                    }
                    $l1100:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1102, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1101, $tmp1102);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1103 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1101);
                if (((panda$core$Bit) { $tmp1103.nonnull }).value) {
                {
                    int $tmp1106;
                    {
                        panda$collections$Array* $tmp1110 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1110);
                        $tmp1109 = $tmp1110;
                        $tmp1108 = $tmp1109;
                        parameters1107 = $tmp1108;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1107, ((panda$core$Object*) expr983));
                        panda$core$Bit$init$builtin_bit(&$tmp1112, true);
                        validLambda1111 = $tmp1112;
                        $l1113:;
                        {
                            int $tmp1117;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1121 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1120 = $tmp1121;
                                $tmp1119 = $tmp1120;
                                nextExpr1118 = $tmp1119;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
                                if (((panda$core$Bit) { nextExpr1118 == NULL }).value) {
                                {
                                    $tmp1122 = NULL;
                                    $returnValue979 = $tmp1122;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
                                    $tmp1117 = 0;
                                    goto $l1115;
                                    $l1123:;
                                    $tmp1106 = 0;
                                    goto $l1104;
                                    $l1124:;
                                    $tmp992 = 7;
                                    goto $l990;
                                    $l1125:;
                                    $tmp973 = 9;
                                    goto $l971;
                                    $l1126:;
                                    return $returnValue979;
                                }
                                }
                                bool $tmp1128 = validLambda1111.value;
                                if (!$tmp1128) goto $l1129;
                                $tmp1130 = nextExpr1118;
                                panda$core$Bit $tmp1134;
                                if (((panda$core$Bit) { $tmp1130 != NULL }).value) goto $l1131; else goto $l1132;
                                $l1131:;
                                panda$core$Int64$init$builtin_int64(&$tmp1135, 20);
                                panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1130->$rawValue, $tmp1135);
                                $tmp1134 = $tmp1136;
                                goto $l1133;
                                $l1132:;
                                panda$core$Bit$init$builtin_bit(&$tmp1137, false);
                                $tmp1134 = $tmp1137;
                                goto $l1133;
                                $l1133:;
                                $tmp1128 = $tmp1134.value;
                                $l1129:;
                                panda$core$Bit $tmp1138 = { $tmp1128 };
                                validLambda1111 = $tmp1138;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1107, ((panda$core$Object*) nextExpr1118));
                            }
                            $tmp1117 = -1;
                            goto $l1115;
                            $l1115:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) nextExpr1118));
                            nextExpr1118 = NULL;
                            switch ($tmp1117) {
                                case 0: goto $l1123;
                                case -1: goto $l1139;
                            }
                            $l1139:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1142, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1141, $tmp1142);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1143 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1141);
                        bool $tmp1140 = ((panda$core$Bit) { $tmp1143.nonnull }).value;
                        if ($tmp1140) goto $l1113;
                        $l1114:;
                        panda$core$Int64$init$builtin_int64(&$tmp1145, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1144, $tmp1145);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1144, &$s1146);
                        if (((panda$core$Bit) { !$tmp1147.nonnull }).value) {
                        {
                            $tmp1148 = NULL;
                            $returnValue979 = $tmp1148;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
                            $tmp1106 = 1;
                            goto $l1104;
                            $l1149:;
                            $tmp992 = 8;
                            goto $l990;
                            $l1150:;
                            $tmp973 = 10;
                            goto $l971;
                            $l1151:;
                            return $returnValue979;
                        }
                        }
                        bool $tmp1153 = validLambda1111.value;
                        if (!$tmp1153) goto $l1154;
                        panda$core$Int64$init$builtin_int64(&$tmp1156, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1155, $tmp1156);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1155);
                        $tmp1153 = ((panda$core$Bit) { $tmp1157.nonnull }).value;
                        $l1154:;
                        panda$core$Bit $tmp1158 = { $tmp1153 };
                        if ($tmp1158.value) {
                        {
                            int $tmp1161;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1165 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1164 = $tmp1165;
                                $tmp1163 = $tmp1164;
                                body1162 = $tmp1163;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
                                if (((panda$core$Bit) { body1162 == NULL }).value) {
                                {
                                    $tmp1166 = NULL;
                                    $returnValue979 = $tmp1166;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
                                    $tmp1161 = 0;
                                    goto $l1159;
                                    $l1167:;
                                    $tmp1106 = 2;
                                    goto $l1104;
                                    $l1168:;
                                    $tmp992 = 9;
                                    goto $l990;
                                    $l1169:;
                                    $tmp973 = 11;
                                    goto $l971;
                                    $l1170:;
                                    return $returnValue979;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1175, 45);
                                panda$collections$ImmutableArray* $tmp1177 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1107);
                                $tmp1176 = $tmp1177;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1174, $tmp1175, ((org$pandalanguage$pandac$parser$Token) start974.value).position, $tmp1176, body1162);
                                $tmp1173 = $tmp1174;
                                $tmp1172 = $tmp1173;
                                $returnValue979 = $tmp1172;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
                                $tmp1161 = 1;
                                goto $l1159;
                                $l1178:;
                                $tmp1106 = 3;
                                goto $l1104;
                                $l1179:;
                                $tmp992 = 10;
                                goto $l990;
                                $l1180:;
                                $tmp973 = 12;
                                goto $l971;
                                $l1181:;
                                return $returnValue979;
                            }
                            $l1159:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body1162));
                            body1162 = NULL;
                            switch ($tmp1161) {
                                case 1: goto $l1178;
                                case 0: goto $l1167;
                            }
                            $l1183:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start974.value), &$s1184);
                        $tmp1185 = NULL;
                        $returnValue979 = $tmp1185;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
                        $tmp1106 = 4;
                        goto $l1104;
                        $l1186:;
                        $tmp992 = 11;
                        goto $l990;
                        $l1187:;
                        $tmp973 = 13;
                        goto $l971;
                        $l1188:;
                        return $returnValue979;
                    }
                    $l1104:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1107));
                    parameters1107 = NULL;
                    switch ($tmp1106) {
                        case 0: goto $l1124;
                        case 1: goto $l1149;
                        case 3: goto $l1179;
                        case 2: goto $l1168;
                        case 4: goto $l1186;
                    }
                    $l1190:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1192, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1191, $tmp1192);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1191, &$s1193);
                if (((panda$core$Bit) { !$tmp1194.nonnull }).value) {
                {
                    $tmp1195 = NULL;
                    $returnValue979 = $tmp1195;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
                    $tmp992 = 12;
                    goto $l990;
                    $l1196:;
                    $tmp973 = 14;
                    goto $l971;
                    $l1197:;
                    return $returnValue979;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1200, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1199, $tmp1200);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1201 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1199);
                if (((panda$core$Bit) { $tmp1201.nonnull }).value) {
                {
                    int $tmp1204;
                    {
                        panda$collections$Array* $tmp1208 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1208);
                        $tmp1207 = $tmp1208;
                        $tmp1206 = $tmp1207;
                        parameters1205 = $tmp1206;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1205, ((panda$core$Object*) expr983));
                        org$pandalanguage$pandac$ASTNode* $tmp1212 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1211 = $tmp1212;
                        $tmp1210 = $tmp1211;
                        body1209 = $tmp1210;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
                        if (((panda$core$Bit) { body1209 == NULL }).value) {
                        {
                            $tmp1213 = NULL;
                            $returnValue979 = $tmp1213;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
                            $tmp1204 = 0;
                            goto $l1202;
                            $l1214:;
                            $tmp992 = 13;
                            goto $l990;
                            $l1215:;
                            $tmp973 = 15;
                            goto $l971;
                            $l1216:;
                            return $returnValue979;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1220 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1221, 45);
                        panda$collections$ImmutableArray* $tmp1223 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1205);
                        $tmp1222 = $tmp1223;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1220, $tmp1221, ((org$pandalanguage$pandac$parser$Token) start974.value).position, $tmp1222, body1209);
                        $tmp1219 = $tmp1220;
                        $tmp1218 = $tmp1219;
                        $returnValue979 = $tmp1218;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
                        $tmp1204 = 1;
                        goto $l1202;
                        $l1224:;
                        $tmp992 = 14;
                        goto $l990;
                        $l1225:;
                        $tmp973 = 16;
                        goto $l971;
                        $l1226:;
                        return $returnValue979;
                    }
                    $l1202:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body1209));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1205));
                    parameters1205 = NULL;
                    body1209 = NULL;
                    switch ($tmp1204) {
                        case 1: goto $l1224;
                        case 0: goto $l1214;
                    }
                    $l1228:;
                }
                }
                $tmp1229 = expr983;
                $returnValue979 = $tmp1229;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
                $tmp992 = 15;
                goto $l990;
                $l1230:;
                $tmp973 = 17;
                goto $l971;
                $l1231:;
                return $returnValue979;
            }
            }
            else {
            {
                int $tmp1235;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1237, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1236, $tmp1237);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1238 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1236);
                    if (((panda$core$Bit) { !$tmp1238.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1240, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1239, $tmp1240);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1239, &$s1241);
                        $tmp1242 = expr983;
                        $returnValue979 = $tmp1242;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
                        $tmp1235 = 0;
                        goto $l1233;
                        $l1243:;
                        $tmp992 = 16;
                        goto $l990;
                        $l1244:;
                        $tmp973 = 18;
                        goto $l971;
                        $l1245:;
                        return $returnValue979;
                    }
                    }
                    panda$collections$Array* $tmp1250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1250);
                    $tmp1249 = $tmp1250;
                    $tmp1248 = $tmp1249;
                    arguments1247 = $tmp1248;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1247, ((panda$core$Object*) expr983));
                    $l1251:;
                    {
                        int $tmp1255;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1259 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1258 = $tmp1259;
                            $tmp1257 = $tmp1258;
                            nextExpr1256 = $tmp1257;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
                            if (((panda$core$Bit) { nextExpr1256 == NULL }).value) {
                            {
                                $tmp1260 = NULL;
                                $returnValue979 = $tmp1260;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
                                $tmp1255 = 0;
                                goto $l1253;
                                $l1261:;
                                $tmp1235 = 1;
                                goto $l1233;
                                $l1262:;
                                $tmp992 = 17;
                                goto $l990;
                                $l1263:;
                                $tmp973 = 19;
                                goto $l971;
                                $l1264:;
                                return $returnValue979;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1247, ((panda$core$Object*) nextExpr1256));
                        }
                        $tmp1255 = -1;
                        goto $l1253;
                        $l1253:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) nextExpr1256));
                        nextExpr1256 = NULL;
                        switch ($tmp1255) {
                            case 0: goto $l1261;
                            case -1: goto $l1266;
                        }
                        $l1266:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1269, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1268, $tmp1269);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1270 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1268);
                    bool $tmp1267 = ((panda$core$Bit) { $tmp1270.nonnull }).value;
                    if ($tmp1267) goto $l1251;
                    $l1252:;
                    panda$core$Int64$init$builtin_int64(&$tmp1272, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1271, $tmp1272);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1271, &$s1273);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start974.value), &$s1274);
                    $tmp1275 = NULL;
                    $returnValue979 = $tmp1275;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1275));
                    $tmp1235 = 2;
                    goto $l1233;
                    $l1276:;
                    $tmp992 = 18;
                    goto $l990;
                    $l1277:;
                    $tmp973 = 20;
                    goto $l971;
                    $l1278:;
                    return $returnValue979;
                }
                $l1233:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) arguments1247));
                arguments1247 = NULL;
                switch ($tmp1235) {
                    case 1: goto $l1262;
                    case 0: goto $l1243;
                    case 2: goto $l1276;
                }
                $l1280:;
            }
            }
        }
        $tmp992 = -1;
        goto $l990;
        $l990:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
        switch ($tmp992) {
            case 7: goto $l1125;
            case 14: goto $l1225;
            case 8: goto $l1150;
            case 10: goto $l1180;
            case 16: goto $l1244;
            case 15: goto $l1230;
            case 11: goto $l1187;
            case 0: goto $l1017;
            case 3: goto $l1069;
            case 9: goto $l1169;
            case 1: goto $l1044;
            case 6: goto $l1097;
            case 12: goto $l1196;
            case -1: goto $l1281;
            case 2: goto $l1054;
            case 13: goto $l1215;
            case 17: goto $l1263;
            case 4: goto $l1078;
            case 18: goto $l1277;
            case 5: goto $l1087;
        }
        $l1281:;
    }
    $tmp973 = -1;
    goto $l971;
    $l971:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr983));
    expr983 = NULL;
    switch ($tmp973) {
        case 12: goto $l1181;
        case 9: goto $l1126;
        case 16: goto $l1226;
        case 2: goto $l1018;
        case 17: goto $l1231;
        case 5: goto $l1070;
        case 10: goto $l1151;
        case 13: goto $l1188;
        case 3: goto $l1045;
        case 8: goto $l1098;
        case 11: goto $l1170;
        case 14: goto $l1197;
        case -1: goto $l1282;
        case 18: goto $l1245;
        case 15: goto $l1216;
        case 4: goto $l1055;
        case 1: goto $l988;
        case 20: goto $l1278;
        case 6: goto $l1079;
        case 19: goto $l1264;
        case 0: goto $l981;
        case 7: goto $l1088;
    }
    $l1282:;
    if (false) goto $l1283; else goto $l1284;
    $l1284:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1285, (panda$core$Int64) { 451 }, &$s1286);
    abort();
    $l1283:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1290;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1291;
    panda$core$Int64 $tmp1292;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1295;
    panda$core$Int64 $tmp1296;
    org$pandalanguage$pandac$ASTNode* t1301 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1302;
    org$pandalanguage$pandac$ASTNode* $tmp1303;
    org$pandalanguage$pandac$ASTNode* $returnValue1305;
    org$pandalanguage$pandac$ASTNode* $tmp1306;
    panda$collections$Array* parameters1310 = NULL;
    panda$collections$Array* $tmp1311;
    panda$collections$Array* $tmp1312;
    org$pandalanguage$pandac$ASTNode* $tmp1314;
    panda$core$Int64 $tmp1316;
    panda$core$String* $tmp1317;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1319;
    panda$core$Int64 $tmp1320;
    org$pandalanguage$pandac$ASTNode* $tmp1323;
    org$pandalanguage$pandac$ASTNode* expr1327 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1328;
    org$pandalanguage$pandac$ASTNode* $tmp1329;
    org$pandalanguage$pandac$ASTNode* $tmp1331;
    org$pandalanguage$pandac$ASTNode* $tmp1335;
    org$pandalanguage$pandac$ASTNode* $tmp1336;
    panda$core$Int64 $tmp1338;
    panda$collections$ImmutableArray* $tmp1339;
    panda$collections$Array* parameters1345 = NULL;
    panda$collections$Array* $tmp1346;
    panda$collections$Array* $tmp1347;
    org$pandalanguage$pandac$ASTNode* $tmp1349;
    panda$core$Int64 $tmp1351;
    panda$core$String* $tmp1352;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1354;
    panda$core$Int64 $tmp1355;
    org$pandalanguage$pandac$ASTNode* $tmp1358;
    org$pandalanguage$pandac$ASTNode* expr1361 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1362;
    org$pandalanguage$pandac$ASTNode* $tmp1363;
    org$pandalanguage$pandac$ASTNode* $tmp1365;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    panda$core$Int64 $tmp1371;
    panda$collections$ImmutableArray* $tmp1372;
    int $tmp1289;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1292, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1291, $tmp1292);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1294 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1291, &$s1293);
        start1290 = $tmp1294;
        panda$core$Int64$init$builtin_int64(&$tmp1296, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1295, $tmp1296);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1297 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1295);
        if (((panda$core$Bit) { $tmp1297.nonnull }).value) {
        {
            int $tmp1300;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1304 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1303 = $tmp1304;
                $tmp1302 = $tmp1303;
                t1301 = $tmp1302;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
                if (((panda$core$Bit) { t1301 == NULL }).value) {
                {
                    $tmp1306 = NULL;
                    $returnValue1305 = $tmp1306;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
                    $tmp1300 = 0;
                    goto $l1298;
                    $l1307:;
                    $tmp1289 = 0;
                    goto $l1287;
                    $l1308:;
                    return $returnValue1305;
                }
                }
                panda$collections$Array* $tmp1313 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1313);
                $tmp1312 = $tmp1313;
                $tmp1311 = $tmp1312;
                parameters1310 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
                org$pandalanguage$pandac$ASTNode* $tmp1315 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1316, 31);
                panda$core$String* $tmp1318 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1290.value));
                $tmp1317 = $tmp1318;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1315, $tmp1316, ((org$pandalanguage$pandac$parser$Token) start1290.value).position, $tmp1317, t1301);
                $tmp1314 = $tmp1315;
                panda$collections$Array$add$panda$collections$Array$T(parameters1310, ((panda$core$Object*) $tmp1314));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
                panda$core$Int64$init$builtin_int64(&$tmp1320, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1319, $tmp1320);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1322 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1319, &$s1321);
                if (((panda$core$Bit) { !$tmp1322.nonnull }).value) {
                {
                    $tmp1323 = NULL;
                    $returnValue1305 = $tmp1323;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
                    $tmp1300 = 1;
                    goto $l1298;
                    $l1324:;
                    $tmp1289 = 1;
                    goto $l1287;
                    $l1325:;
                    return $returnValue1305;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1330 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1329 = $tmp1330;
                $tmp1328 = $tmp1329;
                expr1327 = $tmp1328;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
                if (((panda$core$Bit) { expr1327 == NULL }).value) {
                {
                    $tmp1331 = NULL;
                    $returnValue1305 = $tmp1331;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
                    $tmp1300 = 2;
                    goto $l1298;
                    $l1332:;
                    $tmp1289 = 2;
                    goto $l1287;
                    $l1333:;
                    return $returnValue1305;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1337 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1338, 43);
                panda$collections$ImmutableArray* $tmp1340 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1310);
                $tmp1339 = $tmp1340;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1337, $tmp1338, ((org$pandalanguage$pandac$parser$Token) start1290.value).position, $tmp1339, expr1327);
                $tmp1336 = $tmp1337;
                $tmp1335 = $tmp1336;
                $returnValue1305 = $tmp1335;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1336));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
                $tmp1300 = 3;
                goto $l1298;
                $l1341:;
                $tmp1289 = 3;
                goto $l1287;
                $l1342:;
                return $returnValue1305;
            }
            $l1298:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr1327));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1310));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1301));
            t1301 = NULL;
            parameters1310 = NULL;
            expr1327 = NULL;
            switch ($tmp1300) {
                case 2: goto $l1332;
                case 3: goto $l1341;
                case 0: goto $l1307;
                case 1: goto $l1324;
            }
            $l1344:;
        }
        }
        panda$collections$Array* $tmp1348 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1348);
        $tmp1347 = $tmp1348;
        $tmp1346 = $tmp1347;
        parameters1345 = $tmp1346;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
        org$pandalanguage$pandac$ASTNode* $tmp1350 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1351, 20);
        panda$core$String* $tmp1353 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1290.value));
        $tmp1352 = $tmp1353;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1350, $tmp1351, ((org$pandalanguage$pandac$parser$Token) start1290.value).position, $tmp1352);
        $tmp1349 = $tmp1350;
        panda$collections$Array$add$panda$collections$Array$T(parameters1345, ((panda$core$Object*) $tmp1349));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
        panda$core$Int64$init$builtin_int64(&$tmp1355, 91);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1354, $tmp1355);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1357 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1354, &$s1356);
        if (((panda$core$Bit) { !$tmp1357.nonnull }).value) {
        {
            $tmp1358 = NULL;
            $returnValue1305 = $tmp1358;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
            $tmp1289 = 4;
            goto $l1287;
            $l1359:;
            return $returnValue1305;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1364 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1363 = $tmp1364;
        $tmp1362 = $tmp1363;
        expr1361 = $tmp1362;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
        if (((panda$core$Bit) { expr1361 == NULL }).value) {
        {
            $tmp1365 = NULL;
            $returnValue1305 = $tmp1365;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
            $tmp1289 = 5;
            goto $l1287;
            $l1366:;
            return $returnValue1305;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1370 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1371, 45);
        panda$collections$ImmutableArray* $tmp1373 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1345);
        $tmp1372 = $tmp1373;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1370, $tmp1371, ((org$pandalanguage$pandac$parser$Token) start1290.value).position, $tmp1372, expr1361);
        $tmp1369 = $tmp1370;
        $tmp1368 = $tmp1369;
        $returnValue1305 = $tmp1368;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
        $tmp1289 = 6;
        goto $l1287;
        $l1374:;
        return $returnValue1305;
    }
    $l1287:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr1361));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters1345));
    parameters1345 = NULL;
    expr1361 = NULL;
    switch ($tmp1289) {
        case 6: goto $l1374;
        case 4: goto $l1359;
        case 5: goto $l1366;
        case 3: goto $l1342;
        case 2: goto $l1333;
        case 1: goto $l1325;
        case 0: goto $l1308;
    }
    $l1376:;
    if (false) goto $l1377; else goto $l1378;
    $l1378:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1379, (panda$core$Int64) { 562 }, &$s1380);
    abort();
    $l1377:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1384;
    panda$core$Int64 $tmp1385;
    org$pandalanguage$pandac$ASTNode* $returnValue1388;
    org$pandalanguage$pandac$ASTNode* $tmp1389;
    panda$core$Int64 start1392;
    panda$core$Int64 $tmp1393;
    org$pandalanguage$pandac$ASTNode* regex1395 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1396;
    org$pandalanguage$pandac$ASTNode* $tmp1397;
    org$pandalanguage$pandac$ASTNode* $tmp1399;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1402;
    panda$core$Int64 $tmp1403;
    org$pandalanguage$pandac$ASTNode* $tmp1406;
    org$pandalanguage$pandac$parser$Token $tmp1411;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1412;
    panda$core$Int64 $tmp1413;
    panda$core$String$Index $tmp1414;
    panda$core$String$Index $tmp1415;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    int $tmp1383;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1385, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1384, $tmp1385);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1387 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1384, &$s1386);
        if (((panda$core$Bit) { !$tmp1387.nonnull }).value) {
        {
            $tmp1389 = NULL;
            $returnValue1388 = $tmp1389;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
            $tmp1383 = 0;
            goto $l1381;
            $l1390:;
            return $returnValue1388;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1393, 1);
        panda$core$Int64 $tmp1394 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, $tmp1393);
        start1392 = $tmp1394;
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1398 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1397 = $tmp1398;
        $tmp1396 = $tmp1397;
        regex1395 = $tmp1396;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1395 == NULL }).value) {
        {
            $tmp1399 = NULL;
            $returnValue1388 = $tmp1399;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
            $tmp1383 = 1;
            goto $l1381;
            $l1400:;
            return $returnValue1388;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1403, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1402, $tmp1403);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1405 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1402, &$s1404);
        if (((panda$core$Bit) { !$tmp1405.nonnull }).value) {
        {
            $tmp1406 = NULL;
            $returnValue1388 = $tmp1406;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
            $tmp1383 = 2;
            goto $l1381;
            $l1407:;
            return $returnValue1388;
        }
        }
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn1409) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            (($fn1410) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            panda$core$Int64$init$builtin_int64(&$tmp1413, 2);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1412, $tmp1413);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1414, start1392);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1415, self->lexer->dfa->offset);
            org$pandalanguage$pandac$Position $tmp1417 = (($fn1416) regex1395->$class->vtable[2])(regex1395);
            org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(&$tmp1411, $tmp1412, $tmp1414, $tmp1415, $tmp1417);
            (($fn1418) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, $tmp1411);
        }
        }
        $tmp1419 = regex1395;
        $returnValue1388 = $tmp1419;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
        $tmp1383 = 3;
        goto $l1381;
        $l1420:;
        return $returnValue1388;
    }
    $l1381:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) regex1395));
    regex1395 = NULL;
    switch ($tmp1383) {
        case 3: goto $l1420;
        case 2: goto $l1407;
        case 0: goto $l1390;
        case 1: goto $l1400;
    }
    $l1422:;
    if (false) goto $l1423; else goto $l1424;
    $l1424:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1425, (panda$core$Int64) { 595 }, &$s1426);
    abort();
    $l1423:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1427;
    org$pandalanguage$pandac$parser$Token$Kind $match$632_91429;
    panda$core$Int64 $tmp1430;
    org$pandalanguage$pandac$parser$Token$Kind check1432;
    panda$core$Int64 $tmp1437;
    panda$core$Int64 $tmp1441;
    org$pandalanguage$pandac$ASTNode* $returnValue1444;
    org$pandalanguage$pandac$ASTNode* $tmp1445;
    org$pandalanguage$pandac$ASTNode* $tmp1446;
    org$pandalanguage$pandac$ASTNode* $tmp1449;
    org$pandalanguage$pandac$ASTNode* $tmp1450;
    panda$core$Int64 $tmp1452;
    panda$core$String* $tmp1453;
    panda$core$Int64 $tmp1456;
    org$pandalanguage$pandac$ASTNode* $tmp1458;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    panda$core$Int64 $tmp1461;
    panda$core$String* $tmp1462;
    panda$core$Int64 $tmp1466;
    org$pandalanguage$pandac$ASTNode* $tmp1468;
    org$pandalanguage$pandac$ASTNode* $tmp1469;
    panda$core$Int64 $tmp1471;
    panda$core$String* $tmp1472;
    panda$core$String* $tmp1473;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1475;
    panda$core$Int64 $tmp1476;
    panda$core$Bit $tmp1477;
    panda$core$Int64 $tmp1479;
    panda$core$Int64 $tmp1482;
    org$pandalanguage$pandac$ASTNode* $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    panda$core$Int64 $tmp1487;
    panda$core$String* $tmp1488;
    panda$core$String* $tmp1489;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1491;
    panda$core$Int64 $tmp1492;
    panda$core$Bit $tmp1493;
    panda$core$Int64 $tmp1495;
    panda$core$Int64 $tmp1498;
    org$pandalanguage$pandac$ASTNode* $tmp1500;
    org$pandalanguage$pandac$ASTNode* $tmp1501;
    panda$core$Int64 $tmp1503;
    panda$core$String* $tmp1504;
    panda$core$Int64 $tmp1508;
    org$pandalanguage$pandac$ASTNode* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $tmp1511;
    panda$core$Int64 $tmp1513;
    panda$core$Int64 $tmp1515;
    org$pandalanguage$pandac$ASTNode* $tmp1517;
    org$pandalanguage$pandac$ASTNode* $tmp1518;
    panda$core$Int64 $tmp1520;
    panda$core$Int64 $tmp1522;
    org$pandalanguage$pandac$ASTNode* $tmp1524;
    org$pandalanguage$pandac$ASTNode* $tmp1525;
    panda$core$Int64 $tmp1527;
    panda$core$Int64 $tmp1529;
    org$pandalanguage$pandac$ASTNode* $tmp1531;
    org$pandalanguage$pandac$ASTNode* $tmp1532;
    panda$core$Int64 $tmp1534;
    panda$core$Bit $tmp1535;
    panda$core$Int64 $tmp1537;
    org$pandalanguage$pandac$ASTNode* $tmp1539;
    org$pandalanguage$pandac$ASTNode* $tmp1540;
    panda$core$Int64 $tmp1542;
    panda$core$Bit $tmp1543;
    panda$core$Int64 $tmp1546;
    panda$core$Int64 $tmp1549;
    org$pandalanguage$pandac$ASTNode* $tmp1552;
    org$pandalanguage$pandac$ASTNode* $tmp1553;
    panda$core$Int64 $tmp1556;
    org$pandalanguage$pandac$ASTNode* $tmp1558;
    org$pandalanguage$pandac$ASTNode* $tmp1559;
    panda$core$Int64 $tmp1562;
    panda$core$String* name1567 = NULL;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1576;
    panda$core$Int64 $tmp1577;
    org$pandalanguage$pandac$ASTNode* expr1579 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1580;
    org$pandalanguage$pandac$ASTNode* $tmp1581;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1583;
    panda$core$Int64 $tmp1584;
    org$pandalanguage$pandac$ASTNode* $tmp1586;
    org$pandalanguage$pandac$ASTNode* $tmp1587;
    panda$core$Int64 $tmp1589;
    org$pandalanguage$pandac$ASTNode* $tmp1596;
    org$pandalanguage$pandac$ASTNode* $tmp1597;
    panda$core$Int64 $tmp1599;
    panda$core$String* $tmp1602;
    panda$core$String* $tmp1603;
    org$pandalanguage$pandac$ASTNode* $tmp1608;
    panda$core$Int64 $tmp1613;
    panda$core$Int64 $tmp1616;
    org$pandalanguage$pandac$ASTNode* $tmp1619;
    org$pandalanguage$pandac$ASTNode* $tmp1620;
    panda$core$Int64 $tmp1623;
    org$pandalanguage$pandac$ASTNode* $tmp1625;
    org$pandalanguage$pandac$ASTNode* $tmp1626;
    panda$core$String* $tmp1629;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1632;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    org$pandalanguage$pandac$parser$Token $tmp1428 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1427 = $tmp1428;
    {
        $match$632_91429 = t1427.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1430, 49);
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1430);
        if ($tmp1431.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1433 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1432 = $tmp1433.kind;
            bool $tmp1435 = self->allowLambdas.value;
            if (!$tmp1435) goto $l1436;
            panda$core$Int64$init$builtin_int64(&$tmp1437, 96);
            panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1432.$rawValue, $tmp1437);
            $tmp1435 = $tmp1438.value;
            $l1436:;
            panda$core$Bit $tmp1439 = { $tmp1435 };
            bool $tmp1434 = $tmp1439.value;
            if ($tmp1434) goto $l1440;
            panda$core$Int64$init$builtin_int64(&$tmp1441, 91);
            panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1432.$rawValue, $tmp1441);
            $tmp1434 = $tmp1442.value;
            $l1440:;
            panda$core$Bit $tmp1443 = { $tmp1434 };
            if ($tmp1443.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1427);
                org$pandalanguage$pandac$ASTNode* $tmp1447 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1446 = $tmp1447;
                $tmp1445 = $tmp1446;
                $returnValue1444 = $tmp1445;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
                return $returnValue1444;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1451 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1452, 20);
            panda$core$String* $tmp1454 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
            $tmp1453 = $tmp1454;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1451, $tmp1452, t1427.position, $tmp1453);
            $tmp1450 = $tmp1451;
            $tmp1449 = $tmp1450;
            $returnValue1444 = $tmp1449;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1456, 3);
        panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1456);
        if ($tmp1457.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1460 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1461, 22);
            panda$core$String* $tmp1463 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
            $tmp1462 = $tmp1463;
            panda$core$UInt64$nullable $tmp1464 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1462);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1460, $tmp1461, t1427.position, ((panda$core$UInt64) $tmp1464.value));
            $tmp1459 = $tmp1460;
            $tmp1458 = $tmp1459;
            $returnValue1444 = $tmp1458;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1466, 4);
        panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1466);
        if ($tmp1467.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1470 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1471, 22);
            panda$core$String* $tmp1474 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
            $tmp1473 = $tmp1474;
            panda$core$Int64$init$builtin_int64(&$tmp1476, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1477, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1475, ((panda$core$Int64$nullable) { $tmp1476, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1477);
            panda$core$String* $tmp1478 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1473, $tmp1475);
            $tmp1472 = $tmp1478;
            panda$core$Int64$init$builtin_int64(&$tmp1479, 2);
            panda$core$UInt64$nullable $tmp1480 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1472, $tmp1479);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1470, $tmp1471, t1427.position, ((panda$core$UInt64) $tmp1480.value));
            $tmp1469 = $tmp1470;
            $tmp1468 = $tmp1469;
            $returnValue1444 = $tmp1468;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1482, 5);
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1482);
        if ($tmp1483.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1487, 22);
            panda$core$String* $tmp1490 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
            $tmp1489 = $tmp1490;
            panda$core$Int64$init$builtin_int64(&$tmp1492, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1493, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1491, ((panda$core$Int64$nullable) { $tmp1492, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1493);
            panda$core$String* $tmp1494 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1489, $tmp1491);
            $tmp1488 = $tmp1494;
            panda$core$Int64$init$builtin_int64(&$tmp1495, 16);
            panda$core$UInt64$nullable $tmp1496 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1488, $tmp1495);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1486, $tmp1487, t1427.position, ((panda$core$UInt64) $tmp1496.value));
            $tmp1485 = $tmp1486;
            $tmp1484 = $tmp1485;
            $returnValue1444 = $tmp1484;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1498, 6);
        panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1498);
        if ($tmp1499.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1502 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1503, 34);
            panda$core$String* $tmp1505 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
            $tmp1504 = $tmp1505;
            panda$core$Real64$nullable $tmp1506 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1504);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1502, $tmp1503, t1427.position, ((panda$core$Real64) $tmp1506.value));
            $tmp1501 = $tmp1502;
            $tmp1500 = $tmp1501;
            $returnValue1444 = $tmp1500;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1500));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1508, 47);
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1508);
        if ($tmp1509.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1512 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1513, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1512, $tmp1513, t1427.position);
            $tmp1511 = $tmp1512;
            $tmp1510 = $tmp1511;
            $returnValue1444 = $tmp1510;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1515, 48);
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1515);
        if ($tmp1516.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1519 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1520, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1519, $tmp1520, t1427.position);
            $tmp1518 = $tmp1519;
            $tmp1517 = $tmp1518;
            $returnValue1444 = $tmp1517;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1522, 44);
        panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1522);
        if ($tmp1523.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1526 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1527, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1526, $tmp1527, t1427.position);
            $tmp1525 = $tmp1526;
            $tmp1524 = $tmp1525;
            $returnValue1444 = $tmp1524;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1529, 42);
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1529);
        if ($tmp1530.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1533 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1534, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1535, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1533, $tmp1534, t1427.position, $tmp1535);
            $tmp1532 = $tmp1533;
            $tmp1531 = $tmp1532;
            $returnValue1444 = $tmp1531;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1537, 43);
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1537);
        if ($tmp1538.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1541 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1542, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1543, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1541, $tmp1542, t1427.position, $tmp1543);
            $tmp1540 = $tmp1541;
            $tmp1539 = $tmp1540;
            $returnValue1444 = $tmp1539;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1546, 8);
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1546);
        bool $tmp1545 = $tmp1547.value;
        if ($tmp1545) goto $l1548;
        panda$core$Int64$init$builtin_int64(&$tmp1549, 7);
        panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1549);
        $tmp1545 = $tmp1550.value;
        $l1548:;
        panda$core$Bit $tmp1551 = { $tmp1545 };
        if ($tmp1551.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1427);
            org$pandalanguage$pandac$ASTNode* $tmp1554 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1553 = $tmp1554;
            $tmp1552 = $tmp1553;
            $returnValue1444 = $tmp1552;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1556, 104);
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1556);
        if ($tmp1557.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1427);
            org$pandalanguage$pandac$ASTNode* $tmp1560 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1559 = $tmp1560;
            $tmp1558 = $tmp1559;
            $returnValue1444 = $tmp1558;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1562, 14);
        panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1562);
        if ($tmp1563.value) {
        {
            int $tmp1566;
            {
                panda$core$String* $tmp1570 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
                $tmp1569 = $tmp1570;
                $tmp1568 = $tmp1569;
                name1567 = $tmp1568;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
                panda$core$Bit $tmp1572 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1567, &$s1571);
                if ($tmp1572.value) {
                {
                    int $tmp1575;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1577, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1576, $tmp1577);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1576, &$s1578);
                        org$pandalanguage$pandac$ASTNode* $tmp1582 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1581 = $tmp1582;
                        $tmp1580 = $tmp1581;
                        expr1579 = $tmp1580;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
                        panda$core$Int64$init$builtin_int64(&$tmp1584, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1583, $tmp1584);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1583, &$s1585);
                        org$pandalanguage$pandac$ASTNode* $tmp1588 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1589, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1588, $tmp1589, t1427.position, expr1579);
                        $tmp1587 = $tmp1588;
                        $tmp1586 = $tmp1587;
                        $returnValue1444 = $tmp1586;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
                        $tmp1575 = 0;
                        goto $l1573;
                        $l1590:;
                        $tmp1566 = 0;
                        goto $l1564;
                        $l1591:;
                        return $returnValue1444;
                    }
                    $l1573:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr1579));
                    expr1579 = NULL;
                    switch ($tmp1575) {
                        case 0: goto $l1590;
                    }
                    $l1593:;
                }
                }
                else {
                panda$core$Bit $tmp1595 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1567, &$s1594);
                if ($tmp1595.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1598 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1599, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1598, $tmp1599, t1427.position);
                    $tmp1597 = $tmp1598;
                    $tmp1596 = $tmp1597;
                    $returnValue1444 = $tmp1596;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1596));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1597));
                    $tmp1566 = 1;
                    goto $l1564;
                    $l1600:;
                    return $returnValue1444;
                }
                }
                }
                panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1604, name1567);
                $tmp1603 = $tmp1605;
                panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1606);
                $tmp1602 = $tmp1607;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1427, $tmp1602);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1602));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1603));
                $tmp1608 = NULL;
                $returnValue1444 = $tmp1608;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
                $tmp1566 = 2;
                goto $l1564;
                $l1609:;
                return $returnValue1444;
            }
            $l1564:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name1567));
            name1567 = NULL;
            switch ($tmp1566) {
                case 1: goto $l1600;
                case 0: goto $l1591;
                case 2: goto $l1609;
            }
            $l1611:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1613, 21);
        panda$core$Bit $tmp1614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1613);
        bool $tmp1612 = $tmp1614.value;
        if ($tmp1612) goto $l1615;
        panda$core$Int64$init$builtin_int64(&$tmp1616, 22);
        panda$core$Bit $tmp1617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1616);
        $tmp1612 = $tmp1617.value;
        $l1615:;
        panda$core$Bit $tmp1618 = { $tmp1612 };
        if ($tmp1618.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1427);
            org$pandalanguage$pandac$ASTNode* $tmp1621 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1620 = $tmp1621;
            $tmp1619 = $tmp1620;
            $returnValue1444 = $tmp1619;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
            return $returnValue1444;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1623, 55);
        panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91429.$rawValue, $tmp1623);
        if ($tmp1624.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1427);
            org$pandalanguage$pandac$ASTNode* $tmp1627 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1626 = $tmp1627;
            $tmp1625 = $tmp1626;
            $returnValue1444 = $tmp1625;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
            return $returnValue1444;
        }
        }
        else {
        {
            panda$core$String* $tmp1633 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1427);
            $tmp1632 = $tmp1633;
            panda$core$String* $tmp1634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1631, $tmp1632);
            $tmp1630 = $tmp1634;
            panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1635);
            $tmp1629 = $tmp1636;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1427, $tmp1629);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1632));
            $tmp1637 = NULL;
            $returnValue1444 = $tmp1637;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
            return $returnValue1444;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    if (false) goto $l1639; else goto $l1640;
    $l1640:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1641, (panda$core$Int64) { 630 }, &$s1642);
    abort();
    $l1639:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$691_91646 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1647;
    panda$core$Int64 $tmp1648;
    panda$core$String* text1650 = NULL;
    panda$core$String* $returnValue1652;
    panda$core$String* $tmp1653;
    panda$core$Int64 $tmp1656;
    org$pandalanguage$pandac$ASTNode* base1658 = NULL;
    panda$core$String* field1660 = NULL;
    panda$core$String* result1665 = NULL;
    panda$core$String* $tmp1666;
    panda$core$String* $tmp1667;
    panda$core$String* $tmp1669;
    panda$core$String* $tmp1670;
    panda$core$String* $tmp1671;
    panda$core$String* $tmp1672;
    panda$core$String* $tmp1673;
    panda$core$String* $tmp1677;
    panda$core$String* $tmp1682;
    int $tmp1645;
    {
        $tmp1647 = p_expr;
        $match$691_91646 = $tmp1647;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
        panda$core$Int64$init$builtin_int64(&$tmp1648, 20);
        panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$691_91646->$rawValue, $tmp1648);
        if ($tmp1649.value) {
        {
            panda$core$String** $tmp1651 = ((panda$core$String**) ((char*) $match$691_91646->$data + 16));
            text1650 = *$tmp1651;
            $tmp1653 = text1650;
            $returnValue1652 = $tmp1653;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
            $tmp1645 = 0;
            goto $l1643;
            $l1654:;
            return $returnValue1652;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1656, 15);
        panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$691_91646->$rawValue, $tmp1656);
        if ($tmp1657.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1659 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$691_91646->$data + 16));
            base1658 = *$tmp1659;
            panda$core$String** $tmp1661 = ((panda$core$String**) ((char*) $match$691_91646->$data + 24));
            field1660 = *$tmp1661;
            int $tmp1664;
            {
                panda$core$String* $tmp1668 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1658);
                $tmp1667 = $tmp1668;
                $tmp1666 = $tmp1667;
                result1665 = $tmp1666;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
                if (((panda$core$Bit) { result1665 != NULL }).value) {
                {
                    {
                        $tmp1670 = result1665;
                        $tmp1669 = $tmp1670;
                        panda$core$String* $tmp1675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1674, field1660);
                        $tmp1673 = $tmp1675;
                        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1665, $tmp1673);
                        $tmp1672 = $tmp1676;
                        $tmp1671 = $tmp1672;
                        result1665 = $tmp1671;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
                    }
                }
                }
                $tmp1677 = result1665;
                $returnValue1652 = $tmp1677;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
                $tmp1664 = 0;
                goto $l1662;
                $l1678:;
                $tmp1645 = 1;
                goto $l1643;
                $l1679:;
                return $returnValue1652;
            }
            $l1662:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1665));
            result1665 = NULL;
            switch ($tmp1664) {
                case 0: goto $l1678;
            }
            $l1681:;
        }
        }
        else {
        {
            $tmp1682 = NULL;
            $returnValue1652 = $tmp1682;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
            $tmp1645 = 2;
            goto $l1643;
            $l1683:;
            return $returnValue1652;
        }
        }
        }
    }
    $tmp1645 = -1;
    goto $l1643;
    $l1643:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
    switch ($tmp1645) {
        case 2: goto $l1683;
        case -1: goto $l1685;
        case 1: goto $l1679;
        case 0: goto $l1654;
    }
    $l1685:;
    if (false) goto $l1686; else goto $l1687;
    $l1687:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1688, (panda$core$Int64) { 690 }, &$s1689);
    abort();
    $l1686:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1690;
    org$pandalanguage$pandac$parser$Token$Kind $match$711_91692;
    panda$core$Int64 $tmp1714;
    panda$core$Int64 $tmp1717;
    panda$core$Int64 $tmp1721;
    panda$core$Int64 $tmp1725;
    panda$core$Int64 $tmp1729;
    panda$core$Int64 $tmp1733;
    panda$core$Int64 $tmp1737;
    panda$core$Int64 $tmp1741;
    panda$core$Int64 $tmp1745;
    panda$core$Int64 $tmp1749;
    panda$core$Int64 $tmp1753;
    panda$core$Int64 $tmp1757;
    panda$core$Int64 $tmp1761;
    panda$core$Int64 $tmp1765;
    panda$core$Int64 $tmp1769;
    panda$core$Int64 $tmp1773;
    panda$core$Int64 $tmp1777;
    panda$core$Int64 $tmp1781;
    panda$core$Int64 $tmp1785;
    panda$core$Int64 $tmp1789;
    panda$core$Int64 $tmp1793;
    panda$core$Int64 $tmp1797;
    panda$core$String* $returnValue1800;
    panda$core$String* $tmp1801;
    panda$core$String* $tmp1802;
    panda$core$Int64 $tmp1805;
    org$pandalanguage$pandac$parser$Token token1807;
    panda$core$Int64 $tmp1809;
    panda$core$String* $tmp1811;
    panda$core$String* $tmp1814;
    panda$core$Int64 $tmp1817;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1819;
    panda$core$Int64 $tmp1820;
    panda$core$String* $tmp1823;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1825;
    panda$core$Int64 $tmp1826;
    panda$core$String* $tmp1828;
    panda$core$String* $tmp1831;
    panda$core$String* $tmp1834;
    panda$core$String* $tmp1835;
    panda$core$String* $tmp1837;
    panda$core$String* $tmp1842;
    org$pandalanguage$pandac$parser$Token $tmp1691 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1690 = $tmp1691;
    {
        $match$711_91692 = name1690.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1714, 49);
        panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1714);
        bool $tmp1713 = $tmp1715.value;
        if ($tmp1713) goto $l1716;
        panda$core$Int64$init$builtin_int64(&$tmp1717, 52);
        panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1717);
        $tmp1713 = $tmp1718.value;
        $l1716:;
        panda$core$Bit $tmp1719 = { $tmp1713 };
        bool $tmp1712 = $tmp1719.value;
        if ($tmp1712) goto $l1720;
        panda$core$Int64$init$builtin_int64(&$tmp1721, 53);
        panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1721);
        $tmp1712 = $tmp1722.value;
        $l1720:;
        panda$core$Bit $tmp1723 = { $tmp1712 };
        bool $tmp1711 = $tmp1723.value;
        if ($tmp1711) goto $l1724;
        panda$core$Int64$init$builtin_int64(&$tmp1725, 54);
        panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1725);
        $tmp1711 = $tmp1726.value;
        $l1724:;
        panda$core$Bit $tmp1727 = { $tmp1711 };
        bool $tmp1710 = $tmp1727.value;
        if ($tmp1710) goto $l1728;
        panda$core$Int64$init$builtin_int64(&$tmp1729, 55);
        panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1729);
        $tmp1710 = $tmp1730.value;
        $l1728:;
        panda$core$Bit $tmp1731 = { $tmp1710 };
        bool $tmp1709 = $tmp1731.value;
        if ($tmp1709) goto $l1732;
        panda$core$Int64$init$builtin_int64(&$tmp1733, 56);
        panda$core$Bit $tmp1734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1733);
        $tmp1709 = $tmp1734.value;
        $l1732:;
        panda$core$Bit $tmp1735 = { $tmp1709 };
        bool $tmp1708 = $tmp1735.value;
        if ($tmp1708) goto $l1736;
        panda$core$Int64$init$builtin_int64(&$tmp1737, 58);
        panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1737);
        $tmp1708 = $tmp1738.value;
        $l1736:;
        panda$core$Bit $tmp1739 = { $tmp1708 };
        bool $tmp1707 = $tmp1739.value;
        if ($tmp1707) goto $l1740;
        panda$core$Int64$init$builtin_int64(&$tmp1741, 59);
        panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1741);
        $tmp1707 = $tmp1742.value;
        $l1740:;
        panda$core$Bit $tmp1743 = { $tmp1707 };
        bool $tmp1706 = $tmp1743.value;
        if ($tmp1706) goto $l1744;
        panda$core$Int64$init$builtin_int64(&$tmp1745, 60);
        panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1745);
        $tmp1706 = $tmp1746.value;
        $l1744:;
        panda$core$Bit $tmp1747 = { $tmp1706 };
        bool $tmp1705 = $tmp1747.value;
        if ($tmp1705) goto $l1748;
        panda$core$Int64$init$builtin_int64(&$tmp1749, 63);
        panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1749);
        $tmp1705 = $tmp1750.value;
        $l1748:;
        panda$core$Bit $tmp1751 = { $tmp1705 };
        bool $tmp1704 = $tmp1751.value;
        if ($tmp1704) goto $l1752;
        panda$core$Int64$init$builtin_int64(&$tmp1753, 66);
        panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1753);
        $tmp1704 = $tmp1754.value;
        $l1752:;
        panda$core$Bit $tmp1755 = { $tmp1704 };
        bool $tmp1703 = $tmp1755.value;
        if ($tmp1703) goto $l1756;
        panda$core$Int64$init$builtin_int64(&$tmp1757, 65);
        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1757);
        $tmp1703 = $tmp1758.value;
        $l1756:;
        panda$core$Bit $tmp1759 = { $tmp1703 };
        bool $tmp1702 = $tmp1759.value;
        if ($tmp1702) goto $l1760;
        panda$core$Int64$init$builtin_int64(&$tmp1761, 57);
        panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1761);
        $tmp1702 = $tmp1762.value;
        $l1760:;
        panda$core$Bit $tmp1763 = { $tmp1702 };
        bool $tmp1701 = $tmp1763.value;
        if ($tmp1701) goto $l1764;
        panda$core$Int64$init$builtin_int64(&$tmp1765, 67);
        panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1765);
        $tmp1701 = $tmp1766.value;
        $l1764:;
        panda$core$Bit $tmp1767 = { $tmp1701 };
        bool $tmp1700 = $tmp1767.value;
        if ($tmp1700) goto $l1768;
        panda$core$Int64$init$builtin_int64(&$tmp1769, 68);
        panda$core$Bit $tmp1770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1769);
        $tmp1700 = $tmp1770.value;
        $l1768:;
        panda$core$Bit $tmp1771 = { $tmp1700 };
        bool $tmp1699 = $tmp1771.value;
        if ($tmp1699) goto $l1772;
        panda$core$Int64$init$builtin_int64(&$tmp1773, 69);
        panda$core$Bit $tmp1774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1773);
        $tmp1699 = $tmp1774.value;
        $l1772:;
        panda$core$Bit $tmp1775 = { $tmp1699 };
        bool $tmp1698 = $tmp1775.value;
        if ($tmp1698) goto $l1776;
        panda$core$Int64$init$builtin_int64(&$tmp1777, 70);
        panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1777);
        $tmp1698 = $tmp1778.value;
        $l1776:;
        panda$core$Bit $tmp1779 = { $tmp1698 };
        bool $tmp1697 = $tmp1779.value;
        if ($tmp1697) goto $l1780;
        panda$core$Int64$init$builtin_int64(&$tmp1781, 71);
        panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1781);
        $tmp1697 = $tmp1782.value;
        $l1780:;
        panda$core$Bit $tmp1783 = { $tmp1697 };
        bool $tmp1696 = $tmp1783.value;
        if ($tmp1696) goto $l1784;
        panda$core$Int64$init$builtin_int64(&$tmp1785, 72);
        panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1785);
        $tmp1696 = $tmp1786.value;
        $l1784:;
        panda$core$Bit $tmp1787 = { $tmp1696 };
        bool $tmp1695 = $tmp1787.value;
        if ($tmp1695) goto $l1788;
        panda$core$Int64$init$builtin_int64(&$tmp1789, 50);
        panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1789);
        $tmp1695 = $tmp1790.value;
        $l1788:;
        panda$core$Bit $tmp1791 = { $tmp1695 };
        bool $tmp1694 = $tmp1791.value;
        if ($tmp1694) goto $l1792;
        panda$core$Int64$init$builtin_int64(&$tmp1793, 51);
        panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1793);
        $tmp1694 = $tmp1794.value;
        $l1792:;
        panda$core$Bit $tmp1795 = { $tmp1694 };
        bool $tmp1693 = $tmp1795.value;
        if ($tmp1693) goto $l1796;
        panda$core$Int64$init$builtin_int64(&$tmp1797, 73);
        panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1797);
        $tmp1693 = $tmp1798.value;
        $l1796:;
        panda$core$Bit $tmp1799 = { $tmp1693 };
        if ($tmp1799.value) {
        {
            panda$core$String* $tmp1803 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1690);
            $tmp1802 = $tmp1803;
            $tmp1801 = $tmp1802;
            $returnValue1800 = $tmp1801;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1802));
            return $returnValue1800;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1805, 64);
        panda$core$Bit $tmp1806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1805);
        if ($tmp1806.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1808 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1807 = $tmp1808;
            panda$core$Int64$init$builtin_int64(&$tmp1809, 64);
            panda$core$Bit $tmp1810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1807.kind.$rawValue, $tmp1809);
            if ($tmp1810.value) {
            {
                $tmp1811 = &$s1812;
                $returnValue1800 = $tmp1811;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
                return $returnValue1800;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1807);
                $tmp1814 = &$s1815;
                $returnValue1800 = $tmp1814;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
                return $returnValue1800;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1817, 102);
        panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91692.$rawValue, $tmp1817);
        if ($tmp1818.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1820, 103);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1819, $tmp1820);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1822 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1819, &$s1821);
            if (((panda$core$Bit) { !$tmp1822.nonnull }).value) {
            {
                $tmp1823 = NULL;
                $returnValue1800 = $tmp1823;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
                return $returnValue1800;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1826, 74);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1825, $tmp1826);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1827 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1825);
            if (((panda$core$Bit) { $tmp1827.nonnull }).value) {
            {
                $tmp1828 = &$s1829;
                $returnValue1800 = $tmp1828;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
                return $returnValue1800;
            }
            }
            $tmp1831 = &$s1832;
            $returnValue1800 = $tmp1831;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
            return $returnValue1800;
        }
        }
        else {
        {
            panda$core$String* $tmp1838 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1690);
            $tmp1837 = $tmp1838;
            panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1836, $tmp1837);
            $tmp1835 = $tmp1839;
            panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1840);
            $tmp1834 = $tmp1841;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1690, $tmp1834);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
            $tmp1842 = NULL;
            $returnValue1800 = $tmp1842;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
            return $returnValue1800;
        }
        }
        }
        }
    }
    if (false) goto $l1844; else goto $l1845;
    $l1845:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1846, (panda$core$Int64) { 709 }, &$s1847);
    abort();
    $l1844:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1848;
    org$pandalanguage$pandac$ASTNode* $tmp1849;
    org$pandalanguage$pandac$ASTNode* $tmp1850;
    panda$core$Bit $tmp1851;
    panda$core$Bit$init$builtin_bit(&$tmp1851, true);
    org$pandalanguage$pandac$ASTNode* $tmp1852 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1851);
    $tmp1850 = $tmp1852;
    $tmp1849 = $tmp1850;
    $returnValue1848 = $tmp1849;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
    return $returnValue1848;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1857;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1858;
    panda$core$Int64 $tmp1859;
    org$pandalanguage$pandac$ASTNode* $returnValue1862;
    org$pandalanguage$pandac$ASTNode* $tmp1863;
    panda$collections$Array* subtypes1866 = NULL;
    panda$collections$Array* $tmp1867;
    panda$collections$Array* $tmp1868;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1870;
    panda$core$Int64 $tmp1871;
    org$pandalanguage$pandac$ASTNode* t1876 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1877;
    org$pandalanguage$pandac$ASTNode* $tmp1878;
    org$pandalanguage$pandac$ASTNode* $tmp1880;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1887;
    panda$core$Int64 $tmp1888;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    org$pandalanguage$pandac$ASTNode* $tmp1891;
    org$pandalanguage$pandac$ASTNode* $tmp1892;
    org$pandalanguage$pandac$ASTNode* $tmp1894;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1898;
    panda$core$Int64 $tmp1899;
    org$pandalanguage$pandac$ASTNode* $tmp1902;
    org$pandalanguage$pandac$parser$Token yields1907;
    org$pandalanguage$pandac$parser$Token$Kind $match$775_91909;
    panda$core$Int64 $tmp1913;
    panda$core$Int64 $tmp1916;
    panda$core$Int64 $tmp1920;
    panda$core$Int64 $tmp1924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1930;
    panda$core$Int64 $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1934;
    panda$collections$Array* returnTypes1938 = NULL;
    panda$collections$Array* $tmp1939;
    panda$collections$Array* $tmp1940;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1942;
    panda$core$Int64 $tmp1943;
    org$pandalanguage$pandac$ASTNode* t1948 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1949;
    org$pandalanguage$pandac$ASTNode* $tmp1950;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1960;
    panda$core$Int64 $tmp1961;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    org$pandalanguage$pandac$ASTNode* $tmp1964;
    org$pandalanguage$pandac$ASTNode* $tmp1965;
    org$pandalanguage$pandac$ASTNode* $tmp1967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1972;
    panda$core$Int64 $tmp1973;
    org$pandalanguage$pandac$ASTNode* $tmp1976;
    org$pandalanguage$pandac$ASTNode* returnType1982 = NULL;
    panda$core$Int64 $tmp1987;
    org$pandalanguage$pandac$ASTNode* $tmp1989;
    org$pandalanguage$pandac$ASTNode* $tmp1990;
    panda$core$Int64 $tmp1995;
    org$pandalanguage$pandac$ASTNode* $tmp1997;
    org$pandalanguage$pandac$ASTNode* $tmp1998;
    panda$core$Object* $tmp1999;
    panda$core$Int64 $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    panda$core$Int64 $tmp2010;
    panda$collections$ImmutableArray* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    int $tmp1856;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1859, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1858, $tmp1859);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1861 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1858, &$s1860);
        start1857 = $tmp1861;
        if (((panda$core$Bit) { !start1857.nonnull }).value) {
        {
            $tmp1863 = NULL;
            $returnValue1862 = $tmp1863;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
            $tmp1856 = 0;
            goto $l1854;
            $l1864:;
            return $returnValue1862;
        }
        }
        panda$collections$Array* $tmp1869 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1869);
        $tmp1868 = $tmp1869;
        $tmp1867 = $tmp1868;
        subtypes1866 = $tmp1867;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1868));
        panda$core$Int64$init$builtin_int64(&$tmp1871, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1870, $tmp1871);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1872 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1870);
        if (((panda$core$Bit) { !$tmp1872.nonnull }).value) {
        {
            int $tmp1875;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1879 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1878 = $tmp1879;
                $tmp1877 = $tmp1878;
                t1876 = $tmp1877;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
                if (((panda$core$Bit) { t1876 == NULL }).value) {
                {
                    $tmp1880 = NULL;
                    $returnValue1862 = $tmp1880;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
                    $tmp1875 = 0;
                    goto $l1873;
                    $l1881:;
                    $tmp1856 = 1;
                    goto $l1854;
                    $l1882:;
                    return $returnValue1862;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1866, ((panda$core$Object*) t1876));
                $l1884:;
                panda$core$Int64$init$builtin_int64(&$tmp1888, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1887, $tmp1888);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1889 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1887);
                bool $tmp1886 = ((panda$core$Bit) { $tmp1889.nonnull }).value;
                if (!$tmp1886) goto $l1885;
                {
                    {
                        $tmp1890 = t1876;
                        org$pandalanguage$pandac$ASTNode* $tmp1893 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1892 = $tmp1893;
                        $tmp1891 = $tmp1892;
                        t1876 = $tmp1891;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
                    }
                    if (((panda$core$Bit) { t1876 == NULL }).value) {
                    {
                        $tmp1894 = NULL;
                        $returnValue1862 = $tmp1894;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
                        $tmp1875 = 1;
                        goto $l1873;
                        $l1895:;
                        $tmp1856 = 2;
                        goto $l1854;
                        $l1896:;
                        return $returnValue1862;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1866, ((panda$core$Object*) t1876));
                }
                goto $l1884;
                $l1885:;
                panda$core$Int64$init$builtin_int64(&$tmp1899, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1898, $tmp1899);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1901 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1898, &$s1900);
                if (((panda$core$Bit) { !$tmp1901.nonnull }).value) {
                {
                    $tmp1902 = NULL;
                    $returnValue1862 = $tmp1902;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
                    $tmp1875 = 2;
                    goto $l1873;
                    $l1903:;
                    $tmp1856 = 3;
                    goto $l1854;
                    $l1904:;
                    return $returnValue1862;
                }
                }
            }
            $tmp1875 = -1;
            goto $l1873;
            $l1873:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1876));
            t1876 = NULL;
            switch ($tmp1875) {
                case 2: goto $l1903;
                case 1: goto $l1895;
                case 0: goto $l1881;
                case -1: goto $l1906;
            }
            $l1906:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1908 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1907 = $tmp1908;
        {
            $match$775_91909 = yields1907.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1913, 91);
            panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91909.$rawValue, $tmp1913);
            bool $tmp1912 = $tmp1914.value;
            if ($tmp1912) goto $l1915;
            panda$core$Int64$init$builtin_int64(&$tmp1916, 92);
            panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91909.$rawValue, $tmp1916);
            $tmp1912 = $tmp1917.value;
            $l1915:;
            panda$core$Bit $tmp1918 = { $tmp1912 };
            bool $tmp1911 = $tmp1918.value;
            if ($tmp1911) goto $l1919;
            panda$core$Int64$init$builtin_int64(&$tmp1920, 93);
            panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91909.$rawValue, $tmp1920);
            $tmp1911 = $tmp1921.value;
            $l1919:;
            panda$core$Bit $tmp1922 = { $tmp1911 };
            bool $tmp1910 = $tmp1922.value;
            if ($tmp1910) goto $l1923;
            panda$core$Int64$init$builtin_int64(&$tmp1924, 94);
            panda$core$Bit $tmp1925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91909.$rawValue, $tmp1924);
            $tmp1910 = $tmp1925.value;
            $l1923:;
            panda$core$Bit $tmp1926 = { $tmp1910 };
            if ($tmp1926.value) {
            {
                int $tmp1929;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1931, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1930, $tmp1931);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1933 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1930, &$s1932);
                    if (((panda$core$Bit) { !$tmp1933.nonnull }).value) {
                    {
                        $tmp1934 = NULL;
                        $returnValue1862 = $tmp1934;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
                        $tmp1929 = 0;
                        goto $l1927;
                        $l1935:;
                        $tmp1856 = 4;
                        goto $l1854;
                        $l1936:;
                        return $returnValue1862;
                    }
                    }
                    panda$collections$Array* $tmp1941 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1941);
                    $tmp1940 = $tmp1941;
                    $tmp1939 = $tmp1940;
                    returnTypes1938 = $tmp1939;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
                    panda$core$Int64$init$builtin_int64(&$tmp1943, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1942, $tmp1943);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1944 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1942);
                    if (((panda$core$Bit) { !$tmp1944.nonnull }).value) {
                    {
                        int $tmp1947;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1951 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1950 = $tmp1951;
                            $tmp1949 = $tmp1950;
                            t1948 = $tmp1949;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
                            if (((panda$core$Bit) { t1948 == NULL }).value) {
                            {
                                $tmp1952 = NULL;
                                $returnValue1862 = $tmp1952;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
                                $tmp1947 = 0;
                                goto $l1945;
                                $l1953:;
                                $tmp1929 = 1;
                                goto $l1927;
                                $l1954:;
                                $tmp1856 = 5;
                                goto $l1854;
                                $l1955:;
                                return $returnValue1862;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1938, ((panda$core$Object*) t1948));
                            $l1957:;
                            panda$core$Int64$init$builtin_int64(&$tmp1961, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1960, $tmp1961);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1962 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1960);
                            bool $tmp1959 = ((panda$core$Bit) { $tmp1962.nonnull }).value;
                            if (!$tmp1959) goto $l1958;
                            {
                                {
                                    $tmp1963 = t1948;
                                    org$pandalanguage$pandac$ASTNode* $tmp1966 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1965 = $tmp1966;
                                    $tmp1964 = $tmp1965;
                                    t1948 = $tmp1964;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
                                }
                                if (((panda$core$Bit) { t1948 == NULL }).value) {
                                {
                                    $tmp1967 = NULL;
                                    $returnValue1862 = $tmp1967;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
                                    $tmp1947 = 1;
                                    goto $l1945;
                                    $l1968:;
                                    $tmp1929 = 2;
                                    goto $l1927;
                                    $l1969:;
                                    $tmp1856 = 6;
                                    goto $l1854;
                                    $l1970:;
                                    return $returnValue1862;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1938, ((panda$core$Object*) t1948));
                            }
                            goto $l1957;
                            $l1958:;
                            panda$core$Int64$init$builtin_int64(&$tmp1973, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1972, $tmp1973);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1975 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1972, &$s1974);
                            if (((panda$core$Bit) { !$tmp1975.nonnull }).value) {
                            {
                                $tmp1976 = NULL;
                                $returnValue1862 = $tmp1976;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
                                $tmp1947 = 2;
                                goto $l1945;
                                $l1977:;
                                $tmp1929 = 3;
                                goto $l1927;
                                $l1978:;
                                $tmp1856 = 7;
                                goto $l1854;
                                $l1979:;
                                return $returnValue1862;
                            }
                            }
                        }
                        $tmp1947 = -1;
                        goto $l1945;
                        $l1945:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1948));
                        t1948 = NULL;
                        switch ($tmp1947) {
                            case 0: goto $l1953;
                            case 1: goto $l1968;
                            case 2: goto $l1977;
                            case -1: goto $l1981;
                        }
                        $l1981:;
                    }
                    }
                    memset(&returnType1982, 0, sizeof(returnType1982));
                    ITable* $tmp1983 = ((panda$collections$CollectionView*) returnTypes1938)->$class->itable;
                    while ($tmp1983->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1983 = $tmp1983->next;
                    }
                    $fn1985 $tmp1984 = $tmp1983->methods[0];
                    panda$core$Int64 $tmp1986 = $tmp1984(((panda$collections$CollectionView*) returnTypes1938));
                    panda$core$Int64$init$builtin_int64(&$tmp1987, 0);
                    panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1986, $tmp1987);
                    if ($tmp1988.value) {
                    {
                        {
                            $tmp1989 = returnType1982;
                            $tmp1990 = NULL;
                            returnType1982 = $tmp1990;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
                        }
                    }
                    }
                    else {
                    ITable* $tmp1991 = ((panda$collections$CollectionView*) returnTypes1938)->$class->itable;
                    while ($tmp1991->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1991 = $tmp1991->next;
                    }
                    $fn1993 $tmp1992 = $tmp1991->methods[0];
                    panda$core$Int64 $tmp1994 = $tmp1992(((panda$collections$CollectionView*) returnTypes1938));
                    panda$core$Int64$init$builtin_int64(&$tmp1995, 1);
                    panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1994, $tmp1995);
                    if ($tmp1996.value) {
                    {
                        {
                            $tmp1997 = returnType1982;
                            panda$core$Int64$init$builtin_int64(&$tmp2000, 0);
                            panda$core$Object* $tmp2001 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1938, $tmp2000);
                            $tmp1999 = $tmp2001;
                            $tmp1998 = ((org$pandalanguage$pandac$ASTNode*) $tmp1999);
                            returnType1982 = $tmp1998;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1998));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1999);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1997));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1857.value), &$s2002);
                        $tmp2003 = NULL;
                        $returnValue1862 = $tmp2003;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
                        $tmp1929 = 4;
                        goto $l1927;
                        $l2004:;
                        $tmp1856 = 8;
                        goto $l1854;
                        $l2005:;
                        return $returnValue1862;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2009 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2010, 27);
                    panda$collections$ImmutableArray* $tmp2012 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1866);
                    $tmp2011 = $tmp2012;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2009, $tmp2010, ((org$pandalanguage$pandac$parser$Token) start1857.value).position, yields1907.kind, $tmp2011, returnType1982);
                    $tmp2008 = $tmp2009;
                    $tmp2007 = $tmp2008;
                    $returnValue1862 = $tmp2007;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
                    $tmp1929 = 5;
                    goto $l1927;
                    $l2013:;
                    $tmp1856 = 9;
                    goto $l1854;
                    $l2014:;
                    return $returnValue1862;
                }
                $l1927:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType1982));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnTypes1938));
                returnTypes1938 = NULL;
                switch ($tmp1929) {
                    case 1: goto $l1954;
                    case 0: goto $l1935;
                    case 5: goto $l2013;
                    case 4: goto $l2004;
                    case 2: goto $l1969;
                    case 3: goto $l1978;
                }
                $l2016:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1857.value), &$s2017);
                $tmp2018 = NULL;
                $returnValue1862 = $tmp2018;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2018));
                $tmp1856 = 10;
                goto $l1854;
                $l2019:;
                return $returnValue1862;
            }
            }
        }
    }
    $tmp1856 = -1;
    goto $l1854;
    $l1854:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) subtypes1866));
    subtypes1866 = NULL;
    switch ($tmp1856) {
        case 6: goto $l1970;
        case 5: goto $l1955;
        case 1: goto $l1882;
        case 4: goto $l1936;
        case 2: goto $l1896;
        case 9: goto $l2014;
        case 8: goto $l2005;
        case 10: goto $l2019;
        case 3: goto $l1904;
        case -1: goto $l2021;
        case 0: goto $l1864;
        case 7: goto $l1979;
    }
    $l2021:;
    if (false) goto $l2022; else goto $l2023;
    $l2023:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2024, (panda$core$Int64) { 751 }, &$s2025);
    abort();
    $l2022:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result2029 = NULL;
    panda$core$Int64 $tmp2031;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2034;
    org$pandalanguage$pandac$ASTNode* $tmp2035;
    org$pandalanguage$pandac$ASTNode* $returnValue2037;
    org$pandalanguage$pandac$ASTNode* $tmp2038;
    org$pandalanguage$pandac$parser$Token$nullable start2044;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2045;
    panda$core$Int64 $tmp2046;
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    panda$core$MutableString* name2053 = NULL;
    panda$core$MutableString* $tmp2054;
    panda$core$MutableString* $tmp2055;
    panda$core$String* $tmp2057;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2062;
    panda$core$Int64 $tmp2063;
    org$pandalanguage$pandac$parser$Token$nullable id2065;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2066;
    panda$core$Int64 $tmp2067;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    panda$core$Char8 $tmp2074;
    panda$core$UInt8 $tmp2075;
    panda$core$String* $tmp2076;
    panda$core$String* finalName2078 = NULL;
    panda$core$String* $tmp2079;
    panda$core$String* $tmp2080;
    org$pandalanguage$pandac$ASTNode* $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2083;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    panda$core$Int64 $tmp2086;
    panda$core$Int64 $tmp2088;
    panda$collections$Array* children2093 = NULL;
    panda$collections$Array* $tmp2094;
    panda$collections$Array* $tmp2095;
    org$pandalanguage$pandac$ASTNode* t2097 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2098;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    panda$core$Bit $tmp2100;
    org$pandalanguage$pandac$ASTNode* $tmp2102;
    org$pandalanguage$pandac$ASTNode* $tmp2107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2115;
    panda$core$Int64 $tmp2116;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    org$pandalanguage$pandac$ASTNode* $tmp2119;
    org$pandalanguage$pandac$ASTNode* $tmp2120;
    panda$core$Bit $tmp2121;
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    org$pandalanguage$pandac$ASTNode* $tmp2128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2133;
    panda$core$Int64 $tmp2134;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$ASTNode* $tmp2142;
    org$pandalanguage$pandac$ASTNode* $tmp2147;
    org$pandalanguage$pandac$ASTNode* $tmp2148;
    org$pandalanguage$pandac$ASTNode* $tmp2149;
    panda$core$Int64 $tmp2151;
    panda$collections$ImmutableArray* $tmp2152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2156;
    panda$core$Int64 $tmp2157;
    org$pandalanguage$pandac$ASTNode* $tmp2159;
    org$pandalanguage$pandac$ASTNode* $tmp2160;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    panda$core$Int64 $tmp2163;
    org$pandalanguage$pandac$ASTNode* $tmp2166;
    int $tmp2028;
    {
        memset(&result2029, 0, sizeof(result2029));
        org$pandalanguage$pandac$parser$Token $tmp2030 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp2031, 104);
        panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2030.kind.$rawValue, $tmp2031);
        if ($tmp2032.value) {
        {
            {
                $tmp2033 = result2029;
                org$pandalanguage$pandac$ASTNode* $tmp2036 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2035 = $tmp2036;
                $tmp2034 = $tmp2035;
                result2029 = $tmp2034;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
            }
            if (((panda$core$Bit) { result2029 == NULL }).value) {
            {
                $tmp2038 = NULL;
                $returnValue2037 = $tmp2038;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2038));
                $tmp2028 = 0;
                goto $l2026;
                $l2039:;
                return $returnValue2037;
            }
            }
        }
        }
        else {
        {
            int $tmp2043;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2046, 49);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2045, $tmp2046);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2048 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2045, &$s2047);
                start2044 = $tmp2048;
                if (((panda$core$Bit) { !start2044.nonnull }).value) {
                {
                    $tmp2049 = NULL;
                    $returnValue2037 = $tmp2049;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
                    $tmp2043 = 0;
                    goto $l2041;
                    $l2050:;
                    $tmp2028 = 1;
                    goto $l2026;
                    $l2051:;
                    return $returnValue2037;
                }
                }
                panda$core$MutableString* $tmp2056 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2058 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2044.value));
                $tmp2057 = $tmp2058;
                panda$core$MutableString$init$panda$core$String($tmp2056, $tmp2057);
                $tmp2055 = $tmp2056;
                $tmp2054 = $tmp2055;
                name2053 = $tmp2054;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2055));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
                $l2059:;
                panda$core$Int64$init$builtin_int64(&$tmp2063, 99);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2062, $tmp2063);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2064 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2062);
                bool $tmp2061 = ((panda$core$Bit) { $tmp2064.nonnull }).value;
                if (!$tmp2061) goto $l2060;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp2067, 49);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2066, $tmp2067);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2069 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2066, &$s2068);
                    id2065 = $tmp2069;
                    if (((panda$core$Bit) { !id2065.nonnull }).value) {
                    {
                        $tmp2070 = NULL;
                        $returnValue2037 = $tmp2070;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
                        $tmp2043 = 1;
                        goto $l2041;
                        $l2071:;
                        $tmp2028 = 2;
                        goto $l2026;
                        $l2072:;
                        return $returnValue2037;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp2075, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp2074, $tmp2075);
                    panda$core$MutableString$append$panda$core$Char8(name2053, $tmp2074);
                    panda$core$String* $tmp2077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2065.value));
                    $tmp2076 = $tmp2077;
                    panda$core$MutableString$append$panda$core$String(name2053, $tmp2076);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
                }
                goto $l2059;
                $l2060:;
                panda$core$String* $tmp2081 = panda$core$MutableString$finish$R$panda$core$String(name2053);
                $tmp2080 = $tmp2081;
                $tmp2079 = $tmp2080;
                finalName2078 = $tmp2079;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2079));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
                {
                    $tmp2082 = result2029;
                    org$pandalanguage$pandac$ASTNode* $tmp2085 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2086, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2085, $tmp2086, ((org$pandalanguage$pandac$parser$Token) start2044.value).position, finalName2078);
                    $tmp2084 = $tmp2085;
                    $tmp2083 = $tmp2084;
                    result2029 = $tmp2083;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2083));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
                }
                org$pandalanguage$pandac$parser$Token $tmp2087 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp2088, 63);
                panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2087.kind.$rawValue, $tmp2088);
                if ($tmp2089.value) {
                {
                    int $tmp2092;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp2096 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2096);
                        $tmp2095 = $tmp2096;
                        $tmp2094 = $tmp2095;
                        children2093 = $tmp2094;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2095));
                        panda$core$Bit$init$builtin_bit(&$tmp2100, false);
                        org$pandalanguage$pandac$ASTNode* $tmp2101 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2100);
                        $tmp2099 = $tmp2101;
                        $tmp2098 = $tmp2099;
                        t2097 = $tmp2098;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
                        if (((panda$core$Bit) { t2097 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2102 = result2029;
                                $returnValue2037 = $tmp2102;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2102));
                                $tmp2092 = 0;
                                goto $l2090;
                                $l2103:;
                                $tmp2043 = 2;
                                goto $l2041;
                                $l2104:;
                                $tmp2028 = 3;
                                goto $l2026;
                                $l2105:;
                                return $returnValue2037;
                            }
                            }
                            $tmp2107 = NULL;
                            $returnValue2037 = $tmp2107;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
                            $tmp2092 = 1;
                            goto $l2090;
                            $l2108:;
                            $tmp2043 = 3;
                            goto $l2041;
                            $l2109:;
                            $tmp2028 = 4;
                            goto $l2026;
                            $l2110:;
                            return $returnValue2037;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children2093, ((panda$core$Object*) t2097));
                        $l2112:;
                        panda$core$Int64$init$builtin_int64(&$tmp2116, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2115, $tmp2116);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2117 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2115);
                        bool $tmp2114 = ((panda$core$Bit) { $tmp2117.nonnull }).value;
                        if (!$tmp2114) goto $l2113;
                        {
                            {
                                $tmp2118 = t2097;
                                panda$core$Bit$init$builtin_bit(&$tmp2121, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2122 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2121);
                                $tmp2120 = $tmp2122;
                                $tmp2119 = $tmp2120;
                                t2097 = $tmp2119;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2118));
                            }
                            if (((panda$core$Bit) { t2097 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2123 = result2029;
                                    $returnValue2037 = $tmp2123;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
                                    $tmp2092 = 2;
                                    goto $l2090;
                                    $l2124:;
                                    $tmp2043 = 4;
                                    goto $l2041;
                                    $l2125:;
                                    $tmp2028 = 5;
                                    goto $l2026;
                                    $l2126:;
                                    return $returnValue2037;
                                }
                                }
                                $tmp2128 = NULL;
                                $returnValue2037 = $tmp2128;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2128));
                                $tmp2092 = 3;
                                goto $l2090;
                                $l2129:;
                                $tmp2043 = 5;
                                goto $l2041;
                                $l2130:;
                                $tmp2028 = 6;
                                goto $l2026;
                                $l2131:;
                                return $returnValue2037;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children2093, ((panda$core$Object*) t2097));
                        }
                        goto $l2112;
                        $l2113:;
                        panda$core$Int64$init$builtin_int64(&$tmp2134, 64);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2133, $tmp2134);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2136 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2133, &$s2135);
                        if (((panda$core$Bit) { !$tmp2136.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2137 = result2029;
                                $returnValue2037 = $tmp2137;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
                                $tmp2092 = 4;
                                goto $l2090;
                                $l2138:;
                                $tmp2043 = 6;
                                goto $l2041;
                                $l2139:;
                                $tmp2028 = 7;
                                goto $l2026;
                                $l2140:;
                                return $returnValue2037;
                            }
                            }
                            $tmp2142 = NULL;
                            $returnValue2037 = $tmp2142;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
                            $tmp2092 = 5;
                            goto $l2090;
                            $l2143:;
                            $tmp2043 = 7;
                            goto $l2041;
                            $l2144:;
                            $tmp2028 = 8;
                            goto $l2026;
                            $l2145:;
                            return $returnValue2037;
                        }
                        }
                        {
                            $tmp2147 = result2029;
                            org$pandalanguage$pandac$ASTNode* $tmp2150 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2151, 19);
                            panda$collections$ImmutableArray* $tmp2153 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children2093);
                            $tmp2152 = $tmp2153;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2150, $tmp2151, ((org$pandalanguage$pandac$parser$Token) start2044.value).position, finalName2078, $tmp2152);
                            $tmp2149 = $tmp2150;
                            $tmp2148 = $tmp2149;
                            result2029 = $tmp2148;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2149));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2152));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp2092 = -1;
                    goto $l2090;
                    $l2090:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t2097));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) children2093));
                    children2093 = NULL;
                    t2097 = NULL;
                    switch ($tmp2092) {
                        case 4: goto $l2138;
                        case 2: goto $l2124;
                        case -1: goto $l2154;
                        case 1: goto $l2108;
                        case 5: goto $l2143;
                        case 3: goto $l2129;
                        case 0: goto $l2103;
                    }
                    $l2154:;
                }
                }
            }
            $tmp2043 = -1;
            goto $l2041;
            $l2041:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) finalName2078));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name2053));
            name2053 = NULL;
            finalName2078 = NULL;
            switch ($tmp2043) {
                case 0: goto $l2050;
                case 2: goto $l2104;
                case 1: goto $l2071;
                case 6: goto $l2139;
                case -1: goto $l2155;
                case 4: goto $l2125;
                case 3: goto $l2109;
                case 7: goto $l2144;
                case 5: goto $l2130;
            }
            $l2155:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2157, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2156, $tmp2157);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2158 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2156);
        if (((panda$core$Bit) { $tmp2158.nonnull }).value) {
        {
            {
                $tmp2159 = result2029;
                org$pandalanguage$pandac$ASTNode* $tmp2162 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2163, 29);
                org$pandalanguage$pandac$Position $tmp2165 = (($fn2164) result2029->$class->vtable[2])(result2029);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2162, $tmp2163, $tmp2165, result2029);
                $tmp2161 = $tmp2162;
                $tmp2160 = $tmp2161;
                result2029 = $tmp2160;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
            }
        }
        }
        $tmp2166 = result2029;
        $returnValue2037 = $tmp2166;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
        $tmp2028 = 9;
        goto $l2026;
        $l2167:;
        return $returnValue2037;
    }
    $l2026:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2029));
    switch ($tmp2028) {
        case 7: goto $l2140;
        case 2: goto $l2072;
        case 8: goto $l2145;
        case 1: goto $l2051;
        case 3: goto $l2105;
        case 9: goto $l2167;
        case 5: goto $l2126;
        case 6: goto $l2131;
        case 0: goto $l2039;
        case 4: goto $l2110;
    }
    $l2169:;
    if (false) goto $l2170; else goto $l2171;
    $l2171:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2172, (panda$core$Int64) { 825 }, &$s2173);
    abort();
    $l2170:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2177 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2178;
    org$pandalanguage$pandac$ASTNode* $tmp2179;
    org$pandalanguage$pandac$ASTNode* $returnValue2181;
    org$pandalanguage$pandac$ASTNode* $tmp2182;
    org$pandalanguage$pandac$parser$Token token2187;
    org$pandalanguage$pandac$parser$Token$Kind $match$913_132189;
    panda$core$Int64 $tmp2190;
    panda$core$Object* $tmp2195;
    panda$core$Bit $tmp2196;
    panda$collections$Array* args2198 = NULL;
    panda$collections$Array* $tmp2199;
    panda$collections$Array* $tmp2200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2202;
    panda$core$Int64 $tmp2203;
    org$pandalanguage$pandac$ASTNode* expr2208 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    org$pandalanguage$pandac$ASTNode* $tmp2210;
    panda$core$Object* $tmp2212;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2222;
    panda$core$Int64 $tmp2223;
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    org$pandalanguage$pandac$ASTNode* $tmp2226;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    panda$core$Object* $tmp2229;
    org$pandalanguage$pandac$ASTNode* $tmp2231;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2236;
    panda$core$Int64 $tmp2237;
    panda$core$Object* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    panda$core$Object* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2250;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    panda$core$Int64 $tmp2254;
    panda$collections$ImmutableArray* $tmp2255;
    panda$core$Int64 $tmp2258;
    org$pandalanguage$pandac$ASTNode* arg2263 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    org$pandalanguage$pandac$ASTNode* $tmp2265;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2271;
    panda$core$Int64 $tmp2272;
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$ASTNode* $tmp2279;
    org$pandalanguage$pandac$ASTNode* $tmp2280;
    org$pandalanguage$pandac$ASTNode* $tmp2281;
    panda$core$Int64 $tmp2283;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2284;
    panda$core$Int64 $tmp2285;
    panda$core$Int64 $tmp2287;
    panda$core$String* name2292 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2293;
    panda$core$Int64 $tmp2294;
    panda$core$String* $tmp2296;
    panda$core$String* $tmp2297;
    panda$core$String* $tmp2299;
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2301;
    org$pandalanguage$pandac$ASTNode* $tmp2303;
    org$pandalanguage$pandac$ASTNode* $tmp2307;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2309;
    panda$core$Int64 $tmp2311;
    panda$core$Int64 $tmp2313;
    org$pandalanguage$pandac$ASTNode* target2318 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2319;
    org$pandalanguage$pandac$ASTNode* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    org$pandalanguage$pandac$ASTNode* $tmp2326;
    org$pandalanguage$pandac$ASTNode* $tmp2327;
    org$pandalanguage$pandac$ASTNode* $tmp2328;
    panda$core$Int64 $tmp2330;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2331;
    panda$core$Int64 $tmp2332;
    panda$core$Int64 $tmp2334;
    panda$core$String* name2339 = NULL;
    panda$core$String* $tmp2340;
    panda$core$String* $tmp2341;
    panda$collections$Array* types2346 = NULL;
    panda$collections$Array* $tmp2347;
    panda$collections$Array* $tmp2348;
    org$pandalanguage$pandac$ASTNode* t2350 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$ASTNode* $tmp2352;
    panda$core$Bit $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2355;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2363;
    panda$core$Int64 $tmp2364;
    org$pandalanguage$pandac$ASTNode* $tmp2366;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    panda$core$Bit $tmp2369;
    org$pandalanguage$pandac$ASTNode* $tmp2371;
    org$pandalanguage$pandac$parser$Token$nullable gt2376;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2377;
    panda$core$Int64 $tmp2378;
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    panda$core$Bit shouldAccept2386;
    panda$core$Object* $tmp2387;
    panda$core$Int64 $tmp2388;
    org$pandalanguage$pandac$parser$Token n2390;
    org$pandalanguage$pandac$parser$Token$Kind $match$1026_292392;
    panda$core$Int64 $tmp2395;
    panda$core$Int64 $tmp2398;
    panda$core$Int64 $tmp2402;
    panda$core$Bit $tmp2405;
    panda$core$Int64 $tmp2406;
    panda$core$Int64 $tmp2411;
    panda$core$Bit $tmp2415;
    panda$core$Bit $tmp2416;
    org$pandalanguage$pandac$ASTNode* $tmp2417;
    org$pandalanguage$pandac$ASTNode* $tmp2418;
    org$pandalanguage$pandac$ASTNode* $tmp2419;
    panda$core$Int64 $tmp2421;
    panda$collections$ImmutableArray* $tmp2424;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    int $tmp2176;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2180 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2179 = $tmp2180;
        $tmp2178 = $tmp2179;
        result2177 = $tmp2178;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2178));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
        if (((panda$core$Bit) { result2177 == NULL }).value) {
        {
            $tmp2182 = NULL;
            $returnValue2181 = $tmp2182;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
            $tmp2176 = 0;
            goto $l2174;
            $l2183:;
            return $returnValue2181;
        }
        }
        $l2185:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2188 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2187 = $tmp2188;
            {
                $match$913_132189 = token2187.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2190, 104);
                panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132189.$rawValue, $tmp2190);
                if ($tmp2191.value) {
                {
                    int $tmp2194;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2196, true);
                        panda$core$Bit$wrapper* $tmp2197;
                        $tmp2197 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2197->value = $tmp2196;
                        $tmp2195 = ((panda$core$Object*) $tmp2197);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2195);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp2195);
                        panda$collections$Array* $tmp2201 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2201);
                        $tmp2200 = $tmp2201;
                        $tmp2199 = $tmp2200;
                        args2198 = $tmp2199;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
                        panda$core$Int64$init$builtin_int64(&$tmp2203, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2202, $tmp2203);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2204 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2202);
                        if (((panda$core$Bit) { !$tmp2204.nonnull }).value) {
                        {
                            int $tmp2207;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2211 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2210 = $tmp2211;
                                $tmp2209 = $tmp2210;
                                expr2208 = $tmp2209;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
                                if (((panda$core$Bit) { expr2208 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2213 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2212 = $tmp2213;
                                    panda$core$Panda$unref$panda$core$Object$Q($tmp2212);
                                    $tmp2214 = NULL;
                                    $returnValue2181 = $tmp2214;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2214));
                                    $tmp2207 = 0;
                                    goto $l2205;
                                    $l2215:;
                                    $tmp2194 = 0;
                                    goto $l2192;
                                    $l2216:;
                                    $tmp2176 = 1;
                                    goto $l2174;
                                    $l2217:;
                                    return $returnValue2181;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2198, ((panda$core$Object*) expr2208));
                                $l2219:;
                                panda$core$Int64$init$builtin_int64(&$tmp2223, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2222, $tmp2223);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2224 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2222);
                                bool $tmp2221 = ((panda$core$Bit) { $tmp2224.nonnull }).value;
                                if (!$tmp2221) goto $l2220;
                                {
                                    {
                                        $tmp2225 = expr2208;
                                        org$pandalanguage$pandac$ASTNode* $tmp2228 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2227 = $tmp2228;
                                        $tmp2226 = $tmp2227;
                                        expr2208 = $tmp2226;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
                                    }
                                    if (((panda$core$Bit) { expr2208 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2230 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2229 = $tmp2230;
                                        panda$core$Panda$unref$panda$core$Object$Q($tmp2229);
                                        $tmp2231 = NULL;
                                        $returnValue2181 = $tmp2231;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2231));
                                        $tmp2207 = 1;
                                        goto $l2205;
                                        $l2232:;
                                        $tmp2194 = 1;
                                        goto $l2192;
                                        $l2233:;
                                        $tmp2176 = 2;
                                        goto $l2174;
                                        $l2234:;
                                        return $returnValue2181;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2198, ((panda$core$Object*) expr2208));
                                }
                                goto $l2219;
                                $l2220:;
                                panda$core$Int64$init$builtin_int64(&$tmp2237, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2236, $tmp2237);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2239 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2236, &$s2238);
                                if (((panda$core$Bit) { !$tmp2239.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2241 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2240 = $tmp2241;
                                    panda$core$Panda$unref$panda$core$Object$Q($tmp2240);
                                    $tmp2242 = NULL;
                                    $returnValue2181 = $tmp2242;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
                                    $tmp2207 = 2;
                                    goto $l2205;
                                    $l2243:;
                                    $tmp2194 = 2;
                                    goto $l2192;
                                    $l2244:;
                                    $tmp2176 = 3;
                                    goto $l2174;
                                    $l2245:;
                                    return $returnValue2181;
                                }
                                }
                            }
                            $tmp2207 = -1;
                            goto $l2205;
                            $l2205:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr2208));
                            expr2208 = NULL;
                            switch ($tmp2207) {
                                case -1: goto $l2247;
                                case 1: goto $l2232;
                                case 2: goto $l2243;
                                case 0: goto $l2215;
                            }
                            $l2247:;
                        }
                        }
                        panda$core$Object* $tmp2249 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2248 = $tmp2249;
                        panda$core$Panda$unref$panda$core$Object$Q($tmp2248);
                        {
                            $tmp2250 = result2177;
                            org$pandalanguage$pandac$ASTNode* $tmp2253 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2254, 8);
                            panda$collections$ImmutableArray* $tmp2256 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2198);
                            $tmp2255 = $tmp2256;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2253, $tmp2254, token2187.position, result2177, $tmp2255);
                            $tmp2252 = $tmp2253;
                            $tmp2251 = $tmp2252;
                            result2177 = $tmp2251;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2252));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2255));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2250));
                        }
                    }
                    $tmp2194 = -1;
                    goto $l2192;
                    $l2192:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args2198));
                    args2198 = NULL;
                    switch ($tmp2194) {
                        case 0: goto $l2216;
                        case 2: goto $l2244;
                        case 1: goto $l2233;
                        case -1: goto $l2257;
                    }
                    $l2257:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2258, 102);
                panda$core$Bit $tmp2259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132189.$rawValue, $tmp2258);
                if ($tmp2259.value) {
                {
                    int $tmp2262;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2266 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2265 = $tmp2266;
                        $tmp2264 = $tmp2265;
                        arg2263 = $tmp2264;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2265));
                        if (((panda$core$Bit) { arg2263 == NULL }).value) {
                        {
                            $tmp2267 = NULL;
                            $returnValue2181 = $tmp2267;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2267));
                            $tmp2262 = 0;
                            goto $l2260;
                            $l2268:;
                            $tmp2176 = 4;
                            goto $l2174;
                            $l2269:;
                            return $returnValue2181;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2272, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2271, $tmp2272);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2274 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2271, &$s2273);
                        if (((panda$core$Bit) { !$tmp2274.nonnull }).value) {
                        {
                            $tmp2275 = NULL;
                            $returnValue2181 = $tmp2275;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
                            $tmp2262 = 1;
                            goto $l2260;
                            $l2276:;
                            $tmp2176 = 5;
                            goto $l2174;
                            $l2277:;
                            return $returnValue2181;
                        }
                        }
                        {
                            $tmp2279 = result2177;
                            org$pandalanguage$pandac$ASTNode* $tmp2282 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2283, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2285, 102);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2284, $tmp2285);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2282, $tmp2283, token2187.position, result2177, $tmp2284, arg2263);
                            $tmp2281 = $tmp2282;
                            $tmp2280 = $tmp2281;
                            result2177 = $tmp2280;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2280));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2281));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2279));
                        }
                    }
                    $tmp2262 = -1;
                    goto $l2260;
                    $l2260:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) arg2263));
                    arg2263 = NULL;
                    switch ($tmp2262) {
                        case 0: goto $l2268;
                        case -1: goto $l2286;
                        case 1: goto $l2276;
                    }
                    $l2286:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2287, 99);
                panda$core$Bit $tmp2288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132189.$rawValue, $tmp2287);
                if ($tmp2288.value) {
                {
                    int $tmp2291;
                    {
                        memset(&name2292, 0, sizeof(name2292));
                        panda$core$Int64$init$builtin_int64(&$tmp2294, 23);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2293, $tmp2294);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2295 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2293);
                        if (((panda$core$Bit) { $tmp2295.nonnull }).value) {
                        {
                            {
                                $tmp2296 = name2292;
                                $tmp2297 = &$s2298;
                                name2292 = $tmp2297;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2299 = name2292;
                                panda$core$String* $tmp2302 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2301 = $tmp2302;
                                $tmp2300 = $tmp2301;
                                name2292 = $tmp2300;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2300));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2301));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
                            }
                            if (((panda$core$Bit) { name2292 == NULL }).value) {
                            {
                                $tmp2303 = NULL;
                                $returnValue2181 = $tmp2303;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
                                $tmp2291 = 0;
                                goto $l2289;
                                $l2304:;
                                $tmp2176 = 6;
                                goto $l2174;
                                $l2305:;
                                return $returnValue2181;
                            }
                            }
                        }
                        }
                        {
                            $tmp2307 = result2177;
                            org$pandalanguage$pandac$ASTNode* $tmp2310 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2311, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2310, $tmp2311, token2187.position, result2177, name2292);
                            $tmp2309 = $tmp2310;
                            $tmp2308 = $tmp2309;
                            result2177 = $tmp2308;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2308));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2307));
                        }
                    }
                    $tmp2291 = -1;
                    goto $l2289;
                    $l2289:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name2292));
                    switch ($tmp2291) {
                        case 0: goto $l2304;
                        case -1: goto $l2312;
                    }
                    $l2312:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2313, 90);
                panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132189.$rawValue, $tmp2313);
                if ($tmp2314.value) {
                {
                    int $tmp2317;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2321 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2320 = $tmp2321;
                        $tmp2319 = $tmp2320;
                        target2318 = $tmp2319;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
                        if (((panda$core$Bit) { target2318 == NULL }).value) {
                        {
                            $tmp2322 = NULL;
                            $returnValue2181 = $tmp2322;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2322));
                            $tmp2317 = 0;
                            goto $l2315;
                            $l2323:;
                            $tmp2176 = 7;
                            goto $l2174;
                            $l2324:;
                            return $returnValue2181;
                        }
                        }
                        {
                            $tmp2326 = result2177;
                            org$pandalanguage$pandac$ASTNode* $tmp2329 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2330, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2332, 90);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2331, $tmp2332);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2329, $tmp2330, token2187.position, result2177, $tmp2331, target2318);
                            $tmp2328 = $tmp2329;
                            $tmp2327 = $tmp2328;
                            result2177 = $tmp2327;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2327));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2328));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
                        }
                    }
                    $tmp2317 = -1;
                    goto $l2315;
                    $l2315:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) target2318));
                    target2318 = NULL;
                    switch ($tmp2317) {
                        case -1: goto $l2333;
                        case 0: goto $l2323;
                    }
                    $l2333:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2334, 63);
                panda$core$Bit $tmp2335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132189.$rawValue, $tmp2334);
                if ($tmp2335.value) {
                {
                    int $tmp2338;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2187);
                        panda$core$String* $tmp2342 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2177);
                        $tmp2341 = $tmp2342;
                        $tmp2340 = $tmp2341;
                        name2339 = $tmp2340;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
                        if (((panda$core$Bit) { name2339 != NULL }).value) {
                        {
                            int $tmp2345;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2349 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2349);
                                $tmp2348 = $tmp2349;
                                $tmp2347 = $tmp2348;
                                types2346 = $tmp2347;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
                                panda$core$Bit$init$builtin_bit(&$tmp2353, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2354 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2353);
                                $tmp2352 = $tmp2354;
                                $tmp2351 = $tmp2352;
                                t2350 = $tmp2351;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
                                if (((panda$core$Bit) { t2350 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2355 = result2177;
                                    $returnValue2181 = $tmp2355;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
                                    $tmp2345 = 0;
                                    goto $l2343;
                                    $l2356:;
                                    $tmp2338 = 0;
                                    goto $l2336;
                                    $l2357:;
                                    $tmp2176 = 8;
                                    goto $l2174;
                                    $l2358:;
                                    return $returnValue2181;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2346, ((panda$core$Object*) t2350));
                                $l2360:;
                                panda$core$Int64$init$builtin_int64(&$tmp2364, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2363, $tmp2364);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2365 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2363);
                                bool $tmp2362 = ((panda$core$Bit) { $tmp2365.nonnull }).value;
                                if (!$tmp2362) goto $l2361;
                                {
                                    {
                                        $tmp2366 = t2350;
                                        panda$core$Bit$init$builtin_bit(&$tmp2369, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2370 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2369);
                                        $tmp2368 = $tmp2370;
                                        $tmp2367 = $tmp2368;
                                        t2350 = $tmp2367;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2368));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
                                    }
                                    if (((panda$core$Bit) { t2350 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2371 = result2177;
                                        $returnValue2181 = $tmp2371;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
                                        $tmp2345 = 1;
                                        goto $l2343;
                                        $l2372:;
                                        $tmp2338 = 1;
                                        goto $l2336;
                                        $l2373:;
                                        $tmp2176 = 9;
                                        goto $l2174;
                                        $l2374:;
                                        return $returnValue2181;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2346, ((panda$core$Object*) t2350));
                                }
                                goto $l2360;
                                $l2361:;
                                panda$core$Int64$init$builtin_int64(&$tmp2378, 64);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2377, $tmp2378);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2380 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2377, &$s2379);
                                gt2376 = $tmp2380;
                                if (((panda$core$Bit) { !gt2376.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2381 = result2177;
                                    $returnValue2181 = $tmp2381;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
                                    $tmp2345 = 2;
                                    goto $l2343;
                                    $l2382:;
                                    $tmp2338 = 2;
                                    goto $l2336;
                                    $l2383:;
                                    $tmp2176 = 10;
                                    goto $l2174;
                                    $l2384:;
                                    return $returnValue2181;
                                }
                                }
                                memset(&shouldAccept2386, 0, sizeof(shouldAccept2386));
                                panda$core$Int64$init$builtin_int64(&$tmp2388, 0);
                                panda$core$Object* $tmp2389 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2388);
                                $tmp2387 = $tmp2389;
                                panda$core$Panda$unref$panda$core$Object$Q($tmp2387);
                                if (((panda$core$Bit$wrapper*) $tmp2387)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2391 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2390 = $tmp2391;
                                    {
                                        $match$1026_292392 = n2390.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2395, 99);
                                        panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292392.$rawValue, $tmp2395);
                                        bool $tmp2394 = $tmp2396.value;
                                        if ($tmp2394) goto $l2397;
                                        panda$core$Int64$init$builtin_int64(&$tmp2398, 106);
                                        panda$core$Bit $tmp2399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292392.$rawValue, $tmp2398);
                                        $tmp2394 = $tmp2399.value;
                                        $l2397:;
                                        panda$core$Bit $tmp2400 = { $tmp2394 };
                                        bool $tmp2393 = $tmp2400.value;
                                        if ($tmp2393) goto $l2401;
                                        panda$core$Int64$init$builtin_int64(&$tmp2402, 90);
                                        panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292392.$rawValue, $tmp2402);
                                        $tmp2393 = $tmp2403.value;
                                        $l2401:;
                                        panda$core$Bit $tmp2404 = { $tmp2393 };
                                        if ($tmp2404.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2405, true);
                                            shouldAccept2386 = $tmp2405;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2406, 104);
                                        panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292392.$rawValue, $tmp2406);
                                        if ($tmp2407.value) {
                                        {
                                            panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2390.position.line, ((org$pandalanguage$pandac$parser$Token) gt2376.value).position.line);
                                            bool $tmp2408 = $tmp2409.value;
                                            if (!$tmp2408) goto $l2410;
                                            panda$core$Int64$init$builtin_int64(&$tmp2411, 1);
                                            panda$core$Int64 $tmp2412 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2376.value).position.column, $tmp2411);
                                            panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2390.position.column, $tmp2412);
                                            $tmp2408 = $tmp2413.value;
                                            $l2410:;
                                            panda$core$Bit $tmp2414 = { $tmp2408 };
                                            shouldAccept2386 = $tmp2414;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2415, false);
                                            shouldAccept2386 = $tmp2415;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2386.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2390);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2416, true);
                                    shouldAccept2386 = $tmp2416;
                                }
                                }
                                if (shouldAccept2386.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2417 = result2177;
                                        org$pandalanguage$pandac$ASTNode* $tmp2420 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2421, 19);
                                        org$pandalanguage$pandac$Position $tmp2423 = (($fn2422) result2177->$class->vtable[2])(result2177);
                                        panda$collections$ImmutableArray* $tmp2425 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2346);
                                        $tmp2424 = $tmp2425;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2420, $tmp2421, $tmp2423, name2339, $tmp2424);
                                        $tmp2419 = $tmp2420;
                                        $tmp2418 = $tmp2419;
                                        result2177 = $tmp2418;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2417));
                                    }
                                    $tmp2345 = 3;
                                    goto $l2343;
                                    $l2426:;
                                    $tmp2338 = 3;
                                    goto $l2336;
                                    $l2427:;
                                    goto $l2185;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2428 = result2177;
                                    $returnValue2181 = $tmp2428;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
                                    $tmp2345 = 4;
                                    goto $l2343;
                                    $l2429:;
                                    $tmp2338 = 4;
                                    goto $l2336;
                                    $l2430:;
                                    $tmp2176 = 11;
                                    goto $l2174;
                                    $l2431:;
                                    return $returnValue2181;
                                }
                                }
                            }
                            $tmp2345 = -1;
                            goto $l2343;
                            $l2343:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t2350));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) types2346));
                            types2346 = NULL;
                            t2350 = NULL;
                            switch ($tmp2345) {
                                case 2: goto $l2382;
                                case 1: goto $l2372;
                                case 4: goto $l2429;
                                case 3: goto $l2426;
                                case 0: goto $l2356;
                                case -1: goto $l2433;
                            }
                            $l2433:;
                        }
                        }
                        $tmp2434 = result2177;
                        $returnValue2181 = $tmp2434;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
                        $tmp2338 = 5;
                        goto $l2336;
                        $l2435:;
                        $tmp2176 = 12;
                        goto $l2174;
                        $l2436:;
                        return $returnValue2181;
                    }
                    $l2336:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name2339));
                    name2339 = NULL;
                    switch ($tmp2338) {
                        case 5: goto $l2435;
                        case 1: goto $l2373;
                        case 4: goto $l2430;
                        case 2: goto $l2383;
                        case 3: goto $l2427;
                        case 0: goto $l2357;
                    }
                    $l2438:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2187);
                    $tmp2439 = result2177;
                    $returnValue2181 = $tmp2439;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
                    $tmp2176 = 13;
                    goto $l2174;
                    $l2440:;
                    return $returnValue2181;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2186:;
    }
    $tmp2176 = -1;
    goto $l2174;
    $l2174:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2177));
    result2177 = NULL;
    switch ($tmp2176) {
        case 1: goto $l2217;
        case 12: goto $l2436;
        case 3: goto $l2245;
        case 5: goto $l2277;
        case 2: goto $l2234;
        case 13: goto $l2440;
        case 9: goto $l2374;
        case 8: goto $l2358;
        case 4: goto $l2269;
        case 6: goto $l2305;
        case 11: goto $l2431;
        case 7: goto $l2324;
        case 10: goto $l2384;
        case -1: goto $l2442;
        case 0: goto $l2183;
    }
    $l2442:;
    if (false) goto $l2443; else goto $l2444;
    $l2444:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2445, (panda$core$Int64) { 906 }, &$s2446);
    abort();
    $l2443:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2450 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2452;
    org$pandalanguage$pandac$ASTNode* $returnValue2454;
    org$pandalanguage$pandac$ASTNode* $tmp2455;
    org$pandalanguage$pandac$parser$Token$nullable op2463;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2464;
    panda$core$Int64 $tmp2465;
    org$pandalanguage$pandac$ASTNode* next2468 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2469;
    org$pandalanguage$pandac$ASTNode* $tmp2470;
    org$pandalanguage$pandac$ASTNode* $tmp2472;
    org$pandalanguage$pandac$ASTNode* $tmp2476;
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    org$pandalanguage$pandac$ASTNode* $tmp2478;
    panda$core$Int64 $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2482;
    int $tmp2449;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2453 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2452 = $tmp2453;
        $tmp2451 = $tmp2452;
        result2450 = $tmp2451;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
        if (((panda$core$Bit) { result2450 == NULL }).value) {
        {
            $tmp2455 = NULL;
            $returnValue2454 = $tmp2455;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
            $tmp2449 = 0;
            goto $l2447;
            $l2456:;
            return $returnValue2454;
        }
        }
        $l2458:;
        while (true) {
        {
            int $tmp2462;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2465, 58);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2464, $tmp2465);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2466 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2464);
                op2463 = $tmp2466;
                if (((panda$core$Bit) { !op2463.nonnull }).value) {
                {
                    $tmp2462 = 0;
                    goto $l2460;
                    $l2467:;
                    goto $l2459;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2471 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2470 = $tmp2471;
                $tmp2469 = $tmp2470;
                next2468 = $tmp2469;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
                if (((panda$core$Bit) { next2468 == NULL }).value) {
                {
                    $tmp2472 = NULL;
                    $returnValue2454 = $tmp2472;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
                    $tmp2462 = 1;
                    goto $l2460;
                    $l2473:;
                    $tmp2449 = 1;
                    goto $l2447;
                    $l2474:;
                    return $returnValue2454;
                }
                }
                {
                    $tmp2476 = result2450;
                    org$pandalanguage$pandac$ASTNode* $tmp2479 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2480, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2479, $tmp2480, ((org$pandalanguage$pandac$parser$Token) op2463.value).position, result2450, ((org$pandalanguage$pandac$parser$Token) op2463.value).kind, next2468);
                    $tmp2478 = $tmp2479;
                    $tmp2477 = $tmp2478;
                    result2450 = $tmp2477;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
                }
            }
            $tmp2462 = -1;
            goto $l2460;
            $l2460:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2468));
            next2468 = NULL;
            switch ($tmp2462) {
                case 1: goto $l2473;
                case -1: goto $l2481;
                case 0: goto $l2467;
            }
            $l2481:;
        }
        }
        $l2459:;
        $tmp2482 = result2450;
        $returnValue2454 = $tmp2482;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
        $tmp2449 = 2;
        goto $l2447;
        $l2483:;
        return $returnValue2454;
    }
    $l2447:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2450));
    result2450 = NULL;
    switch ($tmp2449) {
        case 2: goto $l2483;
        case 0: goto $l2456;
        case 1: goto $l2474;
    }
    $l2485:;
    if (false) goto $l2486; else goto $l2487;
    $l2487:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2488, (panda$core$Int64) { 1063 }, &$s2489);
    abort();
    $l2486:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2490;
    org$pandalanguage$pandac$parser$Token$Kind $match$1087_92492;
    panda$core$Int64 $tmp2495;
    panda$core$Int64 $tmp2498;
    panda$core$Int64 $tmp2502;
    org$pandalanguage$pandac$ASTNode* base2508 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2509;
    org$pandalanguage$pandac$ASTNode* $tmp2510;
    org$pandalanguage$pandac$ASTNode* $returnValue2512;
    org$pandalanguage$pandac$ASTNode* $tmp2513;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $tmp2517;
    panda$core$Int64 $tmp2519;
    org$pandalanguage$pandac$ASTNode* $tmp2523;
    org$pandalanguage$pandac$ASTNode* $tmp2524;
    org$pandalanguage$pandac$parser$Token $tmp2491 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2490 = $tmp2491;
    {
        $match$1087_92492 = op2490.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2495, 53);
        panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92492.$rawValue, $tmp2495);
        bool $tmp2494 = $tmp2496.value;
        if ($tmp2494) goto $l2497;
        panda$core$Int64$init$builtin_int64(&$tmp2498, 50);
        panda$core$Bit $tmp2499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92492.$rawValue, $tmp2498);
        $tmp2494 = $tmp2499.value;
        $l2497:;
        panda$core$Bit $tmp2500 = { $tmp2494 };
        bool $tmp2493 = $tmp2500.value;
        if ($tmp2493) goto $l2501;
        panda$core$Int64$init$builtin_int64(&$tmp2502, 51);
        panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92492.$rawValue, $tmp2502);
        $tmp2493 = $tmp2503.value;
        $l2501:;
        panda$core$Bit $tmp2504 = { $tmp2493 };
        if ($tmp2504.value) {
        {
            int $tmp2507;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2511 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2510 = $tmp2511;
                $tmp2509 = $tmp2510;
                base2508 = $tmp2509;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
                if (((panda$core$Bit) { base2508 == NULL }).value) {
                {
                    $tmp2513 = NULL;
                    $returnValue2512 = $tmp2513;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
                    $tmp2507 = 0;
                    goto $l2505;
                    $l2514:;
                    return $returnValue2512;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2518 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2519, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2518, $tmp2519, op2490.position, op2490.kind, base2508);
                $tmp2517 = $tmp2518;
                $tmp2516 = $tmp2517;
                $returnValue2512 = $tmp2516;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
                $tmp2507 = 1;
                goto $l2505;
                $l2520:;
                return $returnValue2512;
            }
            $l2505:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) base2508));
            base2508 = NULL;
            switch ($tmp2507) {
                case 0: goto $l2514;
                case 1: goto $l2520;
            }
            $l2522:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2490);
            org$pandalanguage$pandac$ASTNode* $tmp2525 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2524 = $tmp2525;
            $tmp2523 = $tmp2524;
            $returnValue2512 = $tmp2523;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2523));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2524));
            return $returnValue2512;
        }
        }
    }
    if (false) goto $l2527; else goto $l2528;
    $l2528:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2529, (panda$core$Int64) { 1085 }, &$s2530);
    abort();
    $l2527:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2534 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2535;
    org$pandalanguage$pandac$ASTNode* $tmp2536;
    org$pandalanguage$pandac$ASTNode* $returnValue2538;
    org$pandalanguage$pandac$ASTNode* $tmp2539;
    org$pandalanguage$pandac$parser$Token op2544;
    org$pandalanguage$pandac$parser$Token$Kind $match$1113_132546;
    panda$core$Int64 $tmp2553;
    panda$core$Int64 $tmp2556;
    panda$core$Int64 $tmp2560;
    panda$core$Int64 $tmp2564;
    panda$core$Int64 $tmp2568;
    panda$core$Int64 $tmp2572;
    panda$core$Int64 $tmp2576;
    org$pandalanguage$pandac$ASTNode* next2582 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2583;
    org$pandalanguage$pandac$ASTNode* $tmp2584;
    org$pandalanguage$pandac$ASTNode* $tmp2586;
    org$pandalanguage$pandac$ASTNode* $tmp2590;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    panda$core$Int64 $tmp2594;
    panda$core$Int64 $tmp2596;
    org$pandalanguage$pandac$parser$Token nextToken2598;
    panda$core$Int64 $tmp2600;
    org$pandalanguage$pandac$ASTNode* next2605 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2606;
    org$pandalanguage$pandac$ASTNode* $tmp2607;
    org$pandalanguage$pandac$ASTNode* $tmp2609;
    org$pandalanguage$pandac$ASTNode* $tmp2613;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $tmp2615;
    panda$core$Int64 $tmp2617;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2618;
    panda$core$Int64 $tmp2619;
    org$pandalanguage$pandac$ASTNode* $tmp2621;
    org$pandalanguage$pandac$ASTNode* $tmp2624;
    int $tmp2533;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2537 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2536 = $tmp2537;
        $tmp2535 = $tmp2536;
        result2534 = $tmp2535;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
        if (((panda$core$Bit) { result2534 == NULL }).value) {
        {
            $tmp2539 = NULL;
            $returnValue2538 = $tmp2539;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
            $tmp2533 = 0;
            goto $l2531;
            $l2540:;
            return $returnValue2538;
        }
        }
        $l2542:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2545 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2544 = $tmp2545;
            {
                $match$1113_132546 = op2544.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2553, 54);
                panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2553);
                bool $tmp2552 = $tmp2554.value;
                if ($tmp2552) goto $l2555;
                panda$core$Int64$init$builtin_int64(&$tmp2556, 55);
                panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2556);
                $tmp2552 = $tmp2557.value;
                $l2555:;
                panda$core$Bit $tmp2558 = { $tmp2552 };
                bool $tmp2551 = $tmp2558.value;
                if ($tmp2551) goto $l2559;
                panda$core$Int64$init$builtin_int64(&$tmp2560, 56);
                panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2560);
                $tmp2551 = $tmp2561.value;
                $l2559:;
                panda$core$Bit $tmp2562 = { $tmp2551 };
                bool $tmp2550 = $tmp2562.value;
                if ($tmp2550) goto $l2563;
                panda$core$Int64$init$builtin_int64(&$tmp2564, 57);
                panda$core$Bit $tmp2565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2564);
                $tmp2550 = $tmp2565.value;
                $l2563:;
                panda$core$Bit $tmp2566 = { $tmp2550 };
                bool $tmp2549 = $tmp2566.value;
                if ($tmp2549) goto $l2567;
                panda$core$Int64$init$builtin_int64(&$tmp2568, 73);
                panda$core$Bit $tmp2569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2568);
                $tmp2549 = $tmp2569.value;
                $l2567:;
                panda$core$Bit $tmp2570 = { $tmp2549 };
                bool $tmp2548 = $tmp2570.value;
                if ($tmp2548) goto $l2571;
                panda$core$Int64$init$builtin_int64(&$tmp2572, 68);
                panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2572);
                $tmp2548 = $tmp2573.value;
                $l2571:;
                panda$core$Bit $tmp2574 = { $tmp2548 };
                bool $tmp2547 = $tmp2574.value;
                if ($tmp2547) goto $l2575;
                panda$core$Int64$init$builtin_int64(&$tmp2576, 70);
                panda$core$Bit $tmp2577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2576);
                $tmp2547 = $tmp2577.value;
                $l2575:;
                panda$core$Bit $tmp2578 = { $tmp2547 };
                if ($tmp2578.value) {
                {
                    int $tmp2581;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2585 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2584 = $tmp2585;
                        $tmp2583 = $tmp2584;
                        next2582 = $tmp2583;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
                        if (((panda$core$Bit) { next2582 == NULL }).value) {
                        {
                            $tmp2586 = NULL;
                            $returnValue2538 = $tmp2586;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
                            $tmp2581 = 0;
                            goto $l2579;
                            $l2587:;
                            $tmp2533 = 1;
                            goto $l2531;
                            $l2588:;
                            return $returnValue2538;
                        }
                        }
                        {
                            $tmp2590 = result2534;
                            org$pandalanguage$pandac$ASTNode* $tmp2593 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2594, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2593, $tmp2594, op2544.position, result2534, op2544.kind, next2582);
                            $tmp2592 = $tmp2593;
                            $tmp2591 = $tmp2592;
                            result2534 = $tmp2591;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
                        }
                    }
                    $tmp2581 = -1;
                    goto $l2579;
                    $l2579:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2582));
                    next2582 = NULL;
                    switch ($tmp2581) {
                        case -1: goto $l2595;
                        case 0: goto $l2587;
                    }
                    $l2595:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2596, 64);
                panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132546.$rawValue, $tmp2596);
                if ($tmp2597.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2599 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2598 = $tmp2599;
                    panda$core$Int64$init$builtin_int64(&$tmp2600, 64);
                    panda$core$Bit $tmp2601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2598.kind.$rawValue, $tmp2600);
                    if ($tmp2601.value) {
                    {
                        int $tmp2604;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2608 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2607 = $tmp2608;
                            $tmp2606 = $tmp2607;
                            next2605 = $tmp2606;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
                            if (((panda$core$Bit) { next2605 == NULL }).value) {
                            {
                                $tmp2609 = NULL;
                                $returnValue2538 = $tmp2609;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
                                $tmp2604 = 0;
                                goto $l2602;
                                $l2610:;
                                $tmp2533 = 2;
                                goto $l2531;
                                $l2611:;
                                return $returnValue2538;
                            }
                            }
                            {
                                $tmp2613 = result2534;
                                org$pandalanguage$pandac$ASTNode* $tmp2616 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2617, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2619, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2618, $tmp2619);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2616, $tmp2617, op2544.position, result2534, $tmp2618, next2605);
                                $tmp2615 = $tmp2616;
                                $tmp2614 = $tmp2615;
                                result2534 = $tmp2614;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
                            }
                        }
                        $tmp2604 = -1;
                        goto $l2602;
                        $l2602:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2605));
                        next2605 = NULL;
                        switch ($tmp2604) {
                            case -1: goto $l2620;
                            case 0: goto $l2610;
                        }
                        $l2620:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2598);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2544);
                        $tmp2621 = result2534;
                        $returnValue2538 = $tmp2621;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
                        $tmp2533 = 3;
                        goto $l2531;
                        $l2622:;
                        return $returnValue2538;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2544);
                    $tmp2624 = result2534;
                    $returnValue2538 = $tmp2624;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
                    $tmp2533 = 4;
                    goto $l2531;
                    $l2625:;
                    return $returnValue2538;
                }
                }
                }
            }
        }
        }
        $l2543:;
    }
    $tmp2533 = -1;
    goto $l2531;
    $l2531:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2534));
    result2534 = NULL;
    switch ($tmp2533) {
        case 2: goto $l2611;
        case 4: goto $l2625;
        case 3: goto $l2622;
        case -1: goto $l2627;
        case 0: goto $l2540;
        case 1: goto $l2588;
    }
    $l2627:;
    if (false) goto $l2628; else goto $l2629;
    $l2629:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2630, (panda$core$Int64) { 1106 }, &$s2631);
    abort();
    $l2628:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2635 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    org$pandalanguage$pandac$ASTNode* $returnValue2639;
    org$pandalanguage$pandac$ASTNode* $tmp2640;
    org$pandalanguage$pandac$parser$Token op2645;
    org$pandalanguage$pandac$parser$Token$Kind $match$1154_132647;
    panda$core$Int64 $tmp2650;
    panda$core$Int64 $tmp2653;
    panda$core$Int64 $tmp2657;
    org$pandalanguage$pandac$ASTNode* next2663 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2664;
    org$pandalanguage$pandac$ASTNode* $tmp2665;
    org$pandalanguage$pandac$ASTNode* $tmp2667;
    org$pandalanguage$pandac$ASTNode* $tmp2671;
    org$pandalanguage$pandac$ASTNode* $tmp2672;
    org$pandalanguage$pandac$ASTNode* $tmp2673;
    panda$core$Int64 $tmp2675;
    org$pandalanguage$pandac$ASTNode* $tmp2677;
    int $tmp2634;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2638 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2637 = $tmp2638;
        $tmp2636 = $tmp2637;
        result2635 = $tmp2636;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
        if (((panda$core$Bit) { result2635 == NULL }).value) {
        {
            $tmp2640 = NULL;
            $returnValue2639 = $tmp2640;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2640));
            $tmp2634 = 0;
            goto $l2632;
            $l2641:;
            return $returnValue2639;
        }
        }
        $l2643:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2646 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2645 = $tmp2646;
            {
                $match$1154_132647 = op2645.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2650, 52);
                panda$core$Bit $tmp2651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132647.$rawValue, $tmp2650);
                bool $tmp2649 = $tmp2651.value;
                if ($tmp2649) goto $l2652;
                panda$core$Int64$init$builtin_int64(&$tmp2653, 53);
                panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132647.$rawValue, $tmp2653);
                $tmp2649 = $tmp2654.value;
                $l2652:;
                panda$core$Bit $tmp2655 = { $tmp2649 };
                bool $tmp2648 = $tmp2655.value;
                if ($tmp2648) goto $l2656;
                panda$core$Int64$init$builtin_int64(&$tmp2657, 72);
                panda$core$Bit $tmp2658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132647.$rawValue, $tmp2657);
                $tmp2648 = $tmp2658.value;
                $l2656:;
                panda$core$Bit $tmp2659 = { $tmp2648 };
                if ($tmp2659.value) {
                {
                    int $tmp2662;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2666 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2665 = $tmp2666;
                        $tmp2664 = $tmp2665;
                        next2663 = $tmp2664;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2664));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2665));
                        if (((panda$core$Bit) { next2663 == NULL }).value) {
                        {
                            $tmp2667 = NULL;
                            $returnValue2639 = $tmp2667;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2667));
                            $tmp2662 = 0;
                            goto $l2660;
                            $l2668:;
                            $tmp2634 = 1;
                            goto $l2632;
                            $l2669:;
                            return $returnValue2639;
                        }
                        }
                        {
                            $tmp2671 = result2635;
                            org$pandalanguage$pandac$ASTNode* $tmp2674 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2675, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2674, $tmp2675, op2645.position, result2635, op2645.kind, next2663);
                            $tmp2673 = $tmp2674;
                            $tmp2672 = $tmp2673;
                            result2635 = $tmp2672;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
                        }
                    }
                    $tmp2662 = -1;
                    goto $l2660;
                    $l2660:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2663));
                    next2663 = NULL;
                    switch ($tmp2662) {
                        case -1: goto $l2676;
                        case 0: goto $l2668;
                    }
                    $l2676:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2645);
                    $tmp2677 = result2635;
                    $returnValue2639 = $tmp2677;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
                    $tmp2634 = 2;
                    goto $l2632;
                    $l2678:;
                    return $returnValue2639;
                }
                }
            }
        }
        }
        $l2644:;
    }
    $tmp2634 = -1;
    goto $l2632;
    $l2632:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2635));
    result2635 = NULL;
    switch ($tmp2634) {
        case 1: goto $l2669;
        case -1: goto $l2680;
        case 2: goto $l2678;
        case 0: goto $l2641;
    }
    $l2680:;
    if (false) goto $l2681; else goto $l2682;
    $l2682:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2683, (panda$core$Int64) { 1147 }, &$s2684);
    abort();
    $l2681:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2688 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1174_92689;
    panda$core$Int64 $tmp2692;
    panda$core$Int64 $tmp2695;
    org$pandalanguage$pandac$ASTNode* $tmp2698;
    org$pandalanguage$pandac$ASTNode* $tmp2699;
    org$pandalanguage$pandac$ASTNode* $tmp2700;
    org$pandalanguage$pandac$ASTNode* $tmp2701;
    org$pandalanguage$pandac$ASTNode* $tmp2702;
    org$pandalanguage$pandac$ASTNode* $returnValue2704;
    org$pandalanguage$pandac$ASTNode* $tmp2705;
    org$pandalanguage$pandac$parser$Token op2708;
    org$pandalanguage$pandac$parser$Token$Kind $match$1184_92710;
    panda$core$Int64 $tmp2712;
    panda$core$Int64 $tmp2715;
    org$pandalanguage$pandac$parser$Token next2721;
    org$pandalanguage$pandac$ASTNode* right2723 = NULL;
    panda$core$Int64 $tmp2726;
    panda$core$Int64 $tmp2729;
    panda$core$Int64 $tmp2733;
    org$pandalanguage$pandac$ASTNode* $tmp2736;
    org$pandalanguage$pandac$ASTNode* $tmp2737;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    org$pandalanguage$pandac$ASTNode* $tmp2740;
    org$pandalanguage$pandac$ASTNode* $tmp2744;
    org$pandalanguage$pandac$ASTNode* $tmp2745;
    org$pandalanguage$pandac$ASTNode* step2746 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2747;
    panda$core$Int64 $tmp2748;
    org$pandalanguage$pandac$ASTNode* $tmp2750;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $tmp2752;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* $tmp2758;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    org$pandalanguage$pandac$ASTNode* $tmp2761;
    panda$core$Int64 $tmp2763;
    panda$core$Int64 $tmp2764;
    org$pandalanguage$pandac$ASTNode* $tmp2770;
    int $tmp2687;
    {
        memset(&result2688, 0, sizeof(result2688));
        {
            org$pandalanguage$pandac$parser$Token $tmp2690 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1174_92689 = $tmp2690.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2692, 98);
            panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1174_92689.$rawValue, $tmp2692);
            bool $tmp2691 = $tmp2693.value;
            if ($tmp2691) goto $l2694;
            panda$core$Int64$init$builtin_int64(&$tmp2695, 97);
            panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1174_92689.$rawValue, $tmp2695);
            $tmp2691 = $tmp2696.value;
            $l2694:;
            panda$core$Bit $tmp2697 = { $tmp2691 };
            if ($tmp2697.value) {
            {
                {
                    $tmp2698 = result2688;
                    $tmp2699 = NULL;
                    result2688 = $tmp2699;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2699));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
                }
            }
            }
            else {
            {
                {
                    $tmp2700 = result2688;
                    org$pandalanguage$pandac$ASTNode* $tmp2703 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2702 = $tmp2703;
                    $tmp2701 = $tmp2702;
                    result2688 = $tmp2701;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
                }
                if (((panda$core$Bit) { result2688 == NULL }).value) {
                {
                    $tmp2705 = NULL;
                    $returnValue2704 = $tmp2705;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
                    $tmp2687 = 0;
                    goto $l2685;
                    $l2706:;
                    return $returnValue2704;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2709 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2708 = $tmp2709;
        {
            $match$1184_92710 = op2708.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2712, 98);
            panda$core$Bit $tmp2713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1184_92710.$rawValue, $tmp2712);
            bool $tmp2711 = $tmp2713.value;
            if ($tmp2711) goto $l2714;
            panda$core$Int64$init$builtin_int64(&$tmp2715, 97);
            panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1184_92710.$rawValue, $tmp2715);
            $tmp2711 = $tmp2716.value;
            $l2714:;
            panda$core$Bit $tmp2717 = { $tmp2711 };
            if ($tmp2717.value) {
            {
                int $tmp2720;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2722 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2721 = $tmp2722;
                    memset(&right2723, 0, sizeof(right2723));
                    panda$core$Int64$init$builtin_int64(&$tmp2726, 103);
                    panda$core$Bit $tmp2727 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2721.kind.$rawValue, $tmp2726);
                    bool $tmp2725 = $tmp2727.value;
                    if (!$tmp2725) goto $l2728;
                    panda$core$Int64$init$builtin_int64(&$tmp2729, 105);
                    panda$core$Bit $tmp2730 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2721.kind.$rawValue, $tmp2729);
                    $tmp2725 = $tmp2730.value;
                    $l2728:;
                    panda$core$Bit $tmp2731 = { $tmp2725 };
                    bool $tmp2724 = $tmp2731.value;
                    if (!$tmp2724) goto $l2732;
                    panda$core$Int64$init$builtin_int64(&$tmp2733, 34);
                    panda$core$Bit $tmp2734 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2721.kind.$rawValue, $tmp2733);
                    $tmp2724 = $tmp2734.value;
                    $l2732:;
                    panda$core$Bit $tmp2735 = { $tmp2724 };
                    if ($tmp2735.value) {
                    {
                        {
                            $tmp2736 = right2723;
                            org$pandalanguage$pandac$ASTNode* $tmp2739 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2738 = $tmp2739;
                            $tmp2737 = $tmp2738;
                            right2723 = $tmp2737;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
                        }
                        if (((panda$core$Bit) { right2723 == NULL }).value) {
                        {
                            $tmp2740 = NULL;
                            $returnValue2704 = $tmp2740;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
                            $tmp2720 = 0;
                            goto $l2718;
                            $l2741:;
                            $tmp2687 = 1;
                            goto $l2685;
                            $l2742:;
                            return $returnValue2704;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2744 = right2723;
                            $tmp2745 = NULL;
                            right2723 = $tmp2745;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2745));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
                        }
                    }
                    }
                    memset(&step2746, 0, sizeof(step2746));
                    panda$core$Int64$init$builtin_int64(&$tmp2748, 34);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2747, $tmp2748);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2749 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2747);
                    if (((panda$core$Bit) { $tmp2749.nonnull }).value) {
                    {
                        {
                            $tmp2750 = step2746;
                            org$pandalanguage$pandac$ASTNode* $tmp2753 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2752 = $tmp2753;
                            $tmp2751 = $tmp2752;
                            step2746 = $tmp2751;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
                        }
                        if (((panda$core$Bit) { step2746 == NULL }).value) {
                        {
                            $tmp2754 = NULL;
                            $returnValue2704 = $tmp2754;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
                            $tmp2720 = 1;
                            goto $l2718;
                            $l2755:;
                            $tmp2687 = 2;
                            goto $l2685;
                            $l2756:;
                            return $returnValue2704;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2758 = step2746;
                            $tmp2759 = NULL;
                            step2746 = $tmp2759;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2762 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2763, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2764, 97);
                    panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2708.kind.$rawValue, $tmp2764);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2762, $tmp2763, op2708.position, result2688, right2723, $tmp2765, step2746);
                    $tmp2761 = $tmp2762;
                    $tmp2760 = $tmp2761;
                    $returnValue2704 = $tmp2760;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
                    $tmp2720 = 2;
                    goto $l2718;
                    $l2766:;
                    $tmp2687 = 3;
                    goto $l2685;
                    $l2767:;
                    return $returnValue2704;
                }
                $l2718:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) step2746));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) right2723));
                switch ($tmp2720) {
                    case 2: goto $l2766;
                    case 0: goto $l2741;
                    case 1: goto $l2755;
                }
                $l2769:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2708);
                $tmp2770 = result2688;
                $returnValue2704 = $tmp2770;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
                $tmp2687 = 4;
                goto $l2685;
                $l2771:;
                return $returnValue2704;
            }
            }
        }
    }
    $tmp2687 = -1;
    goto $l2685;
    $l2685:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2688));
    switch ($tmp2687) {
        case 4: goto $l2771;
        case -1: goto $l2773;
        case 2: goto $l2756;
        case 1: goto $l2742;
        case 3: goto $l2767;
        case 0: goto $l2706;
    }
    $l2773:;
    if (false) goto $l2774; else goto $l2775;
    $l2775:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2776, (panda$core$Int64) { 1172 }, &$s2777);
    abort();
    $l2774:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2781 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2782;
    org$pandalanguage$pandac$ASTNode* $tmp2783;
    org$pandalanguage$pandac$ASTNode* $returnValue2785;
    org$pandalanguage$pandac$ASTNode* $tmp2786;
    org$pandalanguage$pandac$parser$Token op2791;
    org$pandalanguage$pandac$parser$Token$Kind $match$1227_132793;
    panda$core$Int64 $tmp2801;
    panda$core$Int64 $tmp2804;
    panda$core$Int64 $tmp2808;
    panda$core$Int64 $tmp2812;
    panda$core$Int64 $tmp2816;
    panda$core$Int64 $tmp2820;
    panda$core$Int64 $tmp2824;
    panda$core$Int64 $tmp2828;
    org$pandalanguage$pandac$ASTNode* next2834 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$ASTNode* $tmp2836;
    org$pandalanguage$pandac$ASTNode* $tmp2838;
    org$pandalanguage$pandac$ASTNode* $tmp2842;
    org$pandalanguage$pandac$ASTNode* $tmp2843;
    org$pandalanguage$pandac$ASTNode* $tmp2844;
    panda$core$Int64 $tmp2846;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    int $tmp2780;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2784 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2783 = $tmp2784;
        $tmp2782 = $tmp2783;
        result2781 = $tmp2782;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
        if (((panda$core$Bit) { result2781 == NULL }).value) {
        {
            $tmp2786 = NULL;
            $returnValue2785 = $tmp2786;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
            $tmp2780 = 0;
            goto $l2778;
            $l2787:;
            return $returnValue2785;
        }
        }
        $l2789:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2792 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2791 = $tmp2792;
            {
                $match$1227_132793 = op2791.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2801, 59);
                panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2801);
                bool $tmp2800 = $tmp2802.value;
                if ($tmp2800) goto $l2803;
                panda$core$Int64$init$builtin_int64(&$tmp2804, 60);
                panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2804);
                $tmp2800 = $tmp2805.value;
                $l2803:;
                panda$core$Bit $tmp2806 = { $tmp2800 };
                bool $tmp2799 = $tmp2806.value;
                if ($tmp2799) goto $l2807;
                panda$core$Int64$init$builtin_int64(&$tmp2808, 61);
                panda$core$Bit $tmp2809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2808);
                $tmp2799 = $tmp2809.value;
                $l2807:;
                panda$core$Bit $tmp2810 = { $tmp2799 };
                bool $tmp2798 = $tmp2810.value;
                if ($tmp2798) goto $l2811;
                panda$core$Int64$init$builtin_int64(&$tmp2812, 62);
                panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2812);
                $tmp2798 = $tmp2813.value;
                $l2811:;
                panda$core$Bit $tmp2814 = { $tmp2798 };
                bool $tmp2797 = $tmp2814.value;
                if ($tmp2797) goto $l2815;
                panda$core$Int64$init$builtin_int64(&$tmp2816, 63);
                panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2816);
                $tmp2797 = $tmp2817.value;
                $l2815:;
                panda$core$Bit $tmp2818 = { $tmp2797 };
                bool $tmp2796 = $tmp2818.value;
                if ($tmp2796) goto $l2819;
                panda$core$Int64$init$builtin_int64(&$tmp2820, 64);
                panda$core$Bit $tmp2821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2820);
                $tmp2796 = $tmp2821.value;
                $l2819:;
                panda$core$Bit $tmp2822 = { $tmp2796 };
                bool $tmp2795 = $tmp2822.value;
                if ($tmp2795) goto $l2823;
                panda$core$Int64$init$builtin_int64(&$tmp2824, 65);
                panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2824);
                $tmp2795 = $tmp2825.value;
                $l2823:;
                panda$core$Bit $tmp2826 = { $tmp2795 };
                bool $tmp2794 = $tmp2826.value;
                if ($tmp2794) goto $l2827;
                panda$core$Int64$init$builtin_int64(&$tmp2828, 66);
                panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132793.$rawValue, $tmp2828);
                $tmp2794 = $tmp2829.value;
                $l2827:;
                panda$core$Bit $tmp2830 = { $tmp2794 };
                if ($tmp2830.value) {
                {
                    int $tmp2833;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2837 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2836 = $tmp2837;
                        $tmp2835 = $tmp2836;
                        next2834 = $tmp2835;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2835));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
                        if (((panda$core$Bit) { next2834 == NULL }).value) {
                        {
                            $tmp2838 = NULL;
                            $returnValue2785 = $tmp2838;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
                            $tmp2833 = 0;
                            goto $l2831;
                            $l2839:;
                            $tmp2780 = 1;
                            goto $l2778;
                            $l2840:;
                            return $returnValue2785;
                        }
                        }
                        {
                            $tmp2842 = result2781;
                            org$pandalanguage$pandac$ASTNode* $tmp2845 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2846, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2845, $tmp2846, op2791.position, result2781, op2791.kind, next2834);
                            $tmp2844 = $tmp2845;
                            $tmp2843 = $tmp2844;
                            result2781 = $tmp2843;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2843));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
                        }
                    }
                    $tmp2833 = -1;
                    goto $l2831;
                    $l2831:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2834));
                    next2834 = NULL;
                    switch ($tmp2833) {
                        case 0: goto $l2839;
                        case -1: goto $l2847;
                    }
                    $l2847:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2791);
                    $tmp2848 = result2781;
                    $returnValue2785 = $tmp2848;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
                    $tmp2780 = 2;
                    goto $l2778;
                    $l2849:;
                    return $returnValue2785;
                }
                }
            }
        }
        }
        $l2790:;
    }
    $tmp2780 = -1;
    goto $l2778;
    $l2778:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2781));
    result2781 = NULL;
    switch ($tmp2780) {
        case -1: goto $l2851;
        case 2: goto $l2849;
        case 1: goto $l2840;
        case 0: goto $l2787;
    }
    $l2851:;
    if (false) goto $l2852; else goto $l2853;
    $l2853:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2854, (panda$core$Int64) { 1220 }, &$s2855);
    abort();
    $l2852:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2859 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2860;
    org$pandalanguage$pandac$ASTNode* $tmp2861;
    org$pandalanguage$pandac$ASTNode* $returnValue2863;
    org$pandalanguage$pandac$ASTNode* $tmp2864;
    org$pandalanguage$pandac$parser$Token op2869;
    org$pandalanguage$pandac$parser$Token$Kind $match$1258_132871;
    panda$core$Int64 $tmp2873;
    panda$core$Int64 $tmp2876;
    org$pandalanguage$pandac$ASTNode* next2882 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2883;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    org$pandalanguage$pandac$ASTNode* $tmp2886;
    org$pandalanguage$pandac$ASTNode* $tmp2890;
    org$pandalanguage$pandac$ASTNode* $tmp2891;
    org$pandalanguage$pandac$ASTNode* $tmp2892;
    panda$core$Int64 $tmp2894;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    int $tmp2858;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2862 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2861 = $tmp2862;
        $tmp2860 = $tmp2861;
        result2859 = $tmp2860;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2860));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2861));
        if (((panda$core$Bit) { result2859 == NULL }).value) {
        {
            $tmp2864 = NULL;
            $returnValue2863 = $tmp2864;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2864));
            $tmp2858 = 0;
            goto $l2856;
            $l2865:;
            return $returnValue2863;
        }
        }
        $l2867:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2870 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2869 = $tmp2870;
            {
                $match$1258_132871 = op2869.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2873, 67);
                panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1258_132871.$rawValue, $tmp2873);
                bool $tmp2872 = $tmp2874.value;
                if ($tmp2872) goto $l2875;
                panda$core$Int64$init$builtin_int64(&$tmp2876, 71);
                panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1258_132871.$rawValue, $tmp2876);
                $tmp2872 = $tmp2877.value;
                $l2875:;
                panda$core$Bit $tmp2878 = { $tmp2872 };
                if ($tmp2878.value) {
                {
                    int $tmp2881;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2885 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2884 = $tmp2885;
                        $tmp2883 = $tmp2884;
                        next2882 = $tmp2883;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2883));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2884));
                        if (((panda$core$Bit) { next2882 == NULL }).value) {
                        {
                            $tmp2886 = NULL;
                            $returnValue2863 = $tmp2886;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2886));
                            $tmp2881 = 0;
                            goto $l2879;
                            $l2887:;
                            $tmp2858 = 1;
                            goto $l2856;
                            $l2888:;
                            return $returnValue2863;
                        }
                        }
                        {
                            $tmp2890 = result2859;
                            org$pandalanguage$pandac$ASTNode* $tmp2893 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2894, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2893, $tmp2894, op2869.position, result2859, op2869.kind, next2882);
                            $tmp2892 = $tmp2893;
                            $tmp2891 = $tmp2892;
                            result2859 = $tmp2891;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
                        }
                    }
                    $tmp2881 = -1;
                    goto $l2879;
                    $l2879:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2882));
                    next2882 = NULL;
                    switch ($tmp2881) {
                        case -1: goto $l2895;
                        case 0: goto $l2887;
                    }
                    $l2895:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2869);
                    $tmp2896 = result2859;
                    $returnValue2863 = $tmp2896;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2896));
                    $tmp2858 = 2;
                    goto $l2856;
                    $l2897:;
                    return $returnValue2863;
                }
                }
            }
        }
        }
        $l2868:;
    }
    $tmp2858 = -1;
    goto $l2856;
    $l2856:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2859));
    result2859 = NULL;
    switch ($tmp2858) {
        case 2: goto $l2897;
        case 1: goto $l2888;
        case 0: goto $l2865;
        case -1: goto $l2899;
    }
    $l2899:;
    if (false) goto $l2900; else goto $l2901;
    $l2901:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2902, (panda$core$Int64) { 1251 }, &$s2903);
    abort();
    $l2900:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2907 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    org$pandalanguage$pandac$ASTNode* $returnValue2911;
    org$pandalanguage$pandac$ASTNode* $tmp2912;
    org$pandalanguage$pandac$parser$Token$nullable op2920;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2921;
    panda$core$Int64 $tmp2922;
    org$pandalanguage$pandac$ASTNode* next2925 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2926;
    org$pandalanguage$pandac$ASTNode* $tmp2927;
    org$pandalanguage$pandac$ASTNode* $tmp2929;
    org$pandalanguage$pandac$ASTNode* $tmp2933;
    org$pandalanguage$pandac$ASTNode* $tmp2934;
    org$pandalanguage$pandac$ASTNode* $tmp2935;
    panda$core$Int64 $tmp2937;
    org$pandalanguage$pandac$ASTNode* $tmp2939;
    int $tmp2906;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2910 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2909 = $tmp2910;
        $tmp2908 = $tmp2909;
        result2907 = $tmp2908;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2908));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2909));
        if (((panda$core$Bit) { result2907 == NULL }).value) {
        {
            $tmp2912 = NULL;
            $returnValue2911 = $tmp2912;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2912));
            $tmp2906 = 0;
            goto $l2904;
            $l2913:;
            return $returnValue2911;
        }
        }
        $l2915:;
        while (true) {
        {
            int $tmp2919;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2922, 69);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2921, $tmp2922);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2923 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2921);
                op2920 = $tmp2923;
                if (((panda$core$Bit) { !op2920.nonnull }).value) {
                {
                    $tmp2919 = 0;
                    goto $l2917;
                    $l2924:;
                    goto $l2916;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2928 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2927 = $tmp2928;
                $tmp2926 = $tmp2927;
                next2925 = $tmp2926;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2926));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2927));
                if (((panda$core$Bit) { next2925 == NULL }).value) {
                {
                    $tmp2929 = NULL;
                    $returnValue2911 = $tmp2929;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2929));
                    $tmp2919 = 1;
                    goto $l2917;
                    $l2930:;
                    $tmp2906 = 1;
                    goto $l2904;
                    $l2931:;
                    return $returnValue2911;
                }
                }
                {
                    $tmp2933 = result2907;
                    org$pandalanguage$pandac$ASTNode* $tmp2936 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2937, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2936, $tmp2937, ((org$pandalanguage$pandac$parser$Token) op2920.value).position, result2907, ((org$pandalanguage$pandac$parser$Token) op2920.value).kind, next2925);
                    $tmp2935 = $tmp2936;
                    $tmp2934 = $tmp2935;
                    result2907 = $tmp2934;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2934));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2935));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
                }
            }
            $tmp2919 = -1;
            goto $l2917;
            $l2917:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next2925));
            next2925 = NULL;
            switch ($tmp2919) {
                case 0: goto $l2924;
                case 1: goto $l2930;
                case -1: goto $l2938;
            }
            $l2938:;
        }
        }
        $l2916:;
        $tmp2939 = result2907;
        $returnValue2911 = $tmp2939;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2939));
        $tmp2906 = 2;
        goto $l2904;
        $l2940:;
        return $returnValue2911;
    }
    $l2904:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2907));
    result2907 = NULL;
    switch ($tmp2906) {
        case 2: goto $l2940;
        case 1: goto $l2931;
        case 0: goto $l2913;
    }
    $l2942:;
    if (false) goto $l2943; else goto $l2944;
    $l2944:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2945, (panda$core$Int64) { 1275 }, &$s2946);
    abort();
    $l2943:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2950;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2951;
    panda$core$Int64 $tmp2952;
    org$pandalanguage$pandac$ASTNode* $returnValue2955;
    org$pandalanguage$pandac$ASTNode* $tmp2956;
    org$pandalanguage$pandac$ASTNode* test2959 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2960;
    org$pandalanguage$pandac$ASTNode* $tmp2961;
    org$pandalanguage$pandac$ASTNode* $tmp2963;
    panda$collections$ImmutableArray* ifTrue2966 = NULL;
    panda$collections$ImmutableArray* $tmp2967;
    panda$collections$ImmutableArray* $tmp2968;
    org$pandalanguage$pandac$ASTNode* $tmp2970;
    org$pandalanguage$pandac$ASTNode* ifFalse2973 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2974;
    panda$core$Int64 $tmp2975;
    panda$core$Int64 $tmp2978;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    org$pandalanguage$pandac$ASTNode* $tmp2981;
    org$pandalanguage$pandac$ASTNode* $tmp2982;
    org$pandalanguage$pandac$ASTNode* $tmp2984;
    org$pandalanguage$pandac$ASTNode* $tmp2987;
    org$pandalanguage$pandac$ASTNode* $tmp2988;
    org$pandalanguage$pandac$ASTNode* $tmp2989;
    org$pandalanguage$pandac$ASTNode* $tmp2991;
    org$pandalanguage$pandac$ASTNode* $tmp2994;
    org$pandalanguage$pandac$ASTNode* $tmp2995;
    org$pandalanguage$pandac$ASTNode* $tmp2996;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    panda$core$Int64 $tmp2999;
    int $tmp2949;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2952, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2951, $tmp2952);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2954 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2951, &$s2953);
        start2950 = $tmp2954;
        if (((panda$core$Bit) { !start2950.nonnull }).value) {
        {
            $tmp2956 = NULL;
            $returnValue2955 = $tmp2956;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
            $tmp2949 = 0;
            goto $l2947;
            $l2957:;
            return $returnValue2955;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2962 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2961 = $tmp2962;
        $tmp2960 = $tmp2961;
        test2959 = $tmp2960;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2960));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2961));
        if (((panda$core$Bit) { test2959 == NULL }).value) {
        {
            $tmp2963 = NULL;
            $returnValue2955 = $tmp2963;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2963));
            $tmp2949 = 1;
            goto $l2947;
            $l2964:;
            return $returnValue2955;
        }
        }
        panda$collections$ImmutableArray* $tmp2969 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2968 = $tmp2969;
        $tmp2967 = $tmp2968;
        ifTrue2966 = $tmp2967;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2968));
        if (((panda$core$Bit) { ifTrue2966 == NULL }).value) {
        {
            $tmp2970 = NULL;
            $returnValue2955 = $tmp2970;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
            $tmp2949 = 2;
            goto $l2947;
            $l2971:;
            return $returnValue2955;
        }
        }
        memset(&ifFalse2973, 0, sizeof(ifFalse2973));
        panda$core$Int64$init$builtin_int64(&$tmp2975, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2974, $tmp2975);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2976 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2974);
        if (((panda$core$Bit) { $tmp2976.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2977 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2978, 37);
            panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2977.kind.$rawValue, $tmp2978);
            if ($tmp2979.value) {
            {
                {
                    $tmp2980 = ifFalse2973;
                    org$pandalanguage$pandac$ASTNode* $tmp2983 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2982 = $tmp2983;
                    $tmp2981 = $tmp2982;
                    ifFalse2973 = $tmp2981;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2981));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2982));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2980));
                }
                if (((panda$core$Bit) { ifFalse2973 == NULL }).value) {
                {
                    $tmp2984 = NULL;
                    $returnValue2955 = $tmp2984;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
                    $tmp2949 = 3;
                    goto $l2947;
                    $l2985:;
                    return $returnValue2955;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2987 = ifFalse2973;
                    org$pandalanguage$pandac$ASTNode* $tmp2990 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2989 = $tmp2990;
                    $tmp2988 = $tmp2989;
                    ifFalse2973 = $tmp2988;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2988));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
                }
                if (((panda$core$Bit) { ifFalse2973 == NULL }).value) {
                {
                    $tmp2991 = NULL;
                    $returnValue2955 = $tmp2991;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2991));
                    $tmp2949 = 4;
                    goto $l2947;
                    $l2992:;
                    return $returnValue2955;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2994 = ifFalse2973;
                $tmp2995 = NULL;
                ifFalse2973 = $tmp2995;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2995));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2994));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2998 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2999, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2998, $tmp2999, ((org$pandalanguage$pandac$parser$Token) start2950.value).position, test2959, ifTrue2966, ifFalse2973);
        $tmp2997 = $tmp2998;
        $tmp2996 = $tmp2997;
        $returnValue2955 = $tmp2996;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2996));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2997));
        $tmp2949 = 5;
        goto $l2947;
        $l3000:;
        return $returnValue2955;
    }
    $l2947:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ifFalse2973));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ifTrue2966));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) test2959));
    test2959 = NULL;
    ifTrue2966 = NULL;
    switch ($tmp2949) {
        case 1: goto $l2964;
        case 3: goto $l2985;
        case 4: goto $l2992;
        case 2: goto $l2971;
        case 5: goto $l3000;
        case 0: goto $l2957;
    }
    $l3002:;
    if (false) goto $l3003; else goto $l3004;
    $l3004:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3005, (panda$core$Int64) { 1297 }, &$s3006);
    abort();
    $l3003:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp3007;
    panda$core$Int64 $tmp3008;
    org$pandalanguage$pandac$ASTNode* $returnValue3011;
    org$pandalanguage$pandac$ASTNode* $tmp3012;
    org$pandalanguage$pandac$ASTNode* $tmp3014;
    org$pandalanguage$pandac$ASTNode* $tmp3015;
    panda$core$Bit $tmp3016;
    panda$core$Int64$init$builtin_int64(&$tmp3008, 96);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3007, $tmp3008);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3010 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3007, &$s3009);
    if (((panda$core$Bit) { !$tmp3010.nonnull }).value) {
    {
        $tmp3012 = NULL;
        $returnValue3011 = $tmp3012;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3012));
        return $returnValue3011;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp3016, false);
    org$pandalanguage$pandac$ASTNode* $tmp3017 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3016);
    $tmp3015 = $tmp3017;
    $tmp3014 = $tmp3015;
    $returnValue3011 = $tmp3014;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3014));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3015));
    return $returnValue3011;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3019;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3020;
    panda$core$Int64 $tmp3021;
    org$pandalanguage$pandac$ASTNode* $returnValue3024;
    org$pandalanguage$pandac$ASTNode* $tmp3025;
    panda$core$Int64 $tmp3028;
    org$pandalanguage$pandac$ASTNode* type3033 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3034;
    org$pandalanguage$pandac$ASTNode* $tmp3035;
    org$pandalanguage$pandac$ASTNode* $tmp3037;
    org$pandalanguage$pandac$ASTNode* $tmp3040;
    org$pandalanguage$pandac$ASTNode* $tmp3041;
    panda$core$Int64 $tmp3043;
    panda$core$String* $tmp3044;
    org$pandalanguage$pandac$ASTNode* $tmp3049;
    org$pandalanguage$pandac$ASTNode* $tmp3050;
    panda$core$Int64 $tmp3052;
    panda$core$String* $tmp3053;
    panda$core$Int64$init$builtin_int64(&$tmp3021, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3020, $tmp3021);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3023 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3020, &$s3022);
    id3019 = $tmp3023;
    if (((panda$core$Bit) { !id3019.nonnull }).value) {
    {
        $tmp3025 = NULL;
        $returnValue3024 = $tmp3025;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3025));
        return $returnValue3024;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp3027 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp3028, 96);
    panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3027.kind.$rawValue, $tmp3028);
    if ($tmp3029.value) {
    {
        int $tmp3032;
        {
            org$pandalanguage$pandac$ASTNode* $tmp3036 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3035 = $tmp3036;
            $tmp3034 = $tmp3035;
            type3033 = $tmp3034;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3034));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3035));
            if (((panda$core$Bit) { type3033 == NULL }).value) {
            {
                $tmp3037 = NULL;
                $returnValue3024 = $tmp3037;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3037));
                $tmp3032 = 0;
                goto $l3030;
                $l3038:;
                return $returnValue3024;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp3042 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3043, 44);
            panda$core$String* $tmp3045 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3019.value));
            $tmp3044 = $tmp3045;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3042, $tmp3043, ((org$pandalanguage$pandac$parser$Token) id3019.value).position, $tmp3044, type3033);
            $tmp3041 = $tmp3042;
            $tmp3040 = $tmp3041;
            $returnValue3024 = $tmp3040;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3040));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3041));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3044));
            $tmp3032 = 1;
            goto $l3030;
            $l3046:;
            return $returnValue3024;
        }
        $l3030:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) type3033));
        type3033 = NULL;
        switch ($tmp3032) {
            case 0: goto $l3038;
            case 1: goto $l3046;
        }
        $l3048:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3051 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3052, 20);
    panda$core$String* $tmp3054 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3019.value));
    $tmp3053 = $tmp3054;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3051, $tmp3052, ((org$pandalanguage$pandac$parser$Token) id3019.value).position, $tmp3053);
    $tmp3050 = $tmp3051;
    $tmp3049 = $tmp3050;
    $returnValue3024 = $tmp3049;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3049));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3050));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3053));
    return $returnValue3024;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3059;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3060;
    panda$core$Int64 $tmp3061;
    org$pandalanguage$pandac$ASTNode* $returnValue3064;
    org$pandalanguage$pandac$ASTNode* $tmp3065;
    org$pandalanguage$pandac$ASTNode* t3068 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3069;
    org$pandalanguage$pandac$ASTNode* $tmp3070;
    org$pandalanguage$pandac$ASTNode* $tmp3072;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3075;
    panda$core$Int64 $tmp3076;
    org$pandalanguage$pandac$ASTNode* $tmp3079;
    org$pandalanguage$pandac$ASTNode* list3082 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3083;
    org$pandalanguage$pandac$ASTNode* $tmp3084;
    org$pandalanguage$pandac$ASTNode* $tmp3086;
    panda$collections$ImmutableArray* block3089 = NULL;
    panda$collections$ImmutableArray* $tmp3090;
    panda$collections$ImmutableArray* $tmp3091;
    org$pandalanguage$pandac$ASTNode* $tmp3093;
    org$pandalanguage$pandac$ASTNode* $tmp3096;
    org$pandalanguage$pandac$ASTNode* $tmp3097;
    panda$core$Int64 $tmp3099;
    int $tmp3058;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3061, 33);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3060, $tmp3061);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3063 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3060, &$s3062);
        start3059 = $tmp3063;
        if (((panda$core$Bit) { !start3059.nonnull }).value) {
        {
            $tmp3065 = NULL;
            $returnValue3064 = $tmp3065;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3065));
            $tmp3058 = 0;
            goto $l3056;
            $l3066:;
            return $returnValue3064;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3071 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3070 = $tmp3071;
        $tmp3069 = $tmp3070;
        t3068 = $tmp3069;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3069));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3070));
        if (((panda$core$Bit) { t3068 == NULL }).value) {
        {
            $tmp3072 = NULL;
            $returnValue3064 = $tmp3072;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3072));
            $tmp3058 = 1;
            goto $l3056;
            $l3073:;
            return $returnValue3064;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3076, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3075, $tmp3076);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3078 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3075, &$s3077);
        if (((panda$core$Bit) { !$tmp3078.nonnull }).value) {
        {
            $tmp3079 = NULL;
            $returnValue3064 = $tmp3079;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3079));
            $tmp3058 = 2;
            goto $l3056;
            $l3080:;
            return $returnValue3064;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3085 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3084 = $tmp3085;
        $tmp3083 = $tmp3084;
        list3082 = $tmp3083;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3083));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3084));
        if (((panda$core$Bit) { list3082 == NULL }).value) {
        {
            $tmp3086 = NULL;
            $returnValue3064 = $tmp3086;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3086));
            $tmp3058 = 3;
            goto $l3056;
            $l3087:;
            return $returnValue3064;
        }
        }
        panda$collections$ImmutableArray* $tmp3092 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3091 = $tmp3092;
        $tmp3090 = $tmp3091;
        block3089 = $tmp3090;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3090));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3091));
        if (((panda$core$Bit) { block3089 == NULL }).value) {
        {
            $tmp3093 = NULL;
            $returnValue3064 = $tmp3093;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3093));
            $tmp3058 = 4;
            goto $l3056;
            $l3094:;
            return $returnValue3064;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3098 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3099, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3098, $tmp3099, ((org$pandalanguage$pandac$parser$Token) start3059.value).position, p_label, t3068, list3082, block3089);
        $tmp3097 = $tmp3098;
        $tmp3096 = $tmp3097;
        $returnValue3064 = $tmp3096;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3096));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3097));
        $tmp3058 = 5;
        goto $l3056;
        $l3100:;
        return $returnValue3064;
    }
    $l3056:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) block3089));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) list3082));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t3068));
    t3068 = NULL;
    list3082 = NULL;
    block3089 = NULL;
    switch ($tmp3058) {
        case 4: goto $l3094;
        case 3: goto $l3087;
        case 5: goto $l3100;
        case 2: goto $l3080;
        case 0: goto $l3066;
        case 1: goto $l3073;
    }
    $l3102:;
    if (false) goto $l3103; else goto $l3104;
    $l3104:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3105, (panda$core$Int64) { 1362 }, &$s3106);
    abort();
    $l3103:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3110;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3111;
    panda$core$Int64 $tmp3112;
    org$pandalanguage$pandac$ASTNode* $returnValue3115;
    org$pandalanguage$pandac$ASTNode* $tmp3116;
    org$pandalanguage$pandac$ASTNode* test3119 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3120;
    org$pandalanguage$pandac$ASTNode* $tmp3121;
    org$pandalanguage$pandac$ASTNode* $tmp3123;
    panda$collections$ImmutableArray* body3126 = NULL;
    panda$collections$ImmutableArray* $tmp3127;
    panda$collections$ImmutableArray* $tmp3128;
    org$pandalanguage$pandac$ASTNode* $tmp3130;
    org$pandalanguage$pandac$ASTNode* $tmp3133;
    org$pandalanguage$pandac$ASTNode* $tmp3134;
    panda$core$Int64 $tmp3136;
    int $tmp3109;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3112, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3111, $tmp3112);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3114 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3111, &$s3113);
        start3110 = $tmp3114;
        if (((panda$core$Bit) { !start3110.nonnull }).value) {
        {
            $tmp3116 = NULL;
            $returnValue3115 = $tmp3116;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3116));
            $tmp3109 = 0;
            goto $l3107;
            $l3117:;
            return $returnValue3115;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3122 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3121 = $tmp3122;
        $tmp3120 = $tmp3121;
        test3119 = $tmp3120;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3120));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3121));
        if (((panda$core$Bit) { test3119 == NULL }).value) {
        {
            $tmp3123 = NULL;
            $returnValue3115 = $tmp3123;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3123));
            $tmp3109 = 1;
            goto $l3107;
            $l3124:;
            return $returnValue3115;
        }
        }
        panda$collections$ImmutableArray* $tmp3129 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3128 = $tmp3129;
        $tmp3127 = $tmp3128;
        body3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3128));
        if (((panda$core$Bit) { body3126 == NULL }).value) {
        {
            $tmp3130 = NULL;
            $returnValue3115 = $tmp3130;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3130));
            $tmp3109 = 2;
            goto $l3107;
            $l3131:;
            return $returnValue3115;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3135 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3136, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3135, $tmp3136, ((org$pandalanguage$pandac$parser$Token) start3110.value).position, p_label, test3119, body3126);
        $tmp3134 = $tmp3135;
        $tmp3133 = $tmp3134;
        $returnValue3115 = $tmp3133;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3133));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3134));
        $tmp3109 = 3;
        goto $l3107;
        $l3137:;
        return $returnValue3115;
    }
    $l3107:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body3126));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) test3119));
    test3119 = NULL;
    body3126 = NULL;
    switch ($tmp3109) {
        case 3: goto $l3137;
        case 2: goto $l3131;
        case 1: goto $l3124;
        case 0: goto $l3117;
    }
    $l3139:;
    if (false) goto $l3140; else goto $l3141;
    $l3141:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3142, (panda$core$Int64) { 1388 }, &$s3143);
    abort();
    $l3140:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3147;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3148;
    panda$core$Int64 $tmp3149;
    org$pandalanguage$pandac$ASTNode* $returnValue3152;
    org$pandalanguage$pandac$ASTNode* $tmp3153;
    panda$collections$ImmutableArray* body3156 = NULL;
    panda$collections$ImmutableArray* $tmp3157;
    panda$collections$ImmutableArray* $tmp3158;
    org$pandalanguage$pandac$ASTNode* $tmp3160;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3163;
    panda$core$Int64 $tmp3164;
    org$pandalanguage$pandac$ASTNode* $tmp3167;
    org$pandalanguage$pandac$ASTNode* test3170 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3171;
    org$pandalanguage$pandac$ASTNode* $tmp3172;
    org$pandalanguage$pandac$ASTNode* $tmp3174;
    org$pandalanguage$pandac$ASTNode* $tmp3177;
    org$pandalanguage$pandac$ASTNode* $tmp3178;
    panda$core$Int64 $tmp3180;
    int $tmp3146;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3149, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3148, $tmp3149);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3151 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3148, &$s3150);
        start3147 = $tmp3151;
        if (((panda$core$Bit) { !start3147.nonnull }).value) {
        {
            $tmp3153 = NULL;
            $returnValue3152 = $tmp3153;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3153));
            $tmp3146 = 0;
            goto $l3144;
            $l3154:;
            return $returnValue3152;
        }
        }
        panda$collections$ImmutableArray* $tmp3159 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3158 = $tmp3159;
        $tmp3157 = $tmp3158;
        body3156 = $tmp3157;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3157));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3158));
        if (((panda$core$Bit) { body3156 == NULL }).value) {
        {
            $tmp3160 = NULL;
            $returnValue3152 = $tmp3160;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3160));
            $tmp3146 = 1;
            goto $l3144;
            $l3161:;
            return $returnValue3152;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3164, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3163, $tmp3164);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3166 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3163, &$s3165);
        if (((panda$core$Bit) { !$tmp3166.nonnull }).value) {
        {
            $tmp3167 = NULL;
            $returnValue3152 = $tmp3167;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3167));
            $tmp3146 = 2;
            goto $l3144;
            $l3168:;
            return $returnValue3152;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3173 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3172 = $tmp3173;
        $tmp3171 = $tmp3172;
        test3170 = $tmp3171;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3171));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3172));
        if (((panda$core$Bit) { test3170 == NULL }).value) {
        {
            $tmp3174 = NULL;
            $returnValue3152 = $tmp3174;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3174));
            $tmp3146 = 3;
            goto $l3144;
            $l3175:;
            return $returnValue3152;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3179 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3180, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3179, $tmp3180, ((org$pandalanguage$pandac$parser$Token) start3147.value).position, p_label, body3156, test3170);
        $tmp3178 = $tmp3179;
        $tmp3177 = $tmp3178;
        $returnValue3152 = $tmp3177;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3177));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3178));
        $tmp3146 = 4;
        goto $l3144;
        $l3181:;
        return $returnValue3152;
    }
    $l3144:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) test3170));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body3156));
    body3156 = NULL;
    test3170 = NULL;
    switch ($tmp3146) {
        case 3: goto $l3175;
        case 1: goto $l3161;
        case 2: goto $l3168;
        case 4: goto $l3181;
        case 0: goto $l3154;
    }
    $l3183:;
    if (false) goto $l3184; else goto $l3185;
    $l3185:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3186, (panda$core$Int64) { 1407 }, &$s3187);
    abort();
    $l3184:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3191;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3192;
    panda$core$Int64 $tmp3193;
    org$pandalanguage$pandac$ASTNode* $returnValue3196;
    org$pandalanguage$pandac$ASTNode* $tmp3197;
    panda$collections$ImmutableArray* body3200 = NULL;
    panda$collections$ImmutableArray* $tmp3201;
    panda$collections$ImmutableArray* $tmp3202;
    org$pandalanguage$pandac$ASTNode* $tmp3204;
    org$pandalanguage$pandac$ASTNode* $tmp3207;
    org$pandalanguage$pandac$ASTNode* $tmp3208;
    panda$core$Int64 $tmp3210;
    int $tmp3190;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3193, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3192, $tmp3193);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3192, &$s3194);
        start3191 = $tmp3195;
        if (((panda$core$Bit) { !start3191.nonnull }).value) {
        {
            $tmp3197 = NULL;
            $returnValue3196 = $tmp3197;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3197));
            $tmp3190 = 0;
            goto $l3188;
            $l3198:;
            return $returnValue3196;
        }
        }
        panda$collections$ImmutableArray* $tmp3203 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3202 = $tmp3203;
        $tmp3201 = $tmp3202;
        body3200 = $tmp3201;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3201));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3202));
        if (((panda$core$Bit) { body3200 == NULL }).value) {
        {
            $tmp3204 = NULL;
            $returnValue3196 = $tmp3204;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3204));
            $tmp3190 = 1;
            goto $l3188;
            $l3205:;
            return $returnValue3196;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3209 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3210, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3209, $tmp3210, ((org$pandalanguage$pandac$parser$Token) start3191.value).position, p_label, body3200);
        $tmp3208 = $tmp3209;
        $tmp3207 = $tmp3208;
        $returnValue3196 = $tmp3207;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3207));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3208));
        $tmp3190 = 2;
        goto $l3188;
        $l3211:;
        return $returnValue3196;
    }
    $l3188:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body3200));
    body3200 = NULL;
    switch ($tmp3190) {
        case 1: goto $l3205;
        case 2: goto $l3211;
        case 0: goto $l3198;
    }
    $l3213:;
    if (false) goto $l3214; else goto $l3215;
    $l3215:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3216, (panda$core$Int64) { 1429 }, &$s3217);
    abort();
    $l3214:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3221;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3222;
    panda$core$Int64 $tmp3223;
    org$pandalanguage$pandac$ASTNode* $returnValue3226;
    org$pandalanguage$pandac$ASTNode* $tmp3227;
    org$pandalanguage$pandac$ASTNode* expr3230 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3231;
    org$pandalanguage$pandac$ASTNode* $tmp3232;
    org$pandalanguage$pandac$ASTNode* $tmp3234;
    org$pandalanguage$pandac$ASTNode* message3237 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3238;
    panda$core$Int64 $tmp3239;
    org$pandalanguage$pandac$ASTNode* $tmp3241;
    org$pandalanguage$pandac$ASTNode* $tmp3242;
    org$pandalanguage$pandac$ASTNode* $tmp3243;
    org$pandalanguage$pandac$ASTNode* $tmp3245;
    org$pandalanguage$pandac$ASTNode* $tmp3248;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    org$pandalanguage$pandac$ASTNode* $tmp3250;
    org$pandalanguage$pandac$ASTNode* $tmp3251;
    panda$core$Int64 $tmp3253;
    int $tmp3220;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3223, 45);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3222, $tmp3223);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3225 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3222, &$s3224);
        start3221 = $tmp3225;
        if (((panda$core$Bit) { !start3221.nonnull }).value) {
        {
            $tmp3227 = NULL;
            $returnValue3226 = $tmp3227;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3227));
            $tmp3220 = 0;
            goto $l3218;
            $l3228:;
            return $returnValue3226;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3233 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3232 = $tmp3233;
        $tmp3231 = $tmp3232;
        expr3230 = $tmp3231;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3231));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3232));
        if (((panda$core$Bit) { expr3230 == NULL }).value) {
        {
            $tmp3234 = NULL;
            $returnValue3226 = $tmp3234;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3234));
            $tmp3220 = 1;
            goto $l3218;
            $l3235:;
            return $returnValue3226;
        }
        }
        memset(&message3237, 0, sizeof(message3237));
        panda$core$Int64$init$builtin_int64(&$tmp3239, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3238, $tmp3239);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3240 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3238);
        if (((panda$core$Bit) { $tmp3240.nonnull }).value) {
        {
            {
                $tmp3241 = message3237;
                org$pandalanguage$pandac$ASTNode* $tmp3244 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3243 = $tmp3244;
                $tmp3242 = $tmp3243;
                message3237 = $tmp3242;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3242));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3243));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3241));
            }
            if (((panda$core$Bit) { message3237 == NULL }).value) {
            {
                $tmp3245 = NULL;
                $returnValue3226 = $tmp3245;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3245));
                $tmp3220 = 2;
                goto $l3218;
                $l3246:;
                return $returnValue3226;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3248 = message3237;
                $tmp3249 = NULL;
                message3237 = $tmp3249;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3249));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3248));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3252 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3253, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3252, $tmp3253, ((org$pandalanguage$pandac$parser$Token) start3221.value).position, expr3230, message3237);
        $tmp3251 = $tmp3252;
        $tmp3250 = $tmp3251;
        $returnValue3226 = $tmp3250;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3250));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3251));
        $tmp3220 = 3;
        goto $l3218;
        $l3254:;
        return $returnValue3226;
    }
    $l3218:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) message3237));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr3230));
    expr3230 = NULL;
    switch ($tmp3220) {
        case 1: goto $l3235;
        case 2: goto $l3246;
        case 0: goto $l3228;
        case 3: goto $l3254;
    }
    $l3256:;
    if (false) goto $l3257; else goto $l3258;
    $l3258:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3259, (panda$core$Int64) { 1444 }, &$s3260);
    abort();
    $l3257:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3271;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3272;
    panda$core$Int64 $tmp3273;
    org$pandalanguage$pandac$ASTNode* $returnValue3276;
    org$pandalanguage$pandac$ASTNode* $tmp3277;
    panda$core$Bit $tmp3281;
    panda$collections$Array* expressions3282 = NULL;
    panda$collections$Array* $tmp3283;
    panda$collections$Array* $tmp3284;
    org$pandalanguage$pandac$ASTNode* expr3286 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3287;
    org$pandalanguage$pandac$ASTNode* $tmp3288;
    panda$core$Bit $tmp3290;
    org$pandalanguage$pandac$ASTNode* $tmp3291;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3298;
    panda$core$Int64 $tmp3299;
    org$pandalanguage$pandac$ASTNode* $tmp3301;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    org$pandalanguage$pandac$ASTNode* $tmp3303;
    panda$core$Bit $tmp3305;
    org$pandalanguage$pandac$ASTNode* $tmp3306;
    panda$core$Bit $tmp3310;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3311;
    panda$core$Int64 $tmp3312;
    org$pandalanguage$pandac$ASTNode* $tmp3315;
    panda$collections$Array* statements3319 = NULL;
    panda$collections$Array* $tmp3320;
    panda$collections$Array* $tmp3321;
    org$pandalanguage$pandac$parser$Token$Kind $match$1498_133325;
    panda$core$Int64 $tmp3329;
    panda$core$Int64 $tmp3332;
    panda$core$Int64 $tmp3336;
    panda$core$Int64 $tmp3341;
    panda$core$Int64 $tmp3344;
    panda$core$Int64 $tmp3348;
    org$pandalanguage$pandac$ASTNode* stmt3354 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3355;
    org$pandalanguage$pandac$ASTNode* $tmp3356;
    org$pandalanguage$pandac$ASTNode* $tmp3358;
    org$pandalanguage$pandac$ASTNode* stmt3368 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3369;
    org$pandalanguage$pandac$ASTNode* $tmp3370;
    org$pandalanguage$pandac$ASTNode* $tmp3372;
    org$pandalanguage$pandac$ASTNode* $tmp3378;
    org$pandalanguage$pandac$ASTNode* $tmp3379;
    panda$core$Int64 $tmp3381;
    panda$collections$ImmutableArray* $tmp3382;
    panda$collections$ImmutableArray* $tmp3384;
    int $tmp3263;
    {
        if (self->allowLambdas.value) goto $l3264; else goto $l3265;
        $l3265:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3266, (panda$core$Int64) { 1471 }, &$s3267);
        abort();
        $l3264:;
        int $tmp3270;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3273, 40);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3272, $tmp3273);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3275 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3272, &$s3274);
            start3271 = $tmp3275;
            if (((panda$core$Bit) { !start3271.nonnull }).value) {
            {
                $tmp3277 = NULL;
                $returnValue3276 = $tmp3277;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3277));
                $tmp3270 = 0;
                goto $l3268;
                $l3278:;
                $tmp3263 = 0;
                goto $l3261;
                $l3279:;
                return $returnValue3276;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3281, false);
            self->allowLambdas = $tmp3281;
            panda$collections$Array* $tmp3285 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3285);
            $tmp3284 = $tmp3285;
            $tmp3283 = $tmp3284;
            expressions3282 = $tmp3283;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3283));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3284));
            org$pandalanguage$pandac$ASTNode* $tmp3289 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3288 = $tmp3289;
            $tmp3287 = $tmp3288;
            expr3286 = $tmp3287;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3287));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3288));
            if (((panda$core$Bit) { expr3286 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3290, true);
                self->allowLambdas = $tmp3290;
                $tmp3291 = NULL;
                $returnValue3276 = $tmp3291;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3291));
                $tmp3270 = 1;
                goto $l3268;
                $l3292:;
                $tmp3263 = 1;
                goto $l3261;
                $l3293:;
                return $returnValue3276;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3282, ((panda$core$Object*) expr3286));
            $l3295:;
            panda$core$Int64$init$builtin_int64(&$tmp3299, 106);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3298, $tmp3299);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3300 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3298);
            bool $tmp3297 = ((panda$core$Bit) { $tmp3300.nonnull }).value;
            if (!$tmp3297) goto $l3296;
            {
                {
                    $tmp3301 = expr3286;
                    org$pandalanguage$pandac$ASTNode* $tmp3304 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3303 = $tmp3304;
                    $tmp3302 = $tmp3303;
                    expr3286 = $tmp3302;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3302));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3303));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3301));
                }
                if (((panda$core$Bit) { expr3286 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3305, true);
                    self->allowLambdas = $tmp3305;
                    $tmp3306 = NULL;
                    $returnValue3276 = $tmp3306;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3306));
                    $tmp3270 = 2;
                    goto $l3268;
                    $l3307:;
                    $tmp3263 = 2;
                    goto $l3261;
                    $l3308:;
                    return $returnValue3276;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3282, ((panda$core$Object*) expr3286));
            }
            goto $l3295;
            $l3296:;
            panda$core$Bit$init$builtin_bit(&$tmp3310, true);
            self->allowLambdas = $tmp3310;
            panda$core$Int64$init$builtin_int64(&$tmp3312, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3311, $tmp3312);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3314 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3311, &$s3313);
            if (((panda$core$Bit) { !$tmp3314.nonnull }).value) {
            {
                $tmp3315 = NULL;
                $returnValue3276 = $tmp3315;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3315));
                $tmp3270 = 3;
                goto $l3268;
                $l3316:;
                $tmp3263 = 3;
                goto $l3261;
                $l3317:;
                return $returnValue3276;
            }
            }
            panda$collections$Array* $tmp3322 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3322);
            $tmp3321 = $tmp3322;
            $tmp3320 = $tmp3321;
            statements3319 = $tmp3320;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3320));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3321));
            $l3323:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3326 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1498_133325 = $tmp3326.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3329, 40);
                    panda$core$Bit $tmp3330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133325.$rawValue, $tmp3329);
                    bool $tmp3328 = $tmp3330.value;
                    if ($tmp3328) goto $l3331;
                    panda$core$Int64$init$builtin_int64(&$tmp3332, 41);
                    panda$core$Bit $tmp3333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133325.$rawValue, $tmp3332);
                    $tmp3328 = $tmp3333.value;
                    $l3331:;
                    panda$core$Bit $tmp3334 = { $tmp3328 };
                    bool $tmp3327 = $tmp3334.value;
                    if ($tmp3327) goto $l3335;
                    panda$core$Int64$init$builtin_int64(&$tmp3336, 101);
                    panda$core$Bit $tmp3337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133325.$rawValue, $tmp3336);
                    $tmp3327 = $tmp3337.value;
                    $l3335:;
                    panda$core$Bit $tmp3338 = { $tmp3327 };
                    if ($tmp3338.value) {
                    {
                        goto $l3324;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3341, 29);
                    panda$core$Bit $tmp3342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133325.$rawValue, $tmp3341);
                    bool $tmp3340 = $tmp3342.value;
                    if ($tmp3340) goto $l3343;
                    panda$core$Int64$init$builtin_int64(&$tmp3344, 30);
                    panda$core$Bit $tmp3345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133325.$rawValue, $tmp3344);
                    $tmp3340 = $tmp3345.value;
                    $l3343:;
                    panda$core$Bit $tmp3346 = { $tmp3340 };
                    bool $tmp3339 = $tmp3346.value;
                    if ($tmp3339) goto $l3347;
                    panda$core$Int64$init$builtin_int64(&$tmp3348, 28);
                    panda$core$Bit $tmp3349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133325.$rawValue, $tmp3348);
                    $tmp3339 = $tmp3349.value;
                    $l3347:;
                    panda$core$Bit $tmp3350 = { $tmp3339 };
                    if ($tmp3350.value) {
                    {
                        int $tmp3353;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3357 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3356 = $tmp3357;
                            $tmp3355 = $tmp3356;
                            stmt3354 = $tmp3355;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3355));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3356));
                            if (((panda$core$Bit) { stmt3354 == NULL }).value) {
                            {
                                $tmp3358 = NULL;
                                $returnValue3276 = $tmp3358;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3358));
                                $tmp3353 = 0;
                                goto $l3351;
                                $l3359:;
                                $tmp3270 = 4;
                                goto $l3268;
                                $l3360:;
                                $tmp3263 = 4;
                                goto $l3261;
                                $l3361:;
                                return $returnValue3276;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3319, ((panda$core$Object*) stmt3354));
                            $tmp3353 = 1;
                            goto $l3351;
                            $l3363:;
                            goto $l3324;
                        }
                        $l3351:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stmt3354));
                        stmt3354 = NULL;
                        switch ($tmp3353) {
                            case 0: goto $l3359;
                            case 1: goto $l3363;
                        }
                        $l3364:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3367;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3371 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3370 = $tmp3371;
                                $tmp3369 = $tmp3370;
                                stmt3368 = $tmp3369;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3369));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3370));
                                if (((panda$core$Bit) { stmt3368 == NULL }).value) {
                                {
                                    $tmp3372 = NULL;
                                    $returnValue3276 = $tmp3372;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3372));
                                    $tmp3367 = 0;
                                    goto $l3365;
                                    $l3373:;
                                    $tmp3270 = 5;
                                    goto $l3268;
                                    $l3374:;
                                    $tmp3263 = 5;
                                    goto $l3261;
                                    $l3375:;
                                    return $returnValue3276;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3319, ((panda$core$Object*) stmt3368));
                            }
                            $tmp3367 = -1;
                            goto $l3365;
                            $l3365:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stmt3368));
                            stmt3368 = NULL;
                            switch ($tmp3367) {
                                case 0: goto $l3373;
                                case -1: goto $l3377;
                            }
                            $l3377:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3324:;
            org$pandalanguage$pandac$ASTNode* $tmp3380 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3381, 48);
            panda$collections$ImmutableArray* $tmp3383 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3282);
            $tmp3382 = $tmp3383;
            panda$collections$ImmutableArray* $tmp3385 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3319);
            $tmp3384 = $tmp3385;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3380, $tmp3381, ((org$pandalanguage$pandac$parser$Token) start3271.value).position, $tmp3382, $tmp3384);
            $tmp3379 = $tmp3380;
            $tmp3378 = $tmp3379;
            $returnValue3276 = $tmp3378;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3378));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3379));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3384));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3382));
            $tmp3270 = 6;
            goto $l3268;
            $l3386:;
            $tmp3263 = 6;
            goto $l3261;
            $l3387:;
            return $returnValue3276;
        }
        $l3268:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) statements3319));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr3286));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expressions3282));
        expressions3282 = NULL;
        expr3286 = NULL;
        statements3319 = NULL;
        switch ($tmp3270) {
            case 5: goto $l3374;
            case 3: goto $l3316;
            case 2: goto $l3307;
            case 0: goto $l3278;
            case 4: goto $l3360;
            case 1: goto $l3292;
            case 6: goto $l3386;
        }
        $l3389:;
        if (false) goto $l3390; else goto $l3391;
        $l3391:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3392, (panda$core$Int64) { 1471 }, &$s3393);
        abort();
        $l3390:;
    }
    $tmp3263 = -1;
    goto $l3261;
    $l3261:;
    if (self->allowLambdas.value) goto $l3395; else goto $l3396;
    $l3396:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3397, (panda$core$Int64) { 1471 }, &$s3398);
    abort();
    $l3395:;
    switch ($tmp3263) {
        case 3: goto $l3317;
        case 5: goto $l3375;
        case 2: goto $l3308;
        case 4: goto $l3361;
        case 1: goto $l3293;
        case 6: goto $l3387;
        case 0: goto $l3279;
        case -1: goto $l3394;
    }
    $l3394:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3402;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3403;
    panda$core$Int64 $tmp3404;
    org$pandalanguage$pandac$ASTNode* $returnValue3407;
    org$pandalanguage$pandac$ASTNode* $tmp3408;
    org$pandalanguage$pandac$ASTNode* expr3411 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3412;
    org$pandalanguage$pandac$ASTNode* $tmp3413;
    org$pandalanguage$pandac$ASTNode* $tmp3415;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3418;
    panda$core$Int64 $tmp3419;
    org$pandalanguage$pandac$ASTNode* $tmp3422;
    panda$collections$Array* whens3425 = NULL;
    panda$collections$Array* $tmp3426;
    panda$collections$Array* $tmp3427;
    panda$collections$Array* other3429 = NULL;
    panda$collections$Array* $tmp3430;
    org$pandalanguage$pandac$parser$Token token3433;
    org$pandalanguage$pandac$parser$Token$Kind $match$1539_133435;
    panda$core$Int64 $tmp3436;
    panda$core$Int64 $tmp3438;
    org$pandalanguage$pandac$ASTNode* w3443 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3444;
    org$pandalanguage$pandac$ASTNode* $tmp3445;
    org$pandalanguage$pandac$ASTNode* $tmp3447;
    panda$core$Int64 $tmp3452;
    org$pandalanguage$pandac$parser$Token o3454;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3456;
    panda$core$Int64 $tmp3457;
    org$pandalanguage$pandac$ASTNode* $tmp3460;
    panda$collections$Array* $tmp3463;
    panda$collections$Array* $tmp3464;
    panda$collections$Array* $tmp3465;
    org$pandalanguage$pandac$parser$Token$Kind $match$1555_253469;
    panda$core$Int64 $tmp3471;
    panda$core$Int64 $tmp3475;
    panda$core$Int64 $tmp3478;
    panda$core$Int64 $tmp3482;
    org$pandalanguage$pandac$ASTNode* stmt3488 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3489;
    org$pandalanguage$pandac$ASTNode* $tmp3490;
    org$pandalanguage$pandac$ASTNode* $tmp3492;
    org$pandalanguage$pandac$ASTNode* stmt3501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3502;
    org$pandalanguage$pandac$ASTNode* $tmp3503;
    org$pandalanguage$pandac$ASTNode* $tmp3505;
    panda$core$String* $tmp3510;
    panda$core$String* $tmp3512;
    panda$core$String* $tmp3513;
    panda$core$String* $tmp3515;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3521;
    panda$core$Int64 $tmp3522;
    org$pandalanguage$pandac$ASTNode* $tmp3525;
    org$pandalanguage$pandac$ASTNode* $tmp3528;
    org$pandalanguage$pandac$ASTNode* $tmp3529;
    panda$core$Int64 $tmp3531;
    panda$collections$ImmutableArray* $tmp3532;
    panda$collections$ImmutableArray* $tmp3534;
    org$pandalanguage$pandac$ASTNode* $tmp3538;
    org$pandalanguage$pandac$ASTNode* $tmp3539;
    panda$core$Int64 $tmp3541;
    panda$collections$ImmutableArray* $tmp3542;
    int $tmp3401;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3404, 39);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3403, $tmp3404);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3406 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3403, &$s3405);
        start3402 = $tmp3406;
        if (((panda$core$Bit) { !start3402.nonnull }).value) {
        {
            $tmp3408 = NULL;
            $returnValue3407 = $tmp3408;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3408));
            $tmp3401 = 0;
            goto $l3399;
            $l3409:;
            return $returnValue3407;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3414 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3413 = $tmp3414;
        $tmp3412 = $tmp3413;
        expr3411 = $tmp3412;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3412));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3413));
        if (((panda$core$Bit) { expr3411 == NULL }).value) {
        {
            $tmp3415 = NULL;
            $returnValue3407 = $tmp3415;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3415));
            $tmp3401 = 1;
            goto $l3399;
            $l3416:;
            return $returnValue3407;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3419, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3418, $tmp3419);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3421 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3418, &$s3420);
        if (((panda$core$Bit) { !$tmp3421.nonnull }).value) {
        {
            $tmp3422 = NULL;
            $returnValue3407 = $tmp3422;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3422));
            $tmp3401 = 2;
            goto $l3399;
            $l3423:;
            return $returnValue3407;
        }
        }
        panda$collections$Array* $tmp3428 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3428);
        $tmp3427 = $tmp3428;
        $tmp3426 = $tmp3427;
        whens3425 = $tmp3426;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3426));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3427));
        $tmp3430 = NULL;
        other3429 = $tmp3430;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3430));
        $l3431:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3434 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3433 = $tmp3434;
            {
                $match$1539_133435 = token3433.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3436, 101);
                panda$core$Bit $tmp3437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133435.$rawValue, $tmp3436);
                if ($tmp3437.value) {
                {
                    goto $l3432;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3438, 40);
                panda$core$Bit $tmp3439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133435.$rawValue, $tmp3438);
                if ($tmp3439.value) {
                {
                    int $tmp3442;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3446 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3445 = $tmp3446;
                        $tmp3444 = $tmp3445;
                        w3443 = $tmp3444;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3444));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3445));
                        if (((panda$core$Bit) { w3443 == NULL }).value) {
                        {
                            $tmp3447 = NULL;
                            $returnValue3407 = $tmp3447;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3447));
                            $tmp3442 = 0;
                            goto $l3440;
                            $l3448:;
                            $tmp3401 = 3;
                            goto $l3399;
                            $l3449:;
                            return $returnValue3407;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3425, ((panda$core$Object*) w3443));
                    }
                    $tmp3442 = -1;
                    goto $l3440;
                    $l3440:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) w3443));
                    w3443 = NULL;
                    switch ($tmp3442) {
                        case -1: goto $l3451;
                        case 0: goto $l3448;
                    }
                    $l3451:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3452, 41);
                panda$core$Bit $tmp3453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133435.$rawValue, $tmp3452);
                if ($tmp3453.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3455 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3454 = $tmp3455;
                    panda$core$Int64$init$builtin_int64(&$tmp3457, 96);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3456, $tmp3457);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3459 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3456, &$s3458);
                    if (((panda$core$Bit) { !$tmp3459.nonnull }).value) {
                    {
                        $tmp3460 = NULL;
                        $returnValue3407 = $tmp3460;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3460));
                        $tmp3401 = 4;
                        goto $l3399;
                        $l3461:;
                        return $returnValue3407;
                    }
                    }
                    {
                        $tmp3463 = other3429;
                        panda$collections$Array* $tmp3466 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3466);
                        $tmp3465 = $tmp3466;
                        $tmp3464 = $tmp3465;
                        other3429 = $tmp3464;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3464));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3465));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3463));
                    }
                    $l3467:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3470 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1555_253469 = $tmp3470.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3471, 101);
                            panda$core$Bit $tmp3472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253469.$rawValue, $tmp3471);
                            if ($tmp3472.value) {
                            {
                                goto $l3468;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3475, 29);
                            panda$core$Bit $tmp3476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253469.$rawValue, $tmp3475);
                            bool $tmp3474 = $tmp3476.value;
                            if ($tmp3474) goto $l3477;
                            panda$core$Int64$init$builtin_int64(&$tmp3478, 30);
                            panda$core$Bit $tmp3479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253469.$rawValue, $tmp3478);
                            $tmp3474 = $tmp3479.value;
                            $l3477:;
                            panda$core$Bit $tmp3480 = { $tmp3474 };
                            bool $tmp3473 = $tmp3480.value;
                            if ($tmp3473) goto $l3481;
                            panda$core$Int64$init$builtin_int64(&$tmp3482, 28);
                            panda$core$Bit $tmp3483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253469.$rawValue, $tmp3482);
                            $tmp3473 = $tmp3483.value;
                            $l3481:;
                            panda$core$Bit $tmp3484 = { $tmp3473 };
                            if ($tmp3484.value) {
                            {
                                int $tmp3487;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3491 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3490 = $tmp3491;
                                    $tmp3489 = $tmp3490;
                                    stmt3488 = $tmp3489;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3489));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3490));
                                    if (((panda$core$Bit) { stmt3488 == NULL }).value) {
                                    {
                                        $tmp3492 = NULL;
                                        $returnValue3407 = $tmp3492;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3492));
                                        $tmp3487 = 0;
                                        goto $l3485;
                                        $l3493:;
                                        $tmp3401 = 5;
                                        goto $l3399;
                                        $l3494:;
                                        return $returnValue3407;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3429, ((panda$core$Object*) stmt3488));
                                    $tmp3487 = 1;
                                    goto $l3485;
                                    $l3496:;
                                    goto $l3468;
                                }
                                $l3485:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stmt3488));
                                stmt3488 = NULL;
                                switch ($tmp3487) {
                                    case 0: goto $l3493;
                                    case 1: goto $l3496;
                                }
                                $l3497:;
                            }
                            }
                            else {
                            {
                                int $tmp3500;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3504 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3503 = $tmp3504;
                                    $tmp3502 = $tmp3503;
                                    stmt3501 = $tmp3502;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3502));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3503));
                                    if (((panda$core$Bit) { stmt3501 == NULL }).value) {
                                    {
                                        $tmp3505 = NULL;
                                        $returnValue3407 = $tmp3505;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3505));
                                        $tmp3500 = 0;
                                        goto $l3498;
                                        $l3506:;
                                        $tmp3401 = 6;
                                        goto $l3399;
                                        $l3507:;
                                        return $returnValue3407;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3429, ((panda$core$Object*) stmt3501));
                                }
                                $tmp3500 = -1;
                                goto $l3498;
                                $l3498:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stmt3501));
                                stmt3501 = NULL;
                                switch ($tmp3500) {
                                    case 0: goto $l3506;
                                    case -1: goto $l3509;
                                }
                                $l3509:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3468:;
                    goto $l3432;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3516 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3433);
                    $tmp3515 = $tmp3516;
                    panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3514, $tmp3515);
                    $tmp3513 = $tmp3517;
                    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, &$s3518);
                    $tmp3512 = $tmp3519;
                    panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3511, $tmp3512);
                    $tmp3510 = $tmp3520;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3433, $tmp3510);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3510));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3512));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3513));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3515));
                    goto $l3432;
                }
                }
                }
                }
            }
        }
        }
        $l3432:;
        panda$core$Int64$init$builtin_int64(&$tmp3522, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3521, $tmp3522);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3524 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3521, &$s3523);
        if (((panda$core$Bit) { !$tmp3524.nonnull }).value) {
        {
            $tmp3525 = NULL;
            $returnValue3407 = $tmp3525;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3525));
            $tmp3401 = 7;
            goto $l3399;
            $l3526:;
            return $returnValue3407;
        }
        }
        if (((panda$core$Bit) { other3429 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3530 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3531, 25);
            panda$collections$ImmutableArray* $tmp3533 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3425);
            $tmp3532 = $tmp3533;
            panda$collections$ImmutableArray* $tmp3535 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3429);
            $tmp3534 = $tmp3535;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3530, $tmp3531, ((org$pandalanguage$pandac$parser$Token) start3402.value).position, expr3411, $tmp3532, $tmp3534);
            $tmp3529 = $tmp3530;
            $tmp3528 = $tmp3529;
            $returnValue3407 = $tmp3528;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3528));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3529));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3534));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3532));
            $tmp3401 = 8;
            goto $l3399;
            $l3536:;
            return $returnValue3407;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3540 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3541, 25);
        panda$collections$ImmutableArray* $tmp3543 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3425);
        $tmp3542 = $tmp3543;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3540, $tmp3541, ((org$pandalanguage$pandac$parser$Token) start3402.value).position, expr3411, $tmp3542, NULL);
        $tmp3539 = $tmp3540;
        $tmp3538 = $tmp3539;
        $returnValue3407 = $tmp3538;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3538));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3539));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3542));
        $tmp3401 = 9;
        goto $l3399;
        $l3544:;
        return $returnValue3407;
    }
    $l3399:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) other3429));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) whens3425));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr3411));
    expr3411 = NULL;
    whens3425 = NULL;
    switch ($tmp3401) {
        case 8: goto $l3536;
        case 3: goto $l3449;
        case 6: goto $l3507;
        case 1: goto $l3416;
        case 9: goto $l3544;
        case 4: goto $l3461;
        case 5: goto $l3494;
        case 0: goto $l3409;
        case 2: goto $l3423;
        case 7: goto $l3526;
    }
    $l3546:;
    if (false) goto $l3547; else goto $l3548;
    $l3548:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3549, (panda$core$Int64) { 1523 }, &$s3550);
    abort();
    $l3547:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3554;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3555;
    panda$core$Int64 $tmp3556;
    panda$collections$ImmutableArray* $returnValue3559;
    panda$collections$ImmutableArray* $tmp3560;
    panda$collections$Array* result3563 = NULL;
    panda$collections$Array* $tmp3564;
    panda$collections$Array* $tmp3565;
    org$pandalanguage$pandac$parser$Token$Kind $match$1600_133569;
    panda$core$Int64 $tmp3571;
    panda$core$Int64 $tmp3575;
    panda$core$Int64 $tmp3578;
    panda$core$Int64 $tmp3582;
    org$pandalanguage$pandac$ASTNode* stmt3588 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3589;
    org$pandalanguage$pandac$ASTNode* $tmp3590;
    panda$collections$ImmutableArray* $tmp3592;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3596;
    panda$core$Int64 $tmp3597;
    panda$collections$ImmutableArray* $tmp3600;
    org$pandalanguage$pandac$ASTNode* stmt3609 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3610;
    org$pandalanguage$pandac$ASTNode* $tmp3611;
    panda$collections$ImmutableArray* $tmp3613;
    panda$collections$ImmutableArray* $tmp3618;
    panda$collections$ImmutableArray* $tmp3619;
    int $tmp3553;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3556, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3555, $tmp3556);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3558 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3555, &$s3557);
        start3554 = $tmp3558;
        if (((panda$core$Bit) { !start3554.nonnull }).value) {
        {
            $tmp3560 = NULL;
            $returnValue3559 = $tmp3560;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3560));
            $tmp3553 = 0;
            goto $l3551;
            $l3561:;
            return $returnValue3559;
        }
        }
        panda$collections$Array* $tmp3566 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3566);
        $tmp3565 = $tmp3566;
        $tmp3564 = $tmp3565;
        result3563 = $tmp3564;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3564));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3565));
        $l3567:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3570 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1600_133569 = $tmp3570.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3571, 101);
                panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133569.$rawValue, $tmp3571);
                if ($tmp3572.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3568;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3575, 29);
                panda$core$Bit $tmp3576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133569.$rawValue, $tmp3575);
                bool $tmp3574 = $tmp3576.value;
                if ($tmp3574) goto $l3577;
                panda$core$Int64$init$builtin_int64(&$tmp3578, 30);
                panda$core$Bit $tmp3579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133569.$rawValue, $tmp3578);
                $tmp3574 = $tmp3579.value;
                $l3577:;
                panda$core$Bit $tmp3580 = { $tmp3574 };
                bool $tmp3573 = $tmp3580.value;
                if ($tmp3573) goto $l3581;
                panda$core$Int64$init$builtin_int64(&$tmp3582, 28);
                panda$core$Bit $tmp3583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133569.$rawValue, $tmp3582);
                $tmp3573 = $tmp3583.value;
                $l3581:;
                panda$core$Bit $tmp3584 = { $tmp3573 };
                if ($tmp3584.value) {
                {
                    int $tmp3587;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3591 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3590 = $tmp3591;
                        $tmp3589 = $tmp3590;
                        stmt3588 = $tmp3589;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3589));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3590));
                        if (((panda$core$Bit) { stmt3588 == NULL }).value) {
                        {
                            $tmp3592 = NULL;
                            $returnValue3559 = $tmp3592;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3592));
                            $tmp3587 = 0;
                            goto $l3585;
                            $l3593:;
                            $tmp3553 = 1;
                            goto $l3551;
                            $l3594:;
                            return $returnValue3559;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3597, 101);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3596, $tmp3597);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3599 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3596, &$s3598);
                        if (((panda$core$Bit) { !$tmp3599.nonnull }).value) {
                        {
                            $tmp3600 = NULL;
                            $returnValue3559 = $tmp3600;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3600));
                            $tmp3587 = 1;
                            goto $l3585;
                            $l3601:;
                            $tmp3553 = 2;
                            goto $l3551;
                            $l3602:;
                            return $returnValue3559;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3563, ((panda$core$Object*) stmt3588));
                        $tmp3587 = 2;
                        goto $l3585;
                        $l3604:;
                        goto $l3568;
                    }
                    $l3585:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stmt3588));
                    stmt3588 = NULL;
                    switch ($tmp3587) {
                        case 2: goto $l3604;
                        case 0: goto $l3593;
                        case 1: goto $l3601;
                    }
                    $l3605:;
                }
                }
                else {
                {
                    int $tmp3608;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3612 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3611 = $tmp3612;
                        $tmp3610 = $tmp3611;
                        stmt3609 = $tmp3610;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3610));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3611));
                        if (((panda$core$Bit) { stmt3609 == NULL }).value) {
                        {
                            $tmp3613 = NULL;
                            $returnValue3559 = $tmp3613;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3613));
                            $tmp3608 = 0;
                            goto $l3606;
                            $l3614:;
                            $tmp3553 = 3;
                            goto $l3551;
                            $l3615:;
                            return $returnValue3559;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3563, ((panda$core$Object*) stmt3609));
                    }
                    $tmp3608 = -1;
                    goto $l3606;
                    $l3606:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stmt3609));
                    stmt3609 = NULL;
                    switch ($tmp3608) {
                        case -1: goto $l3617;
                        case 0: goto $l3614;
                    }
                    $l3617:;
                }
                }
                }
            }
        }
        }
        $l3568:;
        panda$collections$ImmutableArray* $tmp3620 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3563);
        $tmp3619 = $tmp3620;
        $tmp3618 = $tmp3619;
        $returnValue3559 = $tmp3618;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3618));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3619));
        $tmp3553 = 4;
        goto $l3551;
        $l3621:;
        return $returnValue3559;
    }
    $l3551:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result3563));
    result3563 = NULL;
    switch ($tmp3553) {
        case 4: goto $l3621;
        case 2: goto $l3602;
        case 3: goto $l3615;
        case 1: goto $l3594;
        case 0: goto $l3561;
    }
    $l3623:;
    if (false) goto $l3624; else goto $l3625;
    $l3625:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3626, (panda$core$Int64) { 1593 }, &$s3627);
    abort();
    $l3624:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3631 = NULL;
    panda$collections$ImmutableArray* $tmp3632;
    panda$collections$ImmutableArray* $tmp3633;
    org$pandalanguage$pandac$ASTNode* $returnValue3635;
    org$pandalanguage$pandac$ASTNode* $tmp3636;
    org$pandalanguage$pandac$ASTNode* $tmp3639;
    org$pandalanguage$pandac$ASTNode* $tmp3640;
    panda$core$Int64 $tmp3642;
    org$pandalanguage$pandac$Position $tmp3643;
    int $tmp3630;
    {
        panda$collections$ImmutableArray* $tmp3634 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3633 = $tmp3634;
        $tmp3632 = $tmp3633;
        statements3631 = $tmp3632;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3632));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3633));
        if (((panda$core$Bit) { statements3631 == NULL }).value) {
        {
            $tmp3636 = NULL;
            $returnValue3635 = $tmp3636;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3636));
            $tmp3630 = 0;
            goto $l3628;
            $l3637:;
            return $returnValue3635;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3641 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3642, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3643);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3641, $tmp3642, $tmp3643, statements3631);
        $tmp3640 = $tmp3641;
        $tmp3639 = $tmp3640;
        $returnValue3635 = $tmp3639;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3639));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3640));
        $tmp3630 = 1;
        goto $l3628;
        $l3644:;
        return $returnValue3635;
    }
    $l3628:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) statements3631));
    statements3631 = NULL;
    switch ($tmp3630) {
        case 1: goto $l3644;
        case 0: goto $l3637;
    }
    $l3646:;
    if (false) goto $l3647; else goto $l3648;
    $l3648:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3649, (panda$core$Int64) { 1628 }, &$s3650);
    abort();
    $l3647:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3654 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3655;
    org$pandalanguage$pandac$ASTNode* $tmp3656;
    org$pandalanguage$pandac$ASTNode* $returnValue3658;
    org$pandalanguage$pandac$ASTNode* $tmp3659;
    org$pandalanguage$pandac$parser$Token$Kind $match$1644_93662;
    panda$core$Int64 $tmp3679;
    panda$core$Int64 $tmp3682;
    panda$core$Int64 $tmp3686;
    panda$core$Int64 $tmp3690;
    panda$core$Int64 $tmp3694;
    panda$core$Int64 $tmp3698;
    panda$core$Int64 $tmp3702;
    panda$core$Int64 $tmp3706;
    panda$core$Int64 $tmp3710;
    panda$core$Int64 $tmp3714;
    panda$core$Int64 $tmp3718;
    panda$core$Int64 $tmp3722;
    panda$core$Int64 $tmp3726;
    panda$core$Int64 $tmp3730;
    panda$core$Int64 $tmp3734;
    panda$core$Int64 $tmp3738;
    org$pandalanguage$pandac$parser$Token op3744;
    org$pandalanguage$pandac$ASTNode* rvalue3746 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3747;
    org$pandalanguage$pandac$ASTNode* $tmp3748;
    org$pandalanguage$pandac$ASTNode* $tmp3750;
    org$pandalanguage$pandac$ASTNode* $tmp3754;
    org$pandalanguage$pandac$ASTNode* $tmp3755;
    panda$core$Int64 $tmp3757;
    panda$core$Int64 $tmp3764;
    org$pandalanguage$pandac$parser$Token op3771;
    org$pandalanguage$pandac$ASTNode* rvalue3773 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3774;
    org$pandalanguage$pandac$ASTNode* $tmp3775;
    org$pandalanguage$pandac$ASTNode* $tmp3777;
    org$pandalanguage$pandac$ASTNode* $tmp3781;
    org$pandalanguage$pandac$ASTNode* $tmp3782;
    panda$core$Int64 $tmp3784;
    org$pandalanguage$pandac$ASTNode* $tmp3791;
    int $tmp3653;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3657 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3656 = $tmp3657;
        $tmp3655 = $tmp3656;
        start3654 = $tmp3655;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3655));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3656));
        if (((panda$core$Bit) { start3654 == NULL }).value) {
        {
            $tmp3659 = NULL;
            $returnValue3658 = $tmp3659;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3659));
            $tmp3653 = 0;
            goto $l3651;
            $l3660:;
            return $returnValue3658;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3663 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1644_93662 = $tmp3663.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3679, 74);
            panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3679);
            bool $tmp3678 = $tmp3680.value;
            if ($tmp3678) goto $l3681;
            panda$core$Int64$init$builtin_int64(&$tmp3682, 75);
            panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3682);
            $tmp3678 = $tmp3683.value;
            $l3681:;
            panda$core$Bit $tmp3684 = { $tmp3678 };
            bool $tmp3677 = $tmp3684.value;
            if ($tmp3677) goto $l3685;
            panda$core$Int64$init$builtin_int64(&$tmp3686, 76);
            panda$core$Bit $tmp3687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3686);
            $tmp3677 = $tmp3687.value;
            $l3685:;
            panda$core$Bit $tmp3688 = { $tmp3677 };
            bool $tmp3676 = $tmp3688.value;
            if ($tmp3676) goto $l3689;
            panda$core$Int64$init$builtin_int64(&$tmp3690, 77);
            panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3690);
            $tmp3676 = $tmp3691.value;
            $l3689:;
            panda$core$Bit $tmp3692 = { $tmp3676 };
            bool $tmp3675 = $tmp3692.value;
            if ($tmp3675) goto $l3693;
            panda$core$Int64$init$builtin_int64(&$tmp3694, 78);
            panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3694);
            $tmp3675 = $tmp3695.value;
            $l3693:;
            panda$core$Bit $tmp3696 = { $tmp3675 };
            bool $tmp3674 = $tmp3696.value;
            if ($tmp3674) goto $l3697;
            panda$core$Int64$init$builtin_int64(&$tmp3698, 79);
            panda$core$Bit $tmp3699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3698);
            $tmp3674 = $tmp3699.value;
            $l3697:;
            panda$core$Bit $tmp3700 = { $tmp3674 };
            bool $tmp3673 = $tmp3700.value;
            if ($tmp3673) goto $l3701;
            panda$core$Int64$init$builtin_int64(&$tmp3702, 80);
            panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3702);
            $tmp3673 = $tmp3703.value;
            $l3701:;
            panda$core$Bit $tmp3704 = { $tmp3673 };
            bool $tmp3672 = $tmp3704.value;
            if ($tmp3672) goto $l3705;
            panda$core$Int64$init$builtin_int64(&$tmp3706, 81);
            panda$core$Bit $tmp3707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3706);
            $tmp3672 = $tmp3707.value;
            $l3705:;
            panda$core$Bit $tmp3708 = { $tmp3672 };
            bool $tmp3671 = $tmp3708.value;
            if ($tmp3671) goto $l3709;
            panda$core$Int64$init$builtin_int64(&$tmp3710, 82);
            panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3710);
            $tmp3671 = $tmp3711.value;
            $l3709:;
            panda$core$Bit $tmp3712 = { $tmp3671 };
            bool $tmp3670 = $tmp3712.value;
            if ($tmp3670) goto $l3713;
            panda$core$Int64$init$builtin_int64(&$tmp3714, 83);
            panda$core$Bit $tmp3715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3714);
            $tmp3670 = $tmp3715.value;
            $l3713:;
            panda$core$Bit $tmp3716 = { $tmp3670 };
            bool $tmp3669 = $tmp3716.value;
            if ($tmp3669) goto $l3717;
            panda$core$Int64$init$builtin_int64(&$tmp3718, 84);
            panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3718);
            $tmp3669 = $tmp3719.value;
            $l3717:;
            panda$core$Bit $tmp3720 = { $tmp3669 };
            bool $tmp3668 = $tmp3720.value;
            if ($tmp3668) goto $l3721;
            panda$core$Int64$init$builtin_int64(&$tmp3722, 85);
            panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3722);
            $tmp3668 = $tmp3723.value;
            $l3721:;
            panda$core$Bit $tmp3724 = { $tmp3668 };
            bool $tmp3667 = $tmp3724.value;
            if ($tmp3667) goto $l3725;
            panda$core$Int64$init$builtin_int64(&$tmp3726, 86);
            panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3726);
            $tmp3667 = $tmp3727.value;
            $l3725:;
            panda$core$Bit $tmp3728 = { $tmp3667 };
            bool $tmp3666 = $tmp3728.value;
            if ($tmp3666) goto $l3729;
            panda$core$Int64$init$builtin_int64(&$tmp3730, 87);
            panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3730);
            $tmp3666 = $tmp3731.value;
            $l3729:;
            panda$core$Bit $tmp3732 = { $tmp3666 };
            bool $tmp3665 = $tmp3732.value;
            if ($tmp3665) goto $l3733;
            panda$core$Int64$init$builtin_int64(&$tmp3734, 88);
            panda$core$Bit $tmp3735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3734);
            $tmp3665 = $tmp3735.value;
            $l3733:;
            panda$core$Bit $tmp3736 = { $tmp3665 };
            bool $tmp3664 = $tmp3736.value;
            if ($tmp3664) goto $l3737;
            panda$core$Int64$init$builtin_int64(&$tmp3738, 89);
            panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3738);
            $tmp3664 = $tmp3739.value;
            $l3737:;
            panda$core$Bit $tmp3740 = { $tmp3664 };
            if ($tmp3740.value) {
            {
                int $tmp3743;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3745 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3744 = $tmp3745;
                    org$pandalanguage$pandac$ASTNode* $tmp3749 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3748 = $tmp3749;
                    $tmp3747 = $tmp3748;
                    rvalue3746 = $tmp3747;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3747));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3748));
                    if (((panda$core$Bit) { rvalue3746 == NULL }).value) {
                    {
                        $tmp3750 = NULL;
                        $returnValue3658 = $tmp3750;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3750));
                        $tmp3743 = 0;
                        goto $l3741;
                        $l3751:;
                        $tmp3653 = 1;
                        goto $l3651;
                        $l3752:;
                        return $returnValue3658;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3756 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3757, 4);
                    org$pandalanguage$pandac$Position $tmp3759 = (($fn3758) start3654->$class->vtable[2])(start3654);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3756, $tmp3757, $tmp3759, start3654, op3744.kind, rvalue3746);
                    $tmp3755 = $tmp3756;
                    $tmp3754 = $tmp3755;
                    $returnValue3658 = $tmp3754;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3754));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3755));
                    $tmp3743 = 1;
                    goto $l3741;
                    $l3760:;
                    $tmp3653 = 2;
                    goto $l3651;
                    $l3761:;
                    return $returnValue3658;
                }
                $l3741:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) rvalue3746));
                rvalue3746 = NULL;
                switch ($tmp3743) {
                    case 0: goto $l3751;
                    case 1: goto $l3760;
                }
                $l3763:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3764, 59);
            panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93662.$rawValue, $tmp3764);
            if ($tmp3765.value) {
            {
                int $tmp3768;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3769 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3769, &$s3770);
                    org$pandalanguage$pandac$parser$Token $tmp3772 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3771 = $tmp3772;
                    org$pandalanguage$pandac$ASTNode* $tmp3776 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3775 = $tmp3776;
                    $tmp3774 = $tmp3775;
                    rvalue3773 = $tmp3774;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3774));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3775));
                    if (((panda$core$Bit) { rvalue3773 == NULL }).value) {
                    {
                        $tmp3777 = NULL;
                        $returnValue3658 = $tmp3777;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3777));
                        $tmp3768 = 0;
                        goto $l3766;
                        $l3778:;
                        $tmp3653 = 3;
                        goto $l3651;
                        $l3779:;
                        return $returnValue3658;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3783 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3784, 4);
                    org$pandalanguage$pandac$Position $tmp3786 = (($fn3785) start3654->$class->vtable[2])(start3654);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3783, $tmp3784, $tmp3786, start3654, op3771.kind, rvalue3773);
                    $tmp3782 = $tmp3783;
                    $tmp3781 = $tmp3782;
                    $returnValue3658 = $tmp3781;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3781));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3782));
                    $tmp3768 = 1;
                    goto $l3766;
                    $l3787:;
                    $tmp3653 = 4;
                    goto $l3651;
                    $l3788:;
                    return $returnValue3658;
                }
                $l3766:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) rvalue3773));
                rvalue3773 = NULL;
                switch ($tmp3768) {
                    case 1: goto $l3787;
                    case 0: goto $l3778;
                }
                $l3790:;
            }
            }
            else {
            {
                $tmp3791 = start3654;
                $returnValue3658 = $tmp3791;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3791));
                $tmp3653 = 5;
                goto $l3651;
                $l3792:;
                return $returnValue3658;
            }
            }
            }
        }
    }
    $tmp3653 = -1;
    goto $l3651;
    $l3651:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) start3654));
    start3654 = NULL;
    switch ($tmp3653) {
        case 4: goto $l3788;
        case 2: goto $l3761;
        case 5: goto $l3792;
        case -1: goto $l3794;
        case 3: goto $l3779;
        case 1: goto $l3752;
        case 0: goto $l3660;
    }
    $l3794:;
    if (false) goto $l3795; else goto $l3796;
    $l3796:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3797, (panda$core$Int64) { 1639 }, &$s3798);
    abort();
    $l3795:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3802 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3803;
    org$pandalanguage$pandac$ASTNode* $tmp3804;
    org$pandalanguage$pandac$ASTNode* $returnValue3806;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    org$pandalanguage$pandac$ASTNode* value3810 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3811;
    panda$core$Int64 $tmp3812;
    org$pandalanguage$pandac$ASTNode* $tmp3814;
    org$pandalanguage$pandac$ASTNode* $tmp3815;
    org$pandalanguage$pandac$ASTNode* $tmp3816;
    org$pandalanguage$pandac$ASTNode* $tmp3818;
    panda$core$Int64 $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3826;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    org$pandalanguage$pandac$ASTNode* $tmp3828;
    org$pandalanguage$pandac$ASTNode* $tmp3830;
    org$pandalanguage$pandac$ASTNode* $tmp3833;
    org$pandalanguage$pandac$ASTNode* $tmp3834;
    org$pandalanguage$pandac$ASTNode* $tmp3835;
    org$pandalanguage$pandac$ASTNode* $tmp3836;
    panda$core$Int64 $tmp3838;
    int $tmp3801;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3805 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3804 = $tmp3805;
        $tmp3803 = $tmp3804;
        t3802 = $tmp3803;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3803));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3804));
        if (((panda$core$Bit) { t3802 == NULL }).value) {
        {
            $tmp3807 = NULL;
            $returnValue3806 = $tmp3807;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3807));
            $tmp3801 = 0;
            goto $l3799;
            $l3808:;
            return $returnValue3806;
        }
        }
        memset(&value3810, 0, sizeof(value3810));
        panda$core$Int64$init$builtin_int64(&$tmp3812, 74);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3811, $tmp3812);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3813 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3811);
        if (((panda$core$Bit) { $tmp3813.nonnull }).value) {
        {
            {
                $tmp3814 = value3810;
                org$pandalanguage$pandac$ASTNode* $tmp3817 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3816 = $tmp3817;
                $tmp3815 = $tmp3816;
                value3810 = $tmp3815;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3815));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3816));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3814));
            }
            if (((panda$core$Bit) { value3810 == NULL }).value) {
            {
                $tmp3818 = NULL;
                $returnValue3806 = $tmp3818;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3818));
                $tmp3801 = 1;
                goto $l3799;
                $l3819:;
                return $returnValue3806;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3821 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3822, 59);
        panda$core$Bit $tmp3823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3821.kind.$rawValue, $tmp3822);
        if ($tmp3823.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3824 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3824, &$s3825);
            {
                $tmp3826 = value3810;
                org$pandalanguage$pandac$ASTNode* $tmp3829 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3828 = $tmp3829;
                $tmp3827 = $tmp3828;
                value3810 = $tmp3827;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3827));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3828));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3826));
            }
            if (((panda$core$Bit) { value3810 == NULL }).value) {
            {
                $tmp3830 = NULL;
                $returnValue3806 = $tmp3830;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3830));
                $tmp3801 = 2;
                goto $l3799;
                $l3831:;
                return $returnValue3806;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3833 = value3810;
                $tmp3834 = NULL;
                value3810 = $tmp3834;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3834));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3833));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3837 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3838, 13);
        org$pandalanguage$pandac$Position $tmp3840 = (($fn3839) t3802->$class->vtable[2])(t3802);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3837, $tmp3838, $tmp3840, t3802, value3810);
        $tmp3836 = $tmp3837;
        $tmp3835 = $tmp3836;
        $returnValue3806 = $tmp3835;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3835));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3836));
        $tmp3801 = 3;
        goto $l3799;
        $l3841:;
        return $returnValue3806;
    }
    $l3799:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) value3810));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t3802));
    t3802 = NULL;
    switch ($tmp3801) {
        case 1: goto $l3819;
        case 3: goto $l3841;
        case 0: goto $l3808;
        case 2: goto $l3831;
    }
    $l3843:;
    if (false) goto $l3844; else goto $l3845;
    $l3845:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3846, (panda$core$Int64) { 1672 }, &$s3847);
    abort();
    $l3844:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3851;
    org$pandalanguage$pandac$Variable$Kind kind3853;
    org$pandalanguage$pandac$parser$Token$Kind $match$1703_93854;
    panda$core$Int64 $tmp3855;
    org$pandalanguage$pandac$Variable$Kind $tmp3857;
    panda$core$Int64 $tmp3858;
    panda$core$Int64 $tmp3859;
    org$pandalanguage$pandac$Variable$Kind $tmp3861;
    panda$core$Int64 $tmp3862;
    panda$core$Int64 $tmp3863;
    org$pandalanguage$pandac$Variable$Kind $tmp3865;
    panda$core$Int64 $tmp3866;
    panda$core$Int64 $tmp3867;
    org$pandalanguage$pandac$Variable$Kind $tmp3869;
    panda$core$Int64 $tmp3870;
    panda$collections$Array* declarations3872 = NULL;
    panda$collections$Array* $tmp3873;
    panda$collections$Array* $tmp3874;
    org$pandalanguage$pandac$ASTNode* decl3876 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3877;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $returnValue3880;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3887;
    panda$core$Int64 $tmp3888;
    org$pandalanguage$pandac$ASTNode* decl3893 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3894;
    org$pandalanguage$pandac$ASTNode* $tmp3895;
    org$pandalanguage$pandac$ASTNode* $tmp3897;
    org$pandalanguage$pandac$ASTNode* $tmp3902;
    org$pandalanguage$pandac$ASTNode* $tmp3903;
    panda$core$Int64 $tmp3905;
    panda$collections$ImmutableArray* $tmp3906;
    int $tmp3850;
    {
        org$pandalanguage$pandac$parser$Token $tmp3852 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3851 = $tmp3852;
        memset(&kind3853, 0, sizeof(kind3853));
        {
            $match$1703_93854 = start3851.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3855, 24);
            panda$core$Bit $tmp3856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93854.$rawValue, $tmp3855);
            if ($tmp3856.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3858, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3857, $tmp3858);
                kind3853 = $tmp3857;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3859, 25);
            panda$core$Bit $tmp3860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93854.$rawValue, $tmp3859);
            if ($tmp3860.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3862, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3861, $tmp3862);
                kind3853 = $tmp3861;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3863, 26);
            panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93854.$rawValue, $tmp3863);
            if ($tmp3864.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3866, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3865, $tmp3866);
                kind3853 = $tmp3865;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3867, 27);
            panda$core$Bit $tmp3868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93854.$rawValue, $tmp3867);
            if ($tmp3868.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3870, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3869, $tmp3870);
                kind3853 = $tmp3869;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3851, &$s3871);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3875 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3875);
        $tmp3874 = $tmp3875;
        $tmp3873 = $tmp3874;
        declarations3872 = $tmp3873;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3873));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3874));
        org$pandalanguage$pandac$ASTNode* $tmp3879 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3878 = $tmp3879;
        $tmp3877 = $tmp3878;
        decl3876 = $tmp3877;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3877));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3878));
        if (((panda$core$Bit) { decl3876 == NULL }).value) {
        {
            $tmp3881 = NULL;
            $returnValue3880 = $tmp3881;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3881));
            $tmp3850 = 0;
            goto $l3848;
            $l3882:;
            return $returnValue3880;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3872, ((panda$core$Object*) decl3876));
        $l3884:;
        panda$core$Int64$init$builtin_int64(&$tmp3888, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3887, $tmp3888);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3889 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3887);
        bool $tmp3886 = ((panda$core$Bit) { $tmp3889.nonnull }).value;
        if (!$tmp3886) goto $l3885;
        {
            int $tmp3892;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3896 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3895 = $tmp3896;
                $tmp3894 = $tmp3895;
                decl3893 = $tmp3894;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3894));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3895));
                if (((panda$core$Bit) { decl3893 == NULL }).value) {
                {
                    $tmp3897 = NULL;
                    $returnValue3880 = $tmp3897;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3897));
                    $tmp3892 = 0;
                    goto $l3890;
                    $l3898:;
                    $tmp3850 = 1;
                    goto $l3848;
                    $l3899:;
                    return $returnValue3880;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3872, ((panda$core$Object*) decl3893));
            }
            $tmp3892 = -1;
            goto $l3890;
            $l3890:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl3893));
            decl3893 = NULL;
            switch ($tmp3892) {
                case -1: goto $l3901;
                case 0: goto $l3898;
            }
            $l3901:;
        }
        goto $l3884;
        $l3885:;
        org$pandalanguage$pandac$ASTNode* $tmp3904 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3905, 47);
        panda$collections$ImmutableArray* $tmp3907 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3872);
        $tmp3906 = $tmp3907;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3904, $tmp3905, start3851.position, kind3853, $tmp3906);
        $tmp3903 = $tmp3904;
        $tmp3902 = $tmp3903;
        $returnValue3880 = $tmp3902;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3902));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3903));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3906));
        $tmp3850 = 2;
        goto $l3848;
        $l3908:;
        return $returnValue3880;
    }
    $l3848:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl3876));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) declarations3872));
    declarations3872 = NULL;
    decl3876 = NULL;
    switch ($tmp3850) {
        case 1: goto $l3899;
        case 2: goto $l3908;
        case 0: goto $l3882;
    }
    $l3910:;
    if (false) goto $l3911; else goto $l3912;
    $l3912:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3913, (panda$core$Int64) { 1700 }, &$s3914);
    abort();
    $l3911:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3918;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3919;
    panda$core$Int64 $tmp3920;
    org$pandalanguage$pandac$ASTNode* $returnValue3923;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3927;
    panda$core$Int64 $tmp3928;
    org$pandalanguage$pandac$ASTNode* $tmp3931;
    panda$core$Object* $tmp3934;
    panda$core$Bit $tmp3935;
    org$pandalanguage$pandac$ASTNode* target3937 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3938;
    org$pandalanguage$pandac$ASTNode* $tmp3939;
    panda$core$Int64 $tmp3941;
    panda$core$String* $tmp3942;
    panda$collections$Array* args3944 = NULL;
    panda$collections$Array* $tmp3945;
    panda$collections$Array* $tmp3946;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3948;
    panda$core$Int64 $tmp3949;
    org$pandalanguage$pandac$ASTNode* expr3954 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3955;
    org$pandalanguage$pandac$ASTNode* $tmp3956;
    panda$core$Object* $tmp3958;
    org$pandalanguage$pandac$ASTNode* $tmp3960;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3967;
    panda$core$Int64 $tmp3968;
    org$pandalanguage$pandac$ASTNode* $tmp3970;
    org$pandalanguage$pandac$ASTNode* $tmp3971;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    panda$core$Object* $tmp3974;
    org$pandalanguage$pandac$ASTNode* $tmp3976;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3980;
    panda$core$Int64 $tmp3981;
    panda$core$Object* $tmp3984;
    org$pandalanguage$pandac$ASTNode* $tmp3986;
    panda$core$Object* $tmp3991;
    org$pandalanguage$pandac$ASTNode* $tmp3993;
    org$pandalanguage$pandac$ASTNode* $tmp3994;
    panda$core$Int64 $tmp3996;
    panda$collections$ImmutableArray* $tmp3997;
    int $tmp3917;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3920, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3919, $tmp3920);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3922 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3919, &$s3921);
        start3918 = $tmp3922;
        if (((panda$core$Bit) { !start3918.nonnull }).value) {
        {
            $tmp3924 = NULL;
            $returnValue3923 = $tmp3924;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3924));
            $tmp3917 = 0;
            goto $l3915;
            $l3925:;
            return $returnValue3923;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3928, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3927, $tmp3928);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3930 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3927, &$s3929);
        if (((panda$core$Bit) { !$tmp3930.nonnull }).value) {
        {
            $tmp3931 = NULL;
            $returnValue3923 = $tmp3931;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3931));
            $tmp3917 = 1;
            goto $l3915;
            $l3932:;
            return $returnValue3923;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3935, true);
        panda$core$Bit$wrapper* $tmp3936;
        $tmp3936 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3936->value = $tmp3935;
        $tmp3934 = ((panda$core$Object*) $tmp3936);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3934);
        panda$core$Panda$unref$panda$core$Object$Q($tmp3934);
        org$pandalanguage$pandac$ASTNode* $tmp3940 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3941, 20);
        panda$core$String* $tmp3943 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3918.value));
        $tmp3942 = $tmp3943;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3940, $tmp3941, ((org$pandalanguage$pandac$parser$Token) start3918.value).position, $tmp3942);
        $tmp3939 = $tmp3940;
        $tmp3938 = $tmp3939;
        target3937 = $tmp3938;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3938));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3939));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3942));
        panda$collections$Array* $tmp3947 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3947);
        $tmp3946 = $tmp3947;
        $tmp3945 = $tmp3946;
        args3944 = $tmp3945;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3945));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3946));
        panda$core$Int64$init$builtin_int64(&$tmp3949, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3948, $tmp3949);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3950 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3948);
        if (((panda$core$Bit) { !$tmp3950.nonnull }).value) {
        {
            int $tmp3953;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3957 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3956 = $tmp3957;
                $tmp3955 = $tmp3956;
                expr3954 = $tmp3955;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3955));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3956));
                if (((panda$core$Bit) { expr3954 == NULL }).value) {
                {
                    panda$core$Object* $tmp3959 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3958 = $tmp3959;
                    panda$core$Panda$unref$panda$core$Object$Q($tmp3958);
                    $tmp3960 = NULL;
                    $returnValue3923 = $tmp3960;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3960));
                    $tmp3953 = 0;
                    goto $l3951;
                    $l3961:;
                    $tmp3917 = 2;
                    goto $l3915;
                    $l3962:;
                    return $returnValue3923;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3944, ((panda$core$Object*) expr3954));
                $l3964:;
                panda$core$Int64$init$builtin_int64(&$tmp3968, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3967, $tmp3968);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3969 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3967);
                bool $tmp3966 = ((panda$core$Bit) { $tmp3969.nonnull }).value;
                if (!$tmp3966) goto $l3965;
                {
                    {
                        $tmp3970 = expr3954;
                        org$pandalanguage$pandac$ASTNode* $tmp3973 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3972 = $tmp3973;
                        $tmp3971 = $tmp3972;
                        expr3954 = $tmp3971;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3971));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3972));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3970));
                    }
                    if (((panda$core$Bit) { expr3954 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3975 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3974 = $tmp3975;
                        panda$core$Panda$unref$panda$core$Object$Q($tmp3974);
                        $tmp3976 = NULL;
                        $returnValue3923 = $tmp3976;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3976));
                        $tmp3953 = 1;
                        goto $l3951;
                        $l3977:;
                        $tmp3917 = 3;
                        goto $l3915;
                        $l3978:;
                        return $returnValue3923;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3944, ((panda$core$Object*) expr3954));
                }
                goto $l3964;
                $l3965:;
                panda$core$Int64$init$builtin_int64(&$tmp3981, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3980, $tmp3981);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3983 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3980, &$s3982);
                if (((panda$core$Bit) { !$tmp3983.nonnull }).value) {
                {
                    panda$core$Object* $tmp3985 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3984 = $tmp3985;
                    panda$core$Panda$unref$panda$core$Object$Q($tmp3984);
                    $tmp3986 = NULL;
                    $returnValue3923 = $tmp3986;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3986));
                    $tmp3953 = 2;
                    goto $l3951;
                    $l3987:;
                    $tmp3917 = 4;
                    goto $l3915;
                    $l3988:;
                    return $returnValue3923;
                }
                }
            }
            $tmp3953 = -1;
            goto $l3951;
            $l3951:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr3954));
            expr3954 = NULL;
            switch ($tmp3953) {
                case 2: goto $l3987;
                case 1: goto $l3977;
                case 0: goto $l3961;
                case -1: goto $l3990;
            }
            $l3990:;
        }
        }
        panda$core$Object* $tmp3992 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3991 = $tmp3992;
        panda$core$Panda$unref$panda$core$Object$Q($tmp3991);
        org$pandalanguage$pandac$ASTNode* $tmp3995 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3996, 8);
        panda$collections$ImmutableArray* $tmp3998 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3944);
        $tmp3997 = $tmp3998;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3995, $tmp3996, ((org$pandalanguage$pandac$parser$Token) start3918.value).position, target3937, $tmp3997);
        $tmp3994 = $tmp3995;
        $tmp3993 = $tmp3994;
        $returnValue3923 = $tmp3993;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3993));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3994));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3997));
        $tmp3917 = 5;
        goto $l3915;
        $l3999:;
        return $returnValue3923;
    }
    $l3915:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args3944));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) target3937));
    target3937 = NULL;
    args3944 = NULL;
    switch ($tmp3917) {
        case 2: goto $l3962;
        case 3: goto $l3978;
        case 4: goto $l3988;
        case 0: goto $l3925;
        case 5: goto $l3999;
        case 1: goto $l3932;
    }
    $l4001:;
    if (false) goto $l4002; else goto $l4003;
    $l4003:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4004, (panda$core$Int64) { 1734 }, &$s4005);
    abort();
    $l4002:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4007;
    panda$core$Int64 $tmp4008;
    org$pandalanguage$pandac$ASTNode* $returnValue4011;
    org$pandalanguage$pandac$ASTNode* $tmp4012;
    org$pandalanguage$pandac$parser$Token$nullable label4014;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4015;
    panda$core$Int64 $tmp4016;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    org$pandalanguage$pandac$ASTNode* $tmp4019;
    panda$core$Int64 $tmp4021;
    panda$core$String* $tmp4022;
    org$pandalanguage$pandac$ASTNode* $tmp4025;
    org$pandalanguage$pandac$ASTNode* $tmp4026;
    panda$core$Int64 $tmp4028;
    panda$core$Int64$init$builtin_int64(&$tmp4008, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4007, $tmp4008);
    org$pandalanguage$pandac$parser$Token$nullable $tmp4010 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4007, &$s4009);
    start4006 = $tmp4010;
    if (((panda$core$Bit) { !start4006.nonnull }).value) {
    {
        $tmp4012 = NULL;
        $returnValue4011 = $tmp4012;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4012));
        return $returnValue4011;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp4016, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4015, $tmp4016);
    org$pandalanguage$pandac$parser$Token$nullable $tmp4017 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4015);
    label4014 = $tmp4017;
    if (((panda$core$Bit) { label4014.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp4020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4021, 7);
        panda$core$String* $tmp4023 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label4014.value));
        $tmp4022 = $tmp4023;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4020, $tmp4021, ((org$pandalanguage$pandac$parser$Token) start4006.value).position, $tmp4022);
        $tmp4019 = $tmp4020;
        $tmp4018 = $tmp4019;
        $returnValue4011 = $tmp4018;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4018));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4019));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4022));
        return $returnValue4011;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp4027 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp4028, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4027, $tmp4028, ((org$pandalanguage$pandac$parser$Token) start4006.value).position, NULL);
    $tmp4026 = $tmp4027;
    $tmp4025 = $tmp4026;
    $returnValue4011 = $tmp4025;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4025));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4026));
    return $returnValue4011;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4030;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4031;
    panda$core$Int64 $tmp4032;
    org$pandalanguage$pandac$ASTNode* $returnValue4035;
    org$pandalanguage$pandac$ASTNode* $tmp4036;
    org$pandalanguage$pandac$parser$Token$nullable label4038;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4039;
    panda$core$Int64 $tmp4040;
    org$pandalanguage$pandac$ASTNode* $tmp4042;
    org$pandalanguage$pandac$ASTNode* $tmp4043;
    panda$core$Int64 $tmp4045;
    panda$core$String* $tmp4046;
    org$pandalanguage$pandac$ASTNode* $tmp4049;
    org$pandalanguage$pandac$ASTNode* $tmp4050;
    panda$core$Int64 $tmp4052;
    panda$core$Int64$init$builtin_int64(&$tmp4032, 30);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4031, $tmp4032);
    org$pandalanguage$pandac$parser$Token$nullable $tmp4034 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4031, &$s4033);
    start4030 = $tmp4034;
    if (((panda$core$Bit) { !start4030.nonnull }).value) {
    {
        $tmp4036 = NULL;
        $returnValue4035 = $tmp4036;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4036));
        return $returnValue4035;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp4040, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4039, $tmp4040);
    org$pandalanguage$pandac$parser$Token$nullable $tmp4041 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4039);
    label4038 = $tmp4041;
    if (((panda$core$Bit) { label4038.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp4044 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4045, 12);
        panda$core$String* $tmp4047 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label4038.value));
        $tmp4046 = $tmp4047;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4044, $tmp4045, ((org$pandalanguage$pandac$parser$Token) start4030.value).position, $tmp4046);
        $tmp4043 = $tmp4044;
        $tmp4042 = $tmp4043;
        $returnValue4035 = $tmp4042;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4042));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4043));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4046));
        return $returnValue4035;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp4051 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp4052, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp4051, $tmp4052, ((org$pandalanguage$pandac$parser$Token) start4030.value).position, NULL);
    $tmp4050 = $tmp4051;
    $tmp4049 = $tmp4050;
    $returnValue4035 = $tmp4049;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4049));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4050));
    return $returnValue4035;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4054;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4055;
    panda$core$Int64 $tmp4056;
    org$pandalanguage$pandac$ASTNode* $returnValue4059;
    org$pandalanguage$pandac$ASTNode* $tmp4060;
    org$pandalanguage$pandac$parser$Token$Kind $match$1807_94062;
    panda$core$Int64 $tmp4066;
    panda$core$Int64 $tmp4069;
    panda$core$Int64 $tmp4073;
    org$pandalanguage$pandac$ASTNode* $tmp4076;
    org$pandalanguage$pandac$ASTNode* $tmp4077;
    panda$core$Int64 $tmp4079;
    panda$collections$Array* children4084 = NULL;
    panda$collections$Array* $tmp4085;
    panda$collections$Array* $tmp4086;
    org$pandalanguage$pandac$ASTNode* expr4088 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4089;
    org$pandalanguage$pandac$ASTNode* $tmp4090;
    org$pandalanguage$pandac$ASTNode* $tmp4092;
    org$pandalanguage$pandac$ASTNode* $tmp4095;
    org$pandalanguage$pandac$ASTNode* $tmp4096;
    panda$core$Int64 $tmp4098;
    panda$core$Int64$init$builtin_int64(&$tmp4056, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4055, $tmp4056);
    org$pandalanguage$pandac$parser$Token$nullable $tmp4058 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4055, &$s4057);
    start4054 = $tmp4058;
    if (((panda$core$Bit) { !start4054.nonnull }).value) {
    {
        $tmp4060 = NULL;
        $returnValue4059 = $tmp4060;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4060));
        return $returnValue4059;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp4063 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1807_94062 = $tmp4063.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4066, 101);
        panda$core$Bit $tmp4067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_94062.$rawValue, $tmp4066);
        bool $tmp4065 = $tmp4067.value;
        if ($tmp4065) goto $l4068;
        panda$core$Int64$init$builtin_int64(&$tmp4069, 40);
        panda$core$Bit $tmp4070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_94062.$rawValue, $tmp4069);
        $tmp4065 = $tmp4070.value;
        $l4068:;
        panda$core$Bit $tmp4071 = { $tmp4065 };
        bool $tmp4064 = $tmp4071.value;
        if ($tmp4064) goto $l4072;
        panda$core$Int64$init$builtin_int64(&$tmp4073, 41);
        panda$core$Bit $tmp4074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_94062.$rawValue, $tmp4073);
        $tmp4064 = $tmp4074.value;
        $l4072:;
        panda$core$Bit $tmp4075 = { $tmp4064 };
        if ($tmp4075.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4078 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4079, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4078, $tmp4079, ((org$pandalanguage$pandac$parser$Token) start4054.value).position, NULL);
            $tmp4077 = $tmp4078;
            $tmp4076 = $tmp4077;
            $returnValue4059 = $tmp4076;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4076));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4077));
            return $returnValue4059;
        }
        }
        else {
        {
            int $tmp4083;
            {
                panda$collections$Array* $tmp4087 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp4087);
                $tmp4086 = $tmp4087;
                $tmp4085 = $tmp4086;
                children4084 = $tmp4085;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4085));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4086));
                org$pandalanguage$pandac$ASTNode* $tmp4091 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4090 = $tmp4091;
                $tmp4089 = $tmp4090;
                expr4088 = $tmp4089;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4089));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4090));
                if (((panda$core$Bit) { expr4088 == NULL }).value) {
                {
                    $tmp4092 = NULL;
                    $returnValue4059 = $tmp4092;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4092));
                    $tmp4083 = 0;
                    goto $l4081;
                    $l4093:;
                    return $returnValue4059;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4084, ((panda$core$Object*) expr4088));
                org$pandalanguage$pandac$ASTNode* $tmp4097 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4098, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp4097, $tmp4098, ((org$pandalanguage$pandac$parser$Token) start4054.value).position, expr4088);
                $tmp4096 = $tmp4097;
                $tmp4095 = $tmp4096;
                $returnValue4059 = $tmp4095;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4095));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4096));
                $tmp4083 = 1;
                goto $l4081;
                $l4099:;
                return $returnValue4059;
            }
            $l4081:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr4088));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) children4084));
            children4084 = NULL;
            expr4088 = NULL;
            switch ($tmp4083) {
                case 1: goto $l4099;
                case 0: goto $l4093;
            }
            $l4101:;
        }
        }
    }
    if (false) goto $l4102; else goto $l4103;
    $l4103:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4104, (panda$core$Int64) { 1802 }, &$s4105);
    abort();
    $l4102:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1825_94106;
    panda$core$Int64 $tmp4108;
    org$pandalanguage$pandac$ASTNode* $returnValue4110;
    org$pandalanguage$pandac$ASTNode* $tmp4111;
    org$pandalanguage$pandac$ASTNode* $tmp4112;
    panda$core$Int64 $tmp4115;
    org$pandalanguage$pandac$ASTNode* $tmp4117;
    org$pandalanguage$pandac$ASTNode* $tmp4118;
    panda$core$Int64 $tmp4121;
    org$pandalanguage$pandac$ASTNode* $tmp4123;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    panda$core$Bit $tmp4127;
    {
        org$pandalanguage$pandac$parser$Token $tmp4107 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1825_94106 = $tmp4107.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4108, 29);
        panda$core$Bit $tmp4109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_94106.$rawValue, $tmp4108);
        if ($tmp4109.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4113 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4112 = $tmp4113;
            $tmp4111 = $tmp4112;
            $returnValue4110 = $tmp4111;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4111));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4112));
            return $returnValue4110;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4115, 30);
        panda$core$Bit $tmp4116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_94106.$rawValue, $tmp4115);
        if ($tmp4116.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4119 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4118 = $tmp4119;
            $tmp4117 = $tmp4118;
            $returnValue4110 = $tmp4117;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4117));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4118));
            return $returnValue4110;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4121, 28);
        panda$core$Bit $tmp4122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_94106.$rawValue, $tmp4121);
        if ($tmp4122.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4125 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4124 = $tmp4125;
            $tmp4123 = $tmp4124;
            $returnValue4110 = $tmp4123;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4123));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4124));
            return $returnValue4110;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp4127, false);
            if ($tmp4127.value) goto $l4128; else goto $l4129;
            $l4129:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4130, (panda$core$Int64) { 1829 });
            abort();
            $l4128:;
        }
        }
        }
        }
    }
    if (false) goto $l4131; else goto $l4132;
    $l4132:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4133, (panda$core$Int64) { 1824 }, &$s4134);
    abort();
    $l4131:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1837_94135;
    panda$core$Int64 $tmp4137;
    org$pandalanguage$pandac$ASTNode* $returnValue4139;
    org$pandalanguage$pandac$ASTNode* $tmp4140;
    org$pandalanguage$pandac$ASTNode* $tmp4141;
    panda$core$Int64 $tmp4144;
    org$pandalanguage$pandac$ASTNode* $tmp4146;
    org$pandalanguage$pandac$ASTNode* $tmp4147;
    panda$core$Int64 $tmp4150;
    org$pandalanguage$pandac$ASTNode* $tmp4152;
    org$pandalanguage$pandac$ASTNode* $tmp4153;
    panda$core$Int64 $tmp4156;
    org$pandalanguage$pandac$ASTNode* $tmp4158;
    org$pandalanguage$pandac$ASTNode* $tmp4159;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4162;
    panda$core$Int64 $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4165;
    {
        org$pandalanguage$pandac$parser$Token $tmp4136 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1837_94135 = $tmp4136.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4137, 31);
        panda$core$Bit $tmp4138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_94135.$rawValue, $tmp4137);
        if ($tmp4138.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4142 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp4141 = $tmp4142;
            $tmp4140 = $tmp4141;
            $returnValue4139 = $tmp4140;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4140));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4141));
            return $returnValue4139;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4144, 33);
        panda$core$Bit $tmp4145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_94135.$rawValue, $tmp4144);
        if ($tmp4145.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4148 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp4147 = $tmp4148;
            $tmp4146 = $tmp4147;
            $returnValue4139 = $tmp4146;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4146));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4147));
            return $returnValue4139;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4150, 36);
        panda$core$Bit $tmp4151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_94135.$rawValue, $tmp4150);
        if ($tmp4151.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4154 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp4153 = $tmp4154;
            $tmp4152 = $tmp4153;
            $returnValue4139 = $tmp4152;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4152));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4153));
            return $returnValue4139;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4156, 32);
        panda$core$Bit $tmp4157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_94135.$rawValue, $tmp4156);
        if ($tmp4157.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4160 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp4159 = $tmp4160;
            $tmp4158 = $tmp4159;
            $returnValue4139 = $tmp4158;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4158));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4159));
            return $returnValue4139;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4163, 31);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4162, $tmp4163);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4162, &$s4164);
            $tmp4165 = NULL;
            $returnValue4139 = $tmp4165;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4165));
            return $returnValue4139;
        }
        }
        }
        }
        }
    }
    if (false) goto $l4167; else goto $l4168;
    $l4168:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4169, (panda$core$Int64) { 1836 }, &$s4170);
    abort();
    $l4167:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4174;
    org$pandalanguage$pandac$parser$Token$nullable start4175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4176;
    panda$core$Int64 $tmp4177;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4179;
    panda$core$Int64 $tmp4180;
    org$pandalanguage$pandac$ASTNode* $returnValue4183;
    org$pandalanguage$pandac$ASTNode* $tmp4184;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4187;
    panda$core$Int64 $tmp4188;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4189;
    panda$core$Int64 $tmp4190;
    org$pandalanguage$pandac$parser$Token$nullable name4191;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4192;
    panda$core$Int64 $tmp4193;
    org$pandalanguage$pandac$ASTNode* $tmp4196;
    panda$collections$ImmutableArray* params4199 = NULL;
    panda$collections$ImmutableArray* $tmp4200;
    panda$collections$ImmutableArray* $tmp4201;
    org$pandalanguage$pandac$ASTNode* $tmp4203;
    org$pandalanguage$pandac$ASTNode* returnType4206 = NULL;
    panda$core$Int64 $tmp4208;
    org$pandalanguage$pandac$ASTNode* $tmp4210;
    org$pandalanguage$pandac$ASTNode* $tmp4211;
    org$pandalanguage$pandac$ASTNode* $tmp4212;
    org$pandalanguage$pandac$ASTNode* $tmp4214;
    org$pandalanguage$pandac$ASTNode* $tmp4217;
    org$pandalanguage$pandac$ASTNode* $tmp4218;
    panda$collections$ImmutableArray* body4219 = NULL;
    panda$collections$ImmutableArray* $tmp4220;
    panda$collections$ImmutableArray* $tmp4221;
    org$pandalanguage$pandac$ASTNode* $tmp4223;
    org$pandalanguage$pandac$ASTNode* $tmp4226;
    org$pandalanguage$pandac$ASTNode* $tmp4227;
    panda$core$Int64 $tmp4229;
    panda$collections$ImmutableArray* $tmp4230;
    panda$core$String* $tmp4232;
    int $tmp4173;
    {
        memset(&kind4174, 0, sizeof(kind4174));
        panda$core$Int64$init$builtin_int64(&$tmp4177, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4176, $tmp4177);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4178 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4176);
        start4175 = $tmp4178;
        if (((panda$core$Bit) { !start4175.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4180, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4179, $tmp4180);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4182 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4179, &$s4181);
            start4175 = $tmp4182;
            if (((panda$core$Bit) { !start4175.nonnull }).value) {
            {
                $tmp4184 = NULL;
                $returnValue4183 = $tmp4184;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4184));
                $tmp4173 = 0;
                goto $l4171;
                $l4185:;
                return $returnValue4183;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4188, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4187, $tmp4188);
            kind4174 = $tmp4187;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4190, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4189, $tmp4190);
            kind4174 = $tmp4189;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4193, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4192, $tmp4193);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4192, &$s4194);
        name4191 = $tmp4195;
        if (((panda$core$Bit) { !name4191.nonnull }).value) {
        {
            $tmp4196 = NULL;
            $returnValue4183 = $tmp4196;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4196));
            $tmp4173 = 1;
            goto $l4171;
            $l4197:;
            return $returnValue4183;
        }
        }
        panda$collections$ImmutableArray* $tmp4202 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4201 = $tmp4202;
        $tmp4200 = $tmp4201;
        params4199 = $tmp4200;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4200));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4201));
        if (((panda$core$Bit) { params4199 == NULL }).value) {
        {
            $tmp4203 = NULL;
            $returnValue4183 = $tmp4203;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4203));
            $tmp4173 = 2;
            goto $l4171;
            $l4204:;
            return $returnValue4183;
        }
        }
        memset(&returnType4206, 0, sizeof(returnType4206));
        org$pandalanguage$pandac$parser$Token $tmp4207 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4208, 96);
        panda$core$Bit $tmp4209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4207.kind.$rawValue, $tmp4208);
        if ($tmp4209.value) {
        {
            {
                $tmp4210 = returnType4206;
                org$pandalanguage$pandac$ASTNode* $tmp4213 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4212 = $tmp4213;
                $tmp4211 = $tmp4212;
                returnType4206 = $tmp4211;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4211));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4212));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4210));
            }
            if (((panda$core$Bit) { returnType4206 == NULL }).value) {
            {
                $tmp4214 = NULL;
                $returnValue4183 = $tmp4214;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4214));
                $tmp4173 = 3;
                goto $l4171;
                $l4215:;
                return $returnValue4183;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4217 = returnType4206;
                $tmp4218 = NULL;
                returnType4206 = $tmp4218;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4218));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4217));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4222 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4221 = $tmp4222;
        $tmp4220 = $tmp4221;
        body4219 = $tmp4220;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4220));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4221));
        if (((panda$core$Bit) { body4219 == NULL }).value) {
        {
            $tmp4223 = NULL;
            $returnValue4183 = $tmp4223;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4223));
            $tmp4173 = 4;
            goto $l4171;
            $l4224:;
            return $returnValue4183;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4228 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4229, 26);
        panda$collections$ImmutableArray* $tmp4231 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4231);
        $tmp4230 = $tmp4231;
        panda$core$String* $tmp4233 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4191.value));
        $tmp4232 = $tmp4233;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4228, $tmp4229, ((org$pandalanguage$pandac$parser$Token) start4175.value).position, NULL, $tmp4230, kind4174, $tmp4232, NULL, params4199, returnType4206, body4219);
        $tmp4227 = $tmp4228;
        $tmp4226 = $tmp4227;
        $returnValue4183 = $tmp4226;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4226));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4227));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4232));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4230));
        $tmp4173 = 5;
        goto $l4171;
        $l4234:;
        return $returnValue4183;
    }
    $l4171:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body4219));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType4206));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) params4199));
    params4199 = NULL;
    body4219 = NULL;
    switch ($tmp4173) {
        case 1: goto $l4197;
        case 5: goto $l4234;
        case 4: goto $l4224;
        case 2: goto $l4204;
        case 0: goto $l4185;
        case 3: goto $l4215;
    }
    $l4236:;
    if (false) goto $l4237; else goto $l4238;
    $l4238:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4239, (panda$core$Int64) { 1852 }, &$s4240);
    abort();
    $l4237:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1896_94241;
    panda$core$Int64 $tmp4243;
    org$pandalanguage$pandac$ASTNode* $returnValue4245;
    org$pandalanguage$pandac$ASTNode* $tmp4246;
    org$pandalanguage$pandac$ASTNode* $tmp4247;
    panda$core$Int64 $tmp4250;
    org$pandalanguage$pandac$ASTNode* $tmp4252;
    org$pandalanguage$pandac$ASTNode* $tmp4253;
    panda$core$Int64 $tmp4256;
    org$pandalanguage$pandac$ASTNode* $tmp4258;
    org$pandalanguage$pandac$ASTNode* $tmp4259;
    panda$core$Int64 $tmp4262;
    org$pandalanguage$pandac$ASTNode* $tmp4264;
    org$pandalanguage$pandac$ASTNode* $tmp4265;
    panda$core$Int64 $tmp4268;
    org$pandalanguage$pandac$ASTNode* $tmp4270;
    org$pandalanguage$pandac$ASTNode* $tmp4271;
    panda$core$Int64 $tmp4274;
    org$pandalanguage$pandac$ASTNode* $tmp4276;
    org$pandalanguage$pandac$ASTNode* $tmp4277;
    panda$core$Int64 $tmp4280;
    org$pandalanguage$pandac$ASTNode* $tmp4282;
    org$pandalanguage$pandac$ASTNode* $tmp4283;
    panda$core$Int64 $tmp4286;
    org$pandalanguage$pandac$ASTNode* $tmp4288;
    org$pandalanguage$pandac$ASTNode* $tmp4289;
    panda$core$Int64 $tmp4292;
    org$pandalanguage$pandac$parser$Token id4294;
    org$pandalanguage$pandac$parser$Token$nullable colon4296;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4297;
    panda$core$Int64 $tmp4298;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4300;
    panda$core$Int64 $tmp4301;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4303;
    panda$core$Int64 $tmp4304;
    org$pandalanguage$pandac$ASTNode* $tmp4306;
    org$pandalanguage$pandac$ASTNode* $tmp4307;
    panda$core$String* $tmp4308;
    org$pandalanguage$pandac$ASTNode* $tmp4312;
    org$pandalanguage$pandac$ASTNode* $tmp4313;
    panda$core$Int64 $tmp4317;
    panda$core$Int64 $tmp4320;
    org$pandalanguage$pandac$ASTNode* $tmp4323;
    org$pandalanguage$pandac$ASTNode* $tmp4324;
    panda$core$Int64 $tmp4330;
    panda$core$Int64 $tmp4333;
    panda$core$Int64 $tmp4337;
    panda$core$Int64 $tmp4341;
    org$pandalanguage$pandac$ASTNode* $tmp4344;
    org$pandalanguage$pandac$ASTNode* $tmp4345;
    panda$core$Int64 $tmp4348;
    org$pandalanguage$pandac$ASTNode* $tmp4350;
    org$pandalanguage$pandac$ASTNode* $tmp4351;
    panda$core$Int64 $tmp4355;
    panda$core$Int64 $tmp4358;
    org$pandalanguage$pandac$ASTNode* $tmp4361;
    org$pandalanguage$pandac$ASTNode* $tmp4362;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4365;
    panda$core$Int64 $tmp4366;
    org$pandalanguage$pandac$ASTNode* $tmp4368;
    {
        org$pandalanguage$pandac$parser$Token $tmp4242 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1896_94241 = $tmp4242.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4243, 37);
        panda$core$Bit $tmp4244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4243);
        if ($tmp4244.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4248 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4247 = $tmp4248;
            $tmp4246 = $tmp4247;
            $returnValue4245 = $tmp4246;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4246));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4247));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4250, 33);
        panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4250);
        if ($tmp4251.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4254 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4253 = $tmp4254;
            $tmp4252 = $tmp4253;
            $returnValue4245 = $tmp4252;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4252));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4253));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4256, 32);
        panda$core$Bit $tmp4257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4256);
        if ($tmp4257.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4260 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4259 = $tmp4260;
            $tmp4258 = $tmp4259;
            $returnValue4245 = $tmp4258;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4258));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4259));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4262, 31);
        panda$core$Bit $tmp4263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4262);
        if ($tmp4263.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4266 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4265 = $tmp4266;
            $tmp4264 = $tmp4265;
            $returnValue4245 = $tmp4264;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4264));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4265));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4268, 36);
        panda$core$Bit $tmp4269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4268);
        if ($tmp4269.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4272 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4271 = $tmp4272;
            $tmp4270 = $tmp4271;
            $returnValue4245 = $tmp4270;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4270));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4271));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4274, 45);
        panda$core$Bit $tmp4275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4274);
        if ($tmp4275.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4278 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4277 = $tmp4278;
            $tmp4276 = $tmp4277;
            $returnValue4245 = $tmp4276;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4276));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4277));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4280, 39);
        panda$core$Bit $tmp4281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4280);
        if ($tmp4281.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4284 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4283 = $tmp4284;
            $tmp4282 = $tmp4283;
            $returnValue4245 = $tmp4282;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4282));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4283));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4286, 100);
        panda$core$Bit $tmp4287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4286);
        if ($tmp4287.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4290 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4289 = $tmp4290;
            $tmp4288 = $tmp4289;
            $returnValue4245 = $tmp4288;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4288));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4289));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4292, 49);
        panda$core$Bit $tmp4293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4292);
        if ($tmp4293.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4295 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4294 = $tmp4295;
            panda$core$Int64$init$builtin_int64(&$tmp4298, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4297, $tmp4298);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4299 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4297);
            colon4296 = $tmp4299;
            if (((panda$core$Bit) { colon4296.nonnull }).value) {
            {
                if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, ((org$pandalanguage$pandac$parser$Token) colon4296.value));
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4294);
                    panda$core$Int64$init$builtin_int64(&$tmp4301, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4300, $tmp4301);
                    (($fn4302) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp4300);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp4304, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4303, $tmp4304);
                    (($fn4305) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp4303);
                }
                }
                panda$core$String* $tmp4309 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4294);
                $tmp4308 = $tmp4309;
                org$pandalanguage$pandac$ASTNode* $tmp4310 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4308);
                $tmp4307 = $tmp4310;
                $tmp4306 = $tmp4307;
                $returnValue4245 = $tmp4306;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4306));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4307));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4308));
                return $returnValue4245;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4294);
            org$pandalanguage$pandac$ASTNode* $tmp4314 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4313 = $tmp4314;
            $tmp4312 = $tmp4313;
            $returnValue4245 = $tmp4312;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4312));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4313));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4317, 47);
        panda$core$Bit $tmp4318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4317);
        bool $tmp4316 = $tmp4318.value;
        if ($tmp4316) goto $l4319;
        panda$core$Int64$init$builtin_int64(&$tmp4320, 48);
        panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4320);
        $tmp4316 = $tmp4321.value;
        $l4319:;
        panda$core$Bit $tmp4322 = { $tmp4316 };
        if ($tmp4322.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4325 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4324 = $tmp4325;
            $tmp4323 = $tmp4324;
            $returnValue4245 = $tmp4323;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4323));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4324));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4330, 24);
        panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4330);
        bool $tmp4329 = $tmp4331.value;
        if ($tmp4329) goto $l4332;
        panda$core$Int64$init$builtin_int64(&$tmp4333, 25);
        panda$core$Bit $tmp4334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4333);
        $tmp4329 = $tmp4334.value;
        $l4332:;
        panda$core$Bit $tmp4335 = { $tmp4329 };
        bool $tmp4328 = $tmp4335.value;
        if ($tmp4328) goto $l4336;
        panda$core$Int64$init$builtin_int64(&$tmp4337, 26);
        panda$core$Bit $tmp4338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4337);
        $tmp4328 = $tmp4338.value;
        $l4336:;
        panda$core$Bit $tmp4339 = { $tmp4328 };
        bool $tmp4327 = $tmp4339.value;
        if ($tmp4327) goto $l4340;
        panda$core$Int64$init$builtin_int64(&$tmp4341, 27);
        panda$core$Bit $tmp4342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4341);
        $tmp4327 = $tmp4342.value;
        $l4340:;
        panda$core$Bit $tmp4343 = { $tmp4327 };
        if ($tmp4343.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4346 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4345 = $tmp4346;
            $tmp4344 = $tmp4345;
            $returnValue4245 = $tmp4344;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4344));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4345));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4348, 23);
        panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4348);
        if ($tmp4349.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4352 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4351 = $tmp4352;
            $tmp4350 = $tmp4351;
            $returnValue4245 = $tmp4350;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4350));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4351));
            return $returnValue4245;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4355, 22);
        panda$core$Bit $tmp4356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4355);
        bool $tmp4354 = $tmp4356.value;
        if ($tmp4354) goto $l4357;
        panda$core$Int64$init$builtin_int64(&$tmp4358, 21);
        panda$core$Bit $tmp4359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94241.$rawValue, $tmp4358);
        $tmp4354 = $tmp4359.value;
        $l4357:;
        panda$core$Bit $tmp4360 = { $tmp4354 };
        if ($tmp4360.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4363 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4362 = $tmp4363;
            $tmp4361 = $tmp4362;
            $returnValue4245 = $tmp4361;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4361));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4362));
            return $returnValue4245;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4366, 37);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4365, $tmp4366);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4365, &$s4367);
            $tmp4368 = NULL;
            $returnValue4245 = $tmp4368;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4368));
            return $returnValue4245;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    if (false) goto $l4370; else goto $l4371;
    $l4371:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4372, (panda$core$Int64) { 1895 }, &$s4373);
    abort();
    $l4370:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4377;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4378;
    panda$core$Int64 $tmp4379;
    org$pandalanguage$pandac$ASTNode* $returnValue4382;
    org$pandalanguage$pandac$ASTNode* $tmp4383;
    org$pandalanguage$pandac$parser$Token$nullable next4386;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4387;
    panda$core$Int64 $tmp4388;
    org$pandalanguage$pandac$ASTNode* $tmp4391;
    panda$core$MutableString* name4394 = NULL;
    panda$core$MutableString* $tmp4395;
    panda$core$MutableString* $tmp4396;
    panda$core$String* $tmp4398;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4402;
    panda$core$Int64 $tmp4403;
    panda$core$Char8 $tmp4405;
    panda$core$UInt8 $tmp4406;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4407;
    panda$core$Int64 $tmp4408;
    org$pandalanguage$pandac$ASTNode* $tmp4411;
    panda$core$String* $tmp4414;
    org$pandalanguage$pandac$ASTNode* $tmp4416;
    org$pandalanguage$pandac$ASTNode* $tmp4417;
    panda$core$Int64 $tmp4419;
    panda$core$String* $tmp4420;
    int $tmp4376;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4379, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4378, $tmp4379);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4381 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4378, &$s4380);
        start4377 = $tmp4381;
        if (((panda$core$Bit) { !start4377.nonnull }).value) {
        {
            $tmp4383 = NULL;
            $returnValue4382 = $tmp4383;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4383));
            $tmp4376 = 0;
            goto $l4374;
            $l4384:;
            return $returnValue4382;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4388, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4387, $tmp4388);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4390 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4387, &$s4389);
        next4386 = $tmp4390;
        if (((panda$core$Bit) { !next4386.nonnull }).value) {
        {
            $tmp4391 = NULL;
            $returnValue4382 = $tmp4391;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4391));
            $tmp4376 = 1;
            goto $l4374;
            $l4392:;
            return $returnValue4382;
        }
        }
        panda$core$MutableString* $tmp4397 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4399 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4386.value));
        $tmp4398 = $tmp4399;
        panda$core$MutableString$init$panda$core$String($tmp4397, $tmp4398);
        $tmp4396 = $tmp4397;
        $tmp4395 = $tmp4396;
        name4394 = $tmp4395;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4395));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4396));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4398));
        $l4400:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4403, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4402, $tmp4403);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4404 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4402);
            next4386 = $tmp4404;
            if (((panda$core$Bit) { !next4386.nonnull }).value) {
            {
                goto $l4401;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4406, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4405, $tmp4406);
            panda$core$MutableString$append$panda$core$Char8(name4394, $tmp4405);
            panda$core$Int64$init$builtin_int64(&$tmp4408, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4407, $tmp4408);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4410 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4407, &$s4409);
            next4386 = $tmp4410;
            if (((panda$core$Bit) { !next4386.nonnull }).value) {
            {
                $tmp4411 = NULL;
                $returnValue4382 = $tmp4411;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4411));
                $tmp4376 = 2;
                goto $l4374;
                $l4412:;
                return $returnValue4382;
            }
            }
            panda$core$String* $tmp4415 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4386.value));
            $tmp4414 = $tmp4415;
            panda$core$MutableString$append$panda$core$String(name4394, $tmp4414);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4414));
        }
        }
        $l4401:;
        org$pandalanguage$pandac$ASTNode* $tmp4418 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4419, 30);
        panda$core$String* $tmp4421 = panda$core$MutableString$finish$R$panda$core$String(name4394);
        $tmp4420 = $tmp4421;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4418, $tmp4419, ((org$pandalanguage$pandac$parser$Token) start4377.value).position, $tmp4420);
        $tmp4417 = $tmp4418;
        $tmp4416 = $tmp4417;
        $returnValue4382 = $tmp4416;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4416));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4417));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4420));
        $tmp4376 = 3;
        goto $l4374;
        $l4422:;
        return $returnValue4382;
    }
    $l4374:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name4394));
    name4394 = NULL;
    switch ($tmp4376) {
        case 3: goto $l4422;
        case 2: goto $l4412;
        case 1: goto $l4392;
        case 0: goto $l4384;
    }
    $l4424:;
    if (false) goto $l4425; else goto $l4426;
    $l4426:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4427, (panda$core$Int64) { 1939 }, &$s4428);
    abort();
    $l4425:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4432;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4433;
    panda$core$Int64 $tmp4434;
    org$pandalanguage$pandac$ASTNode* $returnValue4437;
    org$pandalanguage$pandac$ASTNode* $tmp4438;
    org$pandalanguage$pandac$parser$Token$nullable next4441;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4442;
    panda$core$Int64 $tmp4443;
    org$pandalanguage$pandac$ASTNode* $tmp4446;
    panda$core$MutableString* name4449 = NULL;
    panda$core$MutableString* $tmp4450;
    panda$core$MutableString* $tmp4451;
    panda$core$String* $tmp4453;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4457;
    panda$core$Int64 $tmp4458;
    panda$core$Char8 $tmp4460;
    panda$core$UInt8 $tmp4461;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4462;
    panda$core$Int64 $tmp4463;
    org$pandalanguage$pandac$ASTNode* $tmp4466;
    panda$core$String* $tmp4469;
    org$pandalanguage$pandac$ASTNode* $tmp4471;
    org$pandalanguage$pandac$ASTNode* $tmp4472;
    panda$core$Int64 $tmp4474;
    panda$core$String* $tmp4475;
    int $tmp4431;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4434, 16);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4433, $tmp4434);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4436 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4433, &$s4435);
        start4432 = $tmp4436;
        if (((panda$core$Bit) { !start4432.nonnull }).value) {
        {
            $tmp4438 = NULL;
            $returnValue4437 = $tmp4438;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4438));
            $tmp4431 = 0;
            goto $l4429;
            $l4439:;
            return $returnValue4437;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4443, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4442, $tmp4443);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4445 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4442, &$s4444);
        next4441 = $tmp4445;
        if (((panda$core$Bit) { !next4441.nonnull }).value) {
        {
            $tmp4446 = NULL;
            $returnValue4437 = $tmp4446;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4446));
            $tmp4431 = 1;
            goto $l4429;
            $l4447:;
            return $returnValue4437;
        }
        }
        panda$core$MutableString* $tmp4452 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4454 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4441.value));
        $tmp4453 = $tmp4454;
        panda$core$MutableString$init$panda$core$String($tmp4452, $tmp4453);
        $tmp4451 = $tmp4452;
        $tmp4450 = $tmp4451;
        name4449 = $tmp4450;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4450));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4451));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4453));
        $l4455:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4458, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4457, $tmp4458);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4459 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4457);
            next4441 = $tmp4459;
            if (((panda$core$Bit) { !next4441.nonnull }).value) {
            {
                goto $l4456;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4461, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4460, $tmp4461);
            panda$core$MutableString$append$panda$core$Char8(name4449, $tmp4460);
            panda$core$Int64$init$builtin_int64(&$tmp4463, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4462, $tmp4463);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4465 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4462, &$s4464);
            next4441 = $tmp4465;
            if (((panda$core$Bit) { !next4441.nonnull }).value) {
            {
                $tmp4466 = NULL;
                $returnValue4437 = $tmp4466;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4466));
                $tmp4431 = 2;
                goto $l4429;
                $l4467:;
                return $returnValue4437;
            }
            }
            panda$core$String* $tmp4470 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4441.value));
            $tmp4469 = $tmp4470;
            panda$core$MutableString$append$panda$core$String(name4449, $tmp4469);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4469));
        }
        }
        $l4456:;
        org$pandalanguage$pandac$ASTNode* $tmp4473 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4474, 46);
        panda$core$String* $tmp4476 = panda$core$MutableString$finish$R$panda$core$String(name4449);
        $tmp4475 = $tmp4476;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4473, $tmp4474, ((org$pandalanguage$pandac$parser$Token) start4432.value).position, $tmp4475);
        $tmp4472 = $tmp4473;
        $tmp4471 = $tmp4472;
        $returnValue4437 = $tmp4471;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4471));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4472));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4475));
        $tmp4431 = 3;
        goto $l4429;
        $l4477:;
        return $returnValue4437;
    }
    $l4429:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name4449));
    name4449 = NULL;
    switch ($tmp4431) {
        case 3: goto $l4477;
        case 2: goto $l4467;
        case 0: goto $l4439;
        case 1: goto $l4447;
    }
    $l4479:;
    if (false) goto $l4480; else goto $l4481;
    $l4481:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4482, (panda$core$Int64) { 1967 }, &$s4483);
    abort();
    $l4480:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4487;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4488;
    panda$core$Int64 $tmp4489;
    panda$collections$ImmutableArray* $returnValue4492;
    panda$collections$ImmutableArray* $tmp4493;
    org$pandalanguage$pandac$parser$Token$nullable id4496;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4497;
    panda$core$Int64 $tmp4498;
    panda$collections$ImmutableArray* $tmp4501;
    panda$collections$Array* parameters4504 = NULL;
    panda$collections$Array* $tmp4505;
    panda$collections$Array* $tmp4506;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4508;
    panda$core$Int64 $tmp4509;
    org$pandalanguage$pandac$ASTNode* t4514 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4515;
    org$pandalanguage$pandac$ASTNode* $tmp4516;
    panda$collections$ImmutableArray* $tmp4518;
    org$pandalanguage$pandac$ASTNode* $tmp4522;
    panda$core$Int64 $tmp4524;
    panda$core$String* $tmp4525;
    org$pandalanguage$pandac$ASTNode* $tmp4528;
    panda$core$Int64 $tmp4530;
    panda$core$String* $tmp4531;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4536;
    panda$core$Int64 $tmp4537;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4539;
    panda$core$Int64 $tmp4540;
    panda$collections$ImmutableArray* $tmp4543;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4546;
    panda$core$Int64 $tmp4547;
    org$pandalanguage$pandac$ASTNode* t4552 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4553;
    org$pandalanguage$pandac$ASTNode* $tmp4554;
    panda$collections$ImmutableArray* $tmp4556;
    org$pandalanguage$pandac$ASTNode* $tmp4560;
    panda$core$Int64 $tmp4562;
    panda$core$String* $tmp4563;
    org$pandalanguage$pandac$ASTNode* $tmp4566;
    panda$core$Int64 $tmp4568;
    panda$core$String* $tmp4569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4571;
    panda$core$Int64 $tmp4572;
    panda$collections$ImmutableArray* $tmp4575;
    panda$collections$ImmutableArray* $tmp4578;
    panda$collections$ImmutableArray* $tmp4579;
    int $tmp4486;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4489, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4488, $tmp4489);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4491 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4488, &$s4490);
        start4487 = $tmp4491;
        if (((panda$core$Bit) { !start4487.nonnull }).value) {
        {
            $tmp4493 = NULL;
            $returnValue4492 = $tmp4493;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4493));
            $tmp4486 = 0;
            goto $l4484;
            $l4494:;
            return $returnValue4492;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4498, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4497, $tmp4498);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4500 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4497, &$s4499);
        id4496 = $tmp4500;
        if (((panda$core$Bit) { !id4496.nonnull }).value) {
        {
            $tmp4501 = NULL;
            $returnValue4492 = $tmp4501;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4501));
            $tmp4486 = 1;
            goto $l4484;
            $l4502:;
            return $returnValue4492;
        }
        }
        panda$collections$Array* $tmp4507 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4507);
        $tmp4506 = $tmp4507;
        $tmp4505 = $tmp4506;
        parameters4504 = $tmp4505;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4505));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4506));
        panda$core$Int64$init$builtin_int64(&$tmp4509, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4508, $tmp4509);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4510 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4508);
        if (((panda$core$Bit) { $tmp4510.nonnull }).value) {
        {
            int $tmp4513;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4517 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4516 = $tmp4517;
                $tmp4515 = $tmp4516;
                t4514 = $tmp4515;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4515));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4516));
                if (((panda$core$Bit) { t4514 == NULL }).value) {
                {
                    $tmp4518 = NULL;
                    $returnValue4492 = $tmp4518;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4518));
                    $tmp4513 = 0;
                    goto $l4511;
                    $l4519:;
                    $tmp4486 = 2;
                    goto $l4484;
                    $l4520:;
                    return $returnValue4492;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4523 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4524, 44);
                panda$core$String* $tmp4526 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4496.value));
                $tmp4525 = $tmp4526;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4523, $tmp4524, ((org$pandalanguage$pandac$parser$Token) id4496.value).position, $tmp4525, t4514);
                $tmp4522 = $tmp4523;
                panda$collections$Array$add$panda$collections$Array$T(parameters4504, ((panda$core$Object*) $tmp4522));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4522));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4525));
            }
            $tmp4513 = -1;
            goto $l4511;
            $l4511:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t4514));
            t4514 = NULL;
            switch ($tmp4513) {
                case -1: goto $l4527;
                case 0: goto $l4519;
            }
            $l4527:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4529 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4530, 20);
            panda$core$String* $tmp4532 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4496.value));
            $tmp4531 = $tmp4532;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4529, $tmp4530, ((org$pandalanguage$pandac$parser$Token) id4496.value).position, $tmp4531);
            $tmp4528 = $tmp4529;
            panda$collections$Array$add$panda$collections$Array$T(parameters4504, ((panda$core$Object*) $tmp4528));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4528));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4531));
        }
        }
        $l4533:;
        panda$core$Int64$init$builtin_int64(&$tmp4537, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4536, $tmp4537);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4538 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4536);
        bool $tmp4535 = ((panda$core$Bit) { $tmp4538.nonnull }).value;
        if (!$tmp4535) goto $l4534;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4540, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4539, $tmp4540);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4542 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4539, &$s4541);
            id4496 = $tmp4542;
            if (((panda$core$Bit) { !id4496.nonnull }).value) {
            {
                $tmp4543 = NULL;
                $returnValue4492 = $tmp4543;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4543));
                $tmp4486 = 3;
                goto $l4484;
                $l4544:;
                return $returnValue4492;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4547, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4546, $tmp4547);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4548 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4546);
            if (((panda$core$Bit) { $tmp4548.nonnull }).value) {
            {
                int $tmp4551;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4555 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4554 = $tmp4555;
                    $tmp4553 = $tmp4554;
                    t4552 = $tmp4553;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4553));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4554));
                    if (((panda$core$Bit) { t4552 == NULL }).value) {
                    {
                        $tmp4556 = NULL;
                        $returnValue4492 = $tmp4556;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4556));
                        $tmp4551 = 0;
                        goto $l4549;
                        $l4557:;
                        $tmp4486 = 4;
                        goto $l4484;
                        $l4558:;
                        return $returnValue4492;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4561 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4562, 44);
                    panda$core$String* $tmp4564 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4496.value));
                    $tmp4563 = $tmp4564;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4561, $tmp4562, ((org$pandalanguage$pandac$parser$Token) id4496.value).position, $tmp4563, t4552);
                    $tmp4560 = $tmp4561;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4504, ((panda$core$Object*) $tmp4560));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4560));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4563));
                }
                $tmp4551 = -1;
                goto $l4549;
                $l4549:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t4552));
                t4552 = NULL;
                switch ($tmp4551) {
                    case -1: goto $l4565;
                    case 0: goto $l4557;
                }
                $l4565:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4567 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4568, 20);
                panda$core$String* $tmp4570 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4496.value));
                $tmp4569 = $tmp4570;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4567, $tmp4568, ((org$pandalanguage$pandac$parser$Token) id4496.value).position, $tmp4569);
                $tmp4566 = $tmp4567;
                panda$collections$Array$add$panda$collections$Array$T(parameters4504, ((panda$core$Object*) $tmp4566));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4566));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4569));
            }
            }
        }
        goto $l4533;
        $l4534:;
        panda$core$Int64$init$builtin_int64(&$tmp4572, 64);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4571, $tmp4572);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4574 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4571, &$s4573);
        if (((panda$core$Bit) { !$tmp4574.nonnull }).value) {
        {
            $tmp4575 = NULL;
            $returnValue4492 = $tmp4575;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4575));
            $tmp4486 = 5;
            goto $l4484;
            $l4576:;
            return $returnValue4492;
        }
        }
        panda$collections$ImmutableArray* $tmp4580 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4504);
        $tmp4579 = $tmp4580;
        $tmp4578 = $tmp4579;
        $returnValue4492 = $tmp4578;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4578));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4579));
        $tmp4486 = 6;
        goto $l4484;
        $l4581:;
        return $returnValue4492;
    }
    $l4484:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parameters4504));
    parameters4504 = NULL;
    switch ($tmp4486) {
        case 4: goto $l4558;
        case 1: goto $l4502;
        case 6: goto $l4581;
        case 2: goto $l4520;
        case 0: goto $l4494;
        case 5: goto $l4576;
        case 3: goto $l4544;
    }
    $l4583:;
    if (false) goto $l4584; else goto $l4585;
    $l4585:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4586, (panda$core$Int64) { 1995 }, &$s4587);
    abort();
    $l4584:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4591;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4592;
    panda$core$Int64 $tmp4593;
    panda$collections$ImmutableArray* $returnValue4596;
    panda$collections$ImmutableArray* $tmp4597;
    panda$collections$Array* result4600 = NULL;
    panda$collections$Array* $tmp4601;
    panda$collections$Array* $tmp4602;
    org$pandalanguage$pandac$ASTNode* t4604 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4605;
    org$pandalanguage$pandac$ASTNode* $tmp4606;
    panda$collections$ImmutableArray* $tmp4608;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4614;
    panda$core$Int64 $tmp4615;
    org$pandalanguage$pandac$ASTNode* $tmp4617;
    org$pandalanguage$pandac$ASTNode* $tmp4618;
    org$pandalanguage$pandac$ASTNode* $tmp4619;
    panda$collections$ImmutableArray* $tmp4621;
    panda$collections$ImmutableArray* $tmp4624;
    panda$collections$ImmutableArray* $tmp4625;
    int $tmp4590;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4593, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4592, $tmp4593);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4595 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4592, &$s4594);
        start4591 = $tmp4595;
        if (((panda$core$Bit) { !start4591.nonnull }).value) {
        {
            $tmp4597 = NULL;
            $returnValue4596 = $tmp4597;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4597));
            $tmp4590 = 0;
            goto $l4588;
            $l4598:;
            return $returnValue4596;
        }
        }
        panda$collections$Array* $tmp4603 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4603);
        $tmp4602 = $tmp4603;
        $tmp4601 = $tmp4602;
        result4600 = $tmp4601;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4601));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4602));
        org$pandalanguage$pandac$ASTNode* $tmp4607 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4606 = $tmp4607;
        $tmp4605 = $tmp4606;
        t4604 = $tmp4605;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4605));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4606));
        if (((panda$core$Bit) { t4604 == NULL }).value) {
        {
            $tmp4608 = NULL;
            $returnValue4596 = $tmp4608;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4608));
            $tmp4590 = 1;
            goto $l4588;
            $l4609:;
            return $returnValue4596;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4600, ((panda$core$Object*) t4604));
        $l4611:;
        panda$core$Int64$init$builtin_int64(&$tmp4615, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4614, $tmp4615);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4616 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4614);
        bool $tmp4613 = ((panda$core$Bit) { $tmp4616.nonnull }).value;
        if (!$tmp4613) goto $l4612;
        {
            {
                $tmp4617 = t4604;
                org$pandalanguage$pandac$ASTNode* $tmp4620 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4619 = $tmp4620;
                $tmp4618 = $tmp4619;
                t4604 = $tmp4618;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4618));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4619));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4617));
            }
            if (((panda$core$Bit) { t4604 == NULL }).value) {
            {
                $tmp4621 = NULL;
                $returnValue4596 = $tmp4621;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4621));
                $tmp4590 = 2;
                goto $l4588;
                $l4622:;
                return $returnValue4596;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4600, ((panda$core$Object*) t4604));
        }
        goto $l4611;
        $l4612:;
        panda$collections$ImmutableArray* $tmp4626 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4600);
        $tmp4625 = $tmp4626;
        $tmp4624 = $tmp4625;
        $returnValue4596 = $tmp4624;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4624));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4625));
        $tmp4590 = 3;
        goto $l4588;
        $l4627:;
        return $returnValue4596;
    }
    $l4588:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t4604));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result4600));
    result4600 = NULL;
    t4604 = NULL;
    switch ($tmp4590) {
        case 3: goto $l4627;
        case 2: goto $l4622;
        case 0: goto $l4598;
        case 1: goto $l4609;
    }
    $l4629:;
    if (false) goto $l4630; else goto $l4631;
    $l4631:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4632, (panda$core$Int64) { 2040 }, &$s4633);
    abort();
    $l4630:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4637;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4638;
    panda$core$Int64 $tmp4639;
    panda$core$String* exprText4642 = NULL;
    org$pandalanguage$pandac$ASTNode* expr4643 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4644;
    org$pandalanguage$pandac$parser$Token$nullable exprStart4645;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4646;
    panda$core$Int64 $tmp4647;
    org$pandalanguage$pandac$ASTNode* $tmp4649;
    org$pandalanguage$pandac$ASTNode* $tmp4650;
    org$pandalanguage$pandac$ASTNode* $tmp4651;
    org$pandalanguage$pandac$ASTNode* $returnValue4653;
    org$pandalanguage$pandac$ASTNode* $tmp4654;
    org$pandalanguage$pandac$parser$Token$nullable exprEnd4657;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4658;
    panda$core$Int64 $tmp4659;
    org$pandalanguage$pandac$ASTNode* $tmp4662;
    panda$core$String* $tmp4665;
    panda$core$String* $tmp4666;
    panda$core$String* $tmp4667;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp4668;
    panda$core$Bit $tmp4670;
    org$pandalanguage$pandac$ASTNode* $tmp4672;
    org$pandalanguage$pandac$ASTNode* $tmp4673;
    panda$core$Int64 $tmp4675;
    panda$core$String* $tmp4676;
    int $tmp4636;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4639, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4638, $tmp4639);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4641 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4638, &$s4640);
        a4637 = $tmp4641;
        memset(&exprText4642, 0, sizeof(exprText4642));
        $tmp4644 = NULL;
        expr4643 = $tmp4644;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4644));
        panda$core$Int64$init$builtin_int64(&$tmp4647, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4646, $tmp4647);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4648 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4646);
        exprStart4645 = $tmp4648;
        if (((panda$core$Bit) { exprStart4645.nonnull }).value) {
        {
            {
                $tmp4649 = expr4643;
                org$pandalanguage$pandac$ASTNode* $tmp4652 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4651 = $tmp4652;
                $tmp4650 = $tmp4651;
                expr4643 = $tmp4650;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4650));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4651));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4649));
            }
            if (((panda$core$Bit) { expr4643 == NULL }).value) {
            {
                $tmp4654 = NULL;
                $returnValue4653 = $tmp4654;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4654));
                $tmp4636 = 0;
                goto $l4634;
                $l4655:;
                return $returnValue4653;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4659, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4658, $tmp4659);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4661 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4658, &$s4660);
            exprEnd4657 = $tmp4661;
            if (((panda$core$Bit) { !exprEnd4657.nonnull }).value) {
            {
                $tmp4662 = NULL;
                $returnValue4653 = $tmp4662;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4662));
                $tmp4636 = 1;
                goto $l4634;
                $l4663:;
                return $returnValue4653;
            }
            }
            {
                $tmp4665 = exprText4642;
                panda$core$String$Index $tmp4669 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->source, ((org$pandalanguage$pandac$parser$Token) exprStart4645.value).start);
                panda$core$Bit$init$builtin_bit(&$tmp4670, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp4668, $tmp4669, ((org$pandalanguage$pandac$parser$Token) exprEnd4657.value).start, $tmp4670);
                panda$core$String* $tmp4671 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp4668);
                $tmp4667 = $tmp4671;
                $tmp4666 = $tmp4667;
                exprText4642 = $tmp4666;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4666));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4667));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4665));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4674 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4675, 0);
        panda$core$String* $tmp4677 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4637.value));
        $tmp4676 = $tmp4677;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4674, $tmp4675, ((org$pandalanguage$pandac$parser$Token) a4637.value).position, $tmp4676, exprText4642, expr4643);
        $tmp4673 = $tmp4674;
        $tmp4672 = $tmp4673;
        $returnValue4653 = $tmp4672;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4672));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4673));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4676));
        $tmp4636 = 2;
        goto $l4634;
        $l4678:;
        return $returnValue4653;
    }
    $l4634:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) expr4643));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) exprText4642));
    switch ($tmp4636) {
        case 2: goto $l4678;
        case 1: goto $l4663;
        case 0: goto $l4655;
    }
    $l4680:;
    if (false) goto $l4681; else goto $l4682;
    $l4682:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4683, (panda$core$Int64) { 2064 }, &$s4684);
    abort();
    $l4681:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4688 = NULL;
    panda$collections$Array* $tmp4689;
    panda$collections$Array* $tmp4690;
    panda$core$Int64 $tmp4696;
    org$pandalanguage$pandac$ASTNode* a4701 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4702;
    org$pandalanguage$pandac$ASTNode* $tmp4703;
    panda$collections$ImmutableArray* $returnValue4707;
    panda$collections$ImmutableArray* $tmp4708;
    panda$collections$ImmutableArray* $tmp4709;
    int $tmp4687;
    {
        panda$collections$Array* $tmp4691 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4691);
        $tmp4690 = $tmp4691;
        $tmp4689 = $tmp4690;
        result4688 = $tmp4689;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4689));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4690));
        $l4692:;
        org$pandalanguage$pandac$parser$Token $tmp4695 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4696, 14);
        panda$core$Bit $tmp4697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4695.kind.$rawValue, $tmp4696);
        bool $tmp4694 = $tmp4697.value;
        if (!$tmp4694) goto $l4693;
        {
            int $tmp4700;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4704 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4703 = $tmp4704;
                $tmp4702 = $tmp4703;
                a4701 = $tmp4702;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4702));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4703));
                if (((panda$core$Bit) { a4701 == NULL }).value) {
                {
                    $tmp4700 = 0;
                    goto $l4698;
                    $l4705:;
                    goto $l4693;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4688, ((panda$core$Object*) a4701));
            }
            $tmp4700 = -1;
            goto $l4698;
            $l4698:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a4701));
            a4701 = NULL;
            switch ($tmp4700) {
                case 0: goto $l4705;
                case -1: goto $l4706;
            }
            $l4706:;
        }
        goto $l4692;
        $l4693:;
        panda$collections$ImmutableArray* $tmp4710 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4688);
        $tmp4709 = $tmp4710;
        $tmp4708 = $tmp4709;
        $returnValue4707 = $tmp4708;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4708));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4709));
        $tmp4687 = 0;
        goto $l4685;
        $l4711:;
        return $returnValue4707;
    }
    $l4685:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result4688));
    result4688 = NULL;
    switch ($tmp4687) {
        case 0: goto $l4711;
    }
    $l4713:;
    if (false) goto $l4714; else goto $l4715;
    $l4715:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4716, (panda$core$Int64) { 2086 }, &$s4717);
    abort();
    $l4714:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4721;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4722;
    panda$core$Int64 $tmp4723;
    org$pandalanguage$pandac$ASTNode* $returnValue4726;
    org$pandalanguage$pandac$ASTNode* $tmp4727;
    panda$core$MutableString* result4730 = NULL;
    panda$core$MutableString* $tmp4731;
    panda$core$MutableString* $tmp4732;
    org$pandalanguage$pandac$parser$Token next4736;
    panda$core$Int64 $tmp4738;
    panda$core$Int64 $tmp4740;
    org$pandalanguage$pandac$ASTNode* $tmp4743;
    panda$core$String* $tmp4746;
    org$pandalanguage$pandac$ASTNode* $tmp4748;
    org$pandalanguage$pandac$ASTNode* $tmp4749;
    panda$core$Int64 $tmp4751;
    panda$core$String* $tmp4752;
    int $tmp4720;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4723, 12);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4722, $tmp4723);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4722, &$s4724);
        start4721 = $tmp4725;
        if (((panda$core$Bit) { !start4721.nonnull }).value) {
        {
            $tmp4727 = NULL;
            $returnValue4726 = $tmp4727;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4727));
            $tmp4720 = 0;
            goto $l4718;
            $l4728:;
            return $returnValue4726;
        }
        }
        panda$core$MutableString* $tmp4733 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4733);
        $tmp4732 = $tmp4733;
        $tmp4731 = $tmp4732;
        result4730 = $tmp4731;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4731));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4732));
        $l4734:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4737 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4736 = $tmp4737;
            panda$core$Int64$init$builtin_int64(&$tmp4738, 12);
            panda$core$Bit $tmp4739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4736.kind.$rawValue, $tmp4738);
            if ($tmp4739.value) {
            {
                goto $l4735;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4740, 0);
            panda$core$Bit $tmp4741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4736.kind.$rawValue, $tmp4740);
            if ($tmp4741.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4721.value), &$s4742);
                $tmp4743 = NULL;
                $returnValue4726 = $tmp4743;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4743));
                $tmp4720 = 1;
                goto $l4718;
                $l4744:;
                return $returnValue4726;
            }
            }
            panda$core$String* $tmp4747 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4736);
            $tmp4746 = $tmp4747;
            panda$core$MutableString$append$panda$core$String(result4730, $tmp4746);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4746));
        }
        }
        $l4735:;
        org$pandalanguage$pandac$ASTNode* $tmp4750 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4751, 38);
        panda$core$String* $tmp4753 = panda$core$MutableString$finish$R$panda$core$String(result4730);
        $tmp4752 = $tmp4753;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4750, $tmp4751, ((org$pandalanguage$pandac$parser$Token) start4721.value).position, $tmp4752);
        $tmp4749 = $tmp4750;
        $tmp4748 = $tmp4749;
        $returnValue4726 = $tmp4748;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4748));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4749));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4752));
        $tmp4720 = 2;
        goto $l4718;
        $l4754:;
        return $returnValue4726;
    }
    $l4718:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result4730));
    result4730 = NULL;
    switch ($tmp4720) {
        case 2: goto $l4754;
        case 1: goto $l4744;
        case 0: goto $l4728;
    }
    $l4756:;
    if (false) goto $l4757; else goto $l4758;
    $l4758:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4759, (panda$core$Int64) { 2098 }, &$s4760);
    abort();
    $l4757:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4764;
    panda$core$Int64 $tmp4765;
    org$pandalanguage$pandac$parser$Token$nullable id4766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4767;
    panda$core$Int64 $tmp4768;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4771;
    panda$core$Int64 $tmp4772;
    org$pandalanguage$pandac$ASTNode* $returnValue4773;
    org$pandalanguage$pandac$ASTNode* $tmp4774;
    org$pandalanguage$pandac$ASTNode* t4777 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4778;
    org$pandalanguage$pandac$ASTNode* $tmp4779;
    org$pandalanguage$pandac$ASTNode* $tmp4781;
    org$pandalanguage$pandac$ASTNode* $tmp4784;
    org$pandalanguage$pandac$ASTNode* $tmp4785;
    panda$core$Int64 $tmp4787;
    panda$core$String* $tmp4788;
    int $tmp4763;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4765, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4764, $tmp4765);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4764);
        panda$core$Int64$init$builtin_int64(&$tmp4768, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4767, $tmp4768);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4770 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4767, &$s4769);
        id4766 = $tmp4770;
        panda$core$Int64$init$builtin_int64(&$tmp4772, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4771, $tmp4772);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4771);
        if (((panda$core$Bit) { !id4766.nonnull }).value) {
        {
            $tmp4774 = NULL;
            $returnValue4773 = $tmp4774;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4774));
            $tmp4763 = 0;
            goto $l4761;
            $l4775:;
            return $returnValue4773;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4780 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4779 = $tmp4780;
        $tmp4778 = $tmp4779;
        t4777 = $tmp4778;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4778));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4779));
        if (((panda$core$Bit) { t4777 == NULL }).value) {
        {
            $tmp4781 = NULL;
            $returnValue4773 = $tmp4781;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4781));
            $tmp4763 = 1;
            goto $l4761;
            $l4782:;
            return $returnValue4773;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4786 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4787, 31);
        panda$core$String* $tmp4789 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4766.value));
        $tmp4788 = $tmp4789;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4786, $tmp4787, ((org$pandalanguage$pandac$parser$Token) id4766.value).position, $tmp4788, t4777);
        $tmp4785 = $tmp4786;
        $tmp4784 = $tmp4785;
        $returnValue4773 = $tmp4784;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4784));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4785));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4788));
        $tmp4763 = 2;
        goto $l4761;
        $l4790:;
        return $returnValue4773;
    }
    $l4761:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t4777));
    t4777 = NULL;
    switch ($tmp4763) {
        case 2: goto $l4790;
        case 1: goto $l4782;
        case 0: goto $l4775;
    }
    $l4792:;
    if (false) goto $l4793; else goto $l4794;
    $l4794:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4795, (panda$core$Int64) { 2121 }, &$s4796);
    abort();
    $l4793:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4800;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4801;
    panda$core$Int64 $tmp4802;
    panda$collections$ImmutableArray* $returnValue4805;
    panda$collections$ImmutableArray* $tmp4806;
    panda$collections$Array* result4809 = NULL;
    panda$collections$Array* $tmp4810;
    panda$collections$Array* $tmp4811;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4813;
    panda$core$Int64 $tmp4814;
    org$pandalanguage$pandac$ASTNode* param4819 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4820;
    org$pandalanguage$pandac$ASTNode* $tmp4821;
    panda$collections$ImmutableArray* $tmp4823;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4830;
    panda$core$Int64 $tmp4831;
    org$pandalanguage$pandac$ASTNode* $tmp4833;
    org$pandalanguage$pandac$ASTNode* $tmp4834;
    org$pandalanguage$pandac$ASTNode* $tmp4835;
    panda$collections$ImmutableArray* $tmp4837;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4841;
    panda$core$Int64 $tmp4842;
    panda$collections$ImmutableArray* $tmp4845;
    panda$collections$ImmutableArray* $tmp4850;
    panda$collections$ImmutableArray* $tmp4851;
    int $tmp4799;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4802, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4801, $tmp4802);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4804 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4801, &$s4803);
        start4800 = $tmp4804;
        if (((panda$core$Bit) { !start4800.nonnull }).value) {
        {
            $tmp4806 = NULL;
            $returnValue4805 = $tmp4806;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4806));
            $tmp4799 = 0;
            goto $l4797;
            $l4807:;
            return $returnValue4805;
        }
        }
        panda$collections$Array* $tmp4812 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4812);
        $tmp4811 = $tmp4812;
        $tmp4810 = $tmp4811;
        result4809 = $tmp4810;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4810));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4811));
        panda$core$Int64$init$builtin_int64(&$tmp4814, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4813, $tmp4814);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4815 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4813);
        if (((panda$core$Bit) { !$tmp4815.nonnull }).value) {
        {
            int $tmp4818;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4822 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4821 = $tmp4822;
                $tmp4820 = $tmp4821;
                param4819 = $tmp4820;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4820));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4821));
                if (((panda$core$Bit) { param4819 == NULL }).value) {
                {
                    $tmp4823 = NULL;
                    $returnValue4805 = $tmp4823;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4823));
                    $tmp4818 = 0;
                    goto $l4816;
                    $l4824:;
                    $tmp4799 = 1;
                    goto $l4797;
                    $l4825:;
                    return $returnValue4805;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4809, ((panda$core$Object*) param4819));
                $l4827:;
                panda$core$Int64$init$builtin_int64(&$tmp4831, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4830, $tmp4831);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4832 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4830);
                bool $tmp4829 = ((panda$core$Bit) { $tmp4832.nonnull }).value;
                if (!$tmp4829) goto $l4828;
                {
                    {
                        $tmp4833 = param4819;
                        org$pandalanguage$pandac$ASTNode* $tmp4836 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4835 = $tmp4836;
                        $tmp4834 = $tmp4835;
                        param4819 = $tmp4834;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4834));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4835));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4833));
                    }
                    if (((panda$core$Bit) { param4819 == NULL }).value) {
                    {
                        $tmp4837 = NULL;
                        $returnValue4805 = $tmp4837;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4837));
                        $tmp4818 = 1;
                        goto $l4816;
                        $l4838:;
                        $tmp4799 = 2;
                        goto $l4797;
                        $l4839:;
                        return $returnValue4805;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4809, ((panda$core$Object*) param4819));
                }
                goto $l4827;
                $l4828:;
                panda$core$Int64$init$builtin_int64(&$tmp4842, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4841, $tmp4842);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4844 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4841, &$s4843);
                if (((panda$core$Bit) { !$tmp4844.nonnull }).value) {
                {
                    $tmp4845 = NULL;
                    $returnValue4805 = $tmp4845;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4845));
                    $tmp4818 = 2;
                    goto $l4816;
                    $l4846:;
                    $tmp4799 = 3;
                    goto $l4797;
                    $l4847:;
                    return $returnValue4805;
                }
                }
            }
            $tmp4818 = -1;
            goto $l4816;
            $l4816:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) param4819));
            param4819 = NULL;
            switch ($tmp4818) {
                case 0: goto $l4824;
                case -1: goto $l4849;
                case 1: goto $l4838;
                case 2: goto $l4846;
            }
            $l4849:;
        }
        }
        panda$collections$ImmutableArray* $tmp4852 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4809);
        $tmp4851 = $tmp4852;
        $tmp4850 = $tmp4851;
        $returnValue4805 = $tmp4850;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4850));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4851));
        $tmp4799 = 4;
        goto $l4797;
        $l4853:;
        return $returnValue4805;
    }
    $l4797:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result4809));
    result4809 = NULL;
    switch ($tmp4799) {
        case 3: goto $l4847;
        case 4: goto $l4853;
        case 1: goto $l4825;
        case 2: goto $l4839;
        case 0: goto $l4807;
    }
    $l4855:;
    if (false) goto $l4856; else goto $l4857;
    $l4857:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4858, (panda$core$Int64) { 2138 }, &$s4859);
    abort();
    $l4856:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4863;
    org$pandalanguage$pandac$parser$Token$nullable start4864;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4865;
    panda$core$Int64 $tmp4866;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4868;
    panda$core$Int64 $tmp4869;
    org$pandalanguage$pandac$ASTNode* $returnValue4872;
    org$pandalanguage$pandac$ASTNode* $tmp4873;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4876;
    panda$core$Int64 $tmp4877;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4878;
    panda$core$Int64 $tmp4879;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4880;
    panda$core$Int64 $tmp4881;
    panda$core$String* name4882 = NULL;
    panda$core$String* $tmp4883;
    panda$core$String* $tmp4884;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4886;
    panda$core$Int64 $tmp4887;
    org$pandalanguage$pandac$ASTNode* $tmp4888;
    panda$collections$ImmutableArray* generics4891 = NULL;
    panda$core$Int64 $tmp4893;
    panda$collections$ImmutableArray* $tmp4895;
    panda$collections$ImmutableArray* $tmp4896;
    panda$collections$ImmutableArray* $tmp4897;
    panda$collections$ImmutableArray* $tmp4899;
    panda$collections$ImmutableArray* $tmp4900;
    panda$collections$ImmutableArray* params4901 = NULL;
    panda$collections$ImmutableArray* $tmp4902;
    panda$collections$ImmutableArray* $tmp4903;
    org$pandalanguage$pandac$ASTNode* $tmp4905;
    org$pandalanguage$pandac$ASTNode* returnType4908 = NULL;
    panda$core$Int64 $tmp4910;
    org$pandalanguage$pandac$ASTNode* $tmp4912;
    org$pandalanguage$pandac$ASTNode* $tmp4913;
    org$pandalanguage$pandac$ASTNode* $tmp4914;
    org$pandalanguage$pandac$ASTNode* $tmp4916;
    org$pandalanguage$pandac$ASTNode* $tmp4919;
    org$pandalanguage$pandac$ASTNode* $tmp4920;
    panda$collections$ImmutableArray* body4921 = NULL;
    panda$core$Int64 $tmp4923;
    panda$collections$ImmutableArray* $tmp4925;
    panda$collections$ImmutableArray* $tmp4926;
    panda$collections$ImmutableArray* $tmp4927;
    org$pandalanguage$pandac$ASTNode* $tmp4929;
    panda$collections$ImmutableArray* $tmp4932;
    panda$collections$ImmutableArray* $tmp4933;
    org$pandalanguage$pandac$ASTNode* $tmp4934;
    org$pandalanguage$pandac$ASTNode* $tmp4935;
    panda$core$Int64 $tmp4937;
    int $tmp4862;
    {
        memset(&kind4863, 0, sizeof(kind4863));
        panda$core$Int64$init$builtin_int64(&$tmp4866, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4865, $tmp4866);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4867 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4865);
        start4864 = $tmp4867;
        if (((panda$core$Bit) { !start4864.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4869, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4868, $tmp4869);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4871 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4868, &$s4870);
            start4864 = $tmp4871;
            if (((panda$core$Bit) { !start4864.nonnull }).value) {
            {
                $tmp4873 = NULL;
                $returnValue4872 = $tmp4873;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4873));
                $tmp4862 = 0;
                goto $l4860;
                $l4874:;
                return $returnValue4872;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4877, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4876, $tmp4877);
            kind4863 = $tmp4876;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4879, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4878, $tmp4879);
            kind4863 = $tmp4878;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4881, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4880, $tmp4881);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4880);
        panda$core$String* $tmp4885 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4884 = $tmp4885;
        $tmp4883 = $tmp4884;
        name4882 = $tmp4883;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4883));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4884));
        panda$core$Int64$init$builtin_int64(&$tmp4887, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4886, $tmp4887);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4886);
        if (((panda$core$Bit) { name4882 == NULL }).value) {
        {
            $tmp4888 = NULL;
            $returnValue4872 = $tmp4888;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4888));
            $tmp4862 = 1;
            goto $l4860;
            $l4889:;
            return $returnValue4872;
        }
        }
        memset(&generics4891, 0, sizeof(generics4891));
        org$pandalanguage$pandac$parser$Token $tmp4892 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4893, 63);
        panda$core$Bit $tmp4894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4892.kind.$rawValue, $tmp4893);
        if ($tmp4894.value) {
        {
            {
                $tmp4895 = generics4891;
                panda$collections$ImmutableArray* $tmp4898 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4897 = $tmp4898;
                $tmp4896 = $tmp4897;
                generics4891 = $tmp4896;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4896));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4897));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4895));
            }
        }
        }
        else {
        {
            {
                $tmp4899 = generics4891;
                $tmp4900 = NULL;
                generics4891 = $tmp4900;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4900));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4899));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4904 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4903 = $tmp4904;
        $tmp4902 = $tmp4903;
        params4901 = $tmp4902;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4902));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4903));
        if (((panda$core$Bit) { params4901 == NULL }).value) {
        {
            $tmp4905 = NULL;
            $returnValue4872 = $tmp4905;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4905));
            $tmp4862 = 2;
            goto $l4860;
            $l4906:;
            return $returnValue4872;
        }
        }
        memset(&returnType4908, 0, sizeof(returnType4908));
        org$pandalanguage$pandac$parser$Token $tmp4909 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4910, 96);
        panda$core$Bit $tmp4911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4909.kind.$rawValue, $tmp4910);
        if ($tmp4911.value) {
        {
            {
                $tmp4912 = returnType4908;
                org$pandalanguage$pandac$ASTNode* $tmp4915 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4914 = $tmp4915;
                $tmp4913 = $tmp4914;
                returnType4908 = $tmp4913;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4913));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4914));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4912));
            }
            if (((panda$core$Bit) { returnType4908 == NULL }).value) {
            {
                $tmp4916 = NULL;
                $returnValue4872 = $tmp4916;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4916));
                $tmp4862 = 3;
                goto $l4860;
                $l4917:;
                return $returnValue4872;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4919 = returnType4908;
                $tmp4920 = NULL;
                returnType4908 = $tmp4920;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4920));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4919));
            }
        }
        }
        memset(&body4921, 0, sizeof(body4921));
        org$pandalanguage$pandac$parser$Token $tmp4922 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4923, 100);
        panda$core$Bit $tmp4924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4922.kind.$rawValue, $tmp4923);
        if ($tmp4924.value) {
        {
            {
                $tmp4925 = body4921;
                panda$collections$ImmutableArray* $tmp4928 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4927 = $tmp4928;
                $tmp4926 = $tmp4927;
                body4921 = $tmp4926;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4926));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4927));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4925));
            }
            if (((panda$core$Bit) { body4921 == NULL }).value) {
            {
                $tmp4929 = NULL;
                $returnValue4872 = $tmp4929;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4929));
                $tmp4862 = 4;
                goto $l4860;
                $l4930:;
                return $returnValue4872;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4932 = body4921;
                $tmp4933 = NULL;
                body4921 = $tmp4933;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4933));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4932));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4936 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4937, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4936, $tmp4937, ((org$pandalanguage$pandac$parser$Token) start4864.value).position, p_doccomment, p_annotations, kind4863, name4882, generics4891, params4901, returnType4908, body4921);
        $tmp4935 = $tmp4936;
        $tmp4934 = $tmp4935;
        $returnValue4872 = $tmp4934;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4934));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4935));
        $tmp4862 = 5;
        goto $l4860;
        $l4938:;
        return $returnValue4872;
    }
    $l4860:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body4921));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType4908));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) params4901));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) generics4891));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) name4882));
    name4882 = NULL;
    params4901 = NULL;
    switch ($tmp4862) {
        case 5: goto $l4938;
        case 2: goto $l4906;
        case 1: goto $l4889;
        case 4: goto $l4930;
        case 3: goto $l4917;
        case 0: goto $l4874;
    }
    $l4940:;
    if (false) goto $l4941; else goto $l4942;
    $l4942:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4943, (panda$core$Int64) { 2168 }, &$s4944);
    abort();
    $l4941:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4948;
    org$pandalanguage$pandac$parser$Token$nullable start4949;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4950;
    panda$core$Int64 $tmp4951;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4953;
    panda$core$Int64 $tmp4954;
    org$pandalanguage$pandac$ASTNode* $returnValue4957;
    org$pandalanguage$pandac$ASTNode* $tmp4958;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4961;
    panda$core$Int64 $tmp4962;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4963;
    panda$core$Int64 $tmp4964;
    panda$collections$ImmutableArray* params4965 = NULL;
    panda$collections$ImmutableArray* $tmp4966;
    panda$collections$ImmutableArray* $tmp4967;
    org$pandalanguage$pandac$ASTNode* $tmp4969;
    org$pandalanguage$pandac$ASTNode* returnType4972 = NULL;
    panda$core$Int64 $tmp4974;
    org$pandalanguage$pandac$ASTNode* $tmp4976;
    org$pandalanguage$pandac$ASTNode* $tmp4977;
    org$pandalanguage$pandac$ASTNode* $tmp4978;
    org$pandalanguage$pandac$ASTNode* $tmp4980;
    org$pandalanguage$pandac$ASTNode* $tmp4983;
    org$pandalanguage$pandac$ASTNode* $tmp4984;
    panda$collections$ImmutableArray* body4985 = NULL;
    panda$collections$ImmutableArray* $tmp4986;
    panda$collections$ImmutableArray* $tmp4987;
    org$pandalanguage$pandac$ASTNode* $tmp4989;
    org$pandalanguage$pandac$ASTNode* $tmp4992;
    org$pandalanguage$pandac$ASTNode* $tmp4993;
    panda$core$Int64 $tmp4995;
    panda$collections$ImmutableArray* $tmp4996;
    int $tmp4947;
    {
        memset(&kind4948, 0, sizeof(kind4948));
        panda$core$Int64$init$builtin_int64(&$tmp4951, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4950, $tmp4951);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4952 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4950);
        start4949 = $tmp4952;
        if (((panda$core$Bit) { !start4949.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4954, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4953, $tmp4954);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4956 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4953, &$s4955);
            start4949 = $tmp4956;
            if (((panda$core$Bit) { !start4949.nonnull }).value) {
            {
                $tmp4958 = NULL;
                $returnValue4957 = $tmp4958;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4958));
                $tmp4947 = 0;
                goto $l4945;
                $l4959:;
                return $returnValue4957;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4962, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4961, $tmp4962);
            kind4948 = $tmp4961;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4964, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4963, $tmp4964);
            kind4948 = $tmp4963;
        }
        }
        panda$collections$ImmutableArray* $tmp4968 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4967 = $tmp4968;
        $tmp4966 = $tmp4967;
        params4965 = $tmp4966;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4966));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4967));
        if (((panda$core$Bit) { params4965 == NULL }).value) {
        {
            $tmp4969 = NULL;
            $returnValue4957 = $tmp4969;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4969));
            $tmp4947 = 1;
            goto $l4945;
            $l4970:;
            return $returnValue4957;
        }
        }
        memset(&returnType4972, 0, sizeof(returnType4972));
        org$pandalanguage$pandac$parser$Token $tmp4973 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4974, 96);
        panda$core$Bit $tmp4975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4973.kind.$rawValue, $tmp4974);
        if ($tmp4975.value) {
        {
            {
                $tmp4976 = returnType4972;
                org$pandalanguage$pandac$ASTNode* $tmp4979 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4978 = $tmp4979;
                $tmp4977 = $tmp4978;
                returnType4972 = $tmp4977;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4977));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4978));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4976));
            }
            if (((panda$core$Bit) { returnType4972 == NULL }).value) {
            {
                $tmp4980 = NULL;
                $returnValue4957 = $tmp4980;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4980));
                $tmp4947 = 2;
                goto $l4945;
                $l4981:;
                return $returnValue4957;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4983 = returnType4972;
                $tmp4984 = NULL;
                returnType4972 = $tmp4984;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4984));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4983));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4988 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4987 = $tmp4988;
        $tmp4986 = $tmp4987;
        body4985 = $tmp4986;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4986));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4987));
        if (((panda$core$Bit) { body4985 == NULL }).value) {
        {
            $tmp4989 = NULL;
            $returnValue4957 = $tmp4989;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4989));
            $tmp4947 = 3;
            goto $l4945;
            $l4990:;
            return $returnValue4957;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4994 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4995, 26);
        panda$collections$ImmutableArray* $tmp4997 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4997);
        $tmp4996 = $tmp4997;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4994, $tmp4995, ((org$pandalanguage$pandac$parser$Token) start4949.value).position, NULL, $tmp4996, kind4948, &$s4998, NULL, params4965, returnType4972, body4985);
        $tmp4993 = $tmp4994;
        $tmp4992 = $tmp4993;
        $returnValue4957 = $tmp4992;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4992));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4993));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4996));
        $tmp4947 = 4;
        goto $l4945;
        $l4999:;
        return $returnValue4957;
    }
    $l4945:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) body4985));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) returnType4972));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) params4965));
    params4965 = NULL;
    body4985 = NULL;
    switch ($tmp4947) {
        case 4: goto $l4999;
        case 1: goto $l4970;
        case 0: goto $l4959;
        case 3: goto $l4990;
        case 2: goto $l4981;
    }
    $l5001:;
    if (false) goto $l5002; else goto $l5003;
    $l5003:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5004, (panda$core$Int64) { 2225 }, &$s5005);
    abort();
    $l5002:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5009;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5010;
    panda$core$Int64 $tmp5011;
    org$pandalanguage$pandac$ASTNode* $returnValue5014;
    org$pandalanguage$pandac$ASTNode* $tmp5015;
    panda$collections$ImmutableArray* params5018 = NULL;
    panda$collections$ImmutableArray* $tmp5019;
    panda$collections$ImmutableArray* $tmp5020;
    org$pandalanguage$pandac$ASTNode* $tmp5022;
    panda$collections$ImmutableArray* b5025 = NULL;
    panda$collections$ImmutableArray* $tmp5026;
    panda$collections$ImmutableArray* $tmp5027;
    org$pandalanguage$pandac$ASTNode* $tmp5029;
    org$pandalanguage$pandac$ASTNode* $tmp5032;
    org$pandalanguage$pandac$ASTNode* $tmp5033;
    panda$core$Int64 $tmp5035;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp5036;
    panda$core$Int64 $tmp5037;
    int $tmp5008;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5011, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5010, $tmp5011);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5013 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5010, &$s5012);
        start5009 = $tmp5013;
        if (((panda$core$Bit) { !start5009.nonnull }).value) {
        {
            $tmp5015 = NULL;
            $returnValue5014 = $tmp5015;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5015));
            $tmp5008 = 0;
            goto $l5006;
            $l5016:;
            return $returnValue5014;
        }
        }
        panda$collections$ImmutableArray* $tmp5021 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp5020 = $tmp5021;
        $tmp5019 = $tmp5020;
        params5018 = $tmp5019;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5019));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5020));
        if (((panda$core$Bit) { params5018 == NULL }).value) {
        {
            $tmp5022 = NULL;
            $returnValue5014 = $tmp5022;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5022));
            $tmp5008 = 1;
            goto $l5006;
            $l5023:;
            return $returnValue5014;
        }
        }
        panda$collections$ImmutableArray* $tmp5028 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp5027 = $tmp5028;
        $tmp5026 = $tmp5027;
        b5025 = $tmp5026;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5026));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5027));
        if (((panda$core$Bit) { b5025 == NULL }).value) {
        {
            $tmp5029 = NULL;
            $returnValue5014 = $tmp5029;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5029));
            $tmp5008 = 2;
            goto $l5006;
            $l5030:;
            return $returnValue5014;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp5034 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5035, 26);
        panda$core$Int64$init$builtin_int64(&$tmp5037, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp5036, $tmp5037);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5034, $tmp5035, ((org$pandalanguage$pandac$parser$Token) start5009.value).position, p_doccomment, p_annotations, $tmp5036, &$s5038, NULL, params5018, NULL, b5025);
        $tmp5033 = $tmp5034;
        $tmp5032 = $tmp5033;
        $returnValue5014 = $tmp5032;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5032));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5033));
        $tmp5008 = 3;
        goto $l5006;
        $l5039:;
        return $returnValue5014;
    }
    $l5006:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) b5025));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) params5018));
    params5018 = NULL;
    b5025 = NULL;
    switch ($tmp5008) {
        case 2: goto $l5030;
        case 1: goto $l5023;
        case 0: goto $l5016;
        case 3: goto $l5039;
    }
    $l5041:;
    if (false) goto $l5042; else goto $l5043;
    $l5043:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5044, (panda$core$Int64) { 2263 }, &$s5045);
    abort();
    $l5042:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl5049 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5050;
    org$pandalanguage$pandac$ASTNode* $tmp5051;
    org$pandalanguage$pandac$ASTNode* $returnValue5053;
    org$pandalanguage$pandac$ASTNode* $tmp5054;
    org$pandalanguage$pandac$ASTNode* $tmp5057;
    org$pandalanguage$pandac$ASTNode* $tmp5058;
    panda$core$Int64 $tmp5060;
    int $tmp5048;
    {
        org$pandalanguage$pandac$ASTNode* $tmp5052 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp5051 = $tmp5052;
        $tmp5050 = $tmp5051;
        decl5049 = $tmp5050;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5050));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5051));
        if (((panda$core$Bit) { decl5049 == NULL }).value) {
        {
            $tmp5054 = NULL;
            $returnValue5053 = $tmp5054;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5054));
            $tmp5048 = 0;
            goto $l5046;
            $l5055:;
            return $returnValue5053;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp5059 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5060, 16);
        org$pandalanguage$pandac$Position $tmp5062 = (($fn5061) decl5049->$class->vtable[2])(decl5049);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp5059, $tmp5060, $tmp5062, p_doccomment, p_annotations, decl5049);
        $tmp5058 = $tmp5059;
        $tmp5057 = $tmp5058;
        $returnValue5053 = $tmp5057;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5057));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5058));
        $tmp5048 = 1;
        goto $l5046;
        $l5063:;
        return $returnValue5053;
    }
    $l5046:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5049));
    decl5049 = NULL;
    switch ($tmp5048) {
        case 1: goto $l5063;
        case 0: goto $l5055;
    }
    $l5065:;
    if (false) goto $l5066; else goto $l5067;
    $l5067:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5068, (panda$core$Int64) { 2283 }, &$s5069);
    abort();
    $l5066:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name5073;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5074;
    panda$core$Int64 $tmp5075;
    org$pandalanguage$pandac$ASTNode* $returnValue5078;
    org$pandalanguage$pandac$ASTNode* $tmp5079;
    panda$collections$Array* fields5082 = NULL;
    panda$collections$Array* $tmp5083;
    panda$collections$Array* $tmp5084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5086;
    panda$core$Int64 $tmp5087;
    panda$core$Int64 $tmp5090;
    org$pandalanguage$pandac$ASTNode* field5095 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5096;
    org$pandalanguage$pandac$ASTNode* $tmp5097;
    org$pandalanguage$pandac$ASTNode* $tmp5099;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5106;
    panda$core$Int64 $tmp5107;
    org$pandalanguage$pandac$ASTNode* $tmp5109;
    org$pandalanguage$pandac$ASTNode* $tmp5110;
    org$pandalanguage$pandac$ASTNode* $tmp5111;
    org$pandalanguage$pandac$ASTNode* $tmp5113;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5118;
    panda$core$Int64 $tmp5119;
    org$pandalanguage$pandac$ASTNode* $tmp5122;
    org$pandalanguage$pandac$ASTNode* $tmp5125;
    org$pandalanguage$pandac$ASTNode* $tmp5126;
    panda$core$Int64 $tmp5128;
    panda$core$String* $tmp5129;
    panda$collections$ImmutableArray* $tmp5131;
    int $tmp5072;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5075, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5074, $tmp5075);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5077 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5074, &$s5076);
        name5073 = $tmp5077;
        if (((panda$core$Bit) { !name5073.nonnull }).value) {
        {
            $tmp5079 = NULL;
            $returnValue5078 = $tmp5079;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5079));
            $tmp5072 = 0;
            goto $l5070;
            $l5080:;
            return $returnValue5078;
        }
        }
        panda$collections$Array* $tmp5085 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5085);
        $tmp5084 = $tmp5085;
        $tmp5083 = $tmp5084;
        fields5082 = $tmp5083;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5083));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5084));
        panda$core$Int64$init$builtin_int64(&$tmp5087, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5086, $tmp5087);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5088 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5086);
        if (((panda$core$Bit) { $tmp5088.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp5089 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp5090, 105);
            panda$core$Bit $tmp5091 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5089.kind.$rawValue, $tmp5090);
            if ($tmp5091.value) {
            {
                int $tmp5094;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp5098 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp5097 = $tmp5098;
                    $tmp5096 = $tmp5097;
                    field5095 = $tmp5096;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5096));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5097));
                    if (((panda$core$Bit) { field5095 == NULL }).value) {
                    {
                        $tmp5099 = NULL;
                        $returnValue5078 = $tmp5099;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5099));
                        $tmp5094 = 0;
                        goto $l5092;
                        $l5100:;
                        $tmp5072 = 1;
                        goto $l5070;
                        $l5101:;
                        return $returnValue5078;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields5082, ((panda$core$Object*) field5095));
                    $l5103:;
                    panda$core$Int64$init$builtin_int64(&$tmp5107, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5106, $tmp5107);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp5108 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5106);
                    bool $tmp5105 = ((panda$core$Bit) { $tmp5108.nonnull }).value;
                    if (!$tmp5105) goto $l5104;
                    {
                        {
                            $tmp5109 = field5095;
                            org$pandalanguage$pandac$ASTNode* $tmp5112 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp5111 = $tmp5112;
                            $tmp5110 = $tmp5111;
                            field5095 = $tmp5110;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5110));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5111));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5109));
                        }
                        if (((panda$core$Bit) { field5095 == NULL }).value) {
                        {
                            $tmp5113 = NULL;
                            $returnValue5078 = $tmp5113;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5113));
                            $tmp5094 = 1;
                            goto $l5092;
                            $l5114:;
                            $tmp5072 = 2;
                            goto $l5070;
                            $l5115:;
                            return $returnValue5078;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields5082, ((panda$core$Object*) field5095));
                    }
                    goto $l5103;
                    $l5104:;
                }
                $tmp5094 = -1;
                goto $l5092;
                $l5092:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) field5095));
                field5095 = NULL;
                switch ($tmp5094) {
                    case -1: goto $l5117;
                    case 1: goto $l5114;
                    case 0: goto $l5100;
                }
                $l5117:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp5119, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5118, $tmp5119);
            org$pandalanguage$pandac$parser$Token$nullable $tmp5121 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5118, &$s5120);
            if (((panda$core$Bit) { !$tmp5121.nonnull }).value) {
            {
                $tmp5122 = NULL;
                $returnValue5078 = $tmp5122;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5122));
                $tmp5072 = 3;
                goto $l5070;
                $l5123:;
                return $returnValue5078;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp5127 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5128, 9);
        panda$core$String* $tmp5130 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5073.value));
        $tmp5129 = $tmp5130;
        panda$collections$ImmutableArray* $tmp5132 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields5082);
        $tmp5131 = $tmp5132;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp5127, $tmp5128, ((org$pandalanguage$pandac$parser$Token) name5073.value).position, p_doccomment, $tmp5129, $tmp5131);
        $tmp5126 = $tmp5127;
        $tmp5125 = $tmp5126;
        $returnValue5078 = $tmp5125;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5125));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5126));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5131));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5129));
        $tmp5072 = 4;
        goto $l5070;
        $l5133:;
        return $returnValue5078;
    }
    $l5070:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) fields5082));
    fields5082 = NULL;
    switch ($tmp5072) {
        case 1: goto $l5101;
        case 2: goto $l5115;
        case 3: goto $l5123;
        case 4: goto $l5133;
        case 0: goto $l5080;
    }
    $l5135:;
    if (false) goto $l5136; else goto $l5137;
    $l5137:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5138, (panda$core$Int64) { 2294 }, &$s5139);
    abort();
    $l5136:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5143;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5144;
    panda$core$Int64 $tmp5145;
    org$pandalanguage$pandac$ASTNode* $returnValue5148;
    org$pandalanguage$pandac$ASTNode* $tmp5149;
    org$pandalanguage$pandac$parser$Token$nullable name5152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5153;
    panda$core$Int64 $tmp5154;
    org$pandalanguage$pandac$ASTNode* $tmp5157;
    panda$collections$ImmutableArray* generics5160 = NULL;
    panda$core$Int64 $tmp5162;
    panda$collections$ImmutableArray* $tmp5164;
    panda$collections$ImmutableArray* $tmp5165;
    panda$collections$ImmutableArray* $tmp5166;
    org$pandalanguage$pandac$ASTNode* $tmp5168;
    panda$collections$ImmutableArray* $tmp5171;
    panda$collections$ImmutableArray* $tmp5172;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5173;
    panda$core$Int64 $tmp5174;
    org$pandalanguage$pandac$ASTNode* $tmp5177;
    panda$collections$Array* members5180 = NULL;
    panda$collections$Array* $tmp5181;
    panda$collections$Array* $tmp5182;
    org$pandalanguage$pandac$ASTNode* dc5184 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5185;
    org$pandalanguage$pandac$parser$Token next5188;
    org$pandalanguage$pandac$parser$Token$Kind $match$2353_135190;
    panda$core$Int64 $tmp5200;
    panda$core$Int64 $tmp5203;
    panda$core$Int64 $tmp5207;
    panda$core$Int64 $tmp5211;
    panda$core$Int64 $tmp5215;
    panda$core$Int64 $tmp5219;
    panda$core$Int64 $tmp5223;
    panda$core$Int64 $tmp5227;
    panda$core$Int64 $tmp5231;
    panda$core$Int64 $tmp5235;
    panda$core$Int64 $tmp5238;
    panda$core$String* $tmp5240;
    panda$core$String* $tmp5241;
    panda$core$String* $tmp5243;
    org$pandalanguage$pandac$ASTNode* $tmp5248;
    org$pandalanguage$pandac$ASTNode* $tmp5249;
    org$pandalanguage$pandac$ASTNode* $tmp5250;
    panda$core$Int64 $tmp5252;
    org$pandalanguage$pandac$ASTNode* c5257 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5258;
    org$pandalanguage$pandac$ASTNode* $tmp5259;
    org$pandalanguage$pandac$ASTNode* $tmp5261;
    org$pandalanguage$pandac$ASTNode* $tmp5265;
    org$pandalanguage$pandac$ASTNode* $tmp5266;
    panda$collections$ImmutableArray* a5268 = NULL;
    panda$collections$ImmutableArray* $tmp5269;
    panda$collections$ImmutableArray* $tmp5270;
    org$pandalanguage$pandac$parser$Token next5274;
    org$pandalanguage$pandac$parser$Token$Kind $match$2377_135276;
    panda$core$Int64 $tmp5277;
    panda$core$Int64 $tmp5283;
    panda$core$String* $tmp5285;
    panda$core$String* $tmp5286;
    panda$core$String* $tmp5288;
    org$pandalanguage$pandac$ASTNode* $tmp5293;
    panda$collections$ImmutableArray* $tmp5296;
    panda$collections$ImmutableArray* $tmp5297;
    panda$collections$ImmutableArray* $tmp5298;
    panda$core$Int64 $tmp5300;
    panda$core$Int64 $tmp5308;
    panda$core$String* $tmp5311;
    panda$core$String* $tmp5312;
    panda$core$String* $tmp5314;
    org$pandalanguage$pandac$ASTNode* $tmp5319;
    org$pandalanguage$pandac$ASTNode* $tmp5322;
    org$pandalanguage$pandac$ASTNode* $tmp5323;
    org$pandalanguage$pandac$ASTNode* $tmp5324;
    panda$core$Int64 $tmp5326;
    org$pandalanguage$pandac$ASTNode* decl5331 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5332;
    org$pandalanguage$pandac$ASTNode* $tmp5333;
    org$pandalanguage$pandac$ASTNode* $tmp5335;
    org$pandalanguage$pandac$ASTNode* $tmp5339;
    org$pandalanguage$pandac$ASTNode* $tmp5340;
    panda$collections$ImmutableArray* $tmp5341;
    panda$collections$ImmutableArray* $tmp5342;
    panda$collections$ImmutableArray* $tmp5343;
    panda$core$Int64 $tmp5346;
    org$pandalanguage$pandac$ASTNode* decl5351 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5352;
    org$pandalanguage$pandac$ASTNode* $tmp5353;
    org$pandalanguage$pandac$ASTNode* $tmp5355;
    org$pandalanguage$pandac$ASTNode* $tmp5359;
    org$pandalanguage$pandac$ASTNode* $tmp5360;
    panda$collections$ImmutableArray* $tmp5361;
    panda$collections$ImmutableArray* $tmp5362;
    panda$collections$ImmutableArray* $tmp5363;
    panda$core$Int64 $tmp5366;
    org$pandalanguage$pandac$ASTNode* decl5371 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5372;
    org$pandalanguage$pandac$ASTNode* $tmp5373;
    org$pandalanguage$pandac$ASTNode* $tmp5375;
    org$pandalanguage$pandac$ASTNode* $tmp5379;
    org$pandalanguage$pandac$ASTNode* $tmp5380;
    panda$collections$ImmutableArray* $tmp5381;
    panda$collections$ImmutableArray* $tmp5382;
    panda$collections$ImmutableArray* $tmp5383;
    panda$core$Int64 $tmp5387;
    panda$core$Int64 $tmp5390;
    org$pandalanguage$pandac$ASTNode* decl5396 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5397;
    org$pandalanguage$pandac$ASTNode* $tmp5398;
    org$pandalanguage$pandac$ASTNode* $tmp5400;
    org$pandalanguage$pandac$ASTNode* $tmp5404;
    org$pandalanguage$pandac$ASTNode* $tmp5405;
    panda$collections$ImmutableArray* $tmp5406;
    panda$collections$ImmutableArray* $tmp5407;
    panda$collections$ImmutableArray* $tmp5408;
    panda$core$Int64 $tmp5414;
    panda$core$Int64 $tmp5417;
    panda$core$Int64 $tmp5421;
    panda$core$Int64 $tmp5425;
    org$pandalanguage$pandac$ASTNode* decl5431 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5432;
    org$pandalanguage$pandac$ASTNode* $tmp5433;
    org$pandalanguage$pandac$ASTNode* $tmp5435;
    org$pandalanguage$pandac$ASTNode* $tmp5439;
    org$pandalanguage$pandac$ASTNode* $tmp5440;
    panda$collections$ImmutableArray* $tmp5441;
    panda$collections$ImmutableArray* $tmp5442;
    panda$collections$ImmutableArray* $tmp5443;
    panda$core$Int64 $tmp5446;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5448;
    panda$core$Int64 $tmp5449;
    panda$core$String* $tmp5451;
    panda$core$String* $tmp5452;
    panda$core$String* $tmp5454;
    org$pandalanguage$pandac$ASTNode* $tmp5459;
    org$pandalanguage$pandac$ASTNode* $tmp5462;
    org$pandalanguage$pandac$ASTNode* $tmp5463;
    panda$core$Int64 $tmp5465;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5466;
    panda$core$Int64 $tmp5467;
    panda$core$String* $tmp5468;
    panda$collections$ImmutableArray* $tmp5470;
    int $tmp5142;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5145, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5144, $tmp5145);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5144, &$s5146);
        start5143 = $tmp5147;
        if (((panda$core$Bit) { !start5143.nonnull }).value) {
        {
            $tmp5149 = NULL;
            $returnValue5148 = $tmp5149;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5149));
            $tmp5142 = 0;
            goto $l5140;
            $l5150:;
            return $returnValue5148;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5154, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5153, $tmp5154);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5156 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5153, &$s5155);
        name5152 = $tmp5156;
        if (((panda$core$Bit) { !name5152.nonnull }).value) {
        {
            $tmp5157 = NULL;
            $returnValue5148 = $tmp5157;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5157));
            $tmp5142 = 1;
            goto $l5140;
            $l5158:;
            return $returnValue5148;
        }
        }
        memset(&generics5160, 0, sizeof(generics5160));
        org$pandalanguage$pandac$parser$Token $tmp5161 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5162, 63);
        panda$core$Bit $tmp5163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5161.kind.$rawValue, $tmp5162);
        if ($tmp5163.value) {
        {
            {
                $tmp5164 = generics5160;
                panda$collections$ImmutableArray* $tmp5167 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5166 = $tmp5167;
                $tmp5165 = $tmp5166;
                generics5160 = $tmp5165;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5165));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5166));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5164));
            }
            if (((panda$core$Bit) { generics5160 == NULL }).value) {
            {
                $tmp5168 = NULL;
                $returnValue5148 = $tmp5168;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5168));
                $tmp5142 = 2;
                goto $l5140;
                $l5169:;
                return $returnValue5148;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5171 = generics5160;
                $tmp5172 = NULL;
                generics5160 = $tmp5172;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5172));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5171));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5174, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5173, $tmp5174);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5176 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5173, &$s5175);
        if (((panda$core$Bit) { !$tmp5176.nonnull }).value) {
        {
            $tmp5177 = NULL;
            $returnValue5148 = $tmp5177;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5177));
            $tmp5142 = 3;
            goto $l5140;
            $l5178:;
            return $returnValue5148;
        }
        }
        panda$collections$Array* $tmp5183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5183);
        $tmp5182 = $tmp5183;
        $tmp5181 = $tmp5182;
        members5180 = $tmp5181;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5181));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5182));
        $tmp5185 = NULL;
        dc5184 = $tmp5185;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5185));
        $l5186:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp5189 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next5188 = $tmp5189;
            {
                $match$2353_135190 = next5188.kind;
                panda$core$Int64$init$builtin_int64(&$tmp5200, 18);
                panda$core$Bit $tmp5201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5200);
                bool $tmp5199 = $tmp5201.value;
                if ($tmp5199) goto $l5202;
                panda$core$Int64$init$builtin_int64(&$tmp5203, 19);
                panda$core$Bit $tmp5204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5203);
                $tmp5199 = $tmp5204.value;
                $l5202:;
                panda$core$Bit $tmp5205 = { $tmp5199 };
                bool $tmp5198 = $tmp5205.value;
                if ($tmp5198) goto $l5206;
                panda$core$Int64$init$builtin_int64(&$tmp5207, 20);
                panda$core$Bit $tmp5208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5207);
                $tmp5198 = $tmp5208.value;
                $l5206:;
                panda$core$Bit $tmp5209 = { $tmp5198 };
                bool $tmp5197 = $tmp5209.value;
                if ($tmp5197) goto $l5210;
                panda$core$Int64$init$builtin_int64(&$tmp5211, 22);
                panda$core$Bit $tmp5212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5211);
                $tmp5197 = $tmp5212.value;
                $l5210:;
                panda$core$Bit $tmp5213 = { $tmp5197 };
                bool $tmp5196 = $tmp5213.value;
                if ($tmp5196) goto $l5214;
                panda$core$Int64$init$builtin_int64(&$tmp5215, 21);
                panda$core$Bit $tmp5216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5215);
                $tmp5196 = $tmp5216.value;
                $l5214:;
                panda$core$Bit $tmp5217 = { $tmp5196 };
                bool $tmp5195 = $tmp5217.value;
                if ($tmp5195) goto $l5218;
                panda$core$Int64$init$builtin_int64(&$tmp5219, 14);
                panda$core$Bit $tmp5220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5219);
                $tmp5195 = $tmp5220.value;
                $l5218:;
                panda$core$Bit $tmp5221 = { $tmp5195 };
                bool $tmp5194 = $tmp5221.value;
                if ($tmp5194) goto $l5222;
                panda$core$Int64$init$builtin_int64(&$tmp5223, 24);
                panda$core$Bit $tmp5224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5223);
                $tmp5194 = $tmp5224.value;
                $l5222:;
                panda$core$Bit $tmp5225 = { $tmp5194 };
                bool $tmp5193 = $tmp5225.value;
                if ($tmp5193) goto $l5226;
                panda$core$Int64$init$builtin_int64(&$tmp5227, 25);
                panda$core$Bit $tmp5228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5227);
                $tmp5193 = $tmp5228.value;
                $l5226:;
                panda$core$Bit $tmp5229 = { $tmp5193 };
                bool $tmp5192 = $tmp5229.value;
                if ($tmp5192) goto $l5230;
                panda$core$Int64$init$builtin_int64(&$tmp5231, 26);
                panda$core$Bit $tmp5232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5231);
                $tmp5192 = $tmp5232.value;
                $l5230:;
                panda$core$Bit $tmp5233 = { $tmp5192 };
                bool $tmp5191 = $tmp5233.value;
                if ($tmp5191) goto $l5234;
                panda$core$Int64$init$builtin_int64(&$tmp5235, 27);
                panda$core$Bit $tmp5236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5235);
                $tmp5191 = $tmp5236.value;
                $l5234:;
                panda$core$Bit $tmp5237 = { $tmp5191 };
                if ($tmp5237.value) {
                {
                    goto $l5187;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5238, 12);
                panda$core$Bit $tmp5239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5238);
                if ($tmp5239.value) {
                {
                    if (((panda$core$Bit) { dc5184 != NULL }).value) {
                    {
                        panda$core$String* $tmp5244 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5188);
                        $tmp5243 = $tmp5244;
                        panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5242, $tmp5243);
                        $tmp5241 = $tmp5245;
                        panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, &$s5246);
                        $tmp5240 = $tmp5247;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5188, $tmp5240);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5240));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5241));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5243));
                    }
                    }
                    {
                        $tmp5248 = dc5184;
                        org$pandalanguage$pandac$ASTNode* $tmp5251 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5250 = $tmp5251;
                        $tmp5249 = $tmp5250;
                        dc5184 = $tmp5249;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5249));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5250));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5248));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5252, 49);
                panda$core$Bit $tmp5253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2353_135190.$rawValue, $tmp5252);
                if ($tmp5253.value) {
                {
                    int $tmp5256;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5260 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5184);
                        $tmp5259 = $tmp5260;
                        $tmp5258 = $tmp5259;
                        c5257 = $tmp5258;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5258));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5259));
                        if (((panda$core$Bit) { c5257 == NULL }).value) {
                        {
                            $tmp5261 = NULL;
                            $returnValue5148 = $tmp5261;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5261));
                            $tmp5256 = 0;
                            goto $l5254;
                            $l5262:;
                            $tmp5142 = 4;
                            goto $l5140;
                            $l5263:;
                            return $returnValue5148;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members5180, ((panda$core$Object*) c5257));
                        {
                            $tmp5265 = dc5184;
                            $tmp5266 = NULL;
                            dc5184 = $tmp5266;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5266));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5265));
                        }
                    }
                    $tmp5256 = -1;
                    goto $l5254;
                    $l5254:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) c5257));
                    c5257 = NULL;
                    switch ($tmp5256) {
                        case -1: goto $l5267;
                        case 0: goto $l5262;
                    }
                    $l5267:;
                }
                }
                else {
                {
                    goto $l5187;
                }
                }
                }
                }
            }
        }
        }
        $l5187:;
        panda$collections$ImmutableArray* $tmp5271 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp5271);
        $tmp5270 = $tmp5271;
        $tmp5269 = $tmp5270;
        a5268 = $tmp5269;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5269));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5270));
        $l5272:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp5275 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next5274 = $tmp5275;
            {
                $match$2377_135276 = next5274.kind;
                panda$core$Int64$init$builtin_int64(&$tmp5277, 14);
                panda$core$Bit $tmp5278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5277);
                if ($tmp5278.value) {
                {
                    ITable* $tmp5279 = ((panda$collections$CollectionView*) a5268)->$class->itable;
                    while ($tmp5279->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp5279 = $tmp5279->next;
                    }
                    $fn5281 $tmp5280 = $tmp5279->methods[0];
                    panda$core$Int64 $tmp5282 = $tmp5280(((panda$collections$CollectionView*) a5268));
                    panda$core$Int64$init$builtin_int64(&$tmp5283, 0);
                    panda$core$Bit $tmp5284 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5282, $tmp5283);
                    if ($tmp5284.value) {
                    {
                        panda$core$String* $tmp5289 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5274);
                        $tmp5288 = $tmp5289;
                        panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5287, $tmp5288);
                        $tmp5286 = $tmp5290;
                        panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, &$s5291);
                        $tmp5285 = $tmp5292;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5274, $tmp5285);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5285));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5286));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5288));
                        $tmp5293 = NULL;
                        $returnValue5148 = $tmp5293;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5293));
                        $tmp5142 = 5;
                        goto $l5140;
                        $l5294:;
                        return $returnValue5148;
                    }
                    }
                    {
                        $tmp5296 = a5268;
                        panda$collections$ImmutableArray* $tmp5299 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp5298 = $tmp5299;
                        $tmp5297 = $tmp5298;
                        a5268 = $tmp5297;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5297));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5298));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5296));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5300, 12);
                panda$core$Bit $tmp5301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5300);
                if ($tmp5301.value) {
                {
                    bool $tmp5302 = ((panda$core$Bit) { dc5184 != NULL }).value;
                    if ($tmp5302) goto $l5303;
                    ITable* $tmp5304 = ((panda$collections$CollectionView*) a5268)->$class->itable;
                    while ($tmp5304->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp5304 = $tmp5304->next;
                    }
                    $fn5306 $tmp5305 = $tmp5304->methods[0];
                    panda$core$Int64 $tmp5307 = $tmp5305(((panda$collections$CollectionView*) a5268));
                    panda$core$Int64$init$builtin_int64(&$tmp5308, 0);
                    panda$core$Bit $tmp5309 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5307, $tmp5308);
                    $tmp5302 = $tmp5309.value;
                    $l5303:;
                    panda$core$Bit $tmp5310 = { $tmp5302 };
                    if ($tmp5310.value) {
                    {
                        panda$core$String* $tmp5315 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5274);
                        $tmp5314 = $tmp5315;
                        panda$core$String* $tmp5316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5313, $tmp5314);
                        $tmp5312 = $tmp5316;
                        panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5312, &$s5317);
                        $tmp5311 = $tmp5318;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5274, $tmp5311);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5311));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5312));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5314));
                        $tmp5319 = NULL;
                        $returnValue5148 = $tmp5319;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5319));
                        $tmp5142 = 6;
                        goto $l5140;
                        $l5320:;
                        return $returnValue5148;
                    }
                    }
                    {
                        $tmp5322 = dc5184;
                        org$pandalanguage$pandac$ASTNode* $tmp5325 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5324 = $tmp5325;
                        $tmp5323 = $tmp5324;
                        dc5184 = $tmp5323;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5323));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5324));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5322));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5326, 18);
                panda$core$Bit $tmp5327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5326);
                if ($tmp5327.value) {
                {
                    int $tmp5330;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5334 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5184, a5268);
                        $tmp5333 = $tmp5334;
                        $tmp5332 = $tmp5333;
                        decl5331 = $tmp5332;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5332));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5333));
                        if (((panda$core$Bit) { decl5331 == NULL }).value) {
                        {
                            $tmp5335 = NULL;
                            $returnValue5148 = $tmp5335;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5335));
                            $tmp5330 = 0;
                            goto $l5328;
                            $l5336:;
                            $tmp5142 = 7;
                            goto $l5140;
                            $l5337:;
                            return $returnValue5148;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members5180, ((panda$core$Object*) decl5331));
                        {
                            $tmp5339 = dc5184;
                            $tmp5340 = NULL;
                            dc5184 = $tmp5340;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5340));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5339));
                        }
                        {
                            $tmp5341 = a5268;
                            panda$collections$ImmutableArray* $tmp5344 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5344);
                            $tmp5343 = $tmp5344;
                            $tmp5342 = $tmp5343;
                            a5268 = $tmp5342;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5342));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5343));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5341));
                        }
                    }
                    $tmp5330 = -1;
                    goto $l5328;
                    $l5328:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5331));
                    decl5331 = NULL;
                    switch ($tmp5330) {
                        case 0: goto $l5336;
                        case -1: goto $l5345;
                    }
                    $l5345:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5346, 19);
                panda$core$Bit $tmp5347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5346);
                if ($tmp5347.value) {
                {
                    int $tmp5350;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5354 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5184, a5268);
                        $tmp5353 = $tmp5354;
                        $tmp5352 = $tmp5353;
                        decl5351 = $tmp5352;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5352));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5353));
                        if (((panda$core$Bit) { decl5351 == NULL }).value) {
                        {
                            $tmp5355 = NULL;
                            $returnValue5148 = $tmp5355;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5355));
                            $tmp5350 = 0;
                            goto $l5348;
                            $l5356:;
                            $tmp5142 = 8;
                            goto $l5140;
                            $l5357:;
                            return $returnValue5148;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members5180, ((panda$core$Object*) decl5351));
                        {
                            $tmp5359 = dc5184;
                            $tmp5360 = NULL;
                            dc5184 = $tmp5360;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5360));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5359));
                        }
                        {
                            $tmp5361 = a5268;
                            panda$collections$ImmutableArray* $tmp5364 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5364);
                            $tmp5363 = $tmp5364;
                            $tmp5362 = $tmp5363;
                            a5268 = $tmp5362;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5362));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5363));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5361));
                        }
                    }
                    $tmp5350 = -1;
                    goto $l5348;
                    $l5348:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5351));
                    decl5351 = NULL;
                    switch ($tmp5350) {
                        case -1: goto $l5365;
                        case 0: goto $l5356;
                    }
                    $l5365:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5366, 20);
                panda$core$Bit $tmp5367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5366);
                if ($tmp5367.value) {
                {
                    int $tmp5370;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5374 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5184, a5268);
                        $tmp5373 = $tmp5374;
                        $tmp5372 = $tmp5373;
                        decl5371 = $tmp5372;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5372));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5373));
                        if (((panda$core$Bit) { decl5371 == NULL }).value) {
                        {
                            $tmp5375 = NULL;
                            $returnValue5148 = $tmp5375;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5375));
                            $tmp5370 = 0;
                            goto $l5368;
                            $l5376:;
                            $tmp5142 = 9;
                            goto $l5140;
                            $l5377:;
                            return $returnValue5148;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members5180, ((panda$core$Object*) decl5371));
                        {
                            $tmp5379 = dc5184;
                            $tmp5380 = NULL;
                            dc5184 = $tmp5380;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5380));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5379));
                        }
                        {
                            $tmp5381 = a5268;
                            panda$collections$ImmutableArray* $tmp5384 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5384);
                            $tmp5383 = $tmp5384;
                            $tmp5382 = $tmp5383;
                            a5268 = $tmp5382;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5382));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5383));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5381));
                        }
                    }
                    $tmp5370 = -1;
                    goto $l5368;
                    $l5368:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5371));
                    decl5371 = NULL;
                    switch ($tmp5370) {
                        case 0: goto $l5376;
                        case -1: goto $l5385;
                    }
                    $l5385:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5387, 22);
                panda$core$Bit $tmp5388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5387);
                bool $tmp5386 = $tmp5388.value;
                if ($tmp5386) goto $l5389;
                panda$core$Int64$init$builtin_int64(&$tmp5390, 21);
                panda$core$Bit $tmp5391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5390);
                $tmp5386 = $tmp5391.value;
                $l5389:;
                panda$core$Bit $tmp5392 = { $tmp5386 };
                if ($tmp5392.value) {
                {
                    int $tmp5395;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5399 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5184, a5268);
                        $tmp5398 = $tmp5399;
                        $tmp5397 = $tmp5398;
                        decl5396 = $tmp5397;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5397));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5398));
                        if (((panda$core$Bit) { decl5396 == NULL }).value) {
                        {
                            $tmp5400 = NULL;
                            $returnValue5148 = $tmp5400;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5400));
                            $tmp5395 = 0;
                            goto $l5393;
                            $l5401:;
                            $tmp5142 = 10;
                            goto $l5140;
                            $l5402:;
                            return $returnValue5148;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members5180, ((panda$core$Object*) decl5396));
                        {
                            $tmp5404 = dc5184;
                            $tmp5405 = NULL;
                            dc5184 = $tmp5405;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5405));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5404));
                        }
                        {
                            $tmp5406 = a5268;
                            panda$collections$ImmutableArray* $tmp5409 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5409);
                            $tmp5408 = $tmp5409;
                            $tmp5407 = $tmp5408;
                            a5268 = $tmp5407;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5407));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5408));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5406));
                        }
                    }
                    $tmp5395 = -1;
                    goto $l5393;
                    $l5393:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5396));
                    decl5396 = NULL;
                    switch ($tmp5395) {
                        case -1: goto $l5410;
                        case 0: goto $l5401;
                    }
                    $l5410:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5414, 24);
                panda$core$Bit $tmp5415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5414);
                bool $tmp5413 = $tmp5415.value;
                if ($tmp5413) goto $l5416;
                panda$core$Int64$init$builtin_int64(&$tmp5417, 25);
                panda$core$Bit $tmp5418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5417);
                $tmp5413 = $tmp5418.value;
                $l5416:;
                panda$core$Bit $tmp5419 = { $tmp5413 };
                bool $tmp5412 = $tmp5419.value;
                if ($tmp5412) goto $l5420;
                panda$core$Int64$init$builtin_int64(&$tmp5421, 26);
                panda$core$Bit $tmp5422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5421);
                $tmp5412 = $tmp5422.value;
                $l5420:;
                panda$core$Bit $tmp5423 = { $tmp5412 };
                bool $tmp5411 = $tmp5423.value;
                if ($tmp5411) goto $l5424;
                panda$core$Int64$init$builtin_int64(&$tmp5425, 27);
                panda$core$Bit $tmp5426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5425);
                $tmp5411 = $tmp5426.value;
                $l5424:;
                panda$core$Bit $tmp5427 = { $tmp5411 };
                if ($tmp5427.value) {
                {
                    int $tmp5430;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5434 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5184, a5268);
                        $tmp5433 = $tmp5434;
                        $tmp5432 = $tmp5433;
                        decl5431 = $tmp5432;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5432));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5433));
                        if (((panda$core$Bit) { decl5431 == NULL }).value) {
                        {
                            $tmp5435 = NULL;
                            $returnValue5148 = $tmp5435;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5435));
                            $tmp5430 = 0;
                            goto $l5428;
                            $l5436:;
                            $tmp5142 = 11;
                            goto $l5140;
                            $l5437:;
                            return $returnValue5148;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members5180, ((panda$core$Object*) decl5431));
                        {
                            $tmp5439 = dc5184;
                            $tmp5440 = NULL;
                            dc5184 = $tmp5440;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5440));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5439));
                        }
                        {
                            $tmp5441 = a5268;
                            panda$collections$ImmutableArray* $tmp5444 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5444);
                            $tmp5443 = $tmp5444;
                            $tmp5442 = $tmp5443;
                            a5268 = $tmp5442;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5442));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5443));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5441));
                        }
                    }
                    $tmp5430 = -1;
                    goto $l5428;
                    $l5428:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5431));
                    decl5431 = NULL;
                    switch ($tmp5430) {
                        case -1: goto $l5445;
                        case 0: goto $l5436;
                    }
                    $l5445:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5446, 101);
                panda$core$Bit $tmp5447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2377_135276.$rawValue, $tmp5446);
                if ($tmp5447.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5449, 101);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5448, $tmp5449);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5448, &$s5450);
                    goto $l5273;
                }
                }
                else {
                {
                    panda$core$String* $tmp5455 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5274);
                    $tmp5454 = $tmp5455;
                    panda$core$String* $tmp5456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5453, $tmp5454);
                    $tmp5452 = $tmp5456;
                    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5457);
                    $tmp5451 = $tmp5458;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5274, $tmp5451);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5451));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5452));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5454));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5459 = NULL;
                    $returnValue5148 = $tmp5459;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5459));
                    $tmp5142 = 12;
                    goto $l5140;
                    $l5460:;
                    return $returnValue5148;
                }
                }
                }
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l5273:;
        org$pandalanguage$pandac$ASTNode* $tmp5464 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5465, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5467, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5466, $tmp5467);
        panda$core$String* $tmp5469 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5152.value));
        $tmp5468 = $tmp5469;
        panda$collections$ImmutableArray* $tmp5471 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5180);
        $tmp5470 = $tmp5471;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5464, $tmp5465, ((org$pandalanguage$pandac$parser$Token) start5143.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5466, $tmp5468, generics5160, NULL, $tmp5470);
        $tmp5463 = $tmp5464;
        $tmp5462 = $tmp5463;
        $returnValue5148 = $tmp5462;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5462));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5463));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5470));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5468));
        $tmp5142 = 13;
        goto $l5140;
        $l5472:;
        return $returnValue5148;
    }
    $l5140:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a5268));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) dc5184));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) members5180));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) generics5160));
    members5180 = NULL;
    a5268 = NULL;
    switch ($tmp5142) {
        case 4: goto $l5263;
        case 8: goto $l5357;
        case 6: goto $l5320;
        case 1: goto $l5158;
        case 12: goto $l5460;
        case 7: goto $l5337;
        case 10: goto $l5402;
        case 13: goto $l5472;
        case 2: goto $l5169;
        case 5: goto $l5294;
        case 11: goto $l5437;
        case 3: goto $l5178;
        case 9: goto $l5377;
        case 0: goto $l5150;
    }
    $l5474:;
    if (false) goto $l5475; else goto $l5476;
    $l5476:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5477, (panda$core$Int64) { 2326 }, &$s5478);
    abort();
    $l5475:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5482;
    org$pandalanguage$pandac$ASTNode* dc5484 = NULL;
    panda$core$Int64 $tmp5485;
    org$pandalanguage$pandac$ASTNode* $tmp5487;
    org$pandalanguage$pandac$ASTNode* $tmp5488;
    org$pandalanguage$pandac$ASTNode* $tmp5489;
    org$pandalanguage$pandac$ASTNode* $returnValue5491;
    org$pandalanguage$pandac$ASTNode* $tmp5492;
    org$pandalanguage$pandac$ASTNode* $tmp5495;
    org$pandalanguage$pandac$ASTNode* $tmp5496;
    panda$collections$ImmutableArray* a5497 = NULL;
    panda$collections$ImmutableArray* $tmp5498;
    panda$collections$ImmutableArray* $tmp5499;
    org$pandalanguage$pandac$ASTNode* $tmp5501;
    org$pandalanguage$pandac$parser$Token$Kind $match$2463_95504;
    panda$core$Int64 $tmp5506;
    org$pandalanguage$pandac$ASTNode* $tmp5508;
    org$pandalanguage$pandac$ASTNode* $tmp5509;
    panda$core$Int64 $tmp5513;
    org$pandalanguage$pandac$ASTNode* $tmp5515;
    org$pandalanguage$pandac$ASTNode* $tmp5516;
    panda$core$Int64 $tmp5520;
    org$pandalanguage$pandac$ASTNode* $tmp5522;
    org$pandalanguage$pandac$ASTNode* $tmp5523;
    panda$core$Int64 $tmp5528;
    panda$core$Int64 $tmp5531;
    org$pandalanguage$pandac$ASTNode* $tmp5534;
    org$pandalanguage$pandac$ASTNode* $tmp5535;
    panda$core$Int64 $tmp5539;
    org$pandalanguage$pandac$ASTNode* $tmp5541;
    org$pandalanguage$pandac$ASTNode* $tmp5542;
    panda$core$Int64 $tmp5549;
    panda$core$Int64 $tmp5552;
    panda$core$Int64 $tmp5556;
    panda$core$Int64 $tmp5560;
    org$pandalanguage$pandac$ASTNode* $tmp5563;
    org$pandalanguage$pandac$ASTNode* $tmp5564;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5568;
    panda$core$Int64 $tmp5569;
    org$pandalanguage$pandac$ASTNode* $tmp5571;
    int $tmp5481;
    {
        org$pandalanguage$pandac$parser$Token $tmp5483 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5482 = $tmp5483;
        memset(&dc5484, 0, sizeof(dc5484));
        panda$core$Int64$init$builtin_int64(&$tmp5485, 12);
        panda$core$Bit $tmp5486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5482.kind.$rawValue, $tmp5485);
        if ($tmp5486.value) {
        {
            {
                $tmp5487 = dc5484;
                org$pandalanguage$pandac$ASTNode* $tmp5490 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5489 = $tmp5490;
                $tmp5488 = $tmp5489;
                dc5484 = $tmp5488;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5488));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5489));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5487));
            }
            if (((panda$core$Bit) { dc5484 == NULL }).value) {
            {
                $tmp5492 = NULL;
                $returnValue5491 = $tmp5492;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5492));
                $tmp5481 = 0;
                goto $l5479;
                $l5493:;
                return $returnValue5491;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5495 = dc5484;
                $tmp5496 = NULL;
                dc5484 = $tmp5496;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5496));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5495));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5500 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5499 = $tmp5500;
        $tmp5498 = $tmp5499;
        a5497 = $tmp5498;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5498));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5499));
        if (((panda$core$Bit) { a5497 == NULL }).value) {
        {
            $tmp5501 = NULL;
            $returnValue5491 = $tmp5501;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5501));
            $tmp5481 = 1;
            goto $l5479;
            $l5502:;
            return $returnValue5491;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5505 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2463_95504 = $tmp5505.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5506, 18);
            panda$core$Bit $tmp5507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5506);
            if ($tmp5507.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5510 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5484, a5497);
                $tmp5509 = $tmp5510;
                $tmp5508 = $tmp5509;
                $returnValue5491 = $tmp5508;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5508));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5509));
                $tmp5481 = 2;
                goto $l5479;
                $l5511:;
                return $returnValue5491;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5513, 19);
            panda$core$Bit $tmp5514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5513);
            if ($tmp5514.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5517 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5484, a5497);
                $tmp5516 = $tmp5517;
                $tmp5515 = $tmp5516;
                $returnValue5491 = $tmp5515;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5515));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5516));
                $tmp5481 = 3;
                goto $l5479;
                $l5518:;
                return $returnValue5491;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5520, 20);
            panda$core$Bit $tmp5521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5520);
            if ($tmp5521.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5524 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5484, a5497);
                $tmp5523 = $tmp5524;
                $tmp5522 = $tmp5523;
                $returnValue5491 = $tmp5522;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5522));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5523));
                $tmp5481 = 4;
                goto $l5479;
                $l5525:;
                return $returnValue5491;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5528, 22);
            panda$core$Bit $tmp5529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5528);
            bool $tmp5527 = $tmp5529.value;
            if ($tmp5527) goto $l5530;
            panda$core$Int64$init$builtin_int64(&$tmp5531, 21);
            panda$core$Bit $tmp5532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5531);
            $tmp5527 = $tmp5532.value;
            $l5530:;
            panda$core$Bit $tmp5533 = { $tmp5527 };
            if ($tmp5533.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5536 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5484, a5497);
                $tmp5535 = $tmp5536;
                $tmp5534 = $tmp5535;
                $returnValue5491 = $tmp5534;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5534));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5535));
                $tmp5481 = 5;
                goto $l5479;
                $l5537:;
                return $returnValue5491;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5539, 23);
            panda$core$Bit $tmp5540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5539);
            if ($tmp5540.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5543 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5484, a5497);
                $tmp5542 = $tmp5543;
                $tmp5541 = $tmp5542;
                $returnValue5491 = $tmp5541;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5541));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5542));
                $tmp5481 = 6;
                goto $l5479;
                $l5544:;
                return $returnValue5491;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5549, 24);
            panda$core$Bit $tmp5550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5549);
            bool $tmp5548 = $tmp5550.value;
            if ($tmp5548) goto $l5551;
            panda$core$Int64$init$builtin_int64(&$tmp5552, 25);
            panda$core$Bit $tmp5553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5552);
            $tmp5548 = $tmp5553.value;
            $l5551:;
            panda$core$Bit $tmp5554 = { $tmp5548 };
            bool $tmp5547 = $tmp5554.value;
            if ($tmp5547) goto $l5555;
            panda$core$Int64$init$builtin_int64(&$tmp5556, 26);
            panda$core$Bit $tmp5557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5556);
            $tmp5547 = $tmp5557.value;
            $l5555:;
            panda$core$Bit $tmp5558 = { $tmp5547 };
            bool $tmp5546 = $tmp5558.value;
            if ($tmp5546) goto $l5559;
            panda$core$Int64$init$builtin_int64(&$tmp5560, 27);
            panda$core$Bit $tmp5561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2463_95504.$rawValue, $tmp5560);
            $tmp5546 = $tmp5561.value;
            $l5559:;
            panda$core$Bit $tmp5562 = { $tmp5546 };
            if ($tmp5562.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5565 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5484, a5497);
                $tmp5564 = $tmp5565;
                $tmp5563 = $tmp5564;
                $returnValue5491 = $tmp5563;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5563));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5564));
                $tmp5481 = 7;
                goto $l5479;
                $l5566:;
                return $returnValue5491;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5569, 18);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5568, $tmp5569);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5568, &$s5570);
                $tmp5571 = NULL;
                $returnValue5491 = $tmp5571;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5571));
                $tmp5481 = 8;
                goto $l5479;
                $l5572:;
                return $returnValue5491;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5481 = -1;
    goto $l5479;
    $l5479:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a5497));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) dc5484));
    a5497 = NULL;
    switch ($tmp5481) {
        case 6: goto $l5544;
        case 8: goto $l5572;
        case 3: goto $l5518;
        case 2: goto $l5511;
        case 5: goto $l5537;
        case 7: goto $l5566;
        case 4: goto $l5525;
        case 0: goto $l5493;
        case -1: goto $l5574;
        case 1: goto $l5502;
    }
    $l5574:;
    if (false) goto $l5575; else goto $l5576;
    $l5576:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5577, (panda$core$Int64) { 2447 }, &$s5578);
    abort();
    $l5575:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5582;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5583;
    panda$core$Int64 $tmp5584;
    org$pandalanguage$pandac$ASTNode* $returnValue5587;
    org$pandalanguage$pandac$ASTNode* $tmp5588;
    org$pandalanguage$pandac$parser$Token$nullable name5591;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5592;
    panda$core$Int64 $tmp5593;
    org$pandalanguage$pandac$ASTNode* $tmp5596;
    panda$collections$ImmutableArray* generics5599 = NULL;
    panda$core$Int64 $tmp5601;
    panda$collections$ImmutableArray* $tmp5603;
    panda$collections$ImmutableArray* $tmp5604;
    panda$collections$ImmutableArray* $tmp5605;
    org$pandalanguage$pandac$ASTNode* $tmp5607;
    panda$collections$ImmutableArray* $tmp5610;
    panda$collections$ImmutableArray* $tmp5611;
    panda$collections$ImmutableArray* stypes5612 = NULL;
    panda$core$Int64 $tmp5614;
    panda$collections$ImmutableArray* $tmp5616;
    panda$collections$ImmutableArray* $tmp5617;
    panda$collections$ImmutableArray* $tmp5618;
    org$pandalanguage$pandac$ASTNode* $tmp5620;
    panda$collections$ImmutableArray* $tmp5623;
    panda$collections$ImmutableArray* $tmp5624;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5625;
    panda$core$Int64 $tmp5626;
    org$pandalanguage$pandac$ASTNode* $tmp5629;
    panda$collections$Array* members5632 = NULL;
    panda$collections$Array* $tmp5633;
    panda$collections$Array* $tmp5634;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5639;
    panda$core$Int64 $tmp5640;
    org$pandalanguage$pandac$ASTNode* member5645 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5646;
    org$pandalanguage$pandac$ASTNode* $tmp5647;
    org$pandalanguage$pandac$ASTNode* $tmp5649;
    org$pandalanguage$pandac$ASTNode* $tmp5654;
    org$pandalanguage$pandac$ASTNode* $tmp5655;
    panda$core$Int64 $tmp5657;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5658;
    panda$core$Int64 $tmp5659;
    panda$core$String* $tmp5660;
    panda$collections$ImmutableArray* $tmp5662;
    int $tmp5581;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5584, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5583, $tmp5584);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5586 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5583, &$s5585);
        start5582 = $tmp5586;
        if (((panda$core$Bit) { !start5582.nonnull }).value) {
        {
            $tmp5588 = NULL;
            $returnValue5587 = $tmp5588;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5588));
            $tmp5581 = 0;
            goto $l5579;
            $l5589:;
            return $returnValue5587;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5593, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5592, $tmp5593);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5595 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5592, &$s5594);
        name5591 = $tmp5595;
        if (((panda$core$Bit) { !name5591.nonnull }).value) {
        {
            $tmp5596 = NULL;
            $returnValue5587 = $tmp5596;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5596));
            $tmp5581 = 1;
            goto $l5579;
            $l5597:;
            return $returnValue5587;
        }
        }
        memset(&generics5599, 0, sizeof(generics5599));
        org$pandalanguage$pandac$parser$Token $tmp5600 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5601, 63);
        panda$core$Bit $tmp5602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5600.kind.$rawValue, $tmp5601);
        if ($tmp5602.value) {
        {
            {
                $tmp5603 = generics5599;
                panda$collections$ImmutableArray* $tmp5606 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5605 = $tmp5606;
                $tmp5604 = $tmp5605;
                generics5599 = $tmp5604;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5604));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5605));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5603));
            }
            if (((panda$core$Bit) { generics5599 == NULL }).value) {
            {
                $tmp5607 = NULL;
                $returnValue5587 = $tmp5607;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5607));
                $tmp5581 = 2;
                goto $l5579;
                $l5608:;
                return $returnValue5587;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5610 = generics5599;
                $tmp5611 = NULL;
                generics5599 = $tmp5611;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5611));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5610));
            }
        }
        }
        memset(&stypes5612, 0, sizeof(stypes5612));
        org$pandalanguage$pandac$parser$Token $tmp5613 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5614, 96);
        panda$core$Bit $tmp5615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5613.kind.$rawValue, $tmp5614);
        if ($tmp5615.value) {
        {
            {
                $tmp5616 = stypes5612;
                panda$collections$ImmutableArray* $tmp5619 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5618 = $tmp5619;
                $tmp5617 = $tmp5618;
                stypes5612 = $tmp5617;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5617));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5618));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5616));
            }
            if (((panda$core$Bit) { stypes5612 == NULL }).value) {
            {
                $tmp5620 = NULL;
                $returnValue5587 = $tmp5620;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5620));
                $tmp5581 = 3;
                goto $l5579;
                $l5621:;
                return $returnValue5587;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5623 = stypes5612;
                $tmp5624 = NULL;
                stypes5612 = $tmp5624;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5624));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5623));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5626, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5625, $tmp5626);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5628 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5625, &$s5627);
        if (((panda$core$Bit) { !$tmp5628.nonnull }).value) {
        {
            $tmp5629 = NULL;
            $returnValue5587 = $tmp5629;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5629));
            $tmp5581 = 4;
            goto $l5579;
            $l5630:;
            return $returnValue5587;
        }
        }
        panda$collections$Array* $tmp5635 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5635);
        $tmp5634 = $tmp5635;
        $tmp5633 = $tmp5634;
        members5632 = $tmp5633;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5633));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5634));
        $l5636:;
        panda$core$Int64$init$builtin_int64(&$tmp5640, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5639, $tmp5640);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5641 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5639);
        bool $tmp5638 = ((panda$core$Bit) { !$tmp5641.nonnull }).value;
        if (!$tmp5638) goto $l5637;
        {
            int $tmp5644;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5648 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5647 = $tmp5648;
                $tmp5646 = $tmp5647;
                member5645 = $tmp5646;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5646));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5647));
                if (((panda$core$Bit) { member5645 == NULL }).value) {
                {
                    $tmp5649 = NULL;
                    $returnValue5587 = $tmp5649;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5649));
                    $tmp5644 = 0;
                    goto $l5642;
                    $l5650:;
                    $tmp5581 = 5;
                    goto $l5579;
                    $l5651:;
                    return $returnValue5587;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5632, ((panda$core$Object*) member5645));
            }
            $tmp5644 = -1;
            goto $l5642;
            $l5642:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) member5645));
            member5645 = NULL;
            switch ($tmp5644) {
                case 0: goto $l5650;
                case -1: goto $l5653;
            }
            $l5653:;
        }
        goto $l5636;
        $l5637:;
        org$pandalanguage$pandac$ASTNode* $tmp5656 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5657, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5659, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5658, $tmp5659);
        panda$core$String* $tmp5661 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5591.value));
        $tmp5660 = $tmp5661;
        panda$collections$ImmutableArray* $tmp5663 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5632);
        $tmp5662 = $tmp5663;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5656, $tmp5657, ((org$pandalanguage$pandac$parser$Token) start5582.value).position, p_doccomment, p_annotations, $tmp5658, $tmp5660, generics5599, stypes5612, $tmp5662);
        $tmp5655 = $tmp5656;
        $tmp5654 = $tmp5655;
        $returnValue5587 = $tmp5654;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5654));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5655));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5662));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5660));
        $tmp5581 = 6;
        goto $l5579;
        $l5664:;
        return $returnValue5587;
    }
    $l5579:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) members5632));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) stypes5612));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) generics5599));
    members5632 = NULL;
    switch ($tmp5581) {
        case 1: goto $l5597;
        case 2: goto $l5608;
        case 6: goto $l5664;
        case 3: goto $l5621;
        case 4: goto $l5630;
        case 5: goto $l5651;
        case 0: goto $l5589;
    }
    $l5666:;
    if (false) goto $l5667; else goto $l5668;
    $l5668:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5669, (panda$core$Int64) { 2486 }, &$s5670);
    abort();
    $l5667:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5675;
    panda$core$Int64 $tmp5676;
    org$pandalanguage$pandac$ASTNode* $returnValue5679;
    org$pandalanguage$pandac$ASTNode* $tmp5680;
    org$pandalanguage$pandac$parser$Token$nullable name5683;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5684;
    panda$core$Int64 $tmp5685;
    org$pandalanguage$pandac$ASTNode* $tmp5688;
    panda$collections$ImmutableArray* generics5691 = NULL;
    panda$core$Int64 $tmp5693;
    panda$collections$ImmutableArray* $tmp5695;
    panda$collections$ImmutableArray* $tmp5696;
    panda$collections$ImmutableArray* $tmp5697;
    org$pandalanguage$pandac$ASTNode* $tmp5699;
    panda$collections$ImmutableArray* $tmp5702;
    panda$collections$ImmutableArray* $tmp5703;
    panda$collections$ImmutableArray* $tmp5704;
    panda$collections$Array* intfs5706 = NULL;
    panda$collections$Array* $tmp5707;
    panda$collections$Array* $tmp5708;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5710;
    panda$core$Int64 $tmp5711;
    org$pandalanguage$pandac$ASTNode* t5716 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5717;
    org$pandalanguage$pandac$ASTNode* $tmp5718;
    org$pandalanguage$pandac$ASTNode* $tmp5720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5727;
    panda$core$Int64 $tmp5728;
    org$pandalanguage$pandac$ASTNode* $tmp5730;
    org$pandalanguage$pandac$ASTNode* $tmp5731;
    org$pandalanguage$pandac$ASTNode* $tmp5732;
    org$pandalanguage$pandac$ASTNode* $tmp5734;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5739;
    panda$core$Int64 $tmp5740;
    org$pandalanguage$pandac$ASTNode* $tmp5743;
    panda$collections$Array* members5746 = NULL;
    panda$collections$Array* $tmp5747;
    panda$collections$Array* $tmp5748;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5753;
    panda$core$Int64 $tmp5754;
    org$pandalanguage$pandac$ASTNode* member5759 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5760;
    org$pandalanguage$pandac$ASTNode* $tmp5761;
    org$pandalanguage$pandac$ASTNode* $tmp5763;
    org$pandalanguage$pandac$ASTNode* $tmp5768;
    org$pandalanguage$pandac$ASTNode* $tmp5769;
    panda$core$Int64 $tmp5771;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5772;
    panda$core$Int64 $tmp5773;
    panda$core$String* $tmp5774;
    panda$collections$ImmutableArray* $tmp5776;
    panda$collections$ImmutableArray* $tmp5778;
    int $tmp5673;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5676, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5675, $tmp5676);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5678 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5675, &$s5677);
        start5674 = $tmp5678;
        if (((panda$core$Bit) { !start5674.nonnull }).value) {
        {
            $tmp5680 = NULL;
            $returnValue5679 = $tmp5680;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5680));
            $tmp5673 = 0;
            goto $l5671;
            $l5681:;
            return $returnValue5679;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5685, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5684, $tmp5685);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5687 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5684, &$s5686);
        name5683 = $tmp5687;
        if (((panda$core$Bit) { !name5683.nonnull }).value) {
        {
            $tmp5688 = NULL;
            $returnValue5679 = $tmp5688;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5688));
            $tmp5673 = 1;
            goto $l5671;
            $l5689:;
            return $returnValue5679;
        }
        }
        memset(&generics5691, 0, sizeof(generics5691));
        org$pandalanguage$pandac$parser$Token $tmp5692 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5693, 63);
        panda$core$Bit $tmp5694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5692.kind.$rawValue, $tmp5693);
        if ($tmp5694.value) {
        {
            {
                $tmp5695 = generics5691;
                panda$collections$ImmutableArray* $tmp5698 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5697 = $tmp5698;
                $tmp5696 = $tmp5697;
                generics5691 = $tmp5696;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5696));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5697));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5695));
            }
            if (((panda$core$Bit) { generics5691 == NULL }).value) {
            {
                $tmp5699 = NULL;
                $returnValue5679 = $tmp5699;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5699));
                $tmp5673 = 2;
                goto $l5671;
                $l5700:;
                return $returnValue5679;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5702 = generics5691;
                panda$collections$ImmutableArray* $tmp5705 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5705);
                $tmp5704 = $tmp5705;
                $tmp5703 = $tmp5704;
                generics5691 = $tmp5703;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5703));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5704));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5702));
            }
        }
        }
        panda$collections$Array* $tmp5709 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5709);
        $tmp5708 = $tmp5709;
        $tmp5707 = $tmp5708;
        intfs5706 = $tmp5707;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5707));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5708));
        panda$core$Int64$init$builtin_int64(&$tmp5711, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5710, $tmp5711);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5712 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5710);
        if (((panda$core$Bit) { $tmp5712.nonnull }).value) {
        {
            int $tmp5715;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5719 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5718 = $tmp5719;
                $tmp5717 = $tmp5718;
                t5716 = $tmp5717;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5717));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5718));
                if (((panda$core$Bit) { t5716 == NULL }).value) {
                {
                    $tmp5720 = NULL;
                    $returnValue5679 = $tmp5720;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5720));
                    $tmp5715 = 0;
                    goto $l5713;
                    $l5721:;
                    $tmp5673 = 3;
                    goto $l5671;
                    $l5722:;
                    return $returnValue5679;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5706, ((panda$core$Object*) t5716));
                $l5724:;
                panda$core$Int64$init$builtin_int64(&$tmp5728, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5727, $tmp5728);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5729 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5727);
                bool $tmp5726 = ((panda$core$Bit) { $tmp5729.nonnull }).value;
                if (!$tmp5726) goto $l5725;
                {
                    {
                        $tmp5730 = t5716;
                        org$pandalanguage$pandac$ASTNode* $tmp5733 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5732 = $tmp5733;
                        $tmp5731 = $tmp5732;
                        t5716 = $tmp5731;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5731));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5732));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5730));
                    }
                    if (((panda$core$Bit) { t5716 == NULL }).value) {
                    {
                        $tmp5734 = NULL;
                        $returnValue5679 = $tmp5734;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5734));
                        $tmp5715 = 1;
                        goto $l5713;
                        $l5735:;
                        $tmp5673 = 4;
                        goto $l5671;
                        $l5736:;
                        return $returnValue5679;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5706, ((panda$core$Object*) t5716));
                }
                goto $l5724;
                $l5725:;
            }
            $tmp5715 = -1;
            goto $l5713;
            $l5713:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t5716));
            t5716 = NULL;
            switch ($tmp5715) {
                case -1: goto $l5738;
                case 0: goto $l5721;
                case 1: goto $l5735;
            }
            $l5738:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5740, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5739, $tmp5740);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5739, &$s5741);
        if (((panda$core$Bit) { !$tmp5742.nonnull }).value) {
        {
            $tmp5743 = NULL;
            $returnValue5679 = $tmp5743;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5743));
            $tmp5673 = 5;
            goto $l5671;
            $l5744:;
            return $returnValue5679;
        }
        }
        panda$collections$Array* $tmp5749 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5749);
        $tmp5748 = $tmp5749;
        $tmp5747 = $tmp5748;
        members5746 = $tmp5747;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5747));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5748));
        $l5750:;
        panda$core$Int64$init$builtin_int64(&$tmp5754, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5753, $tmp5754);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5755 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5753);
        bool $tmp5752 = ((panda$core$Bit) { !$tmp5755.nonnull }).value;
        if (!$tmp5752) goto $l5751;
        {
            int $tmp5758;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5762 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5761 = $tmp5762;
                $tmp5760 = $tmp5761;
                member5759 = $tmp5760;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5760));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5761));
                if (((panda$core$Bit) { member5759 == NULL }).value) {
                {
                    $tmp5763 = NULL;
                    $returnValue5679 = $tmp5763;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5763));
                    $tmp5758 = 0;
                    goto $l5756;
                    $l5764:;
                    $tmp5673 = 6;
                    goto $l5671;
                    $l5765:;
                    return $returnValue5679;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5746, ((panda$core$Object*) member5759));
            }
            $tmp5758 = -1;
            goto $l5756;
            $l5756:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) member5759));
            member5759 = NULL;
            switch ($tmp5758) {
                case -1: goto $l5767;
                case 0: goto $l5764;
            }
            $l5767:;
        }
        goto $l5750;
        $l5751:;
        org$pandalanguage$pandac$ASTNode* $tmp5770 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5771, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5773, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5772, $tmp5773);
        panda$core$String* $tmp5775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5683.value));
        $tmp5774 = $tmp5775;
        panda$collections$ImmutableArray* $tmp5777 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5706);
        $tmp5776 = $tmp5777;
        panda$collections$ImmutableArray* $tmp5779 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5746);
        $tmp5778 = $tmp5779;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5770, $tmp5771, ((org$pandalanguage$pandac$parser$Token) start5674.value).position, p_doccomment, p_annotations, $tmp5772, $tmp5774, generics5691, $tmp5776, $tmp5778);
        $tmp5769 = $tmp5770;
        $tmp5768 = $tmp5769;
        $returnValue5679 = $tmp5768;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5768));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5769));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5778));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5776));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5774));
        $tmp5673 = 7;
        goto $l5671;
        $l5780:;
        return $returnValue5679;
    }
    $l5671:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) members5746));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) intfs5706));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) generics5691));
    intfs5706 = NULL;
    members5746 = NULL;
    switch ($tmp5673) {
        case 6: goto $l5765;
        case 7: goto $l5780;
        case 5: goto $l5744;
        case 4: goto $l5736;
        case 3: goto $l5722;
        case 2: goto $l5700;
        case 1: goto $l5689;
        case 0: goto $l5681;
    }
    $l5782:;
    if (false) goto $l5783; else goto $l5784;
    $l5784:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5785, (panda$core$Int64) { 2534 }, &$s5786);
    abort();
    $l5783:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2587_95787;
    panda$core$Int64 $tmp5789;
    org$pandalanguage$pandac$ASTNode* $returnValue5791;
    org$pandalanguage$pandac$ASTNode* $tmp5792;
    org$pandalanguage$pandac$ASTNode* $tmp5793;
    org$pandalanguage$pandac$ASTNode* $tmp5796;
    org$pandalanguage$pandac$ASTNode* $tmp5797;
    {
        org$pandalanguage$pandac$parser$Token $tmp5788 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2587_95787 = $tmp5788.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5789, 16);
        panda$core$Bit $tmp5790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2587_95787.$rawValue, $tmp5789);
        if ($tmp5790.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5794 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5793 = $tmp5794;
            $tmp5792 = $tmp5793;
            $returnValue5791 = $tmp5792;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5792));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5793));
            return $returnValue5791;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5798 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5797 = $tmp5798;
            $tmp5796 = $tmp5797;
            $returnValue5791 = $tmp5796;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5796));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5797));
            return $returnValue5791;
        }
        }
    }
    if (false) goto $l5800; else goto $l5801;
    $l5801:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5802, (panda$core$Int64) { 2586 }, &$s5803);
    abort();
    $l5800:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5807 = NULL;
    panda$collections$Array* $tmp5808;
    panda$collections$Array* $tmp5809;
    panda$core$Int64 $tmp5812;
    org$pandalanguage$pandac$ASTNode* decl5817 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5818;
    org$pandalanguage$pandac$ASTNode* $tmp5819;
    panda$core$Int64 $tmp5826;
    org$pandalanguage$pandac$ASTNode* entry5831 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5832;
    org$pandalanguage$pandac$ASTNode* $tmp5833;
    org$pandalanguage$pandac$ASTNode* $returnValue5835;
    org$pandalanguage$pandac$ASTNode* $tmp5836;
    org$pandalanguage$pandac$ASTNode* $tmp5845;
    org$pandalanguage$pandac$ASTNode* $tmp5846;
    panda$core$Int64 $tmp5848;
    panda$collections$ImmutableArray* $tmp5849;
    int $tmp5806;
    {
        panda$collections$Array* $tmp5810 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5810);
        $tmp5809 = $tmp5810;
        $tmp5808 = $tmp5809;
        entries5807 = $tmp5808;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5808));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5809));
        org$pandalanguage$pandac$parser$Token $tmp5811 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5812, 15);
        panda$core$Bit $tmp5813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5811.kind.$rawValue, $tmp5812);
        if ($tmp5813.value) {
        {
            int $tmp5816;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5820 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5819 = $tmp5820;
                $tmp5818 = $tmp5819;
                decl5817 = $tmp5818;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5818));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5819));
                if (((panda$core$Bit) { decl5817 != NULL }).value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(entries5807, ((panda$core$Object*) decl5817));
                }
                }
            }
            $tmp5816 = -1;
            goto $l5814;
            $l5814:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decl5817));
            decl5817 = NULL;
            switch ($tmp5816) {
                case -1: goto $l5821;
            }
            $l5821:;
        }
        }
        $l5822:;
        org$pandalanguage$pandac$parser$Token $tmp5825 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5826, 0);
        panda$core$Bit $tmp5827 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5825.kind.$rawValue, $tmp5826);
        bool $tmp5824 = $tmp5827.value;
        if (!$tmp5824) goto $l5823;
        {
            int $tmp5830;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5834 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5833 = $tmp5834;
                $tmp5832 = $tmp5833;
                entry5831 = $tmp5832;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5832));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5833));
                if (((panda$core$Bit) { entry5831 == NULL }).value) {
                {
                    $tmp5836 = NULL;
                    $returnValue5835 = $tmp5836;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5836));
                    $tmp5830 = 0;
                    goto $l5828;
                    $l5837:;
                    $tmp5806 = 0;
                    goto $l5804;
                    $l5838:;
                    return $returnValue5835;
                }
                }
                panda$core$Bit $tmp5840 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5840.value) goto $l5841; else goto $l5842;
                $l5842:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5843, (panda$core$Int64) { 2611 });
                abort();
                $l5841:;
                panda$collections$Array$add$panda$collections$Array$T(entries5807, ((panda$core$Object*) entry5831));
            }
            $tmp5830 = -1;
            goto $l5828;
            $l5828:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) entry5831));
            entry5831 = NULL;
            switch ($tmp5830) {
                case 0: goto $l5837;
                case -1: goto $l5844;
            }
            $l5844:;
        }
        goto $l5822;
        $l5823:;
        org$pandalanguage$pandac$ASTNode* $tmp5847 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5848, 17);
        panda$collections$ImmutableArray* $tmp5850 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5807);
        $tmp5849 = $tmp5850;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5847, $tmp5848, $tmp5849);
        $tmp5846 = $tmp5847;
        $tmp5845 = $tmp5846;
        $returnValue5835 = $tmp5845;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5845));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5846));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5849));
        $tmp5806 = 1;
        goto $l5804;
        $l5851:;
        return $returnValue5835;
    }
    $l5804:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) entries5807));
    entries5807 = NULL;
    switch ($tmp5806) {
        case 1: goto $l5851;
        case 0: goto $l5838;
    }
    $l5853:;
    if (false) goto $l5854; else goto $l5855;
    $l5855:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s5856, (panda$core$Int64) { 2598 }, &$s5857);
    abort();
    $l5854:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5860;
    {
    }
    $tmp5860 = -1;
    goto $l5858;
    $l5858:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5860) {
        case -1: goto $l5861;
    }
    $l5861:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->speculativeBuffer));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->syntaxHighlighter));
}

