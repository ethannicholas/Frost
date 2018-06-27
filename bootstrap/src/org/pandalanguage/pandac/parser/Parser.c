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
typedef panda$core$Int64 (*$fn142)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn152)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn157)(panda$collections$CollectionView*);
typedef void (*$fn162)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn163)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef panda$core$Int64 (*$fn166)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn174)(panda$collections$CollectionView*);
typedef void (*$fn213)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn214)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef panda$core$Int64 (*$fn258)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn315)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn382)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn504)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn584)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn592)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn601)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn609)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn715)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn799)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn807)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn816)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn831)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn858)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn866)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn881)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn898)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1381)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1382)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1388)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1390)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Int64 (*$fn1941)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1949)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Position (*$fn2116)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2370)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3630)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3657)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3707)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4142)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4145)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn4849)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Int64 (*$fn5048)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn5073)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x28\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27\x54\x27", 27, 251182849216656286, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s4025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->pushbackBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Stack* $tmp10 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->commaSeparatedExpressionContext = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Bit$init$builtin_bit(&$tmp11, false);
    self->inSpeculative = $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp14 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp14);
    $tmp13 = $tmp14;
    $tmp12 = $tmp13;
    self->speculativeBuffer = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Bit$init$builtin_bit(&$tmp15, true);
    self->allowLambdas = $tmp15;
    panda$core$Bit$init$builtin_bit(&$tmp16, true);
    self->reportErrors = $tmp16;
    {
        $tmp17 = self->errors;
        $tmp18 = p_errors;
        self->errors = $tmp18;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    }
    panda$core$Bit$init$builtin_bit(&$tmp20, false);
    panda$core$Bit$wrapper* $tmp21;
    $tmp21 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp21->value = $tmp20;
    $tmp19 = ((panda$core$Object*) $tmp21);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp19);
    panda$core$Panda$unref$panda$core$Object($tmp19);
    {
        $tmp22 = self->regexParser;
        org$pandalanguage$regex$RegexParser* $tmp25 = (org$pandalanguage$regex$RegexParser*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$regex$RegexParser$class);
        org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp25, p_errors);
        $tmp24 = $tmp25;
        $tmp23 = $tmp24;
        self->regexParser = $tmp23;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    }
    {
        $tmp29 = self->source;
        $tmp30 = p_source;
        self->source = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
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
            panda$core$Panda$unref$panda$core$Object($tmp59);
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
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
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
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto85));
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
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto114));
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
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp138;
    panda$core$Object* $tmp139;
    panda$core$Int64 $tmp144;
    panda$core$String* $tmp148;
    panda$core$Object* $tmp154;
    panda$core$Int64 $tmp159;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        $l135:;
        ITable* $tmp140 = ((panda$collections$CollectionView*) self->syntaxHighlighter->tokens)->$class->itable;
        while ($tmp140->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp140 = $tmp140->next;
        }
        $fn142 $tmp141 = $tmp140->methods[0];
        panda$core$Int64 $tmp143 = $tmp141(((panda$collections$CollectionView*) self->syntaxHighlighter->tokens));
        panda$core$Int64$init$builtin_int64(&$tmp144, 1);
        panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp143, $tmp144);
        panda$core$Object* $tmp146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp145);
        $tmp139 = $tmp146;
        panda$core$String* $tmp147 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp139)->first)->value);
        $tmp138 = $tmp147;
        panda$core$String* $tmp149 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, p_token);
        $tmp148 = $tmp149;
        ITable* $tmp150 = ((panda$core$Equatable*) $tmp138)->$class->itable;
        while ($tmp150->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp150 = $tmp150->next;
        }
        $fn152 $tmp151 = $tmp150->methods[1];
        panda$core$Bit $tmp153 = $tmp151(((panda$core$Equatable*) $tmp138), ((panda$core$Equatable*) $tmp148));
        bool $tmp137 = $tmp153.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
        panda$core$Panda$unref$panda$core$Object($tmp139);
        if (!$tmp137) goto $l136;
        {
            ITable* $tmp155 = ((panda$collections$CollectionView*) self->syntaxHighlighter->tokens)->$class->itable;
            while ($tmp155->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp155 = $tmp155->next;
            }
            $fn157 $tmp156 = $tmp155->methods[0];
            panda$core$Int64 $tmp158 = $tmp156(((panda$collections$CollectionView*) self->syntaxHighlighter->tokens));
            panda$core$Int64$init$builtin_int64(&$tmp159, 1);
            panda$core$Int64 $tmp160 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp158, $tmp159);
            panda$core$Object* $tmp161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp160);
            $tmp154 = $tmp161;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp154)->first)->value);
            panda$core$Panda$unref$panda$core$Object($tmp154);
            (($fn162) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
        }
        goto $l135;
        $l136:;
        (($fn163) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp168;
    org$pandalanguage$pandac$parser$Token $returnValue171;
    panda$core$Int64 $tmp176;
    ITable* $tmp164 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp164->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp164 = $tmp164->next;
    }
    $fn166 $tmp165 = $tmp164->methods[0];
    panda$core$Int64 $tmp167 = $tmp165(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp168, 0);
    panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, $tmp168);
    if ($tmp169.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp170 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp170);
    }
    }
    ITable* $tmp172 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp172->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp172 = $tmp172->next;
    }
    $fn174 $tmp173 = $tmp172->methods[0];
    panda$core$Int64 $tmp175 = $tmp173(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp176, 1);
    panda$core$Int64 $tmp177 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp175, $tmp176);
    org$pandalanguage$pandac$parser$Token $tmp178 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp177);
    $returnValue171 = $tmp178;
    return $returnValue171;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result180;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue183;
    org$pandalanguage$pandac$parser$Token $tmp181 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result180 = $tmp181;
    panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result180.kind.$rawValue, p_kind.$rawValue);
    if ($tmp182.value) {
    {
        $returnValue183 = ((org$pandalanguage$pandac$parser$Token$nullable) { result180, true });
        return $returnValue183;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result180);
    $returnValue183 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue183;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result186;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue189;
    panda$core$String* $tmp191;
    panda$core$String* $tmp192;
    panda$core$String* $tmp193;
    panda$core$String* $tmp194;
    panda$core$String* $tmp199;
    org$pandalanguage$pandac$parser$Token $tmp187 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result186 = $tmp187;
    panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result186.kind.$rawValue, p_kind.$rawValue);
    if ($tmp188.value) {
    {
        $returnValue189 = ((org$pandalanguage$pandac$parser$Token$nullable) { result186, true });
        return $returnValue189;
    }
    }
    panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s195, p_expected);
    $tmp194 = $tmp196;
    panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s197);
    $tmp193 = $tmp198;
    panda$core$String* $tmp200 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result186);
    $tmp199 = $tmp200;
    panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, $tmp199);
    $tmp192 = $tmp201;
    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s202);
    $tmp191 = $tmp203;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result186, $tmp191);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
    $returnValue189 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue189;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp209;
    panda$core$Bit $tmp206 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp205 = $tmp206.value;
    if (!$tmp205) goto $l207;
    $tmp205 = self->reportErrors.value;
    $l207:;
    panda$core$Bit $tmp208 = { $tmp205 };
    if ($tmp208.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp210 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp210, self->path, p_token.position, p_msg);
        $tmp209 = $tmp210;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_msg, &$s211);
        if ($tmp212.value) {
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
        (($fn213) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn214) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp227;
    int $tmp217;
    {
        panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp218.value) goto $l219; else goto $l220;
        $l220:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s221, (panda$core$Int64) { 205 }, &$s222);
        abort();
        $l219:;
        panda$core$Bit $tmp223 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp223.value) goto $l224; else goto $l225;
        $l225:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s226, (panda$core$Int64) { 206 });
        abort();
        $l224:;
        panda$core$Bit$init$builtin_bit(&$tmp227, true);
        self->inSpeculative = $tmp227;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp217 = -1;
    goto $l215;
    $l215:;
    if (self->inSpeculative.value) goto $l229; else goto $l230;
    $l230:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s231, (panda$core$Int64) { 205 }, &$s232);
    abort();
    $l229:;
    switch ($tmp217) {
        case -1: goto $l228;
    }
    $l228:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp240;
    int $tmp235;
    {
        if (self->inSpeculative.value) goto $l236; else goto $l237;
        $l237:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s238, (panda$core$Int64) { 214 }, &$s239);
        abort();
        $l236:;
        panda$core$Bit$init$builtin_bit(&$tmp240, false);
        self->inSpeculative = $tmp240;
    }
    $tmp235 = -1;
    goto $l233;
    $l233:;
    panda$core$Bit $tmp242 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp242.value) goto $l243; else goto $l244;
    $l244:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s245, (panda$core$Int64) { 214 }, &$s246);
    abort();
    $l243:;
    switch ($tmp235) {
        case -1: goto $l241;
    }
    $l241:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp254;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp255;
    panda$core$Int64 $tmp260;
    panda$core$Int64 $tmp262;
    panda$core$Int64 $tmp263;
    panda$core$Bit $tmp264;
    int $tmp249;
    {
        if (self->inSpeculative.value) goto $l250; else goto $l251;
        $l251:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s252, (panda$core$Int64) { 220 }, &$s253);
        abort();
        $l250:;
        panda$core$Bit$init$builtin_bit(&$tmp254, false);
        self->inSpeculative = $tmp254;
        ITable* $tmp256 = ((panda$collections$CollectionView*) self->speculativeBuffer)->$class->itable;
        while ($tmp256->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp256 = $tmp256->next;
        }
        $fn258 $tmp257 = $tmp256->methods[0];
        panda$core$Int64 $tmp259 = $tmp257(((panda$collections$CollectionView*) self->speculativeBuffer));
        panda$core$Int64$init$builtin_int64(&$tmp260, 1);
        panda$core$Int64 $tmp261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp259, $tmp260);
        panda$core$Int64$init$builtin_int64(&$tmp262, 0);
        panda$core$Int64$init$builtin_int64(&$tmp263, -1);
        panda$core$Bit$init$builtin_bit(&$tmp264, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp255, $tmp261, $tmp262, $tmp263, $tmp264);
        int64_t $tmp266 = $tmp255.start.value;
        panda$core$Int64 i265 = { $tmp266 };
        int64_t $tmp268 = $tmp255.end.value;
        int64_t $tmp269 = $tmp255.step.value;
        bool $tmp270 = $tmp255.inclusive.value;
        bool $tmp277 = $tmp269 > 0;
        if ($tmp277) goto $l275; else goto $l276;
        $l275:;
        if ($tmp270) goto $l278; else goto $l279;
        $l278:;
        if ($tmp266 <= $tmp268) goto $l271; else goto $l273;
        $l279:;
        if ($tmp266 < $tmp268) goto $l271; else goto $l273;
        $l276:;
        if ($tmp270) goto $l280; else goto $l281;
        $l280:;
        if ($tmp266 >= $tmp268) goto $l271; else goto $l273;
        $l281:;
        if ($tmp266 > $tmp268) goto $l271; else goto $l273;
        $l271:;
        {
            org$pandalanguage$pandac$parser$Token $tmp283 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i265);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp283);
        }
        $l274:;
        if ($tmp277) goto $l285; else goto $l286;
        $l285:;
        int64_t $tmp287 = $tmp268 - i265.value;
        if ($tmp270) goto $l288; else goto $l289;
        $l288:;
        if ((uint64_t) $tmp287 >= $tmp269) goto $l284; else goto $l273;
        $l289:;
        if ((uint64_t) $tmp287 > $tmp269) goto $l284; else goto $l273;
        $l286:;
        int64_t $tmp291 = i265.value - $tmp268;
        if ($tmp270) goto $l292; else goto $l293;
        $l292:;
        if ((uint64_t) $tmp291 >= -$tmp269) goto $l284; else goto $l273;
        $l293:;
        if ((uint64_t) $tmp291 > -$tmp269) goto $l284; else goto $l273;
        $l284:;
        i265.value += $tmp269;
        goto $l271;
        $l273:;
    }
    $tmp249 = -1;
    goto $l247;
    $l247:;
    panda$core$Bit $tmp296 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp296.value) goto $l297; else goto $l298;
    $l298:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s299, (panda$core$Int64) { 220 }, &$s300);
    abort();
    $l297:;
    switch ($tmp249) {
        case -1: goto $l295;
    }
    $l295:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue301;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp304;
    panda$core$Bit $tmp305;
    panda$core$Bit$init$builtin_bit(&$tmp305, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp304, p_token.start, p_token.end, $tmp305);
    panda$core$String* $tmp306 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp304);
    $tmp303 = $tmp306;
    $tmp302 = $tmp303;
    $returnValue301 = $tmp302;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
    return $returnValue301;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue308;
    org$pandalanguage$pandac$ASTNode* $tmp309;
    org$pandalanguage$pandac$ASTNode* $tmp311;
    org$pandalanguage$pandac$ASTNode* $tmp312;
    panda$core$Int64 $tmp314;
    org$pandalanguage$pandac$parser$Token$Kind $tmp317;
    panda$core$Int64 $tmp318;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp309 = p_chunk;
        $returnValue308 = $tmp309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
        return $returnValue308;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp313 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp314, 4);
    org$pandalanguage$pandac$Position $tmp316 = (($fn315) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp318, 52);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp317, $tmp318);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp313, $tmp314, $tmp316, p_string, $tmp317, p_chunk);
    $tmp312 = $tmp313;
    $tmp311 = $tmp312;
    $returnValue308 = $tmp311;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $returnValue308;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result323 = NULL;
    panda$core$MutableString* $tmp324;
    panda$core$MutableString* $tmp325;
    org$pandalanguage$pandac$parser$Token token329;
    org$pandalanguage$pandac$parser$Token$Kind $match$242_13331;
    panda$core$Int64 $tmp332;
    panda$core$String* str337 = NULL;
    panda$core$String* $tmp338;
    panda$core$String* $tmp339;
    panda$core$Char8 $tmp341;
    panda$core$UInt8 $tmp342;
    panda$core$String* $returnValue345;
    panda$core$String* $tmp346;
    panda$core$Int64 $tmp351;
    panda$core$String* $tmp354;
    panda$core$Int64 $tmp357;
    org$pandalanguage$pandac$parser$Token escape362;
    panda$core$Int64 $tmp364;
    panda$core$String* $tmp367;
    panda$core$String* escapeText371 = NULL;
    panda$core$String* $tmp372;
    panda$core$String* $tmp373;
    panda$core$Char8 c375;
    panda$core$Object* $tmp376;
    panda$collections$ListView* $tmp377;
    panda$core$Int64 $tmp379;
    panda$core$Char8 $match$261_21384;
    panda$core$Char8 $tmp385;
    panda$core$UInt8 $tmp386;
    panda$core$Char8 $tmp388;
    panda$core$UInt8 $tmp389;
    panda$core$Char8 $tmp390;
    panda$core$UInt8 $tmp391;
    panda$core$Char8 $tmp393;
    panda$core$UInt8 $tmp394;
    panda$core$Char8 $tmp395;
    panda$core$UInt8 $tmp396;
    panda$core$Char8 $tmp398;
    panda$core$UInt8 $tmp399;
    panda$core$Char8 $tmp400;
    panda$core$UInt8 $tmp401;
    panda$core$Char8 $tmp403;
    panda$core$UInt8 $tmp404;
    panda$core$Char8 $tmp405;
    panda$core$UInt8 $tmp406;
    panda$core$Char8 $tmp408;
    panda$core$UInt8 $tmp409;
    panda$core$Char8 $tmp410;
    panda$core$UInt8 $tmp411;
    panda$core$Char8 $tmp413;
    panda$core$UInt8 $tmp414;
    panda$core$Char8 $tmp415;
    panda$core$UInt8 $tmp416;
    panda$core$Char8 $tmp418;
    panda$core$UInt8 $tmp419;
    panda$core$String* $tmp421;
    panda$core$String* $tmp425;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp426;
    panda$core$Bit $tmp429;
    panda$core$Int64 $tmp432;
    panda$core$String* $tmp434;
    panda$core$String* $tmp435;
    panda$core$String* $tmp439;
    int $tmp322;
    {
        panda$core$MutableString* $tmp326 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp326);
        $tmp325 = $tmp326;
        $tmp324 = $tmp325;
        result323 = $tmp324;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
        $l327:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp330 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token329 = $tmp330;
            {
                $match$242_13331 = token329.kind;
                panda$core$Int64$init$builtin_int64(&$tmp332, 13);
                panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13331.$rawValue, $tmp332);
                if ($tmp333.value) {
                {
                    int $tmp336;
                    {
                        panda$core$String* $tmp340 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token329);
                        $tmp339 = $tmp340;
                        $tmp338 = $tmp339;
                        str337 = $tmp338;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                        panda$core$UInt8$init$builtin_uint8(&$tmp342, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp341, $tmp342);
                        panda$core$Bit $tmp343 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str337, $tmp341);
                        if ($tmp343.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token329, &$s344);
                            $tmp346 = NULL;
                            $returnValue345 = $tmp346;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                            $tmp336 = 0;
                            goto $l334;
                            $l347:;
                            $tmp322 = 0;
                            goto $l320;
                            $l348:;
                            return $returnValue345;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result323, str337);
                    }
                    $tmp336 = -1;
                    goto $l334;
                    $l334:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str337));
                    str337 = NULL;
                    switch ($tmp336) {
                        case -1: goto $l350;
                        case 0: goto $l347;
                    }
                    $l350:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp351, 0);
                panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13331.$rawValue, $tmp351);
                if ($tmp352.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token329, &$s353);
                    $tmp354 = NULL;
                    $returnValue345 = $tmp354;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
                    $tmp322 = 1;
                    goto $l320;
                    $l355:;
                    return $returnValue345;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp357, 107);
                panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13331.$rawValue, $tmp357);
                if ($tmp358.value) {
                {
                    int $tmp361;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp363 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape362 = $tmp363;
                        panda$core$Int64$init$builtin_int64(&$tmp364, 0);
                        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape362.kind.$rawValue, $tmp364);
                        if ($tmp365.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token329, &$s366);
                            $tmp367 = NULL;
                            $returnValue345 = $tmp367;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
                            $tmp361 = 0;
                            goto $l359;
                            $l368:;
                            $tmp322 = 2;
                            goto $l320;
                            $l369:;
                            return $returnValue345;
                        }
                        }
                        panda$core$String* $tmp374 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape362);
                        $tmp373 = $tmp374;
                        $tmp372 = $tmp373;
                        escapeText371 = $tmp372;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
                        panda$collections$ListView* $tmp378 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText371);
                        $tmp377 = $tmp378;
                        panda$core$Int64$init$builtin_int64(&$tmp379, 0);
                        ITable* $tmp380 = $tmp377->$class->itable;
                        while ($tmp380->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp380 = $tmp380->next;
                        }
                        $fn382 $tmp381 = $tmp380->methods[0];
                        panda$core$Object* $tmp383 = $tmp381($tmp377, $tmp379);
                        $tmp376 = $tmp383;
                        c375 = ((panda$core$Char8$wrapper*) $tmp376)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp376);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                        {
                            $match$261_21384 = c375;
                            panda$core$UInt8$init$builtin_uint8(&$tmp386, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp385, $tmp386);
                            panda$core$Bit $tmp387 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp385);
                            if ($tmp387.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp389, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp388, $tmp389);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp388);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp391, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp390, $tmp391);
                            panda$core$Bit $tmp392 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp390);
                            if ($tmp392.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp394, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp393, $tmp394);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp393);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp396, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp395, $tmp396);
                            panda$core$Bit $tmp397 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp395);
                            if ($tmp397.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp399, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp398, $tmp399);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp398);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp401, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp400, $tmp401);
                            panda$core$Bit $tmp402 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp400);
                            if ($tmp402.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp404, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp403, $tmp404);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp403);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp406, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp405, $tmp406);
                            panda$core$Bit $tmp407 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp405);
                            if ($tmp407.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp409, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp408, $tmp409);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp408);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp411, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp410, $tmp411);
                            panda$core$Bit $tmp412 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp410);
                            if ($tmp412.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp414, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp413, $tmp414);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp413);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp416, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp415, $tmp416);
                            panda$core$Bit $tmp417 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$261_21384, $tmp415);
                            if ($tmp417.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp419, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp418, $tmp419);
                                panda$core$MutableString$append$panda$core$Char8(result323, $tmp418);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token329, &$s420);
                                $tmp421 = NULL;
                                $returnValue345 = $tmp421;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
                                $tmp361 = 1;
                                goto $l359;
                                $l422:;
                                $tmp322 = 3;
                                goto $l320;
                                $l423:;
                                return $returnValue345;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp427 = panda$core$String$start$R$panda$core$String$Index(escapeText371);
                        panda$core$String$Index $tmp428 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText371, $tmp427);
                        panda$core$Bit$init$builtin_bit(&$tmp429, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp426, ((panda$core$String$Index$nullable) { $tmp428, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp429);
                        panda$core$String* $tmp430 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText371, $tmp426);
                        $tmp425 = $tmp430;
                        panda$core$MutableString$append$panda$core$String(result323, $tmp425);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                    }
                    $tmp361 = -1;
                    goto $l359;
                    $l359:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText371));
                    escapeText371 = NULL;
                    switch ($tmp361) {
                        case -1: goto $l431;
                        case 1: goto $l422;
                        case 0: goto $l368;
                    }
                    $l431:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp432, 101);
                panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_13331.$rawValue, $tmp432);
                if ($tmp433.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token329);
                    panda$core$String* $tmp436 = panda$core$MutableString$finish$R$panda$core$String(result323);
                    $tmp435 = $tmp436;
                    $tmp434 = $tmp435;
                    $returnValue345 = $tmp434;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                    $tmp322 = 4;
                    goto $l320;
                    $l437:;
                    return $returnValue345;
                }
                }
                else {
                {
                    panda$core$String* $tmp440 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token329);
                    $tmp439 = $tmp440;
                    panda$core$MutableString$append$panda$core$String(result323, $tmp439);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                }
                }
                }
                }
                }
            }
        }
        }
        $l328:;
    }
    $tmp322 = -1;
    goto $l320;
    $l320:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result323));
    result323 = NULL;
    switch ($tmp322) {
        case 3: goto $l423;
        case 2: goto $l369;
        case 0: goto $l348;
        case 4: goto $l437;
        case 1: goto $l355;
        case -1: goto $l441;
    }
    $l441:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result445 = NULL;
    panda$core$MutableString* $tmp446;
    panda$core$MutableString* $tmp447;
    org$pandalanguage$pandac$parser$Token token451;
    org$pandalanguage$pandac$parser$Token$Kind $match$287_13453;
    panda$core$Int64 $tmp454;
    panda$core$String* str459 = NULL;
    panda$core$String* $tmp460;
    panda$core$String* $tmp461;
    panda$core$Char8 $tmp463;
    panda$core$UInt8 $tmp464;
    panda$core$String* $returnValue467;
    panda$core$String* $tmp468;
    panda$core$Int64 $tmp473;
    panda$core$String* $tmp476;
    panda$core$Int64 $tmp479;
    org$pandalanguage$pandac$parser$Token escape484;
    panda$core$Int64 $tmp486;
    panda$core$String* $tmp489;
    panda$core$String* escapeText493 = NULL;
    panda$core$String* $tmp494;
    panda$core$String* $tmp495;
    panda$core$Char8 c497;
    panda$core$Object* $tmp498;
    panda$collections$ListView* $tmp499;
    panda$core$Int64 $tmp501;
    panda$core$Char8 $match$306_21506;
    panda$core$Char8 $tmp507;
    panda$core$UInt8 $tmp508;
    panda$core$Char8 $tmp510;
    panda$core$UInt8 $tmp511;
    panda$core$Char8 $tmp512;
    panda$core$UInt8 $tmp513;
    panda$core$Char8 $tmp515;
    panda$core$UInt8 $tmp516;
    panda$core$Char8 $tmp517;
    panda$core$UInt8 $tmp518;
    panda$core$Char8 $tmp520;
    panda$core$UInt8 $tmp521;
    panda$core$Char8 $tmp522;
    panda$core$UInt8 $tmp523;
    panda$core$Char8 $tmp525;
    panda$core$UInt8 $tmp526;
    panda$core$Char8 $tmp527;
    panda$core$UInt8 $tmp528;
    panda$core$Char8 $tmp530;
    panda$core$UInt8 $tmp531;
    panda$core$Char8 $tmp532;
    panda$core$UInt8 $tmp533;
    panda$core$Char8 $tmp535;
    panda$core$UInt8 $tmp536;
    panda$core$Char8 $tmp537;
    panda$core$UInt8 $tmp538;
    panda$core$Char8 $tmp540;
    panda$core$UInt8 $tmp541;
    panda$core$Char8 $tmp542;
    panda$core$UInt8 $tmp543;
    panda$core$Char8 $tmp545;
    panda$core$UInt8 $tmp546;
    panda$core$String* $tmp548;
    panda$core$String* $tmp552;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp553;
    panda$core$Bit $tmp556;
    panda$core$Int64 $tmp559;
    panda$core$String* $tmp561;
    panda$core$String* $tmp562;
    panda$core$Int64 $tmp566;
    panda$core$String* $tmp568;
    panda$core$String* $tmp569;
    panda$core$String* $tmp573;
    int $tmp444;
    {
        panda$core$MutableString* $tmp448 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp448);
        $tmp447 = $tmp448;
        $tmp446 = $tmp447;
        result445 = $tmp446;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
        $l449:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp452 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token451 = $tmp452;
            {
                $match$287_13453 = token451.kind;
                panda$core$Int64$init$builtin_int64(&$tmp454, 13);
                panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13453.$rawValue, $tmp454);
                if ($tmp455.value) {
                {
                    int $tmp458;
                    {
                        panda$core$String* $tmp462 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token451);
                        $tmp461 = $tmp462;
                        $tmp460 = $tmp461;
                        str459 = $tmp460;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                        panda$core$UInt8$init$builtin_uint8(&$tmp464, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp463, $tmp464);
                        panda$core$Bit $tmp465 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str459, $tmp463);
                        if ($tmp465.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token451, &$s466);
                            $tmp468 = NULL;
                            $returnValue467 = $tmp468;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                            $tmp458 = 0;
                            goto $l456;
                            $l469:;
                            $tmp444 = 0;
                            goto $l442;
                            $l470:;
                            return $returnValue467;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result445, str459);
                    }
                    $tmp458 = -1;
                    goto $l456;
                    $l456:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str459));
                    str459 = NULL;
                    switch ($tmp458) {
                        case 0: goto $l469;
                        case -1: goto $l472;
                    }
                    $l472:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp473, 0);
                panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13453.$rawValue, $tmp473);
                if ($tmp474.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token451, &$s475);
                    $tmp476 = NULL;
                    $returnValue467 = $tmp476;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
                    $tmp444 = 1;
                    goto $l442;
                    $l477:;
                    return $returnValue467;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp479, 107);
                panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13453.$rawValue, $tmp479);
                if ($tmp480.value) {
                {
                    int $tmp483;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp485 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape484 = $tmp485;
                        panda$core$Int64$init$builtin_int64(&$tmp486, 0);
                        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape484.kind.$rawValue, $tmp486);
                        if ($tmp487.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token451, &$s488);
                            $tmp489 = NULL;
                            $returnValue467 = $tmp489;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
                            $tmp483 = 0;
                            goto $l481;
                            $l490:;
                            $tmp444 = 2;
                            goto $l442;
                            $l491:;
                            return $returnValue467;
                        }
                        }
                        panda$core$String* $tmp496 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape484);
                        $tmp495 = $tmp496;
                        $tmp494 = $tmp495;
                        escapeText493 = $tmp494;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp494));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                        panda$collections$ListView* $tmp500 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText493);
                        $tmp499 = $tmp500;
                        panda$core$Int64$init$builtin_int64(&$tmp501, 0);
                        ITable* $tmp502 = $tmp499->$class->itable;
                        while ($tmp502->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp502 = $tmp502->next;
                        }
                        $fn504 $tmp503 = $tmp502->methods[0];
                        panda$core$Object* $tmp505 = $tmp503($tmp499, $tmp501);
                        $tmp498 = $tmp505;
                        c497 = ((panda$core$Char8$wrapper*) $tmp498)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp498);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
                        {
                            $match$306_21506 = c497;
                            panda$core$UInt8$init$builtin_uint8(&$tmp508, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp507, $tmp508);
                            panda$core$Bit $tmp509 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp507);
                            if ($tmp509.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp511, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp510, $tmp511);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp510);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp513, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp512, $tmp513);
                            panda$core$Bit $tmp514 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp512);
                            if ($tmp514.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp516, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp515, $tmp516);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp515);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp518, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp517, $tmp518);
                            panda$core$Bit $tmp519 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp517);
                            if ($tmp519.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp521, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp520, $tmp521);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp520);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp523, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp522, $tmp523);
                            panda$core$Bit $tmp524 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp522);
                            if ($tmp524.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp526, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp525, $tmp526);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp525);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp528, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp527, $tmp528);
                            panda$core$Bit $tmp529 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp527);
                            if ($tmp529.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp531, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp530, $tmp531);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp530);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp533, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp532, $tmp533);
                            panda$core$Bit $tmp534 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp532);
                            if ($tmp534.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp536, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp535, $tmp536);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp535);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp538, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp537, $tmp538);
                            panda$core$Bit $tmp539 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp537);
                            if ($tmp539.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp541, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp540, $tmp541);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp540);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp543, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp542, $tmp543);
                            panda$core$Bit $tmp544 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$306_21506, $tmp542);
                            if ($tmp544.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp546, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp545, $tmp546);
                                panda$core$MutableString$append$panda$core$Char8(result445, $tmp545);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token451, &$s547);
                                $tmp548 = NULL;
                                $returnValue467 = $tmp548;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                                $tmp483 = 1;
                                goto $l481;
                                $l549:;
                                $tmp444 = 3;
                                goto $l442;
                                $l550:;
                                return $returnValue467;
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
                        panda$core$String$Index $tmp554 = panda$core$String$start$R$panda$core$String$Index(escapeText493);
                        panda$core$String$Index $tmp555 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText493, $tmp554);
                        panda$core$Bit$init$builtin_bit(&$tmp556, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp553, ((panda$core$String$Index$nullable) { $tmp555, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp556);
                        panda$core$String* $tmp557 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText493, $tmp553);
                        $tmp552 = $tmp557;
                        panda$core$MutableString$append$panda$core$String(result445, $tmp552);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                    }
                    $tmp483 = -1;
                    goto $l481;
                    $l481:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText493));
                    escapeText493 = NULL;
                    switch ($tmp483) {
                        case 0: goto $l490;
                        case 1: goto $l549;
                        case -1: goto $l558;
                    }
                    $l558:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp559, 96);
                panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13453.$rawValue, $tmp559);
                if ($tmp560.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token451);
                    panda$core$String* $tmp563 = panda$core$MutableString$finish$R$panda$core$String(result445);
                    $tmp562 = $tmp563;
                    $tmp561 = $tmp562;
                    $returnValue467 = $tmp561;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                    $tmp444 = 4;
                    goto $l442;
                    $l564:;
                    return $returnValue467;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp566, 101);
                panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$287_13453.$rawValue, $tmp566);
                if ($tmp567.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token451);
                    panda$core$String* $tmp570 = panda$core$MutableString$finish$R$panda$core$String(result445);
                    $tmp569 = $tmp570;
                    $tmp568 = $tmp569;
                    $returnValue467 = $tmp568;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                    $tmp444 = 5;
                    goto $l442;
                    $l571:;
                    return $returnValue467;
                }
                }
                else {
                {
                    panda$core$String* $tmp574 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token451);
                    $tmp573 = $tmp574;
                    panda$core$MutableString$append$panda$core$String(result445, $tmp573);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l450:;
    }
    $tmp444 = -1;
    goto $l442;
    $l442:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result445));
    result445 = NULL;
    switch ($tmp444) {
        case -1: goto $l575;
        case 4: goto $l564;
        case 3: goto $l550;
        case 5: goto $l571;
        case 0: goto $l470;
        case 2: goto $l491;
        case 1: goto $l477;
    }
    $l575:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot579 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp580;
    org$pandalanguage$pandac$ASTNode* $tmp581;
    panda$core$Int64 $tmp583;
    org$pandalanguage$pandac$ASTNode* call587 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp588;
    org$pandalanguage$pandac$ASTNode* $tmp589;
    panda$core$Int64 $tmp591;
    panda$collections$ImmutableArray* $tmp594;
    org$pandalanguage$pandac$ASTNode* stringType596 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp597;
    org$pandalanguage$pandac$ASTNode* $tmp598;
    panda$core$Int64 $tmp600;
    org$pandalanguage$pandac$ASTNode* $returnValue604;
    org$pandalanguage$pandac$ASTNode* $tmp605;
    org$pandalanguage$pandac$ASTNode* $tmp606;
    panda$core$Int64 $tmp608;
    org$pandalanguage$pandac$parser$Token$Kind $tmp611;
    panda$core$Int64 $tmp612;
    int $tmp578;
    {
        org$pandalanguage$pandac$ASTNode* $tmp582 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp583, 15);
        org$pandalanguage$pandac$Position $tmp585 = (($fn584) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp582, $tmp583, $tmp585, p_expr, &$s586);
        $tmp581 = $tmp582;
        $tmp580 = $tmp581;
        dot579 = $tmp580;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
        org$pandalanguage$pandac$ASTNode* $tmp590 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp591, 8);
        org$pandalanguage$pandac$Position $tmp593 = (($fn592) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp595 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp595);
        $tmp594 = $tmp595;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp590, $tmp591, $tmp593, dot579, $tmp594);
        $tmp589 = $tmp590;
        $tmp588 = $tmp589;
        call587 = $tmp588;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
        org$pandalanguage$pandac$ASTNode* $tmp599 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp600, 42);
        org$pandalanguage$pandac$Position $tmp602 = (($fn601) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp599, $tmp600, $tmp602, &$s603);
        $tmp598 = $tmp599;
        $tmp597 = $tmp598;
        stringType596 = $tmp597;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
        org$pandalanguage$pandac$ASTNode* $tmp607 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp608, 4);
        org$pandalanguage$pandac$Position $tmp610 = (($fn609) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp612, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp611, $tmp612);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp607, $tmp608, $tmp610, call587, $tmp611, stringType596);
        $tmp606 = $tmp607;
        $tmp605 = $tmp606;
        $returnValue604 = $tmp605;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
        $tmp578 = 0;
        goto $l576;
        $l613:;
        return $returnValue604;
    }
    $l576:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType596));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call587));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot579));
    dot579 = NULL;
    call587 = NULL;
    stringType596 = NULL;
    switch ($tmp578) {
        case 0: goto $l613;
    }
    $l615:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1619;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto623 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp624;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp625;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp627;
    panda$core$Int64 $tmp628;
    org$pandalanguage$pandac$parser$Token start629;
    panda$core$Int64 $tmp632;
    panda$core$Int64 $tmp635;
    panda$core$String* $tmp638;
    panda$core$String* $tmp639;
    panda$core$String* $tmp641;
    org$pandalanguage$pandac$ASTNode* $returnValue646;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    org$pandalanguage$pandac$ASTNode* result651 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp652;
    panda$core$MutableString* chunk653 = NULL;
    panda$core$MutableString* $tmp654;
    panda$core$MutableString* $tmp655;
    org$pandalanguage$pandac$parser$Token token659;
    org$pandalanguage$pandac$parser$Token$Kind $match$355_13662;
    panda$core$Int64 $tmp663;
    panda$core$String* str668 = NULL;
    panda$core$String* $tmp669;
    panda$core$String* $tmp670;
    panda$core$Char8 $tmp672;
    panda$core$UInt8 $tmp673;
    org$pandalanguage$pandac$ASTNode* $tmp676;
    panda$core$Int64 $tmp682;
    org$pandalanguage$pandac$ASTNode* $tmp685;
    panda$core$Int64 $tmp689;
    org$pandalanguage$pandac$parser$Token escape694;
    panda$core$Int64 $tmp696;
    org$pandalanguage$pandac$ASTNode* $tmp699;
    panda$core$String* escapeText704 = NULL;
    panda$core$String* $tmp705;
    panda$core$String* $tmp706;
    panda$core$Char8 c708;
    panda$core$Object* $tmp709;
    panda$collections$ListView* $tmp710;
    panda$core$Int64 $tmp712;
    panda$core$Char8 $match$374_21717;
    panda$core$Char8 $tmp718;
    panda$core$UInt8 $tmp719;
    panda$core$Char8 $tmp721;
    panda$core$UInt8 $tmp722;
    panda$core$Char8 $tmp723;
    panda$core$UInt8 $tmp724;
    panda$core$Char8 $tmp726;
    panda$core$UInt8 $tmp727;
    panda$core$Char8 $tmp728;
    panda$core$UInt8 $tmp729;
    panda$core$Char8 $tmp731;
    panda$core$UInt8 $tmp732;
    panda$core$Char8 $tmp733;
    panda$core$UInt8 $tmp734;
    panda$core$Char8 $tmp736;
    panda$core$UInt8 $tmp737;
    panda$core$Char8 $tmp738;
    panda$core$UInt8 $tmp739;
    panda$core$Char8 $tmp741;
    panda$core$UInt8 $tmp742;
    panda$core$Char8 $tmp743;
    panda$core$UInt8 $tmp744;
    panda$core$Char8 $tmp746;
    panda$core$UInt8 $tmp747;
    panda$core$Char8 $tmp748;
    panda$core$UInt8 $tmp749;
    panda$core$Bit oldAllow754;
    panda$core$Bit $tmp755;
    org$pandalanguage$pandac$ASTNode* expr756 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp757;
    org$pandalanguage$pandac$ASTNode* $tmp758;
    org$pandalanguage$pandac$ASTNode* $tmp760;
    panda$core$String* align766 = NULL;
    panda$core$String* $tmp767;
    panda$core$String* format768 = NULL;
    panda$core$String* $tmp769;
    org$pandalanguage$pandac$parser$Token$Kind $tmp770;
    panda$core$Int64 $tmp771;
    panda$core$String* $tmp773;
    panda$core$String* $tmp774;
    panda$core$String* $tmp775;
    org$pandalanguage$pandac$parser$Token$Kind $tmp777;
    panda$core$Int64 $tmp778;
    panda$core$String* $tmp783;
    panda$core$String* $tmp784;
    panda$core$String* $tmp785;
    org$pandalanguage$pandac$ASTNode* $tmp787;
    org$pandalanguage$pandac$ASTNode* formattable794 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp795;
    org$pandalanguage$pandac$ASTNode* $tmp796;
    panda$core$Int64 $tmp798;
    org$pandalanguage$pandac$ASTNode* cast802 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp803;
    org$pandalanguage$pandac$ASTNode* $tmp804;
    panda$core$Int64 $tmp806;
    org$pandalanguage$pandac$parser$Token$Kind $tmp809;
    panda$core$Int64 $tmp810;
    org$pandalanguage$pandac$ASTNode* dot811 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp812;
    org$pandalanguage$pandac$ASTNode* $tmp813;
    panda$core$Int64 $tmp815;
    panda$collections$Array* callArgs819 = NULL;
    panda$collections$Array* $tmp820;
    panda$collections$Array* $tmp821;
    org$pandalanguage$pandac$ASTNode* $tmp823;
    panda$core$Int64 $tmp825;
    org$pandalanguage$pandac$ASTNode* $tmp826;
    org$pandalanguage$pandac$ASTNode* $tmp827;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    panda$core$Int64 $tmp830;
    panda$collections$ImmutableArray* $tmp833;
    org$pandalanguage$pandac$parser$Token$Kind $tmp836;
    panda$core$Int64 $tmp837;
    org$pandalanguage$pandac$ASTNode* $tmp840;
    org$pandalanguage$pandac$ASTNode* $tmp849;
    org$pandalanguage$pandac$ASTNode* $tmp850;
    org$pandalanguage$pandac$ASTNode* $tmp851;
    org$pandalanguage$pandac$ASTNode* pandaType853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp854;
    org$pandalanguage$pandac$ASTNode* $tmp855;
    panda$core$Int64 $tmp857;
    org$pandalanguage$pandac$ASTNode* callTarget861 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp862;
    org$pandalanguage$pandac$ASTNode* $tmp863;
    panda$core$Int64 $tmp865;
    panda$collections$Array* callArgs869 = NULL;
    panda$collections$Array* $tmp870;
    panda$collections$Array* $tmp871;
    org$pandalanguage$pandac$ASTNode* $tmp873;
    panda$core$Int64 $tmp875;
    org$pandalanguage$pandac$ASTNode* $tmp876;
    org$pandalanguage$pandac$ASTNode* $tmp877;
    org$pandalanguage$pandac$ASTNode* $tmp878;
    panda$core$Int64 $tmp880;
    panda$collections$ImmutableArray* $tmp883;
    panda$core$String* text886 = NULL;
    panda$core$String* $tmp887;
    panda$core$String* $tmp888;
    panda$core$MutableString* $tmp890;
    panda$core$MutableString* $tmp891;
    panda$core$MutableString* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp902;
    org$pandalanguage$pandac$ASTNode* $tmp903;
    org$pandalanguage$pandac$ASTNode* $tmp904;
    org$pandalanguage$pandac$ASTNode* $tmp905;
    panda$core$Int64 $tmp907;
    org$pandalanguage$pandac$ASTNode* $tmp909;
    org$pandalanguage$pandac$ASTNode* $tmp910;
    org$pandalanguage$pandac$ASTNode* $tmp911;
    org$pandalanguage$pandac$ASTNode* $tmp913;
    org$pandalanguage$pandac$ASTNode* $tmp914;
    org$pandalanguage$pandac$ASTNode* $tmp915;
    org$pandalanguage$pandac$ASTNode* $tmp919;
    panda$core$String* $tmp924;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp925;
    panda$core$Bit $tmp928;
    panda$core$String* $tmp931;
    org$pandalanguage$pandac$ASTNode* $tmp933;
    org$pandalanguage$pandac$ASTNode* $tmp934;
    org$pandalanguage$pandac$ASTNode* $tmp935;
    panda$core$Int64 $tmp937;
    panda$core$String* $tmp938;
    int $tmp618;
    {
        $atPre1619 = self->allowLambdas;
        int $tmp622;
        {
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp626 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
            panda$core$Int64$init$builtin_int64(&$tmp628, 10);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp627, $tmp628);
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp626, self, $tmp627);
            $tmp625 = $tmp626;
            $tmp624 = $tmp625;
            auto623 = $tmp624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
            org$pandalanguage$pandac$parser$Token $tmp630 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start629 = $tmp630;
            panda$core$Int64$init$builtin_int64(&$tmp632, 8);
            panda$core$Bit $tmp633 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start629.kind.$rawValue, $tmp632);
            bool $tmp631 = $tmp633.value;
            if (!$tmp631) goto $l634;
            panda$core$Int64$init$builtin_int64(&$tmp635, 7);
            panda$core$Bit $tmp636 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start629.kind.$rawValue, $tmp635);
            $tmp631 = $tmp636.value;
            $l634:;
            panda$core$Bit $tmp637 = { $tmp631 };
            if ($tmp637.value) {
            {
                panda$core$String* $tmp642 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start629);
                $tmp641 = $tmp642;
                panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s640, $tmp641);
                $tmp639 = $tmp643;
                panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s644);
                $tmp638 = $tmp645;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start629, $tmp638);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
                $tmp647 = NULL;
                $returnValue646 = $tmp647;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp647));
                $tmp622 = 0;
                goto $l620;
                $l648:;
                $tmp618 = 0;
                goto $l616;
                $l649:;
                return $returnValue646;
            }
            }
            $tmp652 = NULL;
            result651 = $tmp652;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp652));
            panda$core$MutableString* $tmp656 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp656);
            $tmp655 = $tmp656;
            $tmp654 = $tmp655;
            chunk653 = $tmp654;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
            $l657:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp660 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token659 = $tmp660;
                panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token659.kind.$rawValue, start629.kind.$rawValue);
                if ($tmp661.value) {
                {
                    goto $l658;
                }
                }
                {
                    $match$355_13662 = token659.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp663, 13);
                    panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13662.$rawValue, $tmp663);
                    if ($tmp664.value) {
                    {
                        int $tmp667;
                        {
                            panda$core$String* $tmp671 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token659);
                            $tmp670 = $tmp671;
                            $tmp669 = $tmp670;
                            str668 = $tmp669;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                            panda$core$UInt8$init$builtin_uint8(&$tmp673, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp672, $tmp673);
                            panda$core$Bit $tmp674 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str668, $tmp672);
                            if ($tmp674.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start629, &$s675);
                                $tmp676 = NULL;
                                $returnValue646 = $tmp676;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                                $tmp667 = 0;
                                goto $l665;
                                $l677:;
                                $tmp622 = 1;
                                goto $l620;
                                $l678:;
                                $tmp618 = 1;
                                goto $l616;
                                $l679:;
                                return $returnValue646;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk653, str668);
                        }
                        $tmp667 = -1;
                        goto $l665;
                        $l665:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str668));
                        str668 = NULL;
                        switch ($tmp667) {
                            case -1: goto $l681;
                            case 0: goto $l677;
                        }
                        $l681:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp682, 0);
                    panda$core$Bit $tmp683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13662.$rawValue, $tmp682);
                    if ($tmp683.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start629, &$s684);
                        $tmp685 = NULL;
                        $returnValue646 = $tmp685;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
                        $tmp622 = 2;
                        goto $l620;
                        $l686:;
                        $tmp618 = 2;
                        goto $l616;
                        $l687:;
                        return $returnValue646;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp689, 107);
                    panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$355_13662.$rawValue, $tmp689);
                    if ($tmp690.value) {
                    {
                        int $tmp693;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp695 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape694 = $tmp695;
                            panda$core$Int64$init$builtin_int64(&$tmp696, 0);
                            panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape694.kind.$rawValue, $tmp696);
                            if ($tmp697.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start629, &$s698);
                                $tmp699 = NULL;
                                $returnValue646 = $tmp699;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
                                $tmp693 = 0;
                                goto $l691;
                                $l700:;
                                $tmp622 = 3;
                                goto $l620;
                                $l701:;
                                $tmp618 = 3;
                                goto $l616;
                                $l702:;
                                return $returnValue646;
                            }
                            }
                            panda$core$String* $tmp707 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape694);
                            $tmp706 = $tmp707;
                            $tmp705 = $tmp706;
                            escapeText704 = $tmp705;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                            panda$collections$ListView* $tmp711 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText704);
                            $tmp710 = $tmp711;
                            panda$core$Int64$init$builtin_int64(&$tmp712, 0);
                            ITable* $tmp713 = $tmp710->$class->itable;
                            while ($tmp713->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp713 = $tmp713->next;
                            }
                            $fn715 $tmp714 = $tmp713->methods[0];
                            panda$core$Object* $tmp716 = $tmp714($tmp710, $tmp712);
                            $tmp709 = $tmp716;
                            c708 = ((panda$core$Char8$wrapper*) $tmp709)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp709);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
                            {
                                $match$374_21717 = c708;
                                panda$core$UInt8$init$builtin_uint8(&$tmp719, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp718, $tmp719);
                                panda$core$Bit $tmp720 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp718);
                                if ($tmp720.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp722, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp721, $tmp722);
                                    panda$core$MutableString$append$panda$core$Char8(chunk653, $tmp721);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp724, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp723, $tmp724);
                                panda$core$Bit $tmp725 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp723);
                                if ($tmp725.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp727, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp726, $tmp727);
                                    panda$core$MutableString$append$panda$core$Char8(chunk653, $tmp726);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp729, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp728, $tmp729);
                                panda$core$Bit $tmp730 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp728);
                                if ($tmp730.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp732, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp731, $tmp732);
                                    panda$core$MutableString$append$panda$core$Char8(chunk653, $tmp731);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp734, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp733, $tmp734);
                                panda$core$Bit $tmp735 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp733);
                                if ($tmp735.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp737, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp736, $tmp737);
                                    panda$core$MutableString$append$panda$core$Char8(chunk653, $tmp736);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp739, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp738, $tmp739);
                                panda$core$Bit $tmp740 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp738);
                                if ($tmp740.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp742, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp741, $tmp742);
                                    panda$core$MutableString$append$panda$core$Char8(chunk653, $tmp741);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp744, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp743, $tmp744);
                                panda$core$Bit $tmp745 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp743);
                                if ($tmp745.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp747, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp746, $tmp747);
                                    panda$core$MutableString$append$panda$core$Char8(chunk653, $tmp746);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp749, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp748, $tmp749);
                                panda$core$Bit $tmp750 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$374_21717, $tmp748);
                                if ($tmp750.value) {
                                {
                                    {
                                        int $tmp753;
                                        {
                                            oldAllow754 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp755, false);
                                            self->allowLambdas = $tmp755;
                                            org$pandalanguage$pandac$ASTNode* $tmp759 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp758 = $tmp759;
                                            $tmp757 = $tmp758;
                                            expr756 = $tmp757;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp757));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
                                            self->allowLambdas = oldAllow754;
                                            if (((panda$core$Bit) { expr756 == NULL }).value) {
                                            {
                                                $tmp760 = NULL;
                                                $returnValue646 = $tmp760;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp760));
                                                $tmp753 = 0;
                                                goto $l751;
                                                $l761:;
                                                $tmp693 = 1;
                                                goto $l691;
                                                $l762:;
                                                $tmp622 = 4;
                                                goto $l620;
                                                $l763:;
                                                $tmp618 = 4;
                                                goto $l616;
                                                $l764:;
                                                return $returnValue646;
                                            }
                                            }
                                            $tmp767 = NULL;
                                            align766 = $tmp767;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp767));
                                            $tmp769 = NULL;
                                            format768 = $tmp769;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp769));
                                            panda$core$Int64$init$builtin_int64(&$tmp771, 106);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp770, $tmp771);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp772 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp770);
                                            if (((panda$core$Bit) { $tmp772.nonnull }).value) {
                                            {
                                                {
                                                    $tmp773 = align766;
                                                    panda$core$String* $tmp776 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start629);
                                                    $tmp775 = $tmp776;
                                                    $tmp774 = $tmp775;
                                                    align766 = $tmp774;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp778, 96);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp777, $tmp778);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp779 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp777);
                                            if (((panda$core$Bit) { $tmp779.nonnull }).value) {
                                            {
                                                int $tmp782;
                                                {
                                                    {
                                                        $tmp783 = format768;
                                                        panda$core$String* $tmp786 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start629);
                                                        $tmp785 = $tmp786;
                                                        $tmp784 = $tmp785;
                                                        format768 = $tmp784;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
                                                    }
                                                    if (((panda$core$Bit) { format768 == NULL }).value) {
                                                    {
                                                        $tmp787 = NULL;
                                                        $returnValue646 = $tmp787;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
                                                        $tmp782 = 0;
                                                        goto $l780;
                                                        $l788:;
                                                        $tmp753 = 1;
                                                        goto $l751;
                                                        $l789:;
                                                        $tmp693 = 2;
                                                        goto $l691;
                                                        $l790:;
                                                        $tmp622 = 5;
                                                        goto $l620;
                                                        $l791:;
                                                        $tmp618 = 5;
                                                        goto $l616;
                                                        $l792:;
                                                        return $returnValue646;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp797 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp798, 42);
                                                    org$pandalanguage$pandac$Position $tmp800 = (($fn799) expr756->$class->vtable[2])(expr756);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp797, $tmp798, $tmp800, &$s801);
                                                    $tmp796 = $tmp797;
                                                    $tmp795 = $tmp796;
                                                    formattable794 = $tmp795;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp795));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
                                                    org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp806, 4);
                                                    org$pandalanguage$pandac$Position $tmp808 = (($fn807) expr756->$class->vtable[2])(expr756);
                                                    panda$core$Int64$init$builtin_int64(&$tmp810, 90);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp809, $tmp810);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp805, $tmp806, $tmp808, expr756, $tmp809, formattable794);
                                                    $tmp804 = $tmp805;
                                                    $tmp803 = $tmp804;
                                                    cast802 = $tmp803;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                                                    org$pandalanguage$pandac$ASTNode* $tmp814 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp815, 15);
                                                    org$pandalanguage$pandac$Position $tmp817 = (($fn816) expr756->$class->vtable[2])(expr756);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp814, $tmp815, $tmp817, cast802, &$s818);
                                                    $tmp813 = $tmp814;
                                                    $tmp812 = $tmp813;
                                                    dot811 = $tmp812;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                                                    panda$collections$Array* $tmp822 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp822);
                                                    $tmp821 = $tmp822;
                                                    $tmp820 = $tmp821;
                                                    callArgs819 = $tmp820;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp820));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
                                                    org$pandalanguage$pandac$ASTNode* $tmp824 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp825, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp824, $tmp825, start629.position, format768);
                                                    $tmp823 = $tmp824;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs819, ((panda$core$Object*) $tmp823));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
                                                    {
                                                        $tmp826 = expr756;
                                                        org$pandalanguage$pandac$ASTNode* $tmp829 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp830, 8);
                                                        org$pandalanguage$pandac$Position $tmp832 = (($fn831) expr756->$class->vtable[2])(expr756);
                                                        panda$collections$ImmutableArray* $tmp834 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs819);
                                                        $tmp833 = $tmp834;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp829, $tmp830, $tmp832, dot811, $tmp833);
                                                        $tmp828 = $tmp829;
                                                        $tmp827 = $tmp828;
                                                        expr756 = $tmp827;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                                                    }
                                                }
                                                $tmp782 = -1;
                                                goto $l780;
                                                $l780:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs819));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot811));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast802));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable794));
                                                formattable794 = NULL;
                                                cast802 = NULL;
                                                dot811 = NULL;
                                                callArgs819 = NULL;
                                                switch ($tmp782) {
                                                    case -1: goto $l835;
                                                    case 0: goto $l788;
                                                }
                                                $l835:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp837, 101);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp836, $tmp837);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp839 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp836, &$s838);
                                            if (((panda$core$Bit) { !$tmp839.nonnull }).value) {
                                            {
                                                $tmp840 = NULL;
                                                $returnValue646 = $tmp840;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp840));
                                                $tmp753 = 2;
                                                goto $l751;
                                                $l841:;
                                                $tmp693 = 3;
                                                goto $l691;
                                                $l842:;
                                                $tmp622 = 6;
                                                goto $l620;
                                                $l843:;
                                                $tmp618 = 6;
                                                goto $l616;
                                                $l844:;
                                                return $returnValue646;
                                            }
                                            }
                                            if (((panda$core$Bit) { align766 != NULL }).value) {
                                            {
                                                int $tmp848;
                                                {
                                                    if (((panda$core$Bit) { format768 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp849 = expr756;
                                                            org$pandalanguage$pandac$ASTNode* $tmp852 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr756);
                                                            $tmp851 = $tmp852;
                                                            $tmp850 = $tmp851;
                                                            expr756 = $tmp850;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp850));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp857, 42);
                                                    org$pandalanguage$pandac$Position $tmp859 = (($fn858) expr756->$class->vtable[2])(expr756);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp856, $tmp857, $tmp859, &$s860);
                                                    $tmp855 = $tmp856;
                                                    $tmp854 = $tmp855;
                                                    pandaType853 = $tmp854;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                                                    org$pandalanguage$pandac$ASTNode* $tmp864 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp865, 15);
                                                    org$pandalanguage$pandac$Position $tmp867 = (($fn866) expr756->$class->vtable[2])(expr756);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp864, $tmp865, $tmp867, pandaType853, &$s868);
                                                    $tmp863 = $tmp864;
                                                    $tmp862 = $tmp863;
                                                    callTarget861 = $tmp862;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
                                                    panda$collections$Array* $tmp872 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp872);
                                                    $tmp871 = $tmp872;
                                                    $tmp870 = $tmp871;
                                                    callArgs869 = $tmp870;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs869, ((panda$core$Object*) expr756));
                                                    org$pandalanguage$pandac$ASTNode* $tmp874 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp875, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp874, $tmp875, start629.position, align766);
                                                    $tmp873 = $tmp874;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs869, ((panda$core$Object*) $tmp873));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
                                                    {
                                                        $tmp876 = expr756;
                                                        org$pandalanguage$pandac$ASTNode* $tmp879 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp880, 8);
                                                        org$pandalanguage$pandac$Position $tmp882 = (($fn881) expr756->$class->vtable[2])(expr756);
                                                        panda$collections$ImmutableArray* $tmp884 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs869);
                                                        $tmp883 = $tmp884;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp879, $tmp880, $tmp882, callTarget861, $tmp883);
                                                        $tmp878 = $tmp879;
                                                        $tmp877 = $tmp878;
                                                        expr756 = $tmp877;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                                                    }
                                                }
                                                $tmp848 = -1;
                                                goto $l846;
                                                $l846:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs869));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget861));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType853));
                                                pandaType853 = NULL;
                                                callTarget861 = NULL;
                                                callArgs869 = NULL;
                                                switch ($tmp848) {
                                                    case -1: goto $l885;
                                                }
                                                $l885:;
                                            }
                                            }
                                            panda$core$String* $tmp889 = panda$core$MutableString$finish$R$panda$core$String(chunk653);
                                            $tmp888 = $tmp889;
                                            $tmp887 = $tmp888;
                                            text886 = $tmp887;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                                            {
                                                $tmp890 = chunk653;
                                                panda$core$MutableString* $tmp893 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp893);
                                                $tmp892 = $tmp893;
                                                $tmp891 = $tmp892;
                                                chunk653 = $tmp891;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
                                            }
                                            ITable* $tmp896 = ((panda$core$Equatable*) text886)->$class->itable;
                                            while ($tmp896->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                                                $tmp896 = $tmp896->next;
                                            }
                                            $fn898 $tmp897 = $tmp896->methods[1];
                                            panda$core$Bit $tmp899 = $tmp897(((panda$core$Equatable*) text886), ((panda$core$Equatable*) &$s895));
                                            bool $tmp894 = $tmp899.value;
                                            if ($tmp894) goto $l900;
                                            $tmp894 = ((panda$core$Bit) { result651 != NULL }).value;
                                            $l900:;
                                            panda$core$Bit $tmp901 = { $tmp894 };
                                            if ($tmp901.value) {
                                            {
                                                {
                                                    $tmp902 = result651;
                                                    org$pandalanguage$pandac$ASTNode* $tmp906 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp907, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp906, $tmp907, start629.position, text886);
                                                    $tmp905 = $tmp906;
                                                    org$pandalanguage$pandac$ASTNode* $tmp908 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result651, $tmp905);
                                                    $tmp904 = $tmp908;
                                                    $tmp903 = $tmp904;
                                                    result651 = $tmp903;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp903));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
                                                }
                                                {
                                                    $tmp909 = result651;
                                                    org$pandalanguage$pandac$ASTNode* $tmp912 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result651, expr756);
                                                    $tmp911 = $tmp912;
                                                    $tmp910 = $tmp911;
                                                    result651 = $tmp910;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp910));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp913 = result651;
                                                    org$pandalanguage$pandac$ASTNode* $tmp916 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr756);
                                                    $tmp915 = $tmp916;
                                                    $tmp914 = $tmp915;
                                                    result651 = $tmp914;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
                                                }
                                            }
                                            }
                                        }
                                        $tmp753 = -1;
                                        goto $l751;
                                        $l751:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text886));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format768));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align766));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr756));
                                        expr756 = NULL;
                                        text886 = NULL;
                                        switch ($tmp753) {
                                            case -1: goto $l917;
                                            case 0: goto $l761;
                                            case 1: goto $l789;
                                            case 2: goto $l841;
                                        }
                                        $l917:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token659, &$s918);
                                    $tmp919 = NULL;
                                    $returnValue646 = $tmp919;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp919));
                                    $tmp693 = 4;
                                    goto $l691;
                                    $l920:;
                                    $tmp622 = 7;
                                    goto $l620;
                                    $l921:;
                                    $tmp618 = 7;
                                    goto $l616;
                                    $l922:;
                                    return $returnValue646;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp926 = panda$core$String$start$R$panda$core$String$Index(escapeText704);
                            panda$core$String$Index $tmp927 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText704, $tmp926);
                            panda$core$Bit$init$builtin_bit(&$tmp928, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp925, ((panda$core$String$Index$nullable) { $tmp927, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp928);
                            panda$core$String* $tmp929 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText704, $tmp925);
                            $tmp924 = $tmp929;
                            panda$core$MutableString$append$panda$core$String(chunk653, $tmp924);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
                        }
                        $tmp693 = -1;
                        goto $l691;
                        $l691:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText704));
                        escapeText704 = NULL;
                        switch ($tmp693) {
                            case -1: goto $l930;
                            case 4: goto $l920;
                            case 3: goto $l842;
                            case 0: goto $l700;
                            case 1: goto $l762;
                            case 2: goto $l790;
                        }
                        $l930:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp932 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token659);
                        $tmp931 = $tmp932;
                        panda$core$MutableString$append$panda$core$String(chunk653, $tmp931);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l658:;
            org$pandalanguage$pandac$ASTNode* $tmp936 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp937, 38);
            panda$core$String* $tmp939 = panda$core$MutableString$finish$R$panda$core$String(chunk653);
            $tmp938 = $tmp939;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp936, $tmp937, start629.position, $tmp938);
            $tmp935 = $tmp936;
            org$pandalanguage$pandac$ASTNode* $tmp940 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result651, $tmp935);
            $tmp934 = $tmp940;
            $tmp933 = $tmp934;
            $returnValue646 = $tmp933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
            $tmp622 = 8;
            goto $l620;
            $l941:;
            $tmp618 = 8;
            goto $l616;
            $l942:;
            return $returnValue646;
        }
        $l620:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto623));
        auto623 = NULL;
        chunk653 = NULL;
        switch ($tmp622) {
            case 7: goto $l921;
            case 5: goto $l791;
            case 2: goto $l686;
            case 3: goto $l701;
            case 6: goto $l843;
            case 0: goto $l648;
            case 1: goto $l678;
            case 8: goto $l941;
            case 4: goto $l763;
        }
        $l944:;
    }
    $tmp618 = -1;
    goto $l616;
    $l616:;
    panda$core$Bit $tmp946 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1619);
    if ($tmp946.value) goto $l947; else goto $l948;
    $l948:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s949, (panda$core$Int64) { 341 }, &$s950);
    abort();
    $l947:;
    switch ($tmp618) {
        case 5: goto $l792;
        case 8: goto $l942;
        case 7: goto $l922;
        case -1: goto $l945;
        case 1: goto $l679;
        case 3: goto $l702;
        case 2: goto $l687;
        case 4: goto $l764;
        case 6: goto $l844;
        case 0: goto $l649;
    }
    $l945:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start954;
    org$pandalanguage$pandac$parser$Token$Kind $tmp955;
    panda$core$Int64 $tmp956;
    org$pandalanguage$pandac$ASTNode* $returnValue959;
    org$pandalanguage$pandac$ASTNode* $tmp960;
    org$pandalanguage$pandac$ASTNode* expr963 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp964;
    org$pandalanguage$pandac$ASTNode* $tmp965;
    org$pandalanguage$pandac$ASTNode* $tmp967;
    org$pandalanguage$pandac$ASTNode* $match$460_9973 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp974;
    panda$core$Int64 $tmp975;
    org$pandalanguage$pandac$Position firstPosition977;
    panda$core$String* firstName979 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp981;
    panda$core$Int64 $tmp982;
    panda$collections$Array* parameters987 = NULL;
    panda$collections$Array* $tmp988;
    panda$collections$Array* $tmp989;
    org$pandalanguage$pandac$ASTNode* firstType991 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp992;
    org$pandalanguage$pandac$ASTNode* $tmp993;
    org$pandalanguage$pandac$ASTNode* $tmp995;
    org$pandalanguage$pandac$ASTNode* $tmp1000;
    panda$core$Int64 $tmp1002;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1006;
    panda$core$Int64 $tmp1007;
    org$pandalanguage$pandac$parser$Token$nullable nextName1012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1013;
    panda$core$Int64 $tmp1014;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1017;
    panda$core$Int64 $tmp1018;
    org$pandalanguage$pandac$ASTNode* $tmp1021;
    org$pandalanguage$pandac$ASTNode* nextType1027 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1028;
    org$pandalanguage$pandac$ASTNode* $tmp1029;
    org$pandalanguage$pandac$ASTNode* $tmp1031;
    org$pandalanguage$pandac$ASTNode* $tmp1037;
    panda$core$Int64 $tmp1039;
    panda$core$String* $tmp1040;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1043;
    panda$core$Int64 $tmp1044;
    org$pandalanguage$pandac$ASTNode* $tmp1047;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1052;
    panda$core$Int64 $tmp1053;
    org$pandalanguage$pandac$ASTNode* $tmp1056;
    org$pandalanguage$pandac$ASTNode* body1061 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1062;
    org$pandalanguage$pandac$ASTNode* $tmp1063;
    org$pandalanguage$pandac$ASTNode* $tmp1065;
    org$pandalanguage$pandac$ASTNode* $tmp1070;
    org$pandalanguage$pandac$ASTNode* $tmp1071;
    panda$core$Int64 $tmp1073;
    panda$collections$ImmutableArray* $tmp1074;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1081;
    panda$core$Int64 $tmp1082;
    panda$collections$Array* parameters1087 = NULL;
    panda$collections$Array* $tmp1088;
    panda$collections$Array* $tmp1089;
    panda$core$Bit validLambda1091;
    panda$core$Bit $tmp1092;
    org$pandalanguage$pandac$ASTNode* nextExpr1098 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1099;
    org$pandalanguage$pandac$ASTNode* $tmp1100;
    org$pandalanguage$pandac$ASTNode* $tmp1102;
    org$pandalanguage$pandac$ASTNode* $tmp1110;
    panda$core$Int64 $tmp1115;
    panda$core$Bit $tmp1117;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1121;
    panda$core$Int64 $tmp1122;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1124;
    panda$core$Int64 $tmp1125;
    org$pandalanguage$pandac$ASTNode* $tmp1128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1135;
    panda$core$Int64 $tmp1136;
    org$pandalanguage$pandac$ASTNode* body1142 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1143;
    org$pandalanguage$pandac$ASTNode* $tmp1144;
    org$pandalanguage$pandac$ASTNode* $tmp1146;
    org$pandalanguage$pandac$ASTNode* $tmp1152;
    org$pandalanguage$pandac$ASTNode* $tmp1153;
    panda$core$Int64 $tmp1155;
    panda$collections$ImmutableArray* $tmp1156;
    org$pandalanguage$pandac$ASTNode* $tmp1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1171;
    panda$core$Int64 $tmp1172;
    org$pandalanguage$pandac$ASTNode* $tmp1175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1179;
    panda$core$Int64 $tmp1180;
    panda$collections$Array* parameters1185 = NULL;
    panda$collections$Array* $tmp1186;
    panda$collections$Array* $tmp1187;
    org$pandalanguage$pandac$ASTNode* body1189 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1190;
    org$pandalanguage$pandac$ASTNode* $tmp1191;
    org$pandalanguage$pandac$ASTNode* $tmp1193;
    org$pandalanguage$pandac$ASTNode* $tmp1198;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    panda$core$Int64 $tmp1201;
    panda$collections$ImmutableArray* $tmp1202;
    org$pandalanguage$pandac$ASTNode* $tmp1209;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1216;
    panda$core$Int64 $tmp1217;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1219;
    panda$core$Int64 $tmp1220;
    org$pandalanguage$pandac$ASTNode* $tmp1222;
    panda$collections$Array* arguments1227 = NULL;
    panda$collections$Array* $tmp1228;
    panda$collections$Array* $tmp1229;
    org$pandalanguage$pandac$ASTNode* nextExpr1236 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1237;
    org$pandalanguage$pandac$ASTNode* $tmp1238;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1248;
    panda$core$Int64 $tmp1249;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1251;
    panda$core$Int64 $tmp1252;
    org$pandalanguage$pandac$ASTNode* $tmp1255;
    int $tmp953;
    {
        panda$core$Int64$init$builtin_int64(&$tmp956, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp955, $tmp956);
        org$pandalanguage$pandac$parser$Token$nullable $tmp958 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp955, &$s957);
        start954 = $tmp958;
        if (((panda$core$Bit) { !start954.nonnull }).value) {
        {
            $tmp960 = NULL;
            $returnValue959 = $tmp960;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
            $tmp953 = 0;
            goto $l951;
            $l961:;
            return $returnValue959;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp966 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp965 = $tmp966;
        $tmp964 = $tmp965;
        expr963 = $tmp964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
        if (((panda$core$Bit) { expr963 == NULL }).value) {
        {
            $tmp967 = NULL;
            $returnValue959 = $tmp967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
            $tmp953 = 1;
            goto $l951;
            $l968:;
            return $returnValue959;
        }
        }
        int $tmp972;
        {
            $tmp974 = expr963;
            $match$460_9973 = $tmp974;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp974));
            panda$core$Int64$init$builtin_int64(&$tmp975, 20);
            panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_9973->$rawValue, $tmp975);
            if ($tmp976.value) {
            {
                org$pandalanguage$pandac$Position* $tmp978 = ((org$pandalanguage$pandac$Position*) ((char*) $match$460_9973->$data + 0));
                firstPosition977 = *$tmp978;
                panda$core$String** $tmp980 = ((panda$core$String**) ((char*) $match$460_9973->$data + 16));
                firstName979 = *$tmp980;
                panda$core$Int64$init$builtin_int64(&$tmp982, 96);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp981, $tmp982);
                org$pandalanguage$pandac$parser$Token$nullable $tmp983 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp981);
                if (((panda$core$Bit) { $tmp983.nonnull }).value) {
                {
                    int $tmp986;
                    {
                        panda$collections$Array* $tmp990 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp990);
                        $tmp989 = $tmp990;
                        $tmp988 = $tmp989;
                        parameters987 = $tmp988;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                        org$pandalanguage$pandac$ASTNode* $tmp994 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp993 = $tmp994;
                        $tmp992 = $tmp993;
                        firstType991 = $tmp992;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
                        if (((panda$core$Bit) { firstType991 == NULL }).value) {
                        {
                            $tmp995 = NULL;
                            $returnValue959 = $tmp995;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
                            $tmp986 = 0;
                            goto $l984;
                            $l996:;
                            $tmp972 = 0;
                            goto $l970;
                            $l997:;
                            $tmp953 = 2;
                            goto $l951;
                            $l998:;
                            return $returnValue959;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1001 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1002, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1001, $tmp1002, firstPosition977, firstName979, firstType991);
                        $tmp1000 = $tmp1001;
                        panda$collections$Array$add$panda$collections$Array$T(parameters987, ((panda$core$Object*) $tmp1000));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
                        $l1003:;
                        panda$core$Int64$init$builtin_int64(&$tmp1007, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1006, $tmp1007);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1008 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1006);
                        bool $tmp1005 = ((panda$core$Bit) { $tmp1008.nonnull }).value;
                        if (!$tmp1005) goto $l1004;
                        {
                            int $tmp1011;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp1014, 49);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1013, $tmp1014);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1016 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1013, &$s1015);
                                nextName1012 = $tmp1016;
                                panda$core$Int64$init$builtin_int64(&$tmp1018, 96);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1017, $tmp1018);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1020 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1017, &$s1019);
                                if (((panda$core$Bit) { !$tmp1020.nonnull }).value) {
                                {
                                    $tmp1021 = NULL;
                                    $returnValue959 = $tmp1021;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1021));
                                    $tmp1011 = 0;
                                    goto $l1009;
                                    $l1022:;
                                    $tmp986 = 1;
                                    goto $l984;
                                    $l1023:;
                                    $tmp972 = 1;
                                    goto $l970;
                                    $l1024:;
                                    $tmp953 = 3;
                                    goto $l951;
                                    $l1025:;
                                    return $returnValue959;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1030 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1029 = $tmp1030;
                                $tmp1028 = $tmp1029;
                                nextType1027 = $tmp1028;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1028));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1029));
                                if (((panda$core$Bit) { nextType1027 == NULL }).value) {
                                {
                                    $tmp1031 = NULL;
                                    $returnValue959 = $tmp1031;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                                    $tmp1011 = 1;
                                    goto $l1009;
                                    $l1032:;
                                    $tmp986 = 2;
                                    goto $l984;
                                    $l1033:;
                                    $tmp972 = 2;
                                    goto $l970;
                                    $l1034:;
                                    $tmp953 = 4;
                                    goto $l951;
                                    $l1035:;
                                    return $returnValue959;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1038 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1039, 31);
                                panda$core$String* $tmp1041 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName1012.value));
                                $tmp1040 = $tmp1041;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1038, $tmp1039, ((org$pandalanguage$pandac$parser$Token) nextName1012.value).position, $tmp1040, nextType1027);
                                $tmp1037 = $tmp1038;
                                panda$collections$Array$add$panda$collections$Array$T(parameters987, ((panda$core$Object*) $tmp1037));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                            }
                            $tmp1011 = -1;
                            goto $l1009;
                            $l1009:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType1027));
                            nextType1027 = NULL;
                            switch ($tmp1011) {
                                case 1: goto $l1032;
                                case -1: goto $l1042;
                                case 0: goto $l1022;
                            }
                            $l1042:;
                        }
                        goto $l1003;
                        $l1004:;
                        panda$core$Int64$init$builtin_int64(&$tmp1044, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1043, $tmp1044);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1046 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1043, &$s1045);
                        if (((panda$core$Bit) { !$tmp1046.nonnull }).value) {
                        {
                            $tmp1047 = NULL;
                            $returnValue959 = $tmp1047;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                            $tmp986 = 3;
                            goto $l984;
                            $l1048:;
                            $tmp972 = 3;
                            goto $l970;
                            $l1049:;
                            $tmp953 = 5;
                            goto $l951;
                            $l1050:;
                            return $returnValue959;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1053, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1052, $tmp1053);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1055 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1052, &$s1054);
                        if (((panda$core$Bit) { !$tmp1055.nonnull }).value) {
                        {
                            $tmp1056 = NULL;
                            $returnValue959 = $tmp1056;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
                            $tmp986 = 4;
                            goto $l984;
                            $l1057:;
                            $tmp972 = 4;
                            goto $l970;
                            $l1058:;
                            $tmp953 = 6;
                            goto $l951;
                            $l1059:;
                            return $returnValue959;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1064 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1063 = $tmp1064;
                        $tmp1062 = $tmp1063;
                        body1061 = $tmp1062;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1063));
                        if (((panda$core$Bit) { body1061 == NULL }).value) {
                        {
                            $tmp1065 = NULL;
                            $returnValue959 = $tmp1065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                            $tmp986 = 5;
                            goto $l984;
                            $l1066:;
                            $tmp972 = 5;
                            goto $l970;
                            $l1067:;
                            $tmp953 = 7;
                            goto $l951;
                            $l1068:;
                            return $returnValue959;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1072 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1073, 43);
                        panda$collections$ImmutableArray* $tmp1075 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters987);
                        $tmp1074 = $tmp1075;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1072, $tmp1073, ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp1074, body1061);
                        $tmp1071 = $tmp1072;
                        $tmp1070 = $tmp1071;
                        $returnValue959 = $tmp1070;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
                        $tmp986 = 6;
                        goto $l984;
                        $l1076:;
                        $tmp972 = 6;
                        goto $l970;
                        $l1077:;
                        $tmp953 = 8;
                        goto $l951;
                        $l1078:;
                        return $returnValue959;
                    }
                    $l984:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1061));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType991));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters987));
                    parameters987 = NULL;
                    firstType991 = NULL;
                    body1061 = NULL;
                    switch ($tmp986) {
                        case 2: goto $l1033;
                        case 5: goto $l1066;
                        case 4: goto $l1057;
                        case 1: goto $l1023;
                        case 0: goto $l996;
                        case 6: goto $l1076;
                        case 3: goto $l1048;
                    }
                    $l1080:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1082, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1081, $tmp1082);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1083 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1081);
                if (((panda$core$Bit) { $tmp1083.nonnull }).value) {
                {
                    int $tmp1086;
                    {
                        panda$collections$Array* $tmp1090 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1090);
                        $tmp1089 = $tmp1090;
                        $tmp1088 = $tmp1089;
                        parameters1087 = $tmp1088;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1088));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1087, ((panda$core$Object*) expr963));
                        panda$core$Bit$init$builtin_bit(&$tmp1092, true);
                        validLambda1091 = $tmp1092;
                        $l1093:;
                        {
                            int $tmp1097;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1101 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1100 = $tmp1101;
                                $tmp1099 = $tmp1100;
                                nextExpr1098 = $tmp1099;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1099));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1100));
                                if (((panda$core$Bit) { nextExpr1098 == NULL }).value) {
                                {
                                    $tmp1102 = NULL;
                                    $returnValue959 = $tmp1102;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1102));
                                    $tmp1097 = 0;
                                    goto $l1095;
                                    $l1103:;
                                    $tmp1086 = 0;
                                    goto $l1084;
                                    $l1104:;
                                    $tmp972 = 7;
                                    goto $l970;
                                    $l1105:;
                                    $tmp953 = 9;
                                    goto $l951;
                                    $l1106:;
                                    return $returnValue959;
                                }
                                }
                                bool $tmp1108 = validLambda1091.value;
                                if (!$tmp1108) goto $l1109;
                                $tmp1110 = nextExpr1098;
                                panda$core$Bit $tmp1114;
                                if (((panda$core$Bit) { $tmp1110 != NULL }).value) goto $l1111; else goto $l1112;
                                $l1111:;
                                panda$core$Int64$init$builtin_int64(&$tmp1115, 20);
                                panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1110->$rawValue, $tmp1115);
                                $tmp1114 = $tmp1116;
                                goto $l1113;
                                $l1112:;
                                panda$core$Bit$init$builtin_bit(&$tmp1117, false);
                                $tmp1114 = $tmp1117;
                                goto $l1113;
                                $l1113:;
                                $tmp1108 = $tmp1114.value;
                                $l1109:;
                                panda$core$Bit $tmp1118 = { $tmp1108 };
                                validLambda1091 = $tmp1118;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1087, ((panda$core$Object*) nextExpr1098));
                            }
                            $tmp1097 = -1;
                            goto $l1095;
                            $l1095:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1098));
                            nextExpr1098 = NULL;
                            switch ($tmp1097) {
                                case 0: goto $l1103;
                                case -1: goto $l1119;
                            }
                            $l1119:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1122, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1121, $tmp1122);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1123 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1121);
                        bool $tmp1120 = ((panda$core$Bit) { $tmp1123.nonnull }).value;
                        if ($tmp1120) goto $l1093;
                        $l1094:;
                        panda$core$Int64$init$builtin_int64(&$tmp1125, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1124, $tmp1125);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1127 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1124, &$s1126);
                        if (((panda$core$Bit) { !$tmp1127.nonnull }).value) {
                        {
                            $tmp1128 = NULL;
                            $returnValue959 = $tmp1128;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
                            $tmp1086 = 1;
                            goto $l1084;
                            $l1129:;
                            $tmp972 = 8;
                            goto $l970;
                            $l1130:;
                            $tmp953 = 10;
                            goto $l951;
                            $l1131:;
                            return $returnValue959;
                        }
                        }
                        bool $tmp1133 = validLambda1091.value;
                        if (!$tmp1133) goto $l1134;
                        panda$core$Int64$init$builtin_int64(&$tmp1136, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1135, $tmp1136);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1137 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1135);
                        $tmp1133 = ((panda$core$Bit) { $tmp1137.nonnull }).value;
                        $l1134:;
                        panda$core$Bit $tmp1138 = { $tmp1133 };
                        if ($tmp1138.value) {
                        {
                            int $tmp1141;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1145 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1144 = $tmp1145;
                                $tmp1143 = $tmp1144;
                                body1142 = $tmp1143;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                                if (((panda$core$Bit) { body1142 == NULL }).value) {
                                {
                                    $tmp1146 = NULL;
                                    $returnValue959 = $tmp1146;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
                                    $tmp1141 = 0;
                                    goto $l1139;
                                    $l1147:;
                                    $tmp1086 = 2;
                                    goto $l1084;
                                    $l1148:;
                                    $tmp972 = 9;
                                    goto $l970;
                                    $l1149:;
                                    $tmp953 = 11;
                                    goto $l951;
                                    $l1150:;
                                    return $returnValue959;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1154 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1155, 45);
                                panda$collections$ImmutableArray* $tmp1157 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1087);
                                $tmp1156 = $tmp1157;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1154, $tmp1155, ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp1156, body1142);
                                $tmp1153 = $tmp1154;
                                $tmp1152 = $tmp1153;
                                $returnValue959 = $tmp1152;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1156));
                                $tmp1141 = 1;
                                goto $l1139;
                                $l1158:;
                                $tmp1086 = 3;
                                goto $l1084;
                                $l1159:;
                                $tmp972 = 10;
                                goto $l970;
                                $l1160:;
                                $tmp953 = 12;
                                goto $l951;
                                $l1161:;
                                return $returnValue959;
                            }
                            $l1139:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1142));
                            body1142 = NULL;
                            switch ($tmp1141) {
                                case 0: goto $l1147;
                                case 1: goto $l1158;
                            }
                            $l1163:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start954.value), &$s1164);
                        $tmp1165 = NULL;
                        $returnValue959 = $tmp1165;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
                        $tmp1086 = 4;
                        goto $l1084;
                        $l1166:;
                        $tmp972 = 11;
                        goto $l970;
                        $l1167:;
                        $tmp953 = 13;
                        goto $l951;
                        $l1168:;
                        return $returnValue959;
                    }
                    $l1084:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1087));
                    parameters1087 = NULL;
                    switch ($tmp1086) {
                        case 0: goto $l1104;
                        case 3: goto $l1159;
                        case 1: goto $l1129;
                        case 2: goto $l1148;
                        case 4: goto $l1166;
                    }
                    $l1170:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1172, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1171, $tmp1172);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1174 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1171, &$s1173);
                if (((panda$core$Bit) { !$tmp1174.nonnull }).value) {
                {
                    $tmp1175 = NULL;
                    $returnValue959 = $tmp1175;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
                    $tmp972 = 12;
                    goto $l970;
                    $l1176:;
                    $tmp953 = 14;
                    goto $l951;
                    $l1177:;
                    return $returnValue959;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1180, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1179, $tmp1180);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1181 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1179);
                if (((panda$core$Bit) { $tmp1181.nonnull }).value) {
                {
                    int $tmp1184;
                    {
                        panda$collections$Array* $tmp1188 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1188);
                        $tmp1187 = $tmp1188;
                        $tmp1186 = $tmp1187;
                        parameters1185 = $tmp1186;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1185, ((panda$core$Object*) expr963));
                        org$pandalanguage$pandac$ASTNode* $tmp1192 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1191 = $tmp1192;
                        $tmp1190 = $tmp1191;
                        body1189 = $tmp1190;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
                        if (((panda$core$Bit) { body1189 == NULL }).value) {
                        {
                            $tmp1193 = NULL;
                            $returnValue959 = $tmp1193;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
                            $tmp1184 = 0;
                            goto $l1182;
                            $l1194:;
                            $tmp972 = 13;
                            goto $l970;
                            $l1195:;
                            $tmp953 = 15;
                            goto $l951;
                            $l1196:;
                            return $returnValue959;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1200 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1201, 45);
                        panda$collections$ImmutableArray* $tmp1203 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1185);
                        $tmp1202 = $tmp1203;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1200, $tmp1201, ((org$pandalanguage$pandac$parser$Token) start954.value).position, $tmp1202, body1189);
                        $tmp1199 = $tmp1200;
                        $tmp1198 = $tmp1199;
                        $returnValue959 = $tmp1198;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1202));
                        $tmp1184 = 1;
                        goto $l1182;
                        $l1204:;
                        $tmp972 = 14;
                        goto $l970;
                        $l1205:;
                        $tmp953 = 16;
                        goto $l951;
                        $l1206:;
                        return $returnValue959;
                    }
                    $l1182:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1189));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1185));
                    parameters1185 = NULL;
                    body1189 = NULL;
                    switch ($tmp1184) {
                        case 0: goto $l1194;
                        case 1: goto $l1204;
                    }
                    $l1208:;
                }
                }
                $tmp1209 = expr963;
                $returnValue959 = $tmp1209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                $tmp972 = 15;
                goto $l970;
                $l1210:;
                $tmp953 = 17;
                goto $l951;
                $l1211:;
                return $returnValue959;
            }
            }
            else {
            {
                int $tmp1215;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1217, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1216, $tmp1217);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1218 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1216);
                    if (((panda$core$Bit) { !$tmp1218.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1220, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1219, $tmp1220);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1219, &$s1221);
                        $tmp1222 = expr963;
                        $returnValue959 = $tmp1222;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
                        $tmp1215 = 0;
                        goto $l1213;
                        $l1223:;
                        $tmp972 = 16;
                        goto $l970;
                        $l1224:;
                        $tmp953 = 18;
                        goto $l951;
                        $l1225:;
                        return $returnValue959;
                    }
                    }
                    panda$collections$Array* $tmp1230 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1230);
                    $tmp1229 = $tmp1230;
                    $tmp1228 = $tmp1229;
                    arguments1227 = $tmp1228;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1229));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1227, ((panda$core$Object*) expr963));
                    $l1231:;
                    {
                        int $tmp1235;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1239 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1238 = $tmp1239;
                            $tmp1237 = $tmp1238;
                            nextExpr1236 = $tmp1237;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1237));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
                            if (((panda$core$Bit) { nextExpr1236 == NULL }).value) {
                            {
                                $tmp1240 = NULL;
                                $returnValue959 = $tmp1240;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1240));
                                $tmp1235 = 0;
                                goto $l1233;
                                $l1241:;
                                $tmp1215 = 1;
                                goto $l1213;
                                $l1242:;
                                $tmp972 = 17;
                                goto $l970;
                                $l1243:;
                                $tmp953 = 19;
                                goto $l951;
                                $l1244:;
                                return $returnValue959;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1227, ((panda$core$Object*) nextExpr1236));
                        }
                        $tmp1235 = -1;
                        goto $l1233;
                        $l1233:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1236));
                        nextExpr1236 = NULL;
                        switch ($tmp1235) {
                            case 0: goto $l1241;
                            case -1: goto $l1246;
                        }
                        $l1246:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1249, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1248, $tmp1249);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1248);
                    bool $tmp1247 = ((panda$core$Bit) { $tmp1250.nonnull }).value;
                    if ($tmp1247) goto $l1231;
                    $l1232:;
                    panda$core$Int64$init$builtin_int64(&$tmp1252, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1251, $tmp1252);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1251, &$s1253);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start954.value), &$s1254);
                    $tmp1255 = NULL;
                    $returnValue959 = $tmp1255;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1255));
                    $tmp1215 = 2;
                    goto $l1213;
                    $l1256:;
                    $tmp972 = 18;
                    goto $l970;
                    $l1257:;
                    $tmp953 = 20;
                    goto $l951;
                    $l1258:;
                    return $returnValue959;
                }
                $l1213:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1227));
                arguments1227 = NULL;
                switch ($tmp1215) {
                    case 2: goto $l1256;
                    case 1: goto $l1242;
                    case 0: goto $l1223;
                }
                $l1260:;
            }
            }
        }
        $tmp972 = -1;
        goto $l970;
        $l970:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp974));
        switch ($tmp972) {
            case 1: goto $l1024;
            case 9: goto $l1149;
            case 6: goto $l1077;
            case 17: goto $l1243;
            case 16: goto $l1224;
            case 11: goto $l1167;
            case 12: goto $l1176;
            case 13: goto $l1195;
            case 5: goto $l1067;
            case 14: goto $l1205;
            case 2: goto $l1034;
            case 10: goto $l1160;
            case 7: goto $l1105;
            case -1: goto $l1261;
            case 3: goto $l1049;
            case 0: goto $l997;
            case 18: goto $l1257;
            case 4: goto $l1058;
            case 15: goto $l1210;
            case 8: goto $l1130;
        }
        $l1261:;
    }
    $tmp953 = -1;
    goto $l951;
    $l951:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr963));
    expr963 = NULL;
    switch ($tmp953) {
        case 18: goto $l1225;
        case 17: goto $l1211;
        case 3: goto $l1025;
        case 11: goto $l1150;
        case 14: goto $l1177;
        case 19: goto $l1244;
        case 10: goto $l1131;
        case 12: goto $l1161;
        case 15: goto $l1196;
        case 13: goto $l1168;
        case 7: goto $l1068;
        case 16: goto $l1206;
        case 4: goto $l1035;
        case 5: goto $l1050;
        case -1: goto $l1262;
        case 2: goto $l998;
        case 9: goto $l1106;
        case 20: goto $l1258;
        case 1: goto $l968;
        case 0: goto $l961;
        case 6: goto $l1059;
        case 8: goto $l1078;
    }
    $l1262:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1266;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1267;
    panda$core$Int64 $tmp1268;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1271;
    panda$core$Int64 $tmp1272;
    org$pandalanguage$pandac$ASTNode* t1277 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1278;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    org$pandalanguage$pandac$ASTNode* $returnValue1281;
    org$pandalanguage$pandac$ASTNode* $tmp1282;
    panda$collections$Array* parameters1286 = NULL;
    panda$collections$Array* $tmp1287;
    panda$collections$Array* $tmp1288;
    org$pandalanguage$pandac$ASTNode* $tmp1290;
    panda$core$Int64 $tmp1292;
    panda$core$String* $tmp1293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1295;
    panda$core$Int64 $tmp1296;
    org$pandalanguage$pandac$ASTNode* $tmp1299;
    org$pandalanguage$pandac$ASTNode* expr1303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1304;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    org$pandalanguage$pandac$ASTNode* $tmp1307;
    org$pandalanguage$pandac$ASTNode* $tmp1311;
    org$pandalanguage$pandac$ASTNode* $tmp1312;
    panda$core$Int64 $tmp1314;
    panda$collections$ImmutableArray* $tmp1315;
    panda$collections$Array* parameters1321 = NULL;
    panda$collections$Array* $tmp1322;
    panda$collections$Array* $tmp1323;
    org$pandalanguage$pandac$ASTNode* $tmp1325;
    panda$core$Int64 $tmp1327;
    panda$core$String* $tmp1328;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1330;
    panda$core$Int64 $tmp1331;
    org$pandalanguage$pandac$ASTNode* $tmp1334;
    org$pandalanguage$pandac$ASTNode* expr1337 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1338;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    org$pandalanguage$pandac$ASTNode* $tmp1341;
    org$pandalanguage$pandac$ASTNode* $tmp1344;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    panda$core$Int64 $tmp1347;
    panda$collections$ImmutableArray* $tmp1348;
    int $tmp1265;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1268, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1267, $tmp1268);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1270 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1267, &$s1269);
        start1266 = $tmp1270;
        panda$core$Int64$init$builtin_int64(&$tmp1272, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1271, $tmp1272);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1273 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1271);
        if (((panda$core$Bit) { $tmp1273.nonnull }).value) {
        {
            int $tmp1276;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1280 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1279 = $tmp1280;
                $tmp1278 = $tmp1279;
                t1277 = $tmp1278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                if (((panda$core$Bit) { t1277 == NULL }).value) {
                {
                    $tmp1282 = NULL;
                    $returnValue1281 = $tmp1282;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1282));
                    $tmp1276 = 0;
                    goto $l1274;
                    $l1283:;
                    $tmp1265 = 0;
                    goto $l1263;
                    $l1284:;
                    return $returnValue1281;
                }
                }
                panda$collections$Array* $tmp1289 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1289);
                $tmp1288 = $tmp1289;
                $tmp1287 = $tmp1288;
                parameters1286 = $tmp1287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                org$pandalanguage$pandac$ASTNode* $tmp1291 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1292, 31);
                panda$core$String* $tmp1294 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1266.value));
                $tmp1293 = $tmp1294;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1291, $tmp1292, ((org$pandalanguage$pandac$parser$Token) start1266.value).position, $tmp1293, t1277);
                $tmp1290 = $tmp1291;
                panda$collections$Array$add$panda$collections$Array$T(parameters1286, ((panda$core$Object*) $tmp1290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
                panda$core$Int64$init$builtin_int64(&$tmp1296, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1295, $tmp1296);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1298 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1295, &$s1297);
                if (((panda$core$Bit) { !$tmp1298.nonnull }).value) {
                {
                    $tmp1299 = NULL;
                    $returnValue1281 = $tmp1299;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                    $tmp1276 = 1;
                    goto $l1274;
                    $l1300:;
                    $tmp1265 = 1;
                    goto $l1263;
                    $l1301:;
                    return $returnValue1281;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1306 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1305 = $tmp1306;
                $tmp1304 = $tmp1305;
                expr1303 = $tmp1304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
                if (((panda$core$Bit) { expr1303 == NULL }).value) {
                {
                    $tmp1307 = NULL;
                    $returnValue1281 = $tmp1307;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1307));
                    $tmp1276 = 2;
                    goto $l1274;
                    $l1308:;
                    $tmp1265 = 2;
                    goto $l1263;
                    $l1309:;
                    return $returnValue1281;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1313 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1314, 43);
                panda$collections$ImmutableArray* $tmp1316 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1286);
                $tmp1315 = $tmp1316;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1313, $tmp1314, ((org$pandalanguage$pandac$parser$Token) start1266.value).position, $tmp1315, expr1303);
                $tmp1312 = $tmp1313;
                $tmp1311 = $tmp1312;
                $returnValue1281 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
                $tmp1276 = 3;
                goto $l1274;
                $l1317:;
                $tmp1265 = 3;
                goto $l1263;
                $l1318:;
                return $returnValue1281;
            }
            $l1274:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1286));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1277));
            t1277 = NULL;
            parameters1286 = NULL;
            expr1303 = NULL;
            switch ($tmp1276) {
                case 2: goto $l1308;
                case 1: goto $l1300;
                case 3: goto $l1317;
                case 0: goto $l1283;
            }
            $l1320:;
        }
        }
        panda$collections$Array* $tmp1324 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1324);
        $tmp1323 = $tmp1324;
        $tmp1322 = $tmp1323;
        parameters1321 = $tmp1322;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
        org$pandalanguage$pandac$ASTNode* $tmp1326 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1327, 20);
        panda$core$String* $tmp1329 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1266.value));
        $tmp1328 = $tmp1329;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1326, $tmp1327, ((org$pandalanguage$pandac$parser$Token) start1266.value).position, $tmp1328);
        $tmp1325 = $tmp1326;
        panda$collections$Array$add$panda$collections$Array$T(parameters1321, ((panda$core$Object*) $tmp1325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
        panda$core$Int64$init$builtin_int64(&$tmp1331, 91);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1330, $tmp1331);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1333 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1330, &$s1332);
        if (((panda$core$Bit) { !$tmp1333.nonnull }).value) {
        {
            $tmp1334 = NULL;
            $returnValue1281 = $tmp1334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1334));
            $tmp1265 = 4;
            goto $l1263;
            $l1335:;
            return $returnValue1281;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1340 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1339 = $tmp1340;
        $tmp1338 = $tmp1339;
        expr1337 = $tmp1338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
        if (((panda$core$Bit) { expr1337 == NULL }).value) {
        {
            $tmp1341 = NULL;
            $returnValue1281 = $tmp1341;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1341));
            $tmp1265 = 5;
            goto $l1263;
            $l1342:;
            return $returnValue1281;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1346 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1347, 45);
        panda$collections$ImmutableArray* $tmp1349 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1321);
        $tmp1348 = $tmp1349;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1346, $tmp1347, ((org$pandalanguage$pandac$parser$Token) start1266.value).position, $tmp1348, expr1337);
        $tmp1345 = $tmp1346;
        $tmp1344 = $tmp1345;
        $returnValue1281 = $tmp1344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
        $tmp1265 = 6;
        goto $l1263;
        $l1350:;
        return $returnValue1281;
    }
    $l1263:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1337));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1321));
    parameters1321 = NULL;
    expr1337 = NULL;
    switch ($tmp1265) {
        case 0: goto $l1284;
        case 3: goto $l1318;
        case 1: goto $l1301;
        case 6: goto $l1350;
        case 4: goto $l1335;
        case 5: goto $l1342;
        case 2: goto $l1309;
    }
    $l1352:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1356;
    panda$core$Int64 $tmp1357;
    org$pandalanguage$pandac$ASTNode* $returnValue1360;
    org$pandalanguage$pandac$ASTNode* $tmp1361;
    panda$core$Int64 start1364;
    panda$core$Int64 $tmp1365;
    org$pandalanguage$pandac$ASTNode* regex1367 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    org$pandalanguage$pandac$ASTNode* $tmp1371;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1374;
    panda$core$Int64 $tmp1375;
    org$pandalanguage$pandac$ASTNode* $tmp1378;
    org$pandalanguage$pandac$parser$Token $tmp1383;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1384;
    panda$core$Int64 $tmp1385;
    panda$core$String$Index $tmp1386;
    panda$core$String$Index $tmp1387;
    org$pandalanguage$pandac$ASTNode* $tmp1391;
    int $tmp1355;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1357, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1356, $tmp1357);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1359 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1356, &$s1358);
        if (((panda$core$Bit) { !$tmp1359.nonnull }).value) {
        {
            $tmp1361 = NULL;
            $returnValue1360 = $tmp1361;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
            $tmp1355 = 0;
            goto $l1353;
            $l1362:;
            return $returnValue1360;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1365, 1);
        panda$core$Int64 $tmp1366 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, $tmp1365);
        start1364 = $tmp1366;
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1370 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1369 = $tmp1370;
        $tmp1368 = $tmp1369;
        regex1367 = $tmp1368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1367 == NULL }).value) {
        {
            $tmp1371 = NULL;
            $returnValue1360 = $tmp1371;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
            $tmp1355 = 1;
            goto $l1353;
            $l1372:;
            return $returnValue1360;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1375, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1374, $tmp1375);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1377 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1374, &$s1376);
        if (((panda$core$Bit) { !$tmp1377.nonnull }).value) {
        {
            $tmp1378 = NULL;
            $returnValue1360 = $tmp1378;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
            $tmp1355 = 2;
            goto $l1353;
            $l1379:;
            return $returnValue1360;
        }
        }
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn1381) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            (($fn1382) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            panda$core$Int64$init$builtin_int64(&$tmp1385, 2);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1384, $tmp1385);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1386, start1364);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1387, self->lexer->dfa->offset);
            org$pandalanguage$pandac$Position $tmp1389 = (($fn1388) regex1367->$class->vtable[2])(regex1367);
            org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(&$tmp1383, $tmp1384, $tmp1386, $tmp1387, $tmp1389);
            (($fn1390) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, $tmp1383);
        }
        }
        $tmp1391 = regex1367;
        $returnValue1360 = $tmp1391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
        $tmp1355 = 3;
        goto $l1353;
        $l1392:;
        return $returnValue1360;
    }
    $l1353:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1367));
    regex1367 = NULL;
    switch ($tmp1355) {
        case 3: goto $l1392;
        case 1: goto $l1372;
        case 2: goto $l1379;
        case 0: goto $l1362;
    }
    $l1394:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1395;
    org$pandalanguage$pandac$parser$Token$Kind $match$632_91397;
    panda$core$Int64 $tmp1398;
    org$pandalanguage$pandac$parser$Token$Kind check1400;
    panda$core$Int64 $tmp1405;
    panda$core$Int64 $tmp1409;
    org$pandalanguage$pandac$ASTNode* $returnValue1412;
    org$pandalanguage$pandac$ASTNode* $tmp1413;
    org$pandalanguage$pandac$ASTNode* $tmp1414;
    org$pandalanguage$pandac$ASTNode* $tmp1417;
    org$pandalanguage$pandac$ASTNode* $tmp1418;
    panda$core$Int64 $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$Int64 $tmp1424;
    org$pandalanguage$pandac$ASTNode* $tmp1426;
    org$pandalanguage$pandac$ASTNode* $tmp1427;
    panda$core$Int64 $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$Int64 $tmp1434;
    org$pandalanguage$pandac$ASTNode* $tmp1436;
    org$pandalanguage$pandac$ASTNode* $tmp1437;
    panda$core$Int64 $tmp1439;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1441;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1443;
    panda$core$Int64 $tmp1444;
    panda$core$Bit $tmp1445;
    panda$core$Int64 $tmp1447;
    panda$core$Int64 $tmp1450;
    org$pandalanguage$pandac$ASTNode* $tmp1452;
    org$pandalanguage$pandac$ASTNode* $tmp1453;
    panda$core$Int64 $tmp1455;
    panda$core$String* $tmp1456;
    panda$core$String* $tmp1457;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1459;
    panda$core$Int64 $tmp1460;
    panda$core$Bit $tmp1461;
    panda$core$Int64 $tmp1463;
    panda$core$Int64 $tmp1466;
    org$pandalanguage$pandac$ASTNode* $tmp1468;
    org$pandalanguage$pandac$ASTNode* $tmp1469;
    panda$core$Int64 $tmp1471;
    panda$core$String* $tmp1472;
    panda$core$Int64 $tmp1476;
    org$pandalanguage$pandac$ASTNode* $tmp1478;
    org$pandalanguage$pandac$ASTNode* $tmp1479;
    panda$core$Int64 $tmp1481;
    panda$core$Int64 $tmp1483;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    org$pandalanguage$pandac$ASTNode* $tmp1486;
    panda$core$Int64 $tmp1488;
    panda$core$Int64 $tmp1490;
    org$pandalanguage$pandac$ASTNode* $tmp1492;
    org$pandalanguage$pandac$ASTNode* $tmp1493;
    panda$core$Int64 $tmp1495;
    panda$core$Int64 $tmp1497;
    org$pandalanguage$pandac$ASTNode* $tmp1499;
    org$pandalanguage$pandac$ASTNode* $tmp1500;
    panda$core$Int64 $tmp1502;
    panda$core$Bit $tmp1503;
    panda$core$Int64 $tmp1505;
    org$pandalanguage$pandac$ASTNode* $tmp1507;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    panda$core$Int64 $tmp1510;
    panda$core$Bit $tmp1511;
    panda$core$Int64 $tmp1514;
    panda$core$Int64 $tmp1517;
    org$pandalanguage$pandac$ASTNode* $tmp1520;
    org$pandalanguage$pandac$ASTNode* $tmp1521;
    panda$core$Int64 $tmp1524;
    org$pandalanguage$pandac$ASTNode* $tmp1526;
    org$pandalanguage$pandac$ASTNode* $tmp1527;
    panda$core$Int64 $tmp1530;
    panda$core$String* name1535 = NULL;
    panda$core$String* $tmp1536;
    panda$core$String* $tmp1537;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1544;
    panda$core$Int64 $tmp1545;
    org$pandalanguage$pandac$ASTNode* expr1547 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1548;
    org$pandalanguage$pandac$ASTNode* $tmp1549;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1551;
    panda$core$Int64 $tmp1552;
    org$pandalanguage$pandac$ASTNode* $tmp1554;
    org$pandalanguage$pandac$ASTNode* $tmp1555;
    panda$core$Int64 $tmp1557;
    org$pandalanguage$pandac$ASTNode* $tmp1564;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$Int64 $tmp1567;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1571;
    org$pandalanguage$pandac$ASTNode* $tmp1576;
    panda$core$Int64 $tmp1581;
    panda$core$Int64 $tmp1584;
    org$pandalanguage$pandac$ASTNode* $tmp1587;
    org$pandalanguage$pandac$ASTNode* $tmp1588;
    panda$core$Int64 $tmp1591;
    org$pandalanguage$pandac$ASTNode* $tmp1593;
    org$pandalanguage$pandac$ASTNode* $tmp1594;
    panda$core$String* $tmp1597;
    panda$core$String* $tmp1598;
    panda$core$String* $tmp1600;
    org$pandalanguage$pandac$ASTNode* $tmp1605;
    org$pandalanguage$pandac$parser$Token $tmp1396 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1395 = $tmp1396;
    {
        $match$632_91397 = t1395.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1398, 49);
        panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1398);
        if ($tmp1399.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1401 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1400 = $tmp1401.kind;
            bool $tmp1403 = self->allowLambdas.value;
            if (!$tmp1403) goto $l1404;
            panda$core$Int64$init$builtin_int64(&$tmp1405, 96);
            panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1400.$rawValue, $tmp1405);
            $tmp1403 = $tmp1406.value;
            $l1404:;
            panda$core$Bit $tmp1407 = { $tmp1403 };
            bool $tmp1402 = $tmp1407.value;
            if ($tmp1402) goto $l1408;
            panda$core$Int64$init$builtin_int64(&$tmp1409, 91);
            panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1400.$rawValue, $tmp1409);
            $tmp1402 = $tmp1410.value;
            $l1408:;
            panda$core$Bit $tmp1411 = { $tmp1402 };
            if ($tmp1411.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1395);
                org$pandalanguage$pandac$ASTNode* $tmp1415 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1414 = $tmp1415;
                $tmp1413 = $tmp1414;
                $returnValue1412 = $tmp1413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                return $returnValue1412;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1419 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1420, 20);
            panda$core$String* $tmp1422 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
            $tmp1421 = $tmp1422;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1419, $tmp1420, t1395.position, $tmp1421);
            $tmp1418 = $tmp1419;
            $tmp1417 = $tmp1418;
            $returnValue1412 = $tmp1417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1424, 3);
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1424);
        if ($tmp1425.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1428 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1429, 22);
            panda$core$String* $tmp1431 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
            $tmp1430 = $tmp1431;
            panda$core$UInt64$nullable $tmp1432 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1430);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1428, $tmp1429, t1395.position, ((panda$core$UInt64) $tmp1432.value));
            $tmp1427 = $tmp1428;
            $tmp1426 = $tmp1427;
            $returnValue1412 = $tmp1426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1434, 4);
        panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1434);
        if ($tmp1435.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1438 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1439, 22);
            panda$core$String* $tmp1442 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
            $tmp1441 = $tmp1442;
            panda$core$Int64$init$builtin_int64(&$tmp1444, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1445, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1443, ((panda$core$Int64$nullable) { $tmp1444, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1445);
            panda$core$String* $tmp1446 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1441, $tmp1443);
            $tmp1440 = $tmp1446;
            panda$core$Int64$init$builtin_int64(&$tmp1447, 2);
            panda$core$UInt64$nullable $tmp1448 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1440, $tmp1447);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1438, $tmp1439, t1395.position, ((panda$core$UInt64) $tmp1448.value));
            $tmp1437 = $tmp1438;
            $tmp1436 = $tmp1437;
            $returnValue1412 = $tmp1436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1450, 5);
        panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1450);
        if ($tmp1451.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1454 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1455, 22);
            panda$core$String* $tmp1458 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
            $tmp1457 = $tmp1458;
            panda$core$Int64$init$builtin_int64(&$tmp1460, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1461, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1459, ((panda$core$Int64$nullable) { $tmp1460, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1461);
            panda$core$String* $tmp1462 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1457, $tmp1459);
            $tmp1456 = $tmp1462;
            panda$core$Int64$init$builtin_int64(&$tmp1463, 16);
            panda$core$UInt64$nullable $tmp1464 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1456, $tmp1463);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1454, $tmp1455, t1395.position, ((panda$core$UInt64) $tmp1464.value));
            $tmp1453 = $tmp1454;
            $tmp1452 = $tmp1453;
            $returnValue1412 = $tmp1452;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1452));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1453));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1466, 6);
        panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1466);
        if ($tmp1467.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1470 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1471, 34);
            panda$core$String* $tmp1473 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
            $tmp1472 = $tmp1473;
            panda$core$Real64$nullable $tmp1474 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1472);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1470, $tmp1471, t1395.position, ((panda$core$Real64) $tmp1474.value));
            $tmp1469 = $tmp1470;
            $tmp1468 = $tmp1469;
            $returnValue1412 = $tmp1468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1476, 47);
        panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1476);
        if ($tmp1477.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1480 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1481, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1480, $tmp1481, t1395.position);
            $tmp1479 = $tmp1480;
            $tmp1478 = $tmp1479;
            $returnValue1412 = $tmp1478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1483, 48);
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1483);
        if ($tmp1484.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1487 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1488, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1487, $tmp1488, t1395.position);
            $tmp1486 = $tmp1487;
            $tmp1485 = $tmp1486;
            $returnValue1412 = $tmp1485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1490, 44);
        panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1490);
        if ($tmp1491.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1494 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1495, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1494, $tmp1495, t1395.position);
            $tmp1493 = $tmp1494;
            $tmp1492 = $tmp1493;
            $returnValue1412 = $tmp1492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1497, 42);
        panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1497);
        if ($tmp1498.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1501 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1502, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1503, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1501, $tmp1502, t1395.position, $tmp1503);
            $tmp1500 = $tmp1501;
            $tmp1499 = $tmp1500;
            $returnValue1412 = $tmp1499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1505, 43);
        panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1505);
        if ($tmp1506.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1509 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1510, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1511, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1509, $tmp1510, t1395.position, $tmp1511);
            $tmp1508 = $tmp1509;
            $tmp1507 = $tmp1508;
            $returnValue1412 = $tmp1507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1514, 8);
        panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1514);
        bool $tmp1513 = $tmp1515.value;
        if ($tmp1513) goto $l1516;
        panda$core$Int64$init$builtin_int64(&$tmp1517, 7);
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1517);
        $tmp1513 = $tmp1518.value;
        $l1516:;
        panda$core$Bit $tmp1519 = { $tmp1513 };
        if ($tmp1519.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1395);
            org$pandalanguage$pandac$ASTNode* $tmp1522 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1521 = $tmp1522;
            $tmp1520 = $tmp1521;
            $returnValue1412 = $tmp1520;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1520));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1521));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1524, 104);
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1524);
        if ($tmp1525.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1395);
            org$pandalanguage$pandac$ASTNode* $tmp1528 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1527 = $tmp1528;
            $tmp1526 = $tmp1527;
            $returnValue1412 = $tmp1526;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1526));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1530, 14);
        panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1530);
        if ($tmp1531.value) {
        {
            int $tmp1534;
            {
                panda$core$String* $tmp1538 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
                $tmp1537 = $tmp1538;
                $tmp1536 = $tmp1537;
                name1535 = $tmp1536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                panda$core$Bit $tmp1540 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1535, &$s1539);
                if ($tmp1540.value) {
                {
                    int $tmp1543;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1545, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1544, $tmp1545);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1544, &$s1546);
                        org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1549 = $tmp1550;
                        $tmp1548 = $tmp1549;
                        expr1547 = $tmp1548;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                        panda$core$Int64$init$builtin_int64(&$tmp1552, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1551, $tmp1552);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1551, &$s1553);
                        org$pandalanguage$pandac$ASTNode* $tmp1556 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1557, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1556, $tmp1557, t1395.position, expr1547);
                        $tmp1555 = $tmp1556;
                        $tmp1554 = $tmp1555;
                        $returnValue1412 = $tmp1554;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
                        $tmp1543 = 0;
                        goto $l1541;
                        $l1558:;
                        $tmp1534 = 0;
                        goto $l1532;
                        $l1559:;
                        return $returnValue1412;
                    }
                    $l1541:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1547));
                    expr1547 = NULL;
                    switch ($tmp1543) {
                        case 0: goto $l1558;
                    }
                    $l1561:;
                }
                }
                else {
                panda$core$Bit $tmp1563 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1535, &$s1562);
                if ($tmp1563.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1566 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1567, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1566, $tmp1567, t1395.position);
                    $tmp1565 = $tmp1566;
                    $tmp1564 = $tmp1565;
                    $returnValue1412 = $tmp1564;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                    $tmp1534 = 1;
                    goto $l1532;
                    $l1568:;
                    return $returnValue1412;
                }
                }
                }
                panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1572, name1535);
                $tmp1571 = $tmp1573;
                panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1574);
                $tmp1570 = $tmp1575;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1395, $tmp1570);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
                $tmp1576 = NULL;
                $returnValue1412 = $tmp1576;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
                $tmp1534 = 2;
                goto $l1532;
                $l1577:;
                return $returnValue1412;
            }
            $l1532:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1535));
            name1535 = NULL;
            switch ($tmp1534) {
                case 1: goto $l1568;
                case 0: goto $l1559;
                case 2: goto $l1577;
            }
            $l1579:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1581, 21);
        panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1581);
        bool $tmp1580 = $tmp1582.value;
        if ($tmp1580) goto $l1583;
        panda$core$Int64$init$builtin_int64(&$tmp1584, 22);
        panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1584);
        $tmp1580 = $tmp1585.value;
        $l1583:;
        panda$core$Bit $tmp1586 = { $tmp1580 };
        if ($tmp1586.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1395);
            org$pandalanguage$pandac$ASTNode* $tmp1589 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1588 = $tmp1589;
            $tmp1587 = $tmp1588;
            $returnValue1412 = $tmp1587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
            return $returnValue1412;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1591, 55);
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$632_91397.$rawValue, $tmp1591);
        if ($tmp1592.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1395);
            org$pandalanguage$pandac$ASTNode* $tmp1595 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1594 = $tmp1595;
            $tmp1593 = $tmp1594;
            $returnValue1412 = $tmp1593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
            return $returnValue1412;
        }
        }
        else {
        {
            panda$core$String* $tmp1601 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1395);
            $tmp1600 = $tmp1601;
            panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1599, $tmp1600);
            $tmp1598 = $tmp1602;
            panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, &$s1603);
            $tmp1597 = $tmp1604;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1395, $tmp1597);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
            $tmp1605 = NULL;
            $returnValue1412 = $tmp1605;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1605));
            return $returnValue1412;
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
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$691_91610 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1611;
    panda$core$Int64 $tmp1612;
    panda$core$String* text1614 = NULL;
    panda$core$String* $returnValue1616;
    panda$core$String* $tmp1617;
    panda$core$Int64 $tmp1620;
    org$pandalanguage$pandac$ASTNode* base1622 = NULL;
    panda$core$String* field1624 = NULL;
    panda$core$String* result1629 = NULL;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1633;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    panda$core$String* $tmp1636;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1641;
    panda$core$String* $tmp1646;
    int $tmp1609;
    {
        $tmp1611 = p_expr;
        $match$691_91610 = $tmp1611;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1611));
        panda$core$Int64$init$builtin_int64(&$tmp1612, 20);
        panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$691_91610->$rawValue, $tmp1612);
        if ($tmp1613.value) {
        {
            panda$core$String** $tmp1615 = ((panda$core$String**) ((char*) $match$691_91610->$data + 16));
            text1614 = *$tmp1615;
            $tmp1617 = text1614;
            $returnValue1616 = $tmp1617;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1617));
            $tmp1609 = 0;
            goto $l1607;
            $l1618:;
            return $returnValue1616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1620, 15);
        panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$691_91610->$rawValue, $tmp1620);
        if ($tmp1621.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1623 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$691_91610->$data + 16));
            base1622 = *$tmp1623;
            panda$core$String** $tmp1625 = ((panda$core$String**) ((char*) $match$691_91610->$data + 24));
            field1624 = *$tmp1625;
            int $tmp1628;
            {
                panda$core$String* $tmp1632 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1622);
                $tmp1631 = $tmp1632;
                $tmp1630 = $tmp1631;
                result1629 = $tmp1630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                if (((panda$core$Bit) { result1629 != NULL }).value) {
                {
                    {
                        $tmp1634 = result1629;
                        $tmp1633 = $tmp1634;
                        panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1638, field1624);
                        $tmp1637 = $tmp1639;
                        panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1629, $tmp1637);
                        $tmp1636 = $tmp1640;
                        $tmp1635 = $tmp1636;
                        result1629 = $tmp1635;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                    }
                }
                }
                $tmp1641 = result1629;
                $returnValue1616 = $tmp1641;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1641));
                $tmp1628 = 0;
                goto $l1626;
                $l1642:;
                $tmp1609 = 1;
                goto $l1607;
                $l1643:;
                return $returnValue1616;
            }
            $l1626:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1629));
            result1629 = NULL;
            switch ($tmp1628) {
                case 0: goto $l1642;
            }
            $l1645:;
        }
        }
        else {
        {
            $tmp1646 = NULL;
            $returnValue1616 = $tmp1646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1646));
            $tmp1609 = 2;
            goto $l1607;
            $l1647:;
            return $returnValue1616;
        }
        }
        }
    }
    $tmp1609 = -1;
    goto $l1607;
    $l1607:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
    switch ($tmp1609) {
        case -1: goto $l1649;
        case 2: goto $l1647;
        case 1: goto $l1643;
        case 0: goto $l1618;
    }
    $l1649:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1650;
    org$pandalanguage$pandac$parser$Token$Kind $match$711_91652;
    panda$core$Int64 $tmp1674;
    panda$core$Int64 $tmp1677;
    panda$core$Int64 $tmp1681;
    panda$core$Int64 $tmp1685;
    panda$core$Int64 $tmp1689;
    panda$core$Int64 $tmp1693;
    panda$core$Int64 $tmp1697;
    panda$core$Int64 $tmp1701;
    panda$core$Int64 $tmp1705;
    panda$core$Int64 $tmp1709;
    panda$core$Int64 $tmp1713;
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
    panda$core$String* $returnValue1760;
    panda$core$String* $tmp1761;
    panda$core$String* $tmp1762;
    panda$core$Int64 $tmp1765;
    org$pandalanguage$pandac$parser$Token token1767;
    panda$core$Int64 $tmp1769;
    panda$core$String* $tmp1771;
    panda$core$String* $tmp1774;
    panda$core$Int64 $tmp1777;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1779;
    panda$core$Int64 $tmp1780;
    panda$core$String* $tmp1783;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1785;
    panda$core$Int64 $tmp1786;
    panda$core$String* $tmp1788;
    panda$core$String* $tmp1791;
    panda$core$String* $tmp1794;
    panda$core$String* $tmp1795;
    panda$core$String* $tmp1797;
    panda$core$String* $tmp1802;
    org$pandalanguage$pandac$parser$Token $tmp1651 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1650 = $tmp1651;
    {
        $match$711_91652 = name1650.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1674, 49);
        panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1674);
        bool $tmp1673 = $tmp1675.value;
        if ($tmp1673) goto $l1676;
        panda$core$Int64$init$builtin_int64(&$tmp1677, 52);
        panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1677);
        $tmp1673 = $tmp1678.value;
        $l1676:;
        panda$core$Bit $tmp1679 = { $tmp1673 };
        bool $tmp1672 = $tmp1679.value;
        if ($tmp1672) goto $l1680;
        panda$core$Int64$init$builtin_int64(&$tmp1681, 53);
        panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1681);
        $tmp1672 = $tmp1682.value;
        $l1680:;
        panda$core$Bit $tmp1683 = { $tmp1672 };
        bool $tmp1671 = $tmp1683.value;
        if ($tmp1671) goto $l1684;
        panda$core$Int64$init$builtin_int64(&$tmp1685, 54);
        panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1685);
        $tmp1671 = $tmp1686.value;
        $l1684:;
        panda$core$Bit $tmp1687 = { $tmp1671 };
        bool $tmp1670 = $tmp1687.value;
        if ($tmp1670) goto $l1688;
        panda$core$Int64$init$builtin_int64(&$tmp1689, 55);
        panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1689);
        $tmp1670 = $tmp1690.value;
        $l1688:;
        panda$core$Bit $tmp1691 = { $tmp1670 };
        bool $tmp1669 = $tmp1691.value;
        if ($tmp1669) goto $l1692;
        panda$core$Int64$init$builtin_int64(&$tmp1693, 56);
        panda$core$Bit $tmp1694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1693);
        $tmp1669 = $tmp1694.value;
        $l1692:;
        panda$core$Bit $tmp1695 = { $tmp1669 };
        bool $tmp1668 = $tmp1695.value;
        if ($tmp1668) goto $l1696;
        panda$core$Int64$init$builtin_int64(&$tmp1697, 58);
        panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1697);
        $tmp1668 = $tmp1698.value;
        $l1696:;
        panda$core$Bit $tmp1699 = { $tmp1668 };
        bool $tmp1667 = $tmp1699.value;
        if ($tmp1667) goto $l1700;
        panda$core$Int64$init$builtin_int64(&$tmp1701, 59);
        panda$core$Bit $tmp1702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1701);
        $tmp1667 = $tmp1702.value;
        $l1700:;
        panda$core$Bit $tmp1703 = { $tmp1667 };
        bool $tmp1666 = $tmp1703.value;
        if ($tmp1666) goto $l1704;
        panda$core$Int64$init$builtin_int64(&$tmp1705, 60);
        panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1705);
        $tmp1666 = $tmp1706.value;
        $l1704:;
        panda$core$Bit $tmp1707 = { $tmp1666 };
        bool $tmp1665 = $tmp1707.value;
        if ($tmp1665) goto $l1708;
        panda$core$Int64$init$builtin_int64(&$tmp1709, 63);
        panda$core$Bit $tmp1710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1709);
        $tmp1665 = $tmp1710.value;
        $l1708:;
        panda$core$Bit $tmp1711 = { $tmp1665 };
        bool $tmp1664 = $tmp1711.value;
        if ($tmp1664) goto $l1712;
        panda$core$Int64$init$builtin_int64(&$tmp1713, 66);
        panda$core$Bit $tmp1714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1713);
        $tmp1664 = $tmp1714.value;
        $l1712:;
        panda$core$Bit $tmp1715 = { $tmp1664 };
        bool $tmp1663 = $tmp1715.value;
        if ($tmp1663) goto $l1716;
        panda$core$Int64$init$builtin_int64(&$tmp1717, 65);
        panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1717);
        $tmp1663 = $tmp1718.value;
        $l1716:;
        panda$core$Bit $tmp1719 = { $tmp1663 };
        bool $tmp1662 = $tmp1719.value;
        if ($tmp1662) goto $l1720;
        panda$core$Int64$init$builtin_int64(&$tmp1721, 57);
        panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1721);
        $tmp1662 = $tmp1722.value;
        $l1720:;
        panda$core$Bit $tmp1723 = { $tmp1662 };
        bool $tmp1661 = $tmp1723.value;
        if ($tmp1661) goto $l1724;
        panda$core$Int64$init$builtin_int64(&$tmp1725, 67);
        panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1725);
        $tmp1661 = $tmp1726.value;
        $l1724:;
        panda$core$Bit $tmp1727 = { $tmp1661 };
        bool $tmp1660 = $tmp1727.value;
        if ($tmp1660) goto $l1728;
        panda$core$Int64$init$builtin_int64(&$tmp1729, 68);
        panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1729);
        $tmp1660 = $tmp1730.value;
        $l1728:;
        panda$core$Bit $tmp1731 = { $tmp1660 };
        bool $tmp1659 = $tmp1731.value;
        if ($tmp1659) goto $l1732;
        panda$core$Int64$init$builtin_int64(&$tmp1733, 69);
        panda$core$Bit $tmp1734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1733);
        $tmp1659 = $tmp1734.value;
        $l1732:;
        panda$core$Bit $tmp1735 = { $tmp1659 };
        bool $tmp1658 = $tmp1735.value;
        if ($tmp1658) goto $l1736;
        panda$core$Int64$init$builtin_int64(&$tmp1737, 70);
        panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1737);
        $tmp1658 = $tmp1738.value;
        $l1736:;
        panda$core$Bit $tmp1739 = { $tmp1658 };
        bool $tmp1657 = $tmp1739.value;
        if ($tmp1657) goto $l1740;
        panda$core$Int64$init$builtin_int64(&$tmp1741, 71);
        panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1741);
        $tmp1657 = $tmp1742.value;
        $l1740:;
        panda$core$Bit $tmp1743 = { $tmp1657 };
        bool $tmp1656 = $tmp1743.value;
        if ($tmp1656) goto $l1744;
        panda$core$Int64$init$builtin_int64(&$tmp1745, 72);
        panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1745);
        $tmp1656 = $tmp1746.value;
        $l1744:;
        panda$core$Bit $tmp1747 = { $tmp1656 };
        bool $tmp1655 = $tmp1747.value;
        if ($tmp1655) goto $l1748;
        panda$core$Int64$init$builtin_int64(&$tmp1749, 50);
        panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1749);
        $tmp1655 = $tmp1750.value;
        $l1748:;
        panda$core$Bit $tmp1751 = { $tmp1655 };
        bool $tmp1654 = $tmp1751.value;
        if ($tmp1654) goto $l1752;
        panda$core$Int64$init$builtin_int64(&$tmp1753, 51);
        panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1753);
        $tmp1654 = $tmp1754.value;
        $l1752:;
        panda$core$Bit $tmp1755 = { $tmp1654 };
        bool $tmp1653 = $tmp1755.value;
        if ($tmp1653) goto $l1756;
        panda$core$Int64$init$builtin_int64(&$tmp1757, 73);
        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1757);
        $tmp1653 = $tmp1758.value;
        $l1756:;
        panda$core$Bit $tmp1759 = { $tmp1653 };
        if ($tmp1759.value) {
        {
            panda$core$String* $tmp1763 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1650);
            $tmp1762 = $tmp1763;
            $tmp1761 = $tmp1762;
            $returnValue1760 = $tmp1761;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1761));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
            return $returnValue1760;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1765, 64);
        panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1765);
        if ($tmp1766.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1768 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1767 = $tmp1768;
            panda$core$Int64$init$builtin_int64(&$tmp1769, 64);
            panda$core$Bit $tmp1770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1767.kind.$rawValue, $tmp1769);
            if ($tmp1770.value) {
            {
                $tmp1771 = &$s1772;
                $returnValue1760 = $tmp1771;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1771));
                return $returnValue1760;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1767);
                $tmp1774 = &$s1775;
                $returnValue1760 = $tmp1774;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
                return $returnValue1760;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1777, 102);
        panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$711_91652.$rawValue, $tmp1777);
        if ($tmp1778.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1780, 103);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1779, $tmp1780);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1782 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1779, &$s1781);
            if (((panda$core$Bit) { !$tmp1782.nonnull }).value) {
            {
                $tmp1783 = NULL;
                $returnValue1760 = $tmp1783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1783));
                return $returnValue1760;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1786, 74);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1785, $tmp1786);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1787 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1785);
            if (((panda$core$Bit) { $tmp1787.nonnull }).value) {
            {
                $tmp1788 = &$s1789;
                $returnValue1760 = $tmp1788;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                return $returnValue1760;
            }
            }
            $tmp1791 = &$s1792;
            $returnValue1760 = $tmp1791;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
            return $returnValue1760;
        }
        }
        else {
        {
            panda$core$String* $tmp1798 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1650);
            $tmp1797 = $tmp1798;
            panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1796, $tmp1797);
            $tmp1795 = $tmp1799;
            panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, &$s1800);
            $tmp1794 = $tmp1801;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1650, $tmp1794);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
            $tmp1802 = NULL;
            $returnValue1760 = $tmp1802;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
            return $returnValue1760;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1804;
    org$pandalanguage$pandac$ASTNode* $tmp1805;
    org$pandalanguage$pandac$ASTNode* $tmp1806;
    panda$core$Bit $tmp1807;
    panda$core$Bit$init$builtin_bit(&$tmp1807, true);
    org$pandalanguage$pandac$ASTNode* $tmp1808 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1807);
    $tmp1806 = $tmp1808;
    $tmp1805 = $tmp1806;
    $returnValue1804 = $tmp1805;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
    return $returnValue1804;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1813;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1814;
    panda$core$Int64 $tmp1815;
    org$pandalanguage$pandac$ASTNode* $returnValue1818;
    org$pandalanguage$pandac$ASTNode* $tmp1819;
    panda$collections$Array* subtypes1822 = NULL;
    panda$collections$Array* $tmp1823;
    panda$collections$Array* $tmp1824;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1826;
    panda$core$Int64 $tmp1827;
    org$pandalanguage$pandac$ASTNode* t1832 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1833;
    org$pandalanguage$pandac$ASTNode* $tmp1834;
    org$pandalanguage$pandac$ASTNode* $tmp1836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1843;
    panda$core$Int64 $tmp1844;
    org$pandalanguage$pandac$ASTNode* $tmp1846;
    org$pandalanguage$pandac$ASTNode* $tmp1847;
    org$pandalanguage$pandac$ASTNode* $tmp1848;
    org$pandalanguage$pandac$ASTNode* $tmp1850;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1854;
    panda$core$Int64 $tmp1855;
    org$pandalanguage$pandac$ASTNode* $tmp1858;
    org$pandalanguage$pandac$parser$Token yields1863;
    org$pandalanguage$pandac$parser$Token$Kind $match$775_91865;
    panda$core$Int64 $tmp1869;
    panda$core$Int64 $tmp1872;
    panda$core$Int64 $tmp1876;
    panda$core$Int64 $tmp1880;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1886;
    panda$core$Int64 $tmp1887;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    panda$collections$Array* returnTypes1894 = NULL;
    panda$collections$Array* $tmp1895;
    panda$collections$Array* $tmp1896;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1898;
    panda$core$Int64 $tmp1899;
    org$pandalanguage$pandac$ASTNode* t1904 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1905;
    org$pandalanguage$pandac$ASTNode* $tmp1906;
    org$pandalanguage$pandac$ASTNode* $tmp1908;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1916;
    panda$core$Int64 $tmp1917;
    org$pandalanguage$pandac$ASTNode* $tmp1919;
    org$pandalanguage$pandac$ASTNode* $tmp1920;
    org$pandalanguage$pandac$ASTNode* $tmp1921;
    org$pandalanguage$pandac$ASTNode* $tmp1923;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1928;
    panda$core$Int64 $tmp1929;
    org$pandalanguage$pandac$ASTNode* $tmp1932;
    org$pandalanguage$pandac$ASTNode* returnType1938 = NULL;
    panda$core$Int64 $tmp1943;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    org$pandalanguage$pandac$ASTNode* $tmp1946;
    panda$core$Int64 $tmp1951;
    org$pandalanguage$pandac$ASTNode* $tmp1953;
    org$pandalanguage$pandac$ASTNode* $tmp1954;
    panda$core$Object* $tmp1955;
    panda$core$Int64 $tmp1956;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    org$pandalanguage$pandac$ASTNode* $tmp1964;
    panda$core$Int64 $tmp1966;
    panda$collections$ImmutableArray* $tmp1967;
    org$pandalanguage$pandac$ASTNode* $tmp1974;
    int $tmp1812;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1815, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1814, $tmp1815);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1817 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1814, &$s1816);
        start1813 = $tmp1817;
        if (((panda$core$Bit) { !start1813.nonnull }).value) {
        {
            $tmp1819 = NULL;
            $returnValue1818 = $tmp1819;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
            $tmp1812 = 0;
            goto $l1810;
            $l1820:;
            return $returnValue1818;
        }
        }
        panda$collections$Array* $tmp1825 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1825);
        $tmp1824 = $tmp1825;
        $tmp1823 = $tmp1824;
        subtypes1822 = $tmp1823;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
        panda$core$Int64$init$builtin_int64(&$tmp1827, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1826, $tmp1827);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1828 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1826);
        if (((panda$core$Bit) { !$tmp1828.nonnull }).value) {
        {
            int $tmp1831;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1835 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1834 = $tmp1835;
                $tmp1833 = $tmp1834;
                t1832 = $tmp1833;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1834));
                if (((panda$core$Bit) { t1832 == NULL }).value) {
                {
                    $tmp1836 = NULL;
                    $returnValue1818 = $tmp1836;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
                    $tmp1831 = 0;
                    goto $l1829;
                    $l1837:;
                    $tmp1812 = 1;
                    goto $l1810;
                    $l1838:;
                    return $returnValue1818;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1822, ((panda$core$Object*) t1832));
                $l1840:;
                panda$core$Int64$init$builtin_int64(&$tmp1844, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1843, $tmp1844);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1845 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1843);
                bool $tmp1842 = ((panda$core$Bit) { $tmp1845.nonnull }).value;
                if (!$tmp1842) goto $l1841;
                {
                    {
                        $tmp1846 = t1832;
                        org$pandalanguage$pandac$ASTNode* $tmp1849 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1848 = $tmp1849;
                        $tmp1847 = $tmp1848;
                        t1832 = $tmp1847;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1847));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
                    }
                    if (((panda$core$Bit) { t1832 == NULL }).value) {
                    {
                        $tmp1850 = NULL;
                        $returnValue1818 = $tmp1850;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1850));
                        $tmp1831 = 1;
                        goto $l1829;
                        $l1851:;
                        $tmp1812 = 2;
                        goto $l1810;
                        $l1852:;
                        return $returnValue1818;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1822, ((panda$core$Object*) t1832));
                }
                goto $l1840;
                $l1841:;
                panda$core$Int64$init$builtin_int64(&$tmp1855, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1854, $tmp1855);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1857 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1854, &$s1856);
                if (((panda$core$Bit) { !$tmp1857.nonnull }).value) {
                {
                    $tmp1858 = NULL;
                    $returnValue1818 = $tmp1858;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
                    $tmp1831 = 2;
                    goto $l1829;
                    $l1859:;
                    $tmp1812 = 3;
                    goto $l1810;
                    $l1860:;
                    return $returnValue1818;
                }
                }
            }
            $tmp1831 = -1;
            goto $l1829;
            $l1829:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1832));
            t1832 = NULL;
            switch ($tmp1831) {
                case 2: goto $l1859;
                case 1: goto $l1851;
                case -1: goto $l1862;
                case 0: goto $l1837;
            }
            $l1862:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1864 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1863 = $tmp1864;
        {
            $match$775_91865 = yields1863.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1869, 91);
            panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91865.$rawValue, $tmp1869);
            bool $tmp1868 = $tmp1870.value;
            if ($tmp1868) goto $l1871;
            panda$core$Int64$init$builtin_int64(&$tmp1872, 92);
            panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91865.$rawValue, $tmp1872);
            $tmp1868 = $tmp1873.value;
            $l1871:;
            panda$core$Bit $tmp1874 = { $tmp1868 };
            bool $tmp1867 = $tmp1874.value;
            if ($tmp1867) goto $l1875;
            panda$core$Int64$init$builtin_int64(&$tmp1876, 93);
            panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91865.$rawValue, $tmp1876);
            $tmp1867 = $tmp1877.value;
            $l1875:;
            panda$core$Bit $tmp1878 = { $tmp1867 };
            bool $tmp1866 = $tmp1878.value;
            if ($tmp1866) goto $l1879;
            panda$core$Int64$init$builtin_int64(&$tmp1880, 94);
            panda$core$Bit $tmp1881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$775_91865.$rawValue, $tmp1880);
            $tmp1866 = $tmp1881.value;
            $l1879:;
            panda$core$Bit $tmp1882 = { $tmp1866 };
            if ($tmp1882.value) {
            {
                int $tmp1885;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1887, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1886, $tmp1887);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1889 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1886, &$s1888);
                    if (((panda$core$Bit) { !$tmp1889.nonnull }).value) {
                    {
                        $tmp1890 = NULL;
                        $returnValue1818 = $tmp1890;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1890));
                        $tmp1885 = 0;
                        goto $l1883;
                        $l1891:;
                        $tmp1812 = 4;
                        goto $l1810;
                        $l1892:;
                        return $returnValue1818;
                    }
                    }
                    panda$collections$Array* $tmp1897 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1897);
                    $tmp1896 = $tmp1897;
                    $tmp1895 = $tmp1896;
                    returnTypes1894 = $tmp1895;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                    panda$core$Int64$init$builtin_int64(&$tmp1899, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1898, $tmp1899);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1900 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1898);
                    if (((panda$core$Bit) { !$tmp1900.nonnull }).value) {
                    {
                        int $tmp1903;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1907 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1906 = $tmp1907;
                            $tmp1905 = $tmp1906;
                            t1904 = $tmp1905;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1905));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                            if (((panda$core$Bit) { t1904 == NULL }).value) {
                            {
                                $tmp1908 = NULL;
                                $returnValue1818 = $tmp1908;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
                                $tmp1903 = 0;
                                goto $l1901;
                                $l1909:;
                                $tmp1885 = 1;
                                goto $l1883;
                                $l1910:;
                                $tmp1812 = 5;
                                goto $l1810;
                                $l1911:;
                                return $returnValue1818;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1894, ((panda$core$Object*) t1904));
                            $l1913:;
                            panda$core$Int64$init$builtin_int64(&$tmp1917, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1916, $tmp1917);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1918 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1916);
                            bool $tmp1915 = ((panda$core$Bit) { $tmp1918.nonnull }).value;
                            if (!$tmp1915) goto $l1914;
                            {
                                {
                                    $tmp1919 = t1904;
                                    org$pandalanguage$pandac$ASTNode* $tmp1922 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1921 = $tmp1922;
                                    $tmp1920 = $tmp1921;
                                    t1904 = $tmp1920;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1920));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1921));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1919));
                                }
                                if (((panda$core$Bit) { t1904 == NULL }).value) {
                                {
                                    $tmp1923 = NULL;
                                    $returnValue1818 = $tmp1923;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                                    $tmp1903 = 1;
                                    goto $l1901;
                                    $l1924:;
                                    $tmp1885 = 2;
                                    goto $l1883;
                                    $l1925:;
                                    $tmp1812 = 6;
                                    goto $l1810;
                                    $l1926:;
                                    return $returnValue1818;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1894, ((panda$core$Object*) t1904));
                            }
                            goto $l1913;
                            $l1914:;
                            panda$core$Int64$init$builtin_int64(&$tmp1929, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1928, $tmp1929);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1931 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1928, &$s1930);
                            if (((panda$core$Bit) { !$tmp1931.nonnull }).value) {
                            {
                                $tmp1932 = NULL;
                                $returnValue1818 = $tmp1932;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                                $tmp1903 = 2;
                                goto $l1901;
                                $l1933:;
                                $tmp1885 = 3;
                                goto $l1883;
                                $l1934:;
                                $tmp1812 = 7;
                                goto $l1810;
                                $l1935:;
                                return $returnValue1818;
                            }
                            }
                        }
                        $tmp1903 = -1;
                        goto $l1901;
                        $l1901:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1904));
                        t1904 = NULL;
                        switch ($tmp1903) {
                            case 1: goto $l1924;
                            case 0: goto $l1909;
                            case -1: goto $l1937;
                            case 2: goto $l1933;
                        }
                        $l1937:;
                    }
                    }
                    memset(&returnType1938, 0, sizeof(returnType1938));
                    ITable* $tmp1939 = ((panda$collections$CollectionView*) returnTypes1894)->$class->itable;
                    while ($tmp1939->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1939 = $tmp1939->next;
                    }
                    $fn1941 $tmp1940 = $tmp1939->methods[0];
                    panda$core$Int64 $tmp1942 = $tmp1940(((panda$collections$CollectionView*) returnTypes1894));
                    panda$core$Int64$init$builtin_int64(&$tmp1943, 0);
                    panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1942, $tmp1943);
                    if ($tmp1944.value) {
                    {
                        {
                            $tmp1945 = returnType1938;
                            $tmp1946 = NULL;
                            returnType1938 = $tmp1946;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1946));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
                        }
                    }
                    }
                    else {
                    ITable* $tmp1947 = ((panda$collections$CollectionView*) returnTypes1894)->$class->itable;
                    while ($tmp1947->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1947 = $tmp1947->next;
                    }
                    $fn1949 $tmp1948 = $tmp1947->methods[0];
                    panda$core$Int64 $tmp1950 = $tmp1948(((panda$collections$CollectionView*) returnTypes1894));
                    panda$core$Int64$init$builtin_int64(&$tmp1951, 1);
                    panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1950, $tmp1951);
                    if ($tmp1952.value) {
                    {
                        {
                            $tmp1953 = returnType1938;
                            panda$core$Int64$init$builtin_int64(&$tmp1956, 0);
                            panda$core$Object* $tmp1957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1894, $tmp1956);
                            $tmp1955 = $tmp1957;
                            $tmp1954 = ((org$pandalanguage$pandac$ASTNode*) $tmp1955);
                            returnType1938 = $tmp1954;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                            panda$core$Panda$unref$panda$core$Object($tmp1955);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1813.value), &$s1958);
                        $tmp1959 = NULL;
                        $returnValue1818 = $tmp1959;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
                        $tmp1885 = 4;
                        goto $l1883;
                        $l1960:;
                        $tmp1812 = 8;
                        goto $l1810;
                        $l1961:;
                        return $returnValue1818;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1965 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1966, 27);
                    panda$collections$ImmutableArray* $tmp1968 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1822);
                    $tmp1967 = $tmp1968;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1965, $tmp1966, ((org$pandalanguage$pandac$parser$Token) start1813.value).position, yields1863.kind, $tmp1967, returnType1938);
                    $tmp1964 = $tmp1965;
                    $tmp1963 = $tmp1964;
                    $returnValue1818 = $tmp1963;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1964));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
                    $tmp1885 = 5;
                    goto $l1883;
                    $l1969:;
                    $tmp1812 = 9;
                    goto $l1810;
                    $l1970:;
                    return $returnValue1818;
                }
                $l1883:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1894));
                returnTypes1894 = NULL;
                switch ($tmp1885) {
                    case 4: goto $l1960;
                    case 2: goto $l1925;
                    case 3: goto $l1934;
                    case 1: goto $l1910;
                    case 0: goto $l1891;
                    case 5: goto $l1969;
                }
                $l1972:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1813.value), &$s1973);
                $tmp1974 = NULL;
                $returnValue1818 = $tmp1974;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                $tmp1812 = 10;
                goto $l1810;
                $l1975:;
                return $returnValue1818;
            }
            }
        }
    }
    $tmp1812 = -1;
    goto $l1810;
    $l1810:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1822));
    subtypes1822 = NULL;
    switch ($tmp1812) {
        case 6: goto $l1926;
        case 10: goto $l1975;
        case 5: goto $l1911;
        case -1: goto $l1977;
        case 9: goto $l1970;
        case 7: goto $l1935;
        case 3: goto $l1860;
        case 1: goto $l1838;
        case 8: goto $l1961;
        case 2: goto $l1852;
        case 4: goto $l1892;
        case 0: goto $l1820;
    }
    $l1977:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1981 = NULL;
    panda$core$Int64 $tmp1983;
    org$pandalanguage$pandac$ASTNode* $tmp1985;
    org$pandalanguage$pandac$ASTNode* $tmp1986;
    org$pandalanguage$pandac$ASTNode* $tmp1987;
    org$pandalanguage$pandac$ASTNode* $returnValue1989;
    org$pandalanguage$pandac$ASTNode* $tmp1990;
    org$pandalanguage$pandac$parser$Token$nullable start1996;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1997;
    panda$core$Int64 $tmp1998;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    panda$core$MutableString* name2005 = NULL;
    panda$core$MutableString* $tmp2006;
    panda$core$MutableString* $tmp2007;
    panda$core$String* $tmp2009;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2014;
    panda$core$Int64 $tmp2015;
    org$pandalanguage$pandac$parser$Token$nullable id2017;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2018;
    panda$core$Int64 $tmp2019;
    org$pandalanguage$pandac$ASTNode* $tmp2022;
    panda$core$Char8 $tmp2026;
    panda$core$UInt8 $tmp2027;
    panda$core$String* $tmp2028;
    panda$core$String* finalName2030 = NULL;
    panda$core$String* $tmp2031;
    panda$core$String* $tmp2032;
    org$pandalanguage$pandac$ASTNode* $tmp2034;
    org$pandalanguage$pandac$ASTNode* $tmp2035;
    org$pandalanguage$pandac$ASTNode* $tmp2036;
    panda$core$Int64 $tmp2038;
    panda$core$Int64 $tmp2040;
    panda$collections$Array* children2045 = NULL;
    panda$collections$Array* $tmp2046;
    panda$collections$Array* $tmp2047;
    org$pandalanguage$pandac$ASTNode* t2049 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2050;
    org$pandalanguage$pandac$ASTNode* $tmp2051;
    panda$core$Bit $tmp2052;
    org$pandalanguage$pandac$ASTNode* $tmp2054;
    org$pandalanguage$pandac$ASTNode* $tmp2059;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2067;
    panda$core$Int64 $tmp2068;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    org$pandalanguage$pandac$ASTNode* $tmp2071;
    org$pandalanguage$pandac$ASTNode* $tmp2072;
    panda$core$Bit $tmp2073;
    org$pandalanguage$pandac$ASTNode* $tmp2075;
    org$pandalanguage$pandac$ASTNode* $tmp2080;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2085;
    panda$core$Int64 $tmp2086;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    org$pandalanguage$pandac$ASTNode* $tmp2094;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2100;
    org$pandalanguage$pandac$ASTNode* $tmp2101;
    panda$core$Int64 $tmp2103;
    panda$collections$ImmutableArray* $tmp2104;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2108;
    panda$core$Int64 $tmp2109;
    org$pandalanguage$pandac$ASTNode* $tmp2111;
    org$pandalanguage$pandac$ASTNode* $tmp2112;
    org$pandalanguage$pandac$ASTNode* $tmp2113;
    panda$core$Int64 $tmp2115;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    int $tmp1980;
    {
        memset(&result1981, 0, sizeof(result1981));
        org$pandalanguage$pandac$parser$Token $tmp1982 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1983, 104);
        panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1982.kind.$rawValue, $tmp1983);
        if ($tmp1984.value) {
        {
            {
                $tmp1985 = result1981;
                org$pandalanguage$pandac$ASTNode* $tmp1988 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1987 = $tmp1988;
                $tmp1986 = $tmp1987;
                result1981 = $tmp1986;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
            }
            if (((panda$core$Bit) { result1981 == NULL }).value) {
            {
                $tmp1990 = NULL;
                $returnValue1989 = $tmp1990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                $tmp1980 = 0;
                goto $l1978;
                $l1991:;
                return $returnValue1989;
            }
            }
        }
        }
        else {
        {
            int $tmp1995;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1998, 49);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1997, $tmp1998);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2000 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1997, &$s1999);
                start1996 = $tmp2000;
                if (((panda$core$Bit) { !start1996.nonnull }).value) {
                {
                    $tmp2001 = NULL;
                    $returnValue1989 = $tmp2001;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
                    $tmp1995 = 0;
                    goto $l1993;
                    $l2002:;
                    $tmp1980 = 1;
                    goto $l1978;
                    $l2003:;
                    return $returnValue1989;
                }
                }
                panda$core$MutableString* $tmp2008 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2010 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1996.value));
                $tmp2009 = $tmp2010;
                panda$core$MutableString$init$panda$core$String($tmp2008, $tmp2009);
                $tmp2007 = $tmp2008;
                $tmp2006 = $tmp2007;
                name2005 = $tmp2006;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                $l2011:;
                panda$core$Int64$init$builtin_int64(&$tmp2015, 99);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2014, $tmp2015);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2016 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2014);
                bool $tmp2013 = ((panda$core$Bit) { $tmp2016.nonnull }).value;
                if (!$tmp2013) goto $l2012;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp2019, 49);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2018, $tmp2019);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2021 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2018, &$s2020);
                    id2017 = $tmp2021;
                    if (((panda$core$Bit) { !id2017.nonnull }).value) {
                    {
                        $tmp2022 = NULL;
                        $returnValue1989 = $tmp2022;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2022));
                        $tmp1995 = 1;
                        goto $l1993;
                        $l2023:;
                        $tmp1980 = 2;
                        goto $l1978;
                        $l2024:;
                        return $returnValue1989;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp2027, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp2026, $tmp2027);
                    panda$core$MutableString$append$panda$core$Char8(name2005, $tmp2026);
                    panda$core$String* $tmp2029 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2017.value));
                    $tmp2028 = $tmp2029;
                    panda$core$MutableString$append$panda$core$String(name2005, $tmp2028);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
                }
                goto $l2011;
                $l2012:;
                panda$core$String* $tmp2033 = panda$core$MutableString$finish$R$panda$core$String(name2005);
                $tmp2032 = $tmp2033;
                $tmp2031 = $tmp2032;
                finalName2030 = $tmp2031;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
                {
                    $tmp2034 = result1981;
                    org$pandalanguage$pandac$ASTNode* $tmp2037 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2038, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2037, $tmp2038, ((org$pandalanguage$pandac$parser$Token) start1996.value).position, finalName2030);
                    $tmp2036 = $tmp2037;
                    $tmp2035 = $tmp2036;
                    result1981 = $tmp2035;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                }
                org$pandalanguage$pandac$parser$Token $tmp2039 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp2040, 63);
                panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2039.kind.$rawValue, $tmp2040);
                if ($tmp2041.value) {
                {
                    int $tmp2044;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp2048 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2048);
                        $tmp2047 = $tmp2048;
                        $tmp2046 = $tmp2047;
                        children2045 = $tmp2046;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
                        panda$core$Bit$init$builtin_bit(&$tmp2052, false);
                        org$pandalanguage$pandac$ASTNode* $tmp2053 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2052);
                        $tmp2051 = $tmp2053;
                        $tmp2050 = $tmp2051;
                        t2049 = $tmp2050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
                        if (((panda$core$Bit) { t2049 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2054 = result1981;
                                $returnValue1989 = $tmp2054;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
                                $tmp2044 = 0;
                                goto $l2042;
                                $l2055:;
                                $tmp1995 = 2;
                                goto $l1993;
                                $l2056:;
                                $tmp1980 = 3;
                                goto $l1978;
                                $l2057:;
                                return $returnValue1989;
                            }
                            }
                            $tmp2059 = NULL;
                            $returnValue1989 = $tmp2059;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2059));
                            $tmp2044 = 1;
                            goto $l2042;
                            $l2060:;
                            $tmp1995 = 3;
                            goto $l1993;
                            $l2061:;
                            $tmp1980 = 4;
                            goto $l1978;
                            $l2062:;
                            return $returnValue1989;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children2045, ((panda$core$Object*) t2049));
                        $l2064:;
                        panda$core$Int64$init$builtin_int64(&$tmp2068, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2067, $tmp2068);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2069 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2067);
                        bool $tmp2066 = ((panda$core$Bit) { $tmp2069.nonnull }).value;
                        if (!$tmp2066) goto $l2065;
                        {
                            {
                                $tmp2070 = t2049;
                                panda$core$Bit$init$builtin_bit(&$tmp2073, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2074 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2073);
                                $tmp2072 = $tmp2074;
                                $tmp2071 = $tmp2072;
                                t2049 = $tmp2071;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2071));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                            }
                            if (((panda$core$Bit) { t2049 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2075 = result1981;
                                    $returnValue1989 = $tmp2075;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2075));
                                    $tmp2044 = 2;
                                    goto $l2042;
                                    $l2076:;
                                    $tmp1995 = 4;
                                    goto $l1993;
                                    $l2077:;
                                    $tmp1980 = 5;
                                    goto $l1978;
                                    $l2078:;
                                    return $returnValue1989;
                                }
                                }
                                $tmp2080 = NULL;
                                $returnValue1989 = $tmp2080;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2080));
                                $tmp2044 = 3;
                                goto $l2042;
                                $l2081:;
                                $tmp1995 = 5;
                                goto $l1993;
                                $l2082:;
                                $tmp1980 = 6;
                                goto $l1978;
                                $l2083:;
                                return $returnValue1989;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children2045, ((panda$core$Object*) t2049));
                        }
                        goto $l2064;
                        $l2065:;
                        panda$core$Int64$init$builtin_int64(&$tmp2086, 64);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2085, $tmp2086);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2088 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2085, &$s2087);
                        if (((panda$core$Bit) { !$tmp2088.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2089 = result1981;
                                $returnValue1989 = $tmp2089;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
                                $tmp2044 = 4;
                                goto $l2042;
                                $l2090:;
                                $tmp1995 = 6;
                                goto $l1993;
                                $l2091:;
                                $tmp1980 = 7;
                                goto $l1978;
                                $l2092:;
                                return $returnValue1989;
                            }
                            }
                            $tmp2094 = NULL;
                            $returnValue1989 = $tmp2094;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
                            $tmp2044 = 5;
                            goto $l2042;
                            $l2095:;
                            $tmp1995 = 7;
                            goto $l1993;
                            $l2096:;
                            $tmp1980 = 8;
                            goto $l1978;
                            $l2097:;
                            return $returnValue1989;
                        }
                        }
                        {
                            $tmp2099 = result1981;
                            org$pandalanguage$pandac$ASTNode* $tmp2102 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2103, 19);
                            panda$collections$ImmutableArray* $tmp2105 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children2045);
                            $tmp2104 = $tmp2105;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2102, $tmp2103, ((org$pandalanguage$pandac$parser$Token) start1996.value).position, finalName2030, $tmp2104);
                            $tmp2101 = $tmp2102;
                            $tmp2100 = $tmp2101;
                            result1981 = $tmp2100;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp2044 = -1;
                    goto $l2042;
                    $l2042:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2049));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2045));
                    children2045 = NULL;
                    t2049 = NULL;
                    switch ($tmp2044) {
                        case 1: goto $l2060;
                        case 2: goto $l2076;
                        case 5: goto $l2095;
                        case 3: goto $l2081;
                        case 0: goto $l2055;
                        case 4: goto $l2090;
                        case -1: goto $l2106;
                    }
                    $l2106:;
                }
                }
            }
            $tmp1995 = -1;
            goto $l1993;
            $l1993:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName2030));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2005));
            name2005 = NULL;
            finalName2030 = NULL;
            switch ($tmp1995) {
                case 5: goto $l2082;
                case 0: goto $l2002;
                case 2: goto $l2056;
                case -1: goto $l2107;
                case 6: goto $l2091;
                case 4: goto $l2077;
                case 1: goto $l2023;
                case 3: goto $l2061;
                case 7: goto $l2096;
            }
            $l2107:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2109, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2108, $tmp2109);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2110 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2108);
        if (((panda$core$Bit) { $tmp2110.nonnull }).value) {
        {
            {
                $tmp2111 = result1981;
                org$pandalanguage$pandac$ASTNode* $tmp2114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2115, 29);
                org$pandalanguage$pandac$Position $tmp2117 = (($fn2116) result1981->$class->vtable[2])(result1981);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2114, $tmp2115, $tmp2117, result1981);
                $tmp2113 = $tmp2114;
                $tmp2112 = $tmp2113;
                result1981 = $tmp2112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
            }
        }
        }
        $tmp2118 = result1981;
        $returnValue1989 = $tmp2118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
        $tmp1980 = 9;
        goto $l1978;
        $l2119:;
        return $returnValue1989;
    }
    $l1978:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1981));
    switch ($tmp1980) {
        case 2: goto $l2024;
        case 6: goto $l2083;
        case 3: goto $l2057;
        case 9: goto $l2119;
        case 7: goto $l2092;
        case 5: goto $l2078;
        case 0: goto $l1991;
        case 8: goto $l2097;
        case 1: goto $l2003;
        case 4: goto $l2062;
    }
    $l2121:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2125 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2126;
    org$pandalanguage$pandac$ASTNode* $tmp2127;
    org$pandalanguage$pandac$ASTNode* $returnValue2129;
    org$pandalanguage$pandac$ASTNode* $tmp2130;
    org$pandalanguage$pandac$parser$Token token2135;
    org$pandalanguage$pandac$parser$Token$Kind $match$913_132137;
    panda$core$Int64 $tmp2138;
    panda$core$Object* $tmp2143;
    panda$core$Bit $tmp2144;
    panda$collections$Array* args2146 = NULL;
    panda$collections$Array* $tmp2147;
    panda$collections$Array* $tmp2148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2150;
    panda$core$Int64 $tmp2151;
    org$pandalanguage$pandac$ASTNode* expr2156 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2157;
    org$pandalanguage$pandac$ASTNode* $tmp2158;
    panda$core$Object* $tmp2160;
    org$pandalanguage$pandac$ASTNode* $tmp2162;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2170;
    panda$core$Int64 $tmp2171;
    org$pandalanguage$pandac$ASTNode* $tmp2173;
    org$pandalanguage$pandac$ASTNode* $tmp2174;
    org$pandalanguage$pandac$ASTNode* $tmp2175;
    panda$core$Object* $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2179;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2184;
    panda$core$Int64 $tmp2185;
    panda$core$Object* $tmp2188;
    org$pandalanguage$pandac$ASTNode* $tmp2190;
    panda$core$Object* $tmp2196;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    panda$core$Int64 $tmp2202;
    panda$collections$ImmutableArray* $tmp2203;
    panda$core$Int64 $tmp2206;
    org$pandalanguage$pandac$ASTNode* arg2211 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2212;
    org$pandalanguage$pandac$ASTNode* $tmp2213;
    org$pandalanguage$pandac$ASTNode* $tmp2215;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2219;
    panda$core$Int64 $tmp2220;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    org$pandalanguage$pandac$ASTNode* $tmp2229;
    panda$core$Int64 $tmp2231;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2232;
    panda$core$Int64 $tmp2233;
    panda$core$Int64 $tmp2235;
    panda$core$String* name2240 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2241;
    panda$core$Int64 $tmp2242;
    panda$core$String* $tmp2244;
    panda$core$String* $tmp2245;
    panda$core$String* $tmp2247;
    panda$core$String* $tmp2248;
    panda$core$String* $tmp2249;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    org$pandalanguage$pandac$ASTNode* $tmp2256;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    panda$core$Int64 $tmp2259;
    panda$core$Int64 $tmp2261;
    org$pandalanguage$pandac$ASTNode* target2266 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$ASTNode* $tmp2268;
    org$pandalanguage$pandac$ASTNode* $tmp2270;
    org$pandalanguage$pandac$ASTNode* $tmp2274;
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$ASTNode* $tmp2276;
    panda$core$Int64 $tmp2278;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2279;
    panda$core$Int64 $tmp2280;
    panda$core$Int64 $tmp2282;
    panda$core$String* name2287 = NULL;
    panda$core$String* $tmp2288;
    panda$core$String* $tmp2289;
    panda$collections$Array* types2294 = NULL;
    panda$collections$Array* $tmp2295;
    panda$collections$Array* $tmp2296;
    org$pandalanguage$pandac$ASTNode* t2298 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2299;
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    panda$core$Bit $tmp2301;
    org$pandalanguage$pandac$ASTNode* $tmp2303;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2311;
    panda$core$Int64 $tmp2312;
    org$pandalanguage$pandac$ASTNode* $tmp2314;
    org$pandalanguage$pandac$ASTNode* $tmp2315;
    org$pandalanguage$pandac$ASTNode* $tmp2316;
    panda$core$Bit $tmp2317;
    org$pandalanguage$pandac$ASTNode* $tmp2319;
    org$pandalanguage$pandac$parser$Token$nullable gt2324;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2325;
    panda$core$Int64 $tmp2326;
    org$pandalanguage$pandac$ASTNode* $tmp2329;
    panda$core$Bit shouldAccept2334;
    panda$core$Object* $tmp2335;
    panda$core$Int64 $tmp2336;
    org$pandalanguage$pandac$parser$Token n2338;
    org$pandalanguage$pandac$parser$Token$Kind $match$1026_292340;
    panda$core$Int64 $tmp2343;
    panda$core$Int64 $tmp2346;
    panda$core$Int64 $tmp2350;
    panda$core$Bit $tmp2353;
    panda$core$Int64 $tmp2354;
    panda$core$Int64 $tmp2359;
    panda$core$Bit $tmp2363;
    panda$core$Bit $tmp2364;
    org$pandalanguage$pandac$ASTNode* $tmp2365;
    org$pandalanguage$pandac$ASTNode* $tmp2366;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    panda$core$Int64 $tmp2369;
    panda$collections$ImmutableArray* $tmp2372;
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    org$pandalanguage$pandac$ASTNode* $tmp2387;
    int $tmp2124;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2128 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2127 = $tmp2128;
        $tmp2126 = $tmp2127;
        result2125 = $tmp2126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
        if (((panda$core$Bit) { result2125 == NULL }).value) {
        {
            $tmp2130 = NULL;
            $returnValue2129 = $tmp2130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
            $tmp2124 = 0;
            goto $l2122;
            $l2131:;
            return $returnValue2129;
        }
        }
        $l2133:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2136 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2135 = $tmp2136;
            {
                $match$913_132137 = token2135.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2138, 104);
                panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132137.$rawValue, $tmp2138);
                if ($tmp2139.value) {
                {
                    int $tmp2142;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2144, true);
                        panda$core$Bit$wrapper* $tmp2145;
                        $tmp2145 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2145->value = $tmp2144;
                        $tmp2143 = ((panda$core$Object*) $tmp2145);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2143);
                        panda$core$Panda$unref$panda$core$Object($tmp2143);
                        panda$collections$Array* $tmp2149 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2149);
                        $tmp2148 = $tmp2149;
                        $tmp2147 = $tmp2148;
                        args2146 = $tmp2147;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2147));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2148));
                        panda$core$Int64$init$builtin_int64(&$tmp2151, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2150, $tmp2151);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2152 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2150);
                        if (((panda$core$Bit) { !$tmp2152.nonnull }).value) {
                        {
                            int $tmp2155;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2159 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2158 = $tmp2159;
                                $tmp2157 = $tmp2158;
                                expr2156 = $tmp2157;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
                                if (((panda$core$Bit) { expr2156 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2161 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2160 = $tmp2161;
                                    panda$core$Panda$unref$panda$core$Object($tmp2160);
                                    $tmp2162 = NULL;
                                    $returnValue2129 = $tmp2162;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2162));
                                    $tmp2155 = 0;
                                    goto $l2153;
                                    $l2163:;
                                    $tmp2142 = 0;
                                    goto $l2140;
                                    $l2164:;
                                    $tmp2124 = 1;
                                    goto $l2122;
                                    $l2165:;
                                    return $returnValue2129;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2146, ((panda$core$Object*) expr2156));
                                $l2167:;
                                panda$core$Int64$init$builtin_int64(&$tmp2171, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2170, $tmp2171);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2172 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2170);
                                bool $tmp2169 = ((panda$core$Bit) { $tmp2172.nonnull }).value;
                                if (!$tmp2169) goto $l2168;
                                {
                                    {
                                        $tmp2173 = expr2156;
                                        org$pandalanguage$pandac$ASTNode* $tmp2176 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2175 = $tmp2176;
                                        $tmp2174 = $tmp2175;
                                        expr2156 = $tmp2174;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2174));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
                                    }
                                    if (((panda$core$Bit) { expr2156 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2178 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2177 = $tmp2178;
                                        panda$core$Panda$unref$panda$core$Object($tmp2177);
                                        $tmp2179 = NULL;
                                        $returnValue2129 = $tmp2179;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
                                        $tmp2155 = 1;
                                        goto $l2153;
                                        $l2180:;
                                        $tmp2142 = 1;
                                        goto $l2140;
                                        $l2181:;
                                        $tmp2124 = 2;
                                        goto $l2122;
                                        $l2182:;
                                        return $returnValue2129;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2146, ((panda$core$Object*) expr2156));
                                }
                                goto $l2167;
                                $l2168:;
                                panda$core$Int64$init$builtin_int64(&$tmp2185, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2184, $tmp2185);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2187 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2184, &$s2186);
                                if (((panda$core$Bit) { !$tmp2187.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2189 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2188 = $tmp2189;
                                    panda$core$Panda$unref$panda$core$Object($tmp2188);
                                    $tmp2190 = NULL;
                                    $returnValue2129 = $tmp2190;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2190));
                                    $tmp2155 = 2;
                                    goto $l2153;
                                    $l2191:;
                                    $tmp2142 = 2;
                                    goto $l2140;
                                    $l2192:;
                                    $tmp2124 = 3;
                                    goto $l2122;
                                    $l2193:;
                                    return $returnValue2129;
                                }
                                }
                            }
                            $tmp2155 = -1;
                            goto $l2153;
                            $l2153:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2156));
                            expr2156 = NULL;
                            switch ($tmp2155) {
                                case -1: goto $l2195;
                                case 1: goto $l2180;
                                case 0: goto $l2163;
                                case 2: goto $l2191;
                            }
                            $l2195:;
                        }
                        }
                        panda$core$Object* $tmp2197 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2196 = $tmp2197;
                        panda$core$Panda$unref$panda$core$Object($tmp2196);
                        {
                            $tmp2198 = result2125;
                            org$pandalanguage$pandac$ASTNode* $tmp2201 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2202, 8);
                            panda$collections$ImmutableArray* $tmp2204 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2146);
                            $tmp2203 = $tmp2204;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2201, $tmp2202, token2135.position, result2125, $tmp2203);
                            $tmp2200 = $tmp2201;
                            $tmp2199 = $tmp2200;
                            result2125 = $tmp2199;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                        }
                    }
                    $tmp2142 = -1;
                    goto $l2140;
                    $l2140:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2146));
                    args2146 = NULL;
                    switch ($tmp2142) {
                        case 2: goto $l2192;
                        case 1: goto $l2181;
                        case -1: goto $l2205;
                        case 0: goto $l2164;
                    }
                    $l2205:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2206, 102);
                panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132137.$rawValue, $tmp2206);
                if ($tmp2207.value) {
                {
                    int $tmp2210;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2214 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2213 = $tmp2214;
                        $tmp2212 = $tmp2213;
                        arg2211 = $tmp2212;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2212));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
                        if (((panda$core$Bit) { arg2211 == NULL }).value) {
                        {
                            $tmp2215 = NULL;
                            $returnValue2129 = $tmp2215;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2215));
                            $tmp2210 = 0;
                            goto $l2208;
                            $l2216:;
                            $tmp2124 = 4;
                            goto $l2122;
                            $l2217:;
                            return $returnValue2129;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2220, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2219, $tmp2220);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2222 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2219, &$s2221);
                        if (((panda$core$Bit) { !$tmp2222.nonnull }).value) {
                        {
                            $tmp2223 = NULL;
                            $returnValue2129 = $tmp2223;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
                            $tmp2210 = 1;
                            goto $l2208;
                            $l2224:;
                            $tmp2124 = 5;
                            goto $l2122;
                            $l2225:;
                            return $returnValue2129;
                        }
                        }
                        {
                            $tmp2227 = result2125;
                            org$pandalanguage$pandac$ASTNode* $tmp2230 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2231, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2233, 102);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2232, $tmp2233);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2230, $tmp2231, token2135.position, result2125, $tmp2232, arg2211);
                            $tmp2229 = $tmp2230;
                            $tmp2228 = $tmp2229;
                            result2125 = $tmp2228;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
                        }
                    }
                    $tmp2210 = -1;
                    goto $l2208;
                    $l2208:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2211));
                    arg2211 = NULL;
                    switch ($tmp2210) {
                        case 1: goto $l2224;
                        case -1: goto $l2234;
                        case 0: goto $l2216;
                    }
                    $l2234:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2235, 99);
                panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132137.$rawValue, $tmp2235);
                if ($tmp2236.value) {
                {
                    int $tmp2239;
                    {
                        memset(&name2240, 0, sizeof(name2240));
                        panda$core$Int64$init$builtin_int64(&$tmp2242, 23);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2241, $tmp2242);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2243 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2241);
                        if (((panda$core$Bit) { $tmp2243.nonnull }).value) {
                        {
                            {
                                $tmp2244 = name2240;
                                $tmp2245 = &$s2246;
                                name2240 = $tmp2245;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2247 = name2240;
                                panda$core$String* $tmp2250 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2249 = $tmp2250;
                                $tmp2248 = $tmp2249;
                                name2240 = $tmp2248;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2247));
                            }
                            if (((panda$core$Bit) { name2240 == NULL }).value) {
                            {
                                $tmp2251 = NULL;
                                $returnValue2129 = $tmp2251;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
                                $tmp2239 = 0;
                                goto $l2237;
                                $l2252:;
                                $tmp2124 = 6;
                                goto $l2122;
                                $l2253:;
                                return $returnValue2129;
                            }
                            }
                        }
                        }
                        {
                            $tmp2255 = result2125;
                            org$pandalanguage$pandac$ASTNode* $tmp2258 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2259, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2258, $tmp2259, token2135.position, result2125, name2240);
                            $tmp2257 = $tmp2258;
                            $tmp2256 = $tmp2257;
                            result2125 = $tmp2256;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        }
                    }
                    $tmp2239 = -1;
                    goto $l2237;
                    $l2237:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2240));
                    switch ($tmp2239) {
                        case -1: goto $l2260;
                        case 0: goto $l2252;
                    }
                    $l2260:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2261, 90);
                panda$core$Bit $tmp2262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132137.$rawValue, $tmp2261);
                if ($tmp2262.value) {
                {
                    int $tmp2265;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2269 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2268 = $tmp2269;
                        $tmp2267 = $tmp2268;
                        target2266 = $tmp2267;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
                        if (((panda$core$Bit) { target2266 == NULL }).value) {
                        {
                            $tmp2270 = NULL;
                            $returnValue2129 = $tmp2270;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
                            $tmp2265 = 0;
                            goto $l2263;
                            $l2271:;
                            $tmp2124 = 7;
                            goto $l2122;
                            $l2272:;
                            return $returnValue2129;
                        }
                        }
                        {
                            $tmp2274 = result2125;
                            org$pandalanguage$pandac$ASTNode* $tmp2277 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2278, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2280, 90);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2279, $tmp2280);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2277, $tmp2278, token2135.position, result2125, $tmp2279, target2266);
                            $tmp2276 = $tmp2277;
                            $tmp2275 = $tmp2276;
                            result2125 = $tmp2275;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
                        }
                    }
                    $tmp2265 = -1;
                    goto $l2263;
                    $l2263:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2266));
                    target2266 = NULL;
                    switch ($tmp2265) {
                        case -1: goto $l2281;
                        case 0: goto $l2271;
                    }
                    $l2281:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2282, 63);
                panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_132137.$rawValue, $tmp2282);
                if ($tmp2283.value) {
                {
                    int $tmp2286;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2135);
                        panda$core$String* $tmp2290 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2125);
                        $tmp2289 = $tmp2290;
                        $tmp2288 = $tmp2289;
                        name2287 = $tmp2288;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                        if (((panda$core$Bit) { name2287 != NULL }).value) {
                        {
                            int $tmp2293;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2297 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2297);
                                $tmp2296 = $tmp2297;
                                $tmp2295 = $tmp2296;
                                types2294 = $tmp2295;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
                                panda$core$Bit$init$builtin_bit(&$tmp2301, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2302 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2301);
                                $tmp2300 = $tmp2302;
                                $tmp2299 = $tmp2300;
                                t2298 = $tmp2299;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
                                if (((panda$core$Bit) { t2298 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2303 = result2125;
                                    $returnValue2129 = $tmp2303;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
                                    $tmp2293 = 0;
                                    goto $l2291;
                                    $l2304:;
                                    $tmp2286 = 0;
                                    goto $l2284;
                                    $l2305:;
                                    $tmp2124 = 8;
                                    goto $l2122;
                                    $l2306:;
                                    return $returnValue2129;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2294, ((panda$core$Object*) t2298));
                                $l2308:;
                                panda$core$Int64$init$builtin_int64(&$tmp2312, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2311, $tmp2312);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2313 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2311);
                                bool $tmp2310 = ((panda$core$Bit) { $tmp2313.nonnull }).value;
                                if (!$tmp2310) goto $l2309;
                                {
                                    {
                                        $tmp2314 = t2298;
                                        panda$core$Bit$init$builtin_bit(&$tmp2317, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2318 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2317);
                                        $tmp2316 = $tmp2318;
                                        $tmp2315 = $tmp2316;
                                        t2298 = $tmp2315;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2316));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
                                    }
                                    if (((panda$core$Bit) { t2298 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2319 = result2125;
                                        $returnValue2129 = $tmp2319;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
                                        $tmp2293 = 1;
                                        goto $l2291;
                                        $l2320:;
                                        $tmp2286 = 1;
                                        goto $l2284;
                                        $l2321:;
                                        $tmp2124 = 9;
                                        goto $l2122;
                                        $l2322:;
                                        return $returnValue2129;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2294, ((panda$core$Object*) t2298));
                                }
                                goto $l2308;
                                $l2309:;
                                panda$core$Int64$init$builtin_int64(&$tmp2326, 64);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2325, $tmp2326);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2328 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2325, &$s2327);
                                gt2324 = $tmp2328;
                                if (((panda$core$Bit) { !gt2324.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2329 = result2125;
                                    $returnValue2129 = $tmp2329;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
                                    $tmp2293 = 2;
                                    goto $l2291;
                                    $l2330:;
                                    $tmp2286 = 2;
                                    goto $l2284;
                                    $l2331:;
                                    $tmp2124 = 10;
                                    goto $l2122;
                                    $l2332:;
                                    return $returnValue2129;
                                }
                                }
                                memset(&shouldAccept2334, 0, sizeof(shouldAccept2334));
                                panda$core$Int64$init$builtin_int64(&$tmp2336, 0);
                                panda$core$Object* $tmp2337 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2336);
                                $tmp2335 = $tmp2337;
                                panda$core$Panda$unref$panda$core$Object($tmp2335);
                                if (((panda$core$Bit$wrapper*) $tmp2335)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2339 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2338 = $tmp2339;
                                    {
                                        $match$1026_292340 = n2338.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2343, 99);
                                        panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292340.$rawValue, $tmp2343);
                                        bool $tmp2342 = $tmp2344.value;
                                        if ($tmp2342) goto $l2345;
                                        panda$core$Int64$init$builtin_int64(&$tmp2346, 106);
                                        panda$core$Bit $tmp2347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292340.$rawValue, $tmp2346);
                                        $tmp2342 = $tmp2347.value;
                                        $l2345:;
                                        panda$core$Bit $tmp2348 = { $tmp2342 };
                                        bool $tmp2341 = $tmp2348.value;
                                        if ($tmp2341) goto $l2349;
                                        panda$core$Int64$init$builtin_int64(&$tmp2350, 90);
                                        panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292340.$rawValue, $tmp2350);
                                        $tmp2341 = $tmp2351.value;
                                        $l2349:;
                                        panda$core$Bit $tmp2352 = { $tmp2341 };
                                        if ($tmp2352.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2353, true);
                                            shouldAccept2334 = $tmp2353;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2354, 104);
                                        panda$core$Bit $tmp2355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1026_292340.$rawValue, $tmp2354);
                                        if ($tmp2355.value) {
                                        {
                                            panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2338.position.line, ((org$pandalanguage$pandac$parser$Token) gt2324.value).position.line);
                                            bool $tmp2356 = $tmp2357.value;
                                            if (!$tmp2356) goto $l2358;
                                            panda$core$Int64$init$builtin_int64(&$tmp2359, 1);
                                            panda$core$Int64 $tmp2360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2324.value).position.column, $tmp2359);
                                            panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2338.position.column, $tmp2360);
                                            $tmp2356 = $tmp2361.value;
                                            $l2358:;
                                            panda$core$Bit $tmp2362 = { $tmp2356 };
                                            shouldAccept2334 = $tmp2362;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2363, false);
                                            shouldAccept2334 = $tmp2363;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2334.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2338);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2364, true);
                                    shouldAccept2334 = $tmp2364;
                                }
                                }
                                if (shouldAccept2334.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2365 = result2125;
                                        org$pandalanguage$pandac$ASTNode* $tmp2368 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2369, 19);
                                        org$pandalanguage$pandac$Position $tmp2371 = (($fn2370) result2125->$class->vtable[2])(result2125);
                                        panda$collections$ImmutableArray* $tmp2373 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2294);
                                        $tmp2372 = $tmp2373;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2368, $tmp2369, $tmp2371, name2287, $tmp2372);
                                        $tmp2367 = $tmp2368;
                                        $tmp2366 = $tmp2367;
                                        result2125 = $tmp2366;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2366));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
                                    }
                                    $tmp2293 = 3;
                                    goto $l2291;
                                    $l2374:;
                                    $tmp2286 = 3;
                                    goto $l2284;
                                    $l2375:;
                                    goto $l2133;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2376 = result2125;
                                    $returnValue2129 = $tmp2376;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2376));
                                    $tmp2293 = 4;
                                    goto $l2291;
                                    $l2377:;
                                    $tmp2286 = 4;
                                    goto $l2284;
                                    $l2378:;
                                    $tmp2124 = 11;
                                    goto $l2122;
                                    $l2379:;
                                    return $returnValue2129;
                                }
                                }
                            }
                            $tmp2293 = -1;
                            goto $l2291;
                            $l2291:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2298));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2294));
                            types2294 = NULL;
                            t2298 = NULL;
                            switch ($tmp2293) {
                                case 4: goto $l2377;
                                case -1: goto $l2381;
                                case 3: goto $l2374;
                                case 0: goto $l2304;
                                case 2: goto $l2330;
                                case 1: goto $l2320;
                            }
                            $l2381:;
                        }
                        }
                        $tmp2382 = result2125;
                        $returnValue2129 = $tmp2382;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
                        $tmp2286 = 5;
                        goto $l2284;
                        $l2383:;
                        $tmp2124 = 12;
                        goto $l2122;
                        $l2384:;
                        return $returnValue2129;
                    }
                    $l2284:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2287));
                    name2287 = NULL;
                    switch ($tmp2286) {
                        case 3: goto $l2375;
                        case 2: goto $l2331;
                        case 1: goto $l2321;
                        case 5: goto $l2383;
                        case 4: goto $l2378;
                        case 0: goto $l2305;
                    }
                    $l2386:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2135);
                    $tmp2387 = result2125;
                    $returnValue2129 = $tmp2387;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
                    $tmp2124 = 13;
                    goto $l2122;
                    $l2388:;
                    return $returnValue2129;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2134:;
    }
    $tmp2124 = -1;
    goto $l2122;
    $l2122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2125));
    result2125 = NULL;
    switch ($tmp2124) {
        case 4: goto $l2217;
        case 7: goto $l2272;
        case 5: goto $l2225;
        case 6: goto $l2253;
        case 8: goto $l2306;
        case 11: goto $l2379;
        case 13: goto $l2388;
        case 3: goto $l2193;
        case 1: goto $l2165;
        case 10: goto $l2332;
        case 9: goto $l2322;
        case 12: goto $l2384;
        case 2: goto $l2182;
        case -1: goto $l2390;
        case 0: goto $l2131;
    }
    $l2390:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2394 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2395;
    org$pandalanguage$pandac$ASTNode* $tmp2396;
    org$pandalanguage$pandac$ASTNode* $returnValue2398;
    org$pandalanguage$pandac$ASTNode* $tmp2399;
    org$pandalanguage$pandac$parser$Token$nullable op2407;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2408;
    panda$core$Int64 $tmp2409;
    org$pandalanguage$pandac$ASTNode* next2412 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2413;
    org$pandalanguage$pandac$ASTNode* $tmp2414;
    org$pandalanguage$pandac$ASTNode* $tmp2416;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2421;
    org$pandalanguage$pandac$ASTNode* $tmp2422;
    panda$core$Int64 $tmp2424;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    int $tmp2393;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2397 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2396 = $tmp2397;
        $tmp2395 = $tmp2396;
        result2394 = $tmp2395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
        if (((panda$core$Bit) { result2394 == NULL }).value) {
        {
            $tmp2399 = NULL;
            $returnValue2398 = $tmp2399;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
            $tmp2393 = 0;
            goto $l2391;
            $l2400:;
            return $returnValue2398;
        }
        }
        $l2402:;
        while (true) {
        {
            int $tmp2406;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2409, 58);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2408, $tmp2409);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2410 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2408);
                op2407 = $tmp2410;
                if (((panda$core$Bit) { !op2407.nonnull }).value) {
                {
                    $tmp2406 = 0;
                    goto $l2404;
                    $l2411:;
                    goto $l2403;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2415 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2414 = $tmp2415;
                $tmp2413 = $tmp2414;
                next2412 = $tmp2413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                if (((panda$core$Bit) { next2412 == NULL }).value) {
                {
                    $tmp2416 = NULL;
                    $returnValue2398 = $tmp2416;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
                    $tmp2406 = 1;
                    goto $l2404;
                    $l2417:;
                    $tmp2393 = 1;
                    goto $l2391;
                    $l2418:;
                    return $returnValue2398;
                }
                }
                {
                    $tmp2420 = result2394;
                    org$pandalanguage$pandac$ASTNode* $tmp2423 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2424, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2423, $tmp2424, ((org$pandalanguage$pandac$parser$Token) op2407.value).position, result2394, ((org$pandalanguage$pandac$parser$Token) op2407.value).kind, next2412);
                    $tmp2422 = $tmp2423;
                    $tmp2421 = $tmp2422;
                    result2394 = $tmp2421;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2421));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2422));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
                }
            }
            $tmp2406 = -1;
            goto $l2404;
            $l2404:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2412));
            next2412 = NULL;
            switch ($tmp2406) {
                case -1: goto $l2425;
                case 0: goto $l2411;
                case 1: goto $l2417;
            }
            $l2425:;
        }
        }
        $l2403:;
        $tmp2426 = result2394;
        $returnValue2398 = $tmp2426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
        $tmp2393 = 2;
        goto $l2391;
        $l2427:;
        return $returnValue2398;
    }
    $l2391:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2394));
    result2394 = NULL;
    switch ($tmp2393) {
        case 2: goto $l2427;
        case 1: goto $l2418;
        case 0: goto $l2400;
    }
    $l2429:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2430;
    org$pandalanguage$pandac$parser$Token$Kind $match$1087_92432;
    panda$core$Int64 $tmp2435;
    panda$core$Int64 $tmp2438;
    panda$core$Int64 $tmp2442;
    org$pandalanguage$pandac$ASTNode* base2448 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2449;
    org$pandalanguage$pandac$ASTNode* $tmp2450;
    org$pandalanguage$pandac$ASTNode* $returnValue2452;
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    org$pandalanguage$pandac$ASTNode* $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    panda$core$Int64 $tmp2459;
    org$pandalanguage$pandac$ASTNode* $tmp2463;
    org$pandalanguage$pandac$ASTNode* $tmp2464;
    org$pandalanguage$pandac$parser$Token $tmp2431 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2430 = $tmp2431;
    {
        $match$1087_92432 = op2430.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2435, 53);
        panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92432.$rawValue, $tmp2435);
        bool $tmp2434 = $tmp2436.value;
        if ($tmp2434) goto $l2437;
        panda$core$Int64$init$builtin_int64(&$tmp2438, 50);
        panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92432.$rawValue, $tmp2438);
        $tmp2434 = $tmp2439.value;
        $l2437:;
        panda$core$Bit $tmp2440 = { $tmp2434 };
        bool $tmp2433 = $tmp2440.value;
        if ($tmp2433) goto $l2441;
        panda$core$Int64$init$builtin_int64(&$tmp2442, 51);
        panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1087_92432.$rawValue, $tmp2442);
        $tmp2433 = $tmp2443.value;
        $l2441:;
        panda$core$Bit $tmp2444 = { $tmp2433 };
        if ($tmp2444.value) {
        {
            int $tmp2447;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2451 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2450 = $tmp2451;
                $tmp2449 = $tmp2450;
                base2448 = $tmp2449;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
                if (((panda$core$Bit) { base2448 == NULL }).value) {
                {
                    $tmp2453 = NULL;
                    $returnValue2452 = $tmp2453;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                    $tmp2447 = 0;
                    goto $l2445;
                    $l2454:;
                    return $returnValue2452;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2458 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2459, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2458, $tmp2459, op2430.position, op2430.kind, base2448);
                $tmp2457 = $tmp2458;
                $tmp2456 = $tmp2457;
                $returnValue2452 = $tmp2456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
                $tmp2447 = 1;
                goto $l2445;
                $l2460:;
                return $returnValue2452;
            }
            $l2445:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2448));
            base2448 = NULL;
            switch ($tmp2447) {
                case 1: goto $l2460;
                case 0: goto $l2454;
            }
            $l2462:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2430);
            org$pandalanguage$pandac$ASTNode* $tmp2465 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2464 = $tmp2465;
            $tmp2463 = $tmp2464;
            $returnValue2452 = $tmp2463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
            return $returnValue2452;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2470 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2471;
    org$pandalanguage$pandac$ASTNode* $tmp2472;
    org$pandalanguage$pandac$ASTNode* $returnValue2474;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$parser$Token op2480;
    org$pandalanguage$pandac$parser$Token$Kind $match$1113_132482;
    panda$core$Int64 $tmp2489;
    panda$core$Int64 $tmp2492;
    panda$core$Int64 $tmp2496;
    panda$core$Int64 $tmp2500;
    panda$core$Int64 $tmp2504;
    panda$core$Int64 $tmp2508;
    panda$core$Int64 $tmp2512;
    org$pandalanguage$pandac$ASTNode* next2518 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2519;
    org$pandalanguage$pandac$ASTNode* $tmp2520;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    org$pandalanguage$pandac$ASTNode* $tmp2526;
    org$pandalanguage$pandac$ASTNode* $tmp2527;
    org$pandalanguage$pandac$ASTNode* $tmp2528;
    panda$core$Int64 $tmp2530;
    panda$core$Int64 $tmp2532;
    org$pandalanguage$pandac$parser$Token nextToken2534;
    panda$core$Int64 $tmp2536;
    org$pandalanguage$pandac$ASTNode* next2541 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2542;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    org$pandalanguage$pandac$ASTNode* $tmp2545;
    org$pandalanguage$pandac$ASTNode* $tmp2549;
    org$pandalanguage$pandac$ASTNode* $tmp2550;
    org$pandalanguage$pandac$ASTNode* $tmp2551;
    panda$core$Int64 $tmp2553;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2554;
    panda$core$Int64 $tmp2555;
    org$pandalanguage$pandac$ASTNode* $tmp2557;
    org$pandalanguage$pandac$ASTNode* $tmp2560;
    int $tmp2469;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2473 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2472 = $tmp2473;
        $tmp2471 = $tmp2472;
        result2470 = $tmp2471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
        if (((panda$core$Bit) { result2470 == NULL }).value) {
        {
            $tmp2475 = NULL;
            $returnValue2474 = $tmp2475;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
            $tmp2469 = 0;
            goto $l2467;
            $l2476:;
            return $returnValue2474;
        }
        }
        $l2478:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2481 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2480 = $tmp2481;
            {
                $match$1113_132482 = op2480.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2489, 54);
                panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2489);
                bool $tmp2488 = $tmp2490.value;
                if ($tmp2488) goto $l2491;
                panda$core$Int64$init$builtin_int64(&$tmp2492, 55);
                panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2492);
                $tmp2488 = $tmp2493.value;
                $l2491:;
                panda$core$Bit $tmp2494 = { $tmp2488 };
                bool $tmp2487 = $tmp2494.value;
                if ($tmp2487) goto $l2495;
                panda$core$Int64$init$builtin_int64(&$tmp2496, 56);
                panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2496);
                $tmp2487 = $tmp2497.value;
                $l2495:;
                panda$core$Bit $tmp2498 = { $tmp2487 };
                bool $tmp2486 = $tmp2498.value;
                if ($tmp2486) goto $l2499;
                panda$core$Int64$init$builtin_int64(&$tmp2500, 57);
                panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2500);
                $tmp2486 = $tmp2501.value;
                $l2499:;
                panda$core$Bit $tmp2502 = { $tmp2486 };
                bool $tmp2485 = $tmp2502.value;
                if ($tmp2485) goto $l2503;
                panda$core$Int64$init$builtin_int64(&$tmp2504, 73);
                panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2504);
                $tmp2485 = $tmp2505.value;
                $l2503:;
                panda$core$Bit $tmp2506 = { $tmp2485 };
                bool $tmp2484 = $tmp2506.value;
                if ($tmp2484) goto $l2507;
                panda$core$Int64$init$builtin_int64(&$tmp2508, 68);
                panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2508);
                $tmp2484 = $tmp2509.value;
                $l2507:;
                panda$core$Bit $tmp2510 = { $tmp2484 };
                bool $tmp2483 = $tmp2510.value;
                if ($tmp2483) goto $l2511;
                panda$core$Int64$init$builtin_int64(&$tmp2512, 70);
                panda$core$Bit $tmp2513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2512);
                $tmp2483 = $tmp2513.value;
                $l2511:;
                panda$core$Bit $tmp2514 = { $tmp2483 };
                if ($tmp2514.value) {
                {
                    int $tmp2517;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2521 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2520 = $tmp2521;
                        $tmp2519 = $tmp2520;
                        next2518 = $tmp2519;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                        if (((panda$core$Bit) { next2518 == NULL }).value) {
                        {
                            $tmp2522 = NULL;
                            $returnValue2474 = $tmp2522;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2522));
                            $tmp2517 = 0;
                            goto $l2515;
                            $l2523:;
                            $tmp2469 = 1;
                            goto $l2467;
                            $l2524:;
                            return $returnValue2474;
                        }
                        }
                        {
                            $tmp2526 = result2470;
                            org$pandalanguage$pandac$ASTNode* $tmp2529 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2530, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2529, $tmp2530, op2480.position, result2470, op2480.kind, next2518);
                            $tmp2528 = $tmp2529;
                            $tmp2527 = $tmp2528;
                            result2470 = $tmp2527;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2527));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2528));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
                        }
                    }
                    $tmp2517 = -1;
                    goto $l2515;
                    $l2515:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2518));
                    next2518 = NULL;
                    switch ($tmp2517) {
                        case 0: goto $l2523;
                        case -1: goto $l2531;
                    }
                    $l2531:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2532, 64);
                panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1113_132482.$rawValue, $tmp2532);
                if ($tmp2533.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2535 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2534 = $tmp2535;
                    panda$core$Int64$init$builtin_int64(&$tmp2536, 64);
                    panda$core$Bit $tmp2537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2534.kind.$rawValue, $tmp2536);
                    if ($tmp2537.value) {
                    {
                        int $tmp2540;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2544 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2543 = $tmp2544;
                            $tmp2542 = $tmp2543;
                            next2541 = $tmp2542;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2542));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
                            if (((panda$core$Bit) { next2541 == NULL }).value) {
                            {
                                $tmp2545 = NULL;
                                $returnValue2474 = $tmp2545;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
                                $tmp2540 = 0;
                                goto $l2538;
                                $l2546:;
                                $tmp2469 = 2;
                                goto $l2467;
                                $l2547:;
                                return $returnValue2474;
                            }
                            }
                            {
                                $tmp2549 = result2470;
                                org$pandalanguage$pandac$ASTNode* $tmp2552 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2553, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2555, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2554, $tmp2555);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2552, $tmp2553, op2480.position, result2470, $tmp2554, next2541);
                                $tmp2551 = $tmp2552;
                                $tmp2550 = $tmp2551;
                                result2470 = $tmp2550;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2550));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
                            }
                        }
                        $tmp2540 = -1;
                        goto $l2538;
                        $l2538:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2541));
                        next2541 = NULL;
                        switch ($tmp2540) {
                            case -1: goto $l2556;
                            case 0: goto $l2546;
                        }
                        $l2556:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2534);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2480);
                        $tmp2557 = result2470;
                        $returnValue2474 = $tmp2557;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2557));
                        $tmp2469 = 3;
                        goto $l2467;
                        $l2558:;
                        return $returnValue2474;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2480);
                    $tmp2560 = result2470;
                    $returnValue2474 = $tmp2560;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2560));
                    $tmp2469 = 4;
                    goto $l2467;
                    $l2561:;
                    return $returnValue2474;
                }
                }
                }
            }
        }
        }
        $l2479:;
    }
    $tmp2469 = -1;
    goto $l2467;
    $l2467:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2470));
    result2470 = NULL;
    switch ($tmp2469) {
        case -1: goto $l2563;
        case 4: goto $l2561;
        case 2: goto $l2547;
        case 3: goto $l2558;
        case 1: goto $l2524;
        case 0: goto $l2476;
    }
    $l2563:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2567 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2568;
    org$pandalanguage$pandac$ASTNode* $tmp2569;
    org$pandalanguage$pandac$ASTNode* $returnValue2571;
    org$pandalanguage$pandac$ASTNode* $tmp2572;
    org$pandalanguage$pandac$parser$Token op2577;
    org$pandalanguage$pandac$parser$Token$Kind $match$1154_132579;
    panda$core$Int64 $tmp2582;
    panda$core$Int64 $tmp2585;
    panda$core$Int64 $tmp2589;
    org$pandalanguage$pandac$ASTNode* next2595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2596;
    org$pandalanguage$pandac$ASTNode* $tmp2597;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    org$pandalanguage$pandac$ASTNode* $tmp2604;
    org$pandalanguage$pandac$ASTNode* $tmp2605;
    panda$core$Int64 $tmp2607;
    org$pandalanguage$pandac$ASTNode* $tmp2609;
    int $tmp2566;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2570 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2569 = $tmp2570;
        $tmp2568 = $tmp2569;
        result2567 = $tmp2568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
        if (((panda$core$Bit) { result2567 == NULL }).value) {
        {
            $tmp2572 = NULL;
            $returnValue2571 = $tmp2572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2572));
            $tmp2566 = 0;
            goto $l2564;
            $l2573:;
            return $returnValue2571;
        }
        }
        $l2575:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2578 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2577 = $tmp2578;
            {
                $match$1154_132579 = op2577.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2582, 52);
                panda$core$Bit $tmp2583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132579.$rawValue, $tmp2582);
                bool $tmp2581 = $tmp2583.value;
                if ($tmp2581) goto $l2584;
                panda$core$Int64$init$builtin_int64(&$tmp2585, 53);
                panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132579.$rawValue, $tmp2585);
                $tmp2581 = $tmp2586.value;
                $l2584:;
                panda$core$Bit $tmp2587 = { $tmp2581 };
                bool $tmp2580 = $tmp2587.value;
                if ($tmp2580) goto $l2588;
                panda$core$Int64$init$builtin_int64(&$tmp2589, 72);
                panda$core$Bit $tmp2590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1154_132579.$rawValue, $tmp2589);
                $tmp2580 = $tmp2590.value;
                $l2588:;
                panda$core$Bit $tmp2591 = { $tmp2580 };
                if ($tmp2591.value) {
                {
                    int $tmp2594;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2598 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2597 = $tmp2598;
                        $tmp2596 = $tmp2597;
                        next2595 = $tmp2596;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2596));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                        if (((panda$core$Bit) { next2595 == NULL }).value) {
                        {
                            $tmp2599 = NULL;
                            $returnValue2571 = $tmp2599;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
                            $tmp2594 = 0;
                            goto $l2592;
                            $l2600:;
                            $tmp2566 = 1;
                            goto $l2564;
                            $l2601:;
                            return $returnValue2571;
                        }
                        }
                        {
                            $tmp2603 = result2567;
                            org$pandalanguage$pandac$ASTNode* $tmp2606 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2607, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2606, $tmp2607, op2577.position, result2567, op2577.kind, next2595);
                            $tmp2605 = $tmp2606;
                            $tmp2604 = $tmp2605;
                            result2567 = $tmp2604;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2604));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2605));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                        }
                    }
                    $tmp2594 = -1;
                    goto $l2592;
                    $l2592:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2595));
                    next2595 = NULL;
                    switch ($tmp2594) {
                        case 0: goto $l2600;
                        case -1: goto $l2608;
                    }
                    $l2608:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2577);
                    $tmp2609 = result2567;
                    $returnValue2571 = $tmp2609;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2609));
                    $tmp2566 = 2;
                    goto $l2564;
                    $l2610:;
                    return $returnValue2571;
                }
                }
            }
        }
        }
        $l2576:;
    }
    $tmp2566 = -1;
    goto $l2564;
    $l2564:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2567));
    result2567 = NULL;
    switch ($tmp2566) {
        case -1: goto $l2612;
        case 2: goto $l2610;
        case 0: goto $l2573;
        case 1: goto $l2601;
    }
    $l2612:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2616 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1174_92617;
    panda$core$Int64 $tmp2620;
    panda$core$Int64 $tmp2623;
    org$pandalanguage$pandac$ASTNode* $tmp2626;
    org$pandalanguage$pandac$ASTNode* $tmp2627;
    org$pandalanguage$pandac$ASTNode* $tmp2628;
    org$pandalanguage$pandac$ASTNode* $tmp2629;
    org$pandalanguage$pandac$ASTNode* $tmp2630;
    org$pandalanguage$pandac$ASTNode* $returnValue2632;
    org$pandalanguage$pandac$ASTNode* $tmp2633;
    org$pandalanguage$pandac$parser$Token op2636;
    org$pandalanguage$pandac$parser$Token$Kind $match$1184_92638;
    panda$core$Int64 $tmp2640;
    panda$core$Int64 $tmp2643;
    org$pandalanguage$pandac$parser$Token next2649;
    org$pandalanguage$pandac$ASTNode* right2651 = NULL;
    panda$core$Int64 $tmp2654;
    panda$core$Int64 $tmp2657;
    panda$core$Int64 $tmp2661;
    org$pandalanguage$pandac$ASTNode* $tmp2664;
    org$pandalanguage$pandac$ASTNode* $tmp2665;
    org$pandalanguage$pandac$ASTNode* $tmp2666;
    org$pandalanguage$pandac$ASTNode* $tmp2668;
    org$pandalanguage$pandac$ASTNode* $tmp2672;
    org$pandalanguage$pandac$ASTNode* $tmp2673;
    org$pandalanguage$pandac$ASTNode* step2674 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2675;
    panda$core$Int64 $tmp2676;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $tmp2682;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    org$pandalanguage$pandac$ASTNode* $tmp2687;
    org$pandalanguage$pandac$ASTNode* $tmp2688;
    org$pandalanguage$pandac$ASTNode* $tmp2689;
    panda$core$Int64 $tmp2691;
    panda$core$Int64 $tmp2692;
    org$pandalanguage$pandac$ASTNode* $tmp2698;
    int $tmp2615;
    {
        memset(&result2616, 0, sizeof(result2616));
        {
            org$pandalanguage$pandac$parser$Token $tmp2618 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1174_92617 = $tmp2618.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2620, 98);
            panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1174_92617.$rawValue, $tmp2620);
            bool $tmp2619 = $tmp2621.value;
            if ($tmp2619) goto $l2622;
            panda$core$Int64$init$builtin_int64(&$tmp2623, 97);
            panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1174_92617.$rawValue, $tmp2623);
            $tmp2619 = $tmp2624.value;
            $l2622:;
            panda$core$Bit $tmp2625 = { $tmp2619 };
            if ($tmp2625.value) {
            {
                {
                    $tmp2626 = result2616;
                    $tmp2627 = NULL;
                    result2616 = $tmp2627;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2627));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2626));
                }
            }
            }
            else {
            {
                {
                    $tmp2628 = result2616;
                    org$pandalanguage$pandac$ASTNode* $tmp2631 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2630 = $tmp2631;
                    $tmp2629 = $tmp2630;
                    result2616 = $tmp2629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2629));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2630));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
                }
                if (((panda$core$Bit) { result2616 == NULL }).value) {
                {
                    $tmp2633 = NULL;
                    $returnValue2632 = $tmp2633;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2633));
                    $tmp2615 = 0;
                    goto $l2613;
                    $l2634:;
                    return $returnValue2632;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2637 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2636 = $tmp2637;
        {
            $match$1184_92638 = op2636.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2640, 98);
            panda$core$Bit $tmp2641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1184_92638.$rawValue, $tmp2640);
            bool $tmp2639 = $tmp2641.value;
            if ($tmp2639) goto $l2642;
            panda$core$Int64$init$builtin_int64(&$tmp2643, 97);
            panda$core$Bit $tmp2644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1184_92638.$rawValue, $tmp2643);
            $tmp2639 = $tmp2644.value;
            $l2642:;
            panda$core$Bit $tmp2645 = { $tmp2639 };
            if ($tmp2645.value) {
            {
                int $tmp2648;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2650 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2649 = $tmp2650;
                    memset(&right2651, 0, sizeof(right2651));
                    panda$core$Int64$init$builtin_int64(&$tmp2654, 103);
                    panda$core$Bit $tmp2655 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2649.kind.$rawValue, $tmp2654);
                    bool $tmp2653 = $tmp2655.value;
                    if (!$tmp2653) goto $l2656;
                    panda$core$Int64$init$builtin_int64(&$tmp2657, 105);
                    panda$core$Bit $tmp2658 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2649.kind.$rawValue, $tmp2657);
                    $tmp2653 = $tmp2658.value;
                    $l2656:;
                    panda$core$Bit $tmp2659 = { $tmp2653 };
                    bool $tmp2652 = $tmp2659.value;
                    if (!$tmp2652) goto $l2660;
                    panda$core$Int64$init$builtin_int64(&$tmp2661, 34);
                    panda$core$Bit $tmp2662 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2649.kind.$rawValue, $tmp2661);
                    $tmp2652 = $tmp2662.value;
                    $l2660:;
                    panda$core$Bit $tmp2663 = { $tmp2652 };
                    if ($tmp2663.value) {
                    {
                        {
                            $tmp2664 = right2651;
                            org$pandalanguage$pandac$ASTNode* $tmp2667 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2666 = $tmp2667;
                            $tmp2665 = $tmp2666;
                            right2651 = $tmp2665;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2665));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2666));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2664));
                        }
                        if (((panda$core$Bit) { right2651 == NULL }).value) {
                        {
                            $tmp2668 = NULL;
                            $returnValue2632 = $tmp2668;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2668));
                            $tmp2648 = 0;
                            goto $l2646;
                            $l2669:;
                            $tmp2615 = 1;
                            goto $l2613;
                            $l2670:;
                            return $returnValue2632;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2672 = right2651;
                            $tmp2673 = NULL;
                            right2651 = $tmp2673;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2673));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2672));
                        }
                    }
                    }
                    memset(&step2674, 0, sizeof(step2674));
                    panda$core$Int64$init$builtin_int64(&$tmp2676, 34);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2675, $tmp2676);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2677 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2675);
                    if (((panda$core$Bit) { $tmp2677.nonnull }).value) {
                    {
                        {
                            $tmp2678 = step2674;
                            org$pandalanguage$pandac$ASTNode* $tmp2681 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2680 = $tmp2681;
                            $tmp2679 = $tmp2680;
                            step2674 = $tmp2679;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2678));
                        }
                        if (((panda$core$Bit) { step2674 == NULL }).value) {
                        {
                            $tmp2682 = NULL;
                            $returnValue2632 = $tmp2682;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2682));
                            $tmp2648 = 1;
                            goto $l2646;
                            $l2683:;
                            $tmp2615 = 2;
                            goto $l2613;
                            $l2684:;
                            return $returnValue2632;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2686 = step2674;
                            $tmp2687 = NULL;
                            step2674 = $tmp2687;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2687));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2686));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2690 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2691, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2692, 97);
                    panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2636.kind.$rawValue, $tmp2692);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2690, $tmp2691, op2636.position, result2616, right2651, $tmp2693, step2674);
                    $tmp2689 = $tmp2690;
                    $tmp2688 = $tmp2689;
                    $returnValue2632 = $tmp2688;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2688));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2689));
                    $tmp2648 = 2;
                    goto $l2646;
                    $l2694:;
                    $tmp2615 = 3;
                    goto $l2613;
                    $l2695:;
                    return $returnValue2632;
                }
                $l2646:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2651));
                switch ($tmp2648) {
                    case 0: goto $l2669;
                    case 1: goto $l2683;
                    case 2: goto $l2694;
                }
                $l2697:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2636);
                $tmp2698 = result2616;
                $returnValue2632 = $tmp2698;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2698));
                $tmp2615 = 4;
                goto $l2613;
                $l2699:;
                return $returnValue2632;
            }
            }
        }
    }
    $tmp2615 = -1;
    goto $l2613;
    $l2613:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2616));
    switch ($tmp2615) {
        case 0: goto $l2634;
        case -1: goto $l2701;
        case 4: goto $l2699;
        case 1: goto $l2670;
        case 3: goto $l2695;
        case 2: goto $l2684;
    }
    $l2701:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2705 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    org$pandalanguage$pandac$ASTNode* $tmp2707;
    org$pandalanguage$pandac$ASTNode* $returnValue2709;
    org$pandalanguage$pandac$ASTNode* $tmp2710;
    org$pandalanguage$pandac$parser$Token op2715;
    org$pandalanguage$pandac$parser$Token$Kind $match$1227_132717;
    panda$core$Int64 $tmp2725;
    panda$core$Int64 $tmp2728;
    panda$core$Int64 $tmp2732;
    panda$core$Int64 $tmp2736;
    panda$core$Int64 $tmp2740;
    panda$core$Int64 $tmp2744;
    panda$core$Int64 $tmp2748;
    panda$core$Int64 $tmp2752;
    org$pandalanguage$pandac$ASTNode* next2758 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    org$pandalanguage$pandac$ASTNode* $tmp2762;
    org$pandalanguage$pandac$ASTNode* $tmp2766;
    org$pandalanguage$pandac$ASTNode* $tmp2767;
    org$pandalanguage$pandac$ASTNode* $tmp2768;
    panda$core$Int64 $tmp2770;
    org$pandalanguage$pandac$ASTNode* $tmp2772;
    int $tmp2704;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2708 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2707 = $tmp2708;
        $tmp2706 = $tmp2707;
        result2705 = $tmp2706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2707));
        if (((panda$core$Bit) { result2705 == NULL }).value) {
        {
            $tmp2710 = NULL;
            $returnValue2709 = $tmp2710;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2710));
            $tmp2704 = 0;
            goto $l2702;
            $l2711:;
            return $returnValue2709;
        }
        }
        $l2713:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2716 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2715 = $tmp2716;
            {
                $match$1227_132717 = op2715.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2725, 59);
                panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2725);
                bool $tmp2724 = $tmp2726.value;
                if ($tmp2724) goto $l2727;
                panda$core$Int64$init$builtin_int64(&$tmp2728, 60);
                panda$core$Bit $tmp2729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2728);
                $tmp2724 = $tmp2729.value;
                $l2727:;
                panda$core$Bit $tmp2730 = { $tmp2724 };
                bool $tmp2723 = $tmp2730.value;
                if ($tmp2723) goto $l2731;
                panda$core$Int64$init$builtin_int64(&$tmp2732, 61);
                panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2732);
                $tmp2723 = $tmp2733.value;
                $l2731:;
                panda$core$Bit $tmp2734 = { $tmp2723 };
                bool $tmp2722 = $tmp2734.value;
                if ($tmp2722) goto $l2735;
                panda$core$Int64$init$builtin_int64(&$tmp2736, 62);
                panda$core$Bit $tmp2737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2736);
                $tmp2722 = $tmp2737.value;
                $l2735:;
                panda$core$Bit $tmp2738 = { $tmp2722 };
                bool $tmp2721 = $tmp2738.value;
                if ($tmp2721) goto $l2739;
                panda$core$Int64$init$builtin_int64(&$tmp2740, 63);
                panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2740);
                $tmp2721 = $tmp2741.value;
                $l2739:;
                panda$core$Bit $tmp2742 = { $tmp2721 };
                bool $tmp2720 = $tmp2742.value;
                if ($tmp2720) goto $l2743;
                panda$core$Int64$init$builtin_int64(&$tmp2744, 64);
                panda$core$Bit $tmp2745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2744);
                $tmp2720 = $tmp2745.value;
                $l2743:;
                panda$core$Bit $tmp2746 = { $tmp2720 };
                bool $tmp2719 = $tmp2746.value;
                if ($tmp2719) goto $l2747;
                panda$core$Int64$init$builtin_int64(&$tmp2748, 65);
                panda$core$Bit $tmp2749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2748);
                $tmp2719 = $tmp2749.value;
                $l2747:;
                panda$core$Bit $tmp2750 = { $tmp2719 };
                bool $tmp2718 = $tmp2750.value;
                if ($tmp2718) goto $l2751;
                panda$core$Int64$init$builtin_int64(&$tmp2752, 66);
                panda$core$Bit $tmp2753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1227_132717.$rawValue, $tmp2752);
                $tmp2718 = $tmp2753.value;
                $l2751:;
                panda$core$Bit $tmp2754 = { $tmp2718 };
                if ($tmp2754.value) {
                {
                    int $tmp2757;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2761 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2760 = $tmp2761;
                        $tmp2759 = $tmp2760;
                        next2758 = $tmp2759;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2759));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2760));
                        if (((panda$core$Bit) { next2758 == NULL }).value) {
                        {
                            $tmp2762 = NULL;
                            $returnValue2709 = $tmp2762;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2762));
                            $tmp2757 = 0;
                            goto $l2755;
                            $l2763:;
                            $tmp2704 = 1;
                            goto $l2702;
                            $l2764:;
                            return $returnValue2709;
                        }
                        }
                        {
                            $tmp2766 = result2705;
                            org$pandalanguage$pandac$ASTNode* $tmp2769 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2770, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2769, $tmp2770, op2715.position, result2705, op2715.kind, next2758);
                            $tmp2768 = $tmp2769;
                            $tmp2767 = $tmp2768;
                            result2705 = $tmp2767;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2767));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2768));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2766));
                        }
                    }
                    $tmp2757 = -1;
                    goto $l2755;
                    $l2755:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2758));
                    next2758 = NULL;
                    switch ($tmp2757) {
                        case 0: goto $l2763;
                        case -1: goto $l2771;
                    }
                    $l2771:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2715);
                    $tmp2772 = result2705;
                    $returnValue2709 = $tmp2772;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2772));
                    $tmp2704 = 2;
                    goto $l2702;
                    $l2773:;
                    return $returnValue2709;
                }
                }
            }
        }
        }
        $l2714:;
    }
    $tmp2704 = -1;
    goto $l2702;
    $l2702:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2705));
    result2705 = NULL;
    switch ($tmp2704) {
        case 2: goto $l2773;
        case 1: goto $l2764;
        case -1: goto $l2775;
        case 0: goto $l2711;
    }
    $l2775:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2779 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2780;
    org$pandalanguage$pandac$ASTNode* $tmp2781;
    org$pandalanguage$pandac$ASTNode* $returnValue2783;
    org$pandalanguage$pandac$ASTNode* $tmp2784;
    org$pandalanguage$pandac$parser$Token op2789;
    org$pandalanguage$pandac$parser$Token$Kind $match$1258_132791;
    panda$core$Int64 $tmp2793;
    panda$core$Int64 $tmp2796;
    org$pandalanguage$pandac$ASTNode* next2802 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2803;
    org$pandalanguage$pandac$ASTNode* $tmp2804;
    org$pandalanguage$pandac$ASTNode* $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2810;
    org$pandalanguage$pandac$ASTNode* $tmp2811;
    org$pandalanguage$pandac$ASTNode* $tmp2812;
    panda$core$Int64 $tmp2814;
    org$pandalanguage$pandac$ASTNode* $tmp2816;
    int $tmp2778;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2782 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2781 = $tmp2782;
        $tmp2780 = $tmp2781;
        result2779 = $tmp2780;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2781));
        if (((panda$core$Bit) { result2779 == NULL }).value) {
        {
            $tmp2784 = NULL;
            $returnValue2783 = $tmp2784;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2784));
            $tmp2778 = 0;
            goto $l2776;
            $l2785:;
            return $returnValue2783;
        }
        }
        $l2787:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2790 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2789 = $tmp2790;
            {
                $match$1258_132791 = op2789.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2793, 67);
                panda$core$Bit $tmp2794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1258_132791.$rawValue, $tmp2793);
                bool $tmp2792 = $tmp2794.value;
                if ($tmp2792) goto $l2795;
                panda$core$Int64$init$builtin_int64(&$tmp2796, 71);
                panda$core$Bit $tmp2797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1258_132791.$rawValue, $tmp2796);
                $tmp2792 = $tmp2797.value;
                $l2795:;
                panda$core$Bit $tmp2798 = { $tmp2792 };
                if ($tmp2798.value) {
                {
                    int $tmp2801;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2805 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2804 = $tmp2805;
                        $tmp2803 = $tmp2804;
                        next2802 = $tmp2803;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2803));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2804));
                        if (((panda$core$Bit) { next2802 == NULL }).value) {
                        {
                            $tmp2806 = NULL;
                            $returnValue2783 = $tmp2806;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2806));
                            $tmp2801 = 0;
                            goto $l2799;
                            $l2807:;
                            $tmp2778 = 1;
                            goto $l2776;
                            $l2808:;
                            return $returnValue2783;
                        }
                        }
                        {
                            $tmp2810 = result2779;
                            org$pandalanguage$pandac$ASTNode* $tmp2813 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2814, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2813, $tmp2814, op2789.position, result2779, op2789.kind, next2802);
                            $tmp2812 = $tmp2813;
                            $tmp2811 = $tmp2812;
                            result2779 = $tmp2811;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2811));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2812));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2810));
                        }
                    }
                    $tmp2801 = -1;
                    goto $l2799;
                    $l2799:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2802));
                    next2802 = NULL;
                    switch ($tmp2801) {
                        case 0: goto $l2807;
                        case -1: goto $l2815;
                    }
                    $l2815:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2789);
                    $tmp2816 = result2779;
                    $returnValue2783 = $tmp2816;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2816));
                    $tmp2778 = 2;
                    goto $l2776;
                    $l2817:;
                    return $returnValue2783;
                }
                }
            }
        }
        }
        $l2788:;
    }
    $tmp2778 = -1;
    goto $l2776;
    $l2776:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2779));
    result2779 = NULL;
    switch ($tmp2778) {
        case 2: goto $l2817;
        case -1: goto $l2819;
        case 1: goto $l2808;
        case 0: goto $l2785;
    }
    $l2819:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2823 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2824;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    org$pandalanguage$pandac$ASTNode* $returnValue2827;
    org$pandalanguage$pandac$ASTNode* $tmp2828;
    org$pandalanguage$pandac$parser$Token$nullable op2836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2837;
    panda$core$Int64 $tmp2838;
    org$pandalanguage$pandac$ASTNode* next2841 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2842;
    org$pandalanguage$pandac$ASTNode* $tmp2843;
    org$pandalanguage$pandac$ASTNode* $tmp2845;
    org$pandalanguage$pandac$ASTNode* $tmp2849;
    org$pandalanguage$pandac$ASTNode* $tmp2850;
    org$pandalanguage$pandac$ASTNode* $tmp2851;
    panda$core$Int64 $tmp2853;
    org$pandalanguage$pandac$ASTNode* $tmp2855;
    int $tmp2822;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2826 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2825 = $tmp2826;
        $tmp2824 = $tmp2825;
        result2823 = $tmp2824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2825));
        if (((panda$core$Bit) { result2823 == NULL }).value) {
        {
            $tmp2828 = NULL;
            $returnValue2827 = $tmp2828;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2828));
            $tmp2822 = 0;
            goto $l2820;
            $l2829:;
            return $returnValue2827;
        }
        }
        $l2831:;
        while (true) {
        {
            int $tmp2835;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2838, 69);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2837, $tmp2838);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2839 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2837);
                op2836 = $tmp2839;
                if (((panda$core$Bit) { !op2836.nonnull }).value) {
                {
                    $tmp2835 = 0;
                    goto $l2833;
                    $l2840:;
                    goto $l2832;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2844 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2843 = $tmp2844;
                $tmp2842 = $tmp2843;
                next2841 = $tmp2842;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2843));
                if (((panda$core$Bit) { next2841 == NULL }).value) {
                {
                    $tmp2845 = NULL;
                    $returnValue2827 = $tmp2845;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2845));
                    $tmp2835 = 1;
                    goto $l2833;
                    $l2846:;
                    $tmp2822 = 1;
                    goto $l2820;
                    $l2847:;
                    return $returnValue2827;
                }
                }
                {
                    $tmp2849 = result2823;
                    org$pandalanguage$pandac$ASTNode* $tmp2852 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2853, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2852, $tmp2853, ((org$pandalanguage$pandac$parser$Token) op2836.value).position, result2823, ((org$pandalanguage$pandac$parser$Token) op2836.value).kind, next2841);
                    $tmp2851 = $tmp2852;
                    $tmp2850 = $tmp2851;
                    result2823 = $tmp2850;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2850));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2851));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
                }
            }
            $tmp2835 = -1;
            goto $l2833;
            $l2833:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2841));
            next2841 = NULL;
            switch ($tmp2835) {
                case -1: goto $l2854;
                case 0: goto $l2840;
                case 1: goto $l2846;
            }
            $l2854:;
        }
        }
        $l2832:;
        $tmp2855 = result2823;
        $returnValue2827 = $tmp2855;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2855));
        $tmp2822 = 2;
        goto $l2820;
        $l2856:;
        return $returnValue2827;
    }
    $l2820:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2823));
    result2823 = NULL;
    switch ($tmp2822) {
        case 2: goto $l2856;
        case 1: goto $l2847;
        case 0: goto $l2829;
    }
    $l2858:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2862;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2863;
    panda$core$Int64 $tmp2864;
    org$pandalanguage$pandac$ASTNode* $returnValue2867;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    org$pandalanguage$pandac$ASTNode* test2871 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2872;
    org$pandalanguage$pandac$ASTNode* $tmp2873;
    org$pandalanguage$pandac$ASTNode* $tmp2875;
    panda$collections$ImmutableArray* ifTrue2878 = NULL;
    panda$collections$ImmutableArray* $tmp2879;
    panda$collections$ImmutableArray* $tmp2880;
    org$pandalanguage$pandac$ASTNode* $tmp2882;
    org$pandalanguage$pandac$ASTNode* ifFalse2885 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2886;
    panda$core$Int64 $tmp2887;
    panda$core$Int64 $tmp2890;
    org$pandalanguage$pandac$ASTNode* $tmp2892;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$ASTNode* $tmp2894;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    org$pandalanguage$pandac$ASTNode* $tmp2899;
    org$pandalanguage$pandac$ASTNode* $tmp2900;
    org$pandalanguage$pandac$ASTNode* $tmp2901;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2906;
    org$pandalanguage$pandac$ASTNode* $tmp2907;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    panda$core$Int64 $tmp2911;
    int $tmp2861;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2864, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2863, $tmp2864);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2866 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2863, &$s2865);
        start2862 = $tmp2866;
        if (((panda$core$Bit) { !start2862.nonnull }).value) {
        {
            $tmp2868 = NULL;
            $returnValue2867 = $tmp2868;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2868));
            $tmp2861 = 0;
            goto $l2859;
            $l2869:;
            return $returnValue2867;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2874 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2873 = $tmp2874;
        $tmp2872 = $tmp2873;
        test2871 = $tmp2872;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2872));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2873));
        if (((panda$core$Bit) { test2871 == NULL }).value) {
        {
            $tmp2875 = NULL;
            $returnValue2867 = $tmp2875;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2875));
            $tmp2861 = 1;
            goto $l2859;
            $l2876:;
            return $returnValue2867;
        }
        }
        panda$collections$ImmutableArray* $tmp2881 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2880 = $tmp2881;
        $tmp2879 = $tmp2880;
        ifTrue2878 = $tmp2879;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2879));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2880));
        if (((panda$core$Bit) { ifTrue2878 == NULL }).value) {
        {
            $tmp2882 = NULL;
            $returnValue2867 = $tmp2882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2882));
            $tmp2861 = 2;
            goto $l2859;
            $l2883:;
            return $returnValue2867;
        }
        }
        memset(&ifFalse2885, 0, sizeof(ifFalse2885));
        panda$core$Int64$init$builtin_int64(&$tmp2887, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2886, $tmp2887);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2888 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2886);
        if (((panda$core$Bit) { $tmp2888.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2889 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2890, 37);
            panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2889.kind.$rawValue, $tmp2890);
            if ($tmp2891.value) {
            {
                {
                    $tmp2892 = ifFalse2885;
                    org$pandalanguage$pandac$ASTNode* $tmp2895 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2894 = $tmp2895;
                    $tmp2893 = $tmp2894;
                    ifFalse2885 = $tmp2893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2892));
                }
                if (((panda$core$Bit) { ifFalse2885 == NULL }).value) {
                {
                    $tmp2896 = NULL;
                    $returnValue2867 = $tmp2896;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2896));
                    $tmp2861 = 3;
                    goto $l2859;
                    $l2897:;
                    return $returnValue2867;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2899 = ifFalse2885;
                    org$pandalanguage$pandac$ASTNode* $tmp2902 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2901 = $tmp2902;
                    $tmp2900 = $tmp2901;
                    ifFalse2885 = $tmp2900;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2900));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2899));
                }
                if (((panda$core$Bit) { ifFalse2885 == NULL }).value) {
                {
                    $tmp2903 = NULL;
                    $returnValue2867 = $tmp2903;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
                    $tmp2861 = 4;
                    goto $l2859;
                    $l2904:;
                    return $returnValue2867;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2906 = ifFalse2885;
                $tmp2907 = NULL;
                ifFalse2885 = $tmp2907;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2907));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2906));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2910 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2911, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2910, $tmp2911, ((org$pandalanguage$pandac$parser$Token) start2862.value).position, test2871, ifTrue2878, ifFalse2885);
        $tmp2909 = $tmp2910;
        $tmp2908 = $tmp2909;
        $returnValue2867 = $tmp2908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2909));
        $tmp2861 = 5;
        goto $l2859;
        $l2912:;
        return $returnValue2867;
    }
    $l2859:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2885));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2878));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2871));
    test2871 = NULL;
    ifTrue2878 = NULL;
    switch ($tmp2861) {
        case 5: goto $l2912;
        case 4: goto $l2904;
        case 3: goto $l2897;
        case 2: goto $l2883;
        case 1: goto $l2876;
        case 0: goto $l2869;
    }
    $l2914:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2915;
    panda$core$Int64 $tmp2916;
    org$pandalanguage$pandac$ASTNode* $returnValue2919;
    org$pandalanguage$pandac$ASTNode* $tmp2920;
    org$pandalanguage$pandac$ASTNode* $tmp2922;
    org$pandalanguage$pandac$ASTNode* $tmp2923;
    panda$core$Bit $tmp2924;
    panda$core$Int64$init$builtin_int64(&$tmp2916, 96);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2915, $tmp2916);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2918 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2915, &$s2917);
    if (((panda$core$Bit) { !$tmp2918.nonnull }).value) {
    {
        $tmp2920 = NULL;
        $returnValue2919 = $tmp2920;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2920));
        return $returnValue2919;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2924, false);
    org$pandalanguage$pandac$ASTNode* $tmp2925 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2924);
    $tmp2923 = $tmp2925;
    $tmp2922 = $tmp2923;
    $returnValue2919 = $tmp2922;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2922));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2923));
    return $returnValue2919;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2927;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2928;
    panda$core$Int64 $tmp2929;
    org$pandalanguage$pandac$ASTNode* $returnValue2932;
    org$pandalanguage$pandac$ASTNode* $tmp2933;
    panda$core$Int64 $tmp2936;
    org$pandalanguage$pandac$ASTNode* type2941 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2942;
    org$pandalanguage$pandac$ASTNode* $tmp2943;
    org$pandalanguage$pandac$ASTNode* $tmp2945;
    org$pandalanguage$pandac$ASTNode* $tmp2948;
    org$pandalanguage$pandac$ASTNode* $tmp2949;
    panda$core$Int64 $tmp2951;
    panda$core$String* $tmp2952;
    org$pandalanguage$pandac$ASTNode* $tmp2957;
    org$pandalanguage$pandac$ASTNode* $tmp2958;
    panda$core$Int64 $tmp2960;
    panda$core$String* $tmp2961;
    panda$core$Int64$init$builtin_int64(&$tmp2929, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2928, $tmp2929);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2931 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2928, &$s2930);
    id2927 = $tmp2931;
    if (((panda$core$Bit) { !id2927.nonnull }).value) {
    {
        $tmp2933 = NULL;
        $returnValue2932 = $tmp2933;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
        return $returnValue2932;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2935 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2936, 96);
    panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2935.kind.$rawValue, $tmp2936);
    if ($tmp2937.value) {
    {
        int $tmp2940;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2944 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2943 = $tmp2944;
            $tmp2942 = $tmp2943;
            type2941 = $tmp2942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2943));
            if (((panda$core$Bit) { type2941 == NULL }).value) {
            {
                $tmp2945 = NULL;
                $returnValue2932 = $tmp2945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2945));
                $tmp2940 = 0;
                goto $l2938;
                $l2946:;
                return $returnValue2932;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2950 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2951, 44);
            panda$core$String* $tmp2953 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2927.value));
            $tmp2952 = $tmp2953;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2950, $tmp2951, ((org$pandalanguage$pandac$parser$Token) id2927.value).position, $tmp2952, type2941);
            $tmp2949 = $tmp2950;
            $tmp2948 = $tmp2949;
            $returnValue2932 = $tmp2948;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2952));
            $tmp2940 = 1;
            goto $l2938;
            $l2954:;
            return $returnValue2932;
        }
        $l2938:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2941));
        type2941 = NULL;
        switch ($tmp2940) {
            case 1: goto $l2954;
            case 0: goto $l2946;
        }
        $l2956:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2959 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2960, 20);
    panda$core$String* $tmp2962 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2927.value));
    $tmp2961 = $tmp2962;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2959, $tmp2960, ((org$pandalanguage$pandac$parser$Token) id2927.value).position, $tmp2961);
    $tmp2958 = $tmp2959;
    $tmp2957 = $tmp2958;
    $returnValue2932 = $tmp2957;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2957));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2958));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2961));
    return $returnValue2932;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2968;
    panda$core$Int64 $tmp2969;
    org$pandalanguage$pandac$ASTNode* $returnValue2972;
    org$pandalanguage$pandac$ASTNode* $tmp2973;
    org$pandalanguage$pandac$ASTNode* t2976 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2977;
    org$pandalanguage$pandac$ASTNode* $tmp2978;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2983;
    panda$core$Int64 $tmp2984;
    org$pandalanguage$pandac$ASTNode* $tmp2987;
    org$pandalanguage$pandac$ASTNode* list2990 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2991;
    org$pandalanguage$pandac$ASTNode* $tmp2992;
    org$pandalanguage$pandac$ASTNode* $tmp2994;
    panda$collections$ImmutableArray* block2997 = NULL;
    panda$collections$ImmutableArray* $tmp2998;
    panda$collections$ImmutableArray* $tmp2999;
    org$pandalanguage$pandac$ASTNode* $tmp3001;
    org$pandalanguage$pandac$ASTNode* $tmp3004;
    org$pandalanguage$pandac$ASTNode* $tmp3005;
    panda$core$Int64 $tmp3007;
    int $tmp2966;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2969, 33);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2968, $tmp2969);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2971 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2968, &$s2970);
        start2967 = $tmp2971;
        if (((panda$core$Bit) { !start2967.nonnull }).value) {
        {
            $tmp2973 = NULL;
            $returnValue2972 = $tmp2973;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2973));
            $tmp2966 = 0;
            goto $l2964;
            $l2974:;
            return $returnValue2972;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2979 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2978 = $tmp2979;
        $tmp2977 = $tmp2978;
        t2976 = $tmp2977;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2977));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
        if (((panda$core$Bit) { t2976 == NULL }).value) {
        {
            $tmp2980 = NULL;
            $returnValue2972 = $tmp2980;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2980));
            $tmp2966 = 1;
            goto $l2964;
            $l2981:;
            return $returnValue2972;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2984, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2983, $tmp2984);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2986 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2983, &$s2985);
        if (((panda$core$Bit) { !$tmp2986.nonnull }).value) {
        {
            $tmp2987 = NULL;
            $returnValue2972 = $tmp2987;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2987));
            $tmp2966 = 2;
            goto $l2964;
            $l2988:;
            return $returnValue2972;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2993 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2992 = $tmp2993;
        $tmp2991 = $tmp2992;
        list2990 = $tmp2991;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2991));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2992));
        if (((panda$core$Bit) { list2990 == NULL }).value) {
        {
            $tmp2994 = NULL;
            $returnValue2972 = $tmp2994;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2994));
            $tmp2966 = 3;
            goto $l2964;
            $l2995:;
            return $returnValue2972;
        }
        }
        panda$collections$ImmutableArray* $tmp3000 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2999 = $tmp3000;
        $tmp2998 = $tmp2999;
        block2997 = $tmp2998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2999));
        if (((panda$core$Bit) { block2997 == NULL }).value) {
        {
            $tmp3001 = NULL;
            $returnValue2972 = $tmp3001;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3001));
            $tmp2966 = 4;
            goto $l2964;
            $l3002:;
            return $returnValue2972;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3006 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3007, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3006, $tmp3007, ((org$pandalanguage$pandac$parser$Token) start2967.value).position, p_label, t2976, list2990, block2997);
        $tmp3005 = $tmp3006;
        $tmp3004 = $tmp3005;
        $returnValue2972 = $tmp3004;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3005));
        $tmp2966 = 5;
        goto $l2964;
        $l3008:;
        return $returnValue2972;
    }
    $l2964:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2997));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2990));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2976));
    t2976 = NULL;
    list2990 = NULL;
    block2997 = NULL;
    switch ($tmp2966) {
        case 3: goto $l2995;
        case 1: goto $l2981;
        case 4: goto $l3002;
        case 2: goto $l2988;
        case 5: goto $l3008;
        case 0: goto $l2974;
    }
    $l3010:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3014;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3015;
    panda$core$Int64 $tmp3016;
    org$pandalanguage$pandac$ASTNode* $returnValue3019;
    org$pandalanguage$pandac$ASTNode* $tmp3020;
    org$pandalanguage$pandac$ASTNode* test3023 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3024;
    org$pandalanguage$pandac$ASTNode* $tmp3025;
    org$pandalanguage$pandac$ASTNode* $tmp3027;
    panda$collections$ImmutableArray* body3030 = NULL;
    panda$collections$ImmutableArray* $tmp3031;
    panda$collections$ImmutableArray* $tmp3032;
    org$pandalanguage$pandac$ASTNode* $tmp3034;
    org$pandalanguage$pandac$ASTNode* $tmp3037;
    org$pandalanguage$pandac$ASTNode* $tmp3038;
    panda$core$Int64 $tmp3040;
    int $tmp3013;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3016, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3015, $tmp3016);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3018 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3015, &$s3017);
        start3014 = $tmp3018;
        if (((panda$core$Bit) { !start3014.nonnull }).value) {
        {
            $tmp3020 = NULL;
            $returnValue3019 = $tmp3020;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3020));
            $tmp3013 = 0;
            goto $l3011;
            $l3021:;
            return $returnValue3019;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3026 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3025 = $tmp3026;
        $tmp3024 = $tmp3025;
        test3023 = $tmp3024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3025));
        if (((panda$core$Bit) { test3023 == NULL }).value) {
        {
            $tmp3027 = NULL;
            $returnValue3019 = $tmp3027;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3027));
            $tmp3013 = 1;
            goto $l3011;
            $l3028:;
            return $returnValue3019;
        }
        }
        panda$collections$ImmutableArray* $tmp3033 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3032 = $tmp3033;
        $tmp3031 = $tmp3032;
        body3030 = $tmp3031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3032));
        if (((panda$core$Bit) { body3030 == NULL }).value) {
        {
            $tmp3034 = NULL;
            $returnValue3019 = $tmp3034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
            $tmp3013 = 2;
            goto $l3011;
            $l3035:;
            return $returnValue3019;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3039 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3040, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3039, $tmp3040, ((org$pandalanguage$pandac$parser$Token) start3014.value).position, p_label, test3023, body3030);
        $tmp3038 = $tmp3039;
        $tmp3037 = $tmp3038;
        $returnValue3019 = $tmp3037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3038));
        $tmp3013 = 3;
        goto $l3011;
        $l3041:;
        return $returnValue3019;
    }
    $l3011:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3030));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3023));
    test3023 = NULL;
    body3030 = NULL;
    switch ($tmp3013) {
        case 2: goto $l3035;
        case 3: goto $l3041;
        case 0: goto $l3021;
        case 1: goto $l3028;
    }
    $l3043:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3047;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3048;
    panda$core$Int64 $tmp3049;
    org$pandalanguage$pandac$ASTNode* $returnValue3052;
    org$pandalanguage$pandac$ASTNode* $tmp3053;
    panda$collections$ImmutableArray* body3056 = NULL;
    panda$collections$ImmutableArray* $tmp3057;
    panda$collections$ImmutableArray* $tmp3058;
    org$pandalanguage$pandac$ASTNode* $tmp3060;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3063;
    panda$core$Int64 $tmp3064;
    org$pandalanguage$pandac$ASTNode* $tmp3067;
    org$pandalanguage$pandac$ASTNode* test3070 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3072;
    org$pandalanguage$pandac$ASTNode* $tmp3074;
    org$pandalanguage$pandac$ASTNode* $tmp3077;
    org$pandalanguage$pandac$ASTNode* $tmp3078;
    panda$core$Int64 $tmp3080;
    int $tmp3046;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3049, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3048, $tmp3049);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3051 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3048, &$s3050);
        start3047 = $tmp3051;
        if (((panda$core$Bit) { !start3047.nonnull }).value) {
        {
            $tmp3053 = NULL;
            $returnValue3052 = $tmp3053;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
            $tmp3046 = 0;
            goto $l3044;
            $l3054:;
            return $returnValue3052;
        }
        }
        panda$collections$ImmutableArray* $tmp3059 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3058 = $tmp3059;
        $tmp3057 = $tmp3058;
        body3056 = $tmp3057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3058));
        if (((panda$core$Bit) { body3056 == NULL }).value) {
        {
            $tmp3060 = NULL;
            $returnValue3052 = $tmp3060;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3060));
            $tmp3046 = 1;
            goto $l3044;
            $l3061:;
            return $returnValue3052;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3064, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3063, $tmp3064);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3066 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3063, &$s3065);
        if (((panda$core$Bit) { !$tmp3066.nonnull }).value) {
        {
            $tmp3067 = NULL;
            $returnValue3052 = $tmp3067;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3067));
            $tmp3046 = 2;
            goto $l3044;
            $l3068:;
            return $returnValue3052;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3073 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3072 = $tmp3073;
        $tmp3071 = $tmp3072;
        test3070 = $tmp3071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3072));
        if (((panda$core$Bit) { test3070 == NULL }).value) {
        {
            $tmp3074 = NULL;
            $returnValue3052 = $tmp3074;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
            $tmp3046 = 3;
            goto $l3044;
            $l3075:;
            return $returnValue3052;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3079 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3080, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3079, $tmp3080, ((org$pandalanguage$pandac$parser$Token) start3047.value).position, p_label, body3056, test3070);
        $tmp3078 = $tmp3079;
        $tmp3077 = $tmp3078;
        $returnValue3052 = $tmp3077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
        $tmp3046 = 4;
        goto $l3044;
        $l3081:;
        return $returnValue3052;
    }
    $l3044:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3070));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3056));
    body3056 = NULL;
    test3070 = NULL;
    switch ($tmp3046) {
        case 2: goto $l3068;
        case 4: goto $l3081;
        case 1: goto $l3061;
        case 3: goto $l3075;
        case 0: goto $l3054;
    }
    $l3083:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3088;
    panda$core$Int64 $tmp3089;
    org$pandalanguage$pandac$ASTNode* $returnValue3092;
    org$pandalanguage$pandac$ASTNode* $tmp3093;
    panda$collections$ImmutableArray* body3096 = NULL;
    panda$collections$ImmutableArray* $tmp3097;
    panda$collections$ImmutableArray* $tmp3098;
    org$pandalanguage$pandac$ASTNode* $tmp3100;
    org$pandalanguage$pandac$ASTNode* $tmp3103;
    org$pandalanguage$pandac$ASTNode* $tmp3104;
    panda$core$Int64 $tmp3106;
    int $tmp3086;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3089, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3088, $tmp3089);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3091 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3088, &$s3090);
        start3087 = $tmp3091;
        if (((panda$core$Bit) { !start3087.nonnull }).value) {
        {
            $tmp3093 = NULL;
            $returnValue3092 = $tmp3093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3093));
            $tmp3086 = 0;
            goto $l3084;
            $l3094:;
            return $returnValue3092;
        }
        }
        panda$collections$ImmutableArray* $tmp3099 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3098 = $tmp3099;
        $tmp3097 = $tmp3098;
        body3096 = $tmp3097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
        if (((panda$core$Bit) { body3096 == NULL }).value) {
        {
            $tmp3100 = NULL;
            $returnValue3092 = $tmp3100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3100));
            $tmp3086 = 1;
            goto $l3084;
            $l3101:;
            return $returnValue3092;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3105 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3106, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3105, $tmp3106, ((org$pandalanguage$pandac$parser$Token) start3087.value).position, p_label, body3096);
        $tmp3104 = $tmp3105;
        $tmp3103 = $tmp3104;
        $returnValue3092 = $tmp3103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
        $tmp3086 = 2;
        goto $l3084;
        $l3107:;
        return $returnValue3092;
    }
    $l3084:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3096));
    body3096 = NULL;
    switch ($tmp3086) {
        case 2: goto $l3107;
        case 1: goto $l3101;
        case 0: goto $l3094;
    }
    $l3109:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3113;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3114;
    panda$core$Int64 $tmp3115;
    org$pandalanguage$pandac$ASTNode* $returnValue3118;
    org$pandalanguage$pandac$ASTNode* $tmp3119;
    org$pandalanguage$pandac$ASTNode* expr3122 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3123;
    org$pandalanguage$pandac$ASTNode* $tmp3124;
    org$pandalanguage$pandac$ASTNode* $tmp3126;
    org$pandalanguage$pandac$ASTNode* message3129 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3130;
    panda$core$Int64 $tmp3131;
    org$pandalanguage$pandac$ASTNode* $tmp3133;
    org$pandalanguage$pandac$ASTNode* $tmp3134;
    org$pandalanguage$pandac$ASTNode* $tmp3135;
    org$pandalanguage$pandac$ASTNode* $tmp3137;
    org$pandalanguage$pandac$ASTNode* $tmp3140;
    org$pandalanguage$pandac$ASTNode* $tmp3141;
    org$pandalanguage$pandac$ASTNode* $tmp3142;
    org$pandalanguage$pandac$ASTNode* $tmp3143;
    panda$core$Int64 $tmp3145;
    int $tmp3112;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3115, 45);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3114, $tmp3115);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3117 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3114, &$s3116);
        start3113 = $tmp3117;
        if (((panda$core$Bit) { !start3113.nonnull }).value) {
        {
            $tmp3119 = NULL;
            $returnValue3118 = $tmp3119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
            $tmp3112 = 0;
            goto $l3110;
            $l3120:;
            return $returnValue3118;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3125 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3124 = $tmp3125;
        $tmp3123 = $tmp3124;
        expr3122 = $tmp3123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
        if (((panda$core$Bit) { expr3122 == NULL }).value) {
        {
            $tmp3126 = NULL;
            $returnValue3118 = $tmp3126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3126));
            $tmp3112 = 1;
            goto $l3110;
            $l3127:;
            return $returnValue3118;
        }
        }
        memset(&message3129, 0, sizeof(message3129));
        panda$core$Int64$init$builtin_int64(&$tmp3131, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3130, $tmp3131);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3132 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3130);
        if (((panda$core$Bit) { $tmp3132.nonnull }).value) {
        {
            {
                $tmp3133 = message3129;
                org$pandalanguage$pandac$ASTNode* $tmp3136 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3135 = $tmp3136;
                $tmp3134 = $tmp3135;
                message3129 = $tmp3134;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3133));
            }
            if (((panda$core$Bit) { message3129 == NULL }).value) {
            {
                $tmp3137 = NULL;
                $returnValue3118 = $tmp3137;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3137));
                $tmp3112 = 2;
                goto $l3110;
                $l3138:;
                return $returnValue3118;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3140 = message3129;
                $tmp3141 = NULL;
                message3129 = $tmp3141;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3144 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3145, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3144, $tmp3145, ((org$pandalanguage$pandac$parser$Token) start3113.value).position, expr3122, message3129);
        $tmp3143 = $tmp3144;
        $tmp3142 = $tmp3143;
        $returnValue3118 = $tmp3142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
        $tmp3112 = 3;
        goto $l3110;
        $l3146:;
        return $returnValue3118;
    }
    $l3110:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message3129));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3122));
    expr3122 = NULL;
    switch ($tmp3112) {
        case 1: goto $l3127;
        case 3: goto $l3146;
        case 2: goto $l3138;
        case 0: goto $l3120;
    }
    $l3148:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3159;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3160;
    panda$core$Int64 $tmp3161;
    org$pandalanguage$pandac$ASTNode* $returnValue3164;
    org$pandalanguage$pandac$ASTNode* $tmp3165;
    panda$core$Bit $tmp3169;
    panda$collections$Array* expressions3170 = NULL;
    panda$collections$Array* $tmp3171;
    panda$collections$Array* $tmp3172;
    org$pandalanguage$pandac$ASTNode* expr3174 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3175;
    org$pandalanguage$pandac$ASTNode* $tmp3176;
    panda$core$Bit $tmp3178;
    org$pandalanguage$pandac$ASTNode* $tmp3179;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3186;
    panda$core$Int64 $tmp3187;
    org$pandalanguage$pandac$ASTNode* $tmp3189;
    org$pandalanguage$pandac$ASTNode* $tmp3190;
    org$pandalanguage$pandac$ASTNode* $tmp3191;
    panda$core$Bit $tmp3193;
    org$pandalanguage$pandac$ASTNode* $tmp3194;
    panda$core$Bit $tmp3198;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3199;
    panda$core$Int64 $tmp3200;
    org$pandalanguage$pandac$ASTNode* $tmp3203;
    panda$collections$Array* statements3207 = NULL;
    panda$collections$Array* $tmp3208;
    panda$collections$Array* $tmp3209;
    org$pandalanguage$pandac$parser$Token$Kind $match$1498_133213;
    panda$core$Int64 $tmp3217;
    panda$core$Int64 $tmp3220;
    panda$core$Int64 $tmp3224;
    panda$core$Int64 $tmp3229;
    panda$core$Int64 $tmp3232;
    panda$core$Int64 $tmp3236;
    org$pandalanguage$pandac$ASTNode* stmt3242 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3243;
    org$pandalanguage$pandac$ASTNode* $tmp3244;
    org$pandalanguage$pandac$ASTNode* $tmp3246;
    org$pandalanguage$pandac$ASTNode* stmt3256 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3257;
    org$pandalanguage$pandac$ASTNode* $tmp3258;
    org$pandalanguage$pandac$ASTNode* $tmp3260;
    org$pandalanguage$pandac$ASTNode* $tmp3266;
    org$pandalanguage$pandac$ASTNode* $tmp3267;
    panda$core$Int64 $tmp3269;
    panda$collections$ImmutableArray* $tmp3270;
    panda$collections$ImmutableArray* $tmp3272;
    int $tmp3151;
    {
        if (self->allowLambdas.value) goto $l3152; else goto $l3153;
        $l3153:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3154, (panda$core$Int64) { 1471 }, &$s3155);
        abort();
        $l3152:;
        int $tmp3158;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3161, 40);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3160, $tmp3161);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3163 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3160, &$s3162);
            start3159 = $tmp3163;
            if (((panda$core$Bit) { !start3159.nonnull }).value) {
            {
                $tmp3165 = NULL;
                $returnValue3164 = $tmp3165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3165));
                $tmp3158 = 0;
                goto $l3156;
                $l3166:;
                $tmp3151 = 0;
                goto $l3149;
                $l3167:;
                return $returnValue3164;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3169, false);
            self->allowLambdas = $tmp3169;
            panda$collections$Array* $tmp3173 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3173);
            $tmp3172 = $tmp3173;
            $tmp3171 = $tmp3172;
            expressions3170 = $tmp3171;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3171));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3172));
            org$pandalanguage$pandac$ASTNode* $tmp3177 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3176 = $tmp3177;
            $tmp3175 = $tmp3176;
            expr3174 = $tmp3175;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3176));
            if (((panda$core$Bit) { expr3174 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3178, true);
                self->allowLambdas = $tmp3178;
                $tmp3179 = NULL;
                $returnValue3164 = $tmp3179;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3179));
                $tmp3158 = 1;
                goto $l3156;
                $l3180:;
                $tmp3151 = 1;
                goto $l3149;
                $l3181:;
                return $returnValue3164;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3170, ((panda$core$Object*) expr3174));
            $l3183:;
            panda$core$Int64$init$builtin_int64(&$tmp3187, 106);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3186, $tmp3187);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3188 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3186);
            bool $tmp3185 = ((panda$core$Bit) { $tmp3188.nonnull }).value;
            if (!$tmp3185) goto $l3184;
            {
                {
                    $tmp3189 = expr3174;
                    org$pandalanguage$pandac$ASTNode* $tmp3192 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3191 = $tmp3192;
                    $tmp3190 = $tmp3191;
                    expr3174 = $tmp3190;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3189));
                }
                if (((panda$core$Bit) { expr3174 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3193, true);
                    self->allowLambdas = $tmp3193;
                    $tmp3194 = NULL;
                    $returnValue3164 = $tmp3194;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3194));
                    $tmp3158 = 2;
                    goto $l3156;
                    $l3195:;
                    $tmp3151 = 2;
                    goto $l3149;
                    $l3196:;
                    return $returnValue3164;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3170, ((panda$core$Object*) expr3174));
            }
            goto $l3183;
            $l3184:;
            panda$core$Bit$init$builtin_bit(&$tmp3198, true);
            self->allowLambdas = $tmp3198;
            panda$core$Int64$init$builtin_int64(&$tmp3200, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3199, $tmp3200);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3202 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3199, &$s3201);
            if (((panda$core$Bit) { !$tmp3202.nonnull }).value) {
            {
                $tmp3203 = NULL;
                $returnValue3164 = $tmp3203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3203));
                $tmp3158 = 3;
                goto $l3156;
                $l3204:;
                $tmp3151 = 3;
                goto $l3149;
                $l3205:;
                return $returnValue3164;
            }
            }
            panda$collections$Array* $tmp3210 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3210);
            $tmp3209 = $tmp3210;
            $tmp3208 = $tmp3209;
            statements3207 = $tmp3208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3209));
            $l3211:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3214 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1498_133213 = $tmp3214.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3217, 40);
                    panda$core$Bit $tmp3218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133213.$rawValue, $tmp3217);
                    bool $tmp3216 = $tmp3218.value;
                    if ($tmp3216) goto $l3219;
                    panda$core$Int64$init$builtin_int64(&$tmp3220, 41);
                    panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133213.$rawValue, $tmp3220);
                    $tmp3216 = $tmp3221.value;
                    $l3219:;
                    panda$core$Bit $tmp3222 = { $tmp3216 };
                    bool $tmp3215 = $tmp3222.value;
                    if ($tmp3215) goto $l3223;
                    panda$core$Int64$init$builtin_int64(&$tmp3224, 101);
                    panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133213.$rawValue, $tmp3224);
                    $tmp3215 = $tmp3225.value;
                    $l3223:;
                    panda$core$Bit $tmp3226 = { $tmp3215 };
                    if ($tmp3226.value) {
                    {
                        goto $l3212;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3229, 29);
                    panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133213.$rawValue, $tmp3229);
                    bool $tmp3228 = $tmp3230.value;
                    if ($tmp3228) goto $l3231;
                    panda$core$Int64$init$builtin_int64(&$tmp3232, 30);
                    panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133213.$rawValue, $tmp3232);
                    $tmp3228 = $tmp3233.value;
                    $l3231:;
                    panda$core$Bit $tmp3234 = { $tmp3228 };
                    bool $tmp3227 = $tmp3234.value;
                    if ($tmp3227) goto $l3235;
                    panda$core$Int64$init$builtin_int64(&$tmp3236, 28);
                    panda$core$Bit $tmp3237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1498_133213.$rawValue, $tmp3236);
                    $tmp3227 = $tmp3237.value;
                    $l3235:;
                    panda$core$Bit $tmp3238 = { $tmp3227 };
                    if ($tmp3238.value) {
                    {
                        int $tmp3241;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3245 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3244 = $tmp3245;
                            $tmp3243 = $tmp3244;
                            stmt3242 = $tmp3243;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
                            if (((panda$core$Bit) { stmt3242 == NULL }).value) {
                            {
                                $tmp3246 = NULL;
                                $returnValue3164 = $tmp3246;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3246));
                                $tmp3241 = 0;
                                goto $l3239;
                                $l3247:;
                                $tmp3158 = 4;
                                goto $l3156;
                                $l3248:;
                                $tmp3151 = 4;
                                goto $l3149;
                                $l3249:;
                                return $returnValue3164;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3207, ((panda$core$Object*) stmt3242));
                            $tmp3241 = 1;
                            goto $l3239;
                            $l3251:;
                            goto $l3212;
                        }
                        $l3239:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3242));
                        stmt3242 = NULL;
                        switch ($tmp3241) {
                            case 1: goto $l3251;
                            case 0: goto $l3247;
                        }
                        $l3252:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3255;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3259 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3258 = $tmp3259;
                                $tmp3257 = $tmp3258;
                                stmt3256 = $tmp3257;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3257));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3258));
                                if (((panda$core$Bit) { stmt3256 == NULL }).value) {
                                {
                                    $tmp3260 = NULL;
                                    $returnValue3164 = $tmp3260;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3260));
                                    $tmp3255 = 0;
                                    goto $l3253;
                                    $l3261:;
                                    $tmp3158 = 5;
                                    goto $l3156;
                                    $l3262:;
                                    $tmp3151 = 5;
                                    goto $l3149;
                                    $l3263:;
                                    return $returnValue3164;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3207, ((panda$core$Object*) stmt3256));
                            }
                            $tmp3255 = -1;
                            goto $l3253;
                            $l3253:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3256));
                            stmt3256 = NULL;
                            switch ($tmp3255) {
                                case 0: goto $l3261;
                                case -1: goto $l3265;
                            }
                            $l3265:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3212:;
            org$pandalanguage$pandac$ASTNode* $tmp3268 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3269, 48);
            panda$collections$ImmutableArray* $tmp3271 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3170);
            $tmp3270 = $tmp3271;
            panda$collections$ImmutableArray* $tmp3273 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3207);
            $tmp3272 = $tmp3273;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3268, $tmp3269, ((org$pandalanguage$pandac$parser$Token) start3159.value).position, $tmp3270, $tmp3272);
            $tmp3267 = $tmp3268;
            $tmp3266 = $tmp3267;
            $returnValue3164 = $tmp3266;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3266));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3272));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3270));
            $tmp3158 = 6;
            goto $l3156;
            $l3274:;
            $tmp3151 = 6;
            goto $l3149;
            $l3275:;
            return $returnValue3164;
        }
        $l3156:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3207));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3170));
        expressions3170 = NULL;
        expr3174 = NULL;
        statements3207 = NULL;
        switch ($tmp3158) {
            case 5: goto $l3262;
            case 0: goto $l3166;
            case 1: goto $l3180;
            case 3: goto $l3204;
            case 2: goto $l3195;
            case 6: goto $l3274;
            case 4: goto $l3248;
        }
        $l3277:;
    }
    $tmp3151 = -1;
    goto $l3149;
    $l3149:;
    if (self->allowLambdas.value) goto $l3279; else goto $l3280;
    $l3280:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3281, (panda$core$Int64) { 1471 }, &$s3282);
    abort();
    $l3279:;
    switch ($tmp3151) {
        case 2: goto $l3196;
        case 0: goto $l3167;
        case 5: goto $l3263;
        case 3: goto $l3205;
        case -1: goto $l3278;
        case 1: goto $l3181;
        case 4: goto $l3249;
        case 6: goto $l3275;
    }
    $l3278:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3287;
    panda$core$Int64 $tmp3288;
    org$pandalanguage$pandac$ASTNode* $returnValue3291;
    org$pandalanguage$pandac$ASTNode* $tmp3292;
    org$pandalanguage$pandac$ASTNode* expr3295 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3296;
    org$pandalanguage$pandac$ASTNode* $tmp3297;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3302;
    panda$core$Int64 $tmp3303;
    org$pandalanguage$pandac$ASTNode* $tmp3306;
    panda$collections$Array* whens3309 = NULL;
    panda$collections$Array* $tmp3310;
    panda$collections$Array* $tmp3311;
    panda$collections$Array* other3313 = NULL;
    panda$collections$Array* $tmp3314;
    org$pandalanguage$pandac$parser$Token token3317;
    org$pandalanguage$pandac$parser$Token$Kind $match$1539_133319;
    panda$core$Int64 $tmp3320;
    panda$core$Int64 $tmp3322;
    org$pandalanguage$pandac$ASTNode* w3327 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3328;
    org$pandalanguage$pandac$ASTNode* $tmp3329;
    org$pandalanguage$pandac$ASTNode* $tmp3331;
    panda$core$Int64 $tmp3336;
    org$pandalanguage$pandac$parser$Token o3338;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3340;
    panda$core$Int64 $tmp3341;
    org$pandalanguage$pandac$ASTNode* $tmp3344;
    panda$collections$Array* $tmp3347;
    panda$collections$Array* $tmp3348;
    panda$collections$Array* $tmp3349;
    org$pandalanguage$pandac$parser$Token$Kind $match$1555_253353;
    panda$core$Int64 $tmp3355;
    panda$core$Int64 $tmp3359;
    panda$core$Int64 $tmp3362;
    panda$core$Int64 $tmp3366;
    org$pandalanguage$pandac$ASTNode* stmt3372 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3373;
    org$pandalanguage$pandac$ASTNode* $tmp3374;
    org$pandalanguage$pandac$ASTNode* $tmp3376;
    org$pandalanguage$pandac$ASTNode* stmt3385 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3386;
    org$pandalanguage$pandac$ASTNode* $tmp3387;
    org$pandalanguage$pandac$ASTNode* $tmp3389;
    panda$core$String* $tmp3394;
    panda$core$String* $tmp3396;
    panda$core$String* $tmp3397;
    panda$core$String* $tmp3399;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3405;
    panda$core$Int64 $tmp3406;
    org$pandalanguage$pandac$ASTNode* $tmp3409;
    org$pandalanguage$pandac$ASTNode* $tmp3412;
    org$pandalanguage$pandac$ASTNode* $tmp3413;
    panda$core$Int64 $tmp3415;
    panda$collections$ImmutableArray* $tmp3416;
    panda$collections$ImmutableArray* $tmp3418;
    org$pandalanguage$pandac$ASTNode* $tmp3422;
    org$pandalanguage$pandac$ASTNode* $tmp3423;
    panda$core$Int64 $tmp3425;
    panda$collections$ImmutableArray* $tmp3426;
    int $tmp3285;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3288, 39);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3287, $tmp3288);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3290 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3287, &$s3289);
        start3286 = $tmp3290;
        if (((panda$core$Bit) { !start3286.nonnull }).value) {
        {
            $tmp3292 = NULL;
            $returnValue3291 = $tmp3292;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3292));
            $tmp3285 = 0;
            goto $l3283;
            $l3293:;
            return $returnValue3291;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3298 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3297 = $tmp3298;
        $tmp3296 = $tmp3297;
        expr3295 = $tmp3296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3297));
        if (((panda$core$Bit) { expr3295 == NULL }).value) {
        {
            $tmp3299 = NULL;
            $returnValue3291 = $tmp3299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3299));
            $tmp3285 = 1;
            goto $l3283;
            $l3300:;
            return $returnValue3291;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3303, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3302, $tmp3303);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3305 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3302, &$s3304);
        if (((panda$core$Bit) { !$tmp3305.nonnull }).value) {
        {
            $tmp3306 = NULL;
            $returnValue3291 = $tmp3306;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3306));
            $tmp3285 = 2;
            goto $l3283;
            $l3307:;
            return $returnValue3291;
        }
        }
        panda$collections$Array* $tmp3312 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3312);
        $tmp3311 = $tmp3312;
        $tmp3310 = $tmp3311;
        whens3309 = $tmp3310;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3310));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3311));
        $tmp3314 = NULL;
        other3313 = $tmp3314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3314));
        $l3315:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3318 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3317 = $tmp3318;
            {
                $match$1539_133319 = token3317.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3320, 101);
                panda$core$Bit $tmp3321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133319.$rawValue, $tmp3320);
                if ($tmp3321.value) {
                {
                    goto $l3316;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3322, 40);
                panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133319.$rawValue, $tmp3322);
                if ($tmp3323.value) {
                {
                    int $tmp3326;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3330 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3329 = $tmp3330;
                        $tmp3328 = $tmp3329;
                        w3327 = $tmp3328;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3329));
                        if (((panda$core$Bit) { w3327 == NULL }).value) {
                        {
                            $tmp3331 = NULL;
                            $returnValue3291 = $tmp3331;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3331));
                            $tmp3326 = 0;
                            goto $l3324;
                            $l3332:;
                            $tmp3285 = 3;
                            goto $l3283;
                            $l3333:;
                            return $returnValue3291;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3309, ((panda$core$Object*) w3327));
                    }
                    $tmp3326 = -1;
                    goto $l3324;
                    $l3324:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3327));
                    w3327 = NULL;
                    switch ($tmp3326) {
                        case 0: goto $l3332;
                        case -1: goto $l3335;
                    }
                    $l3335:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3336, 41);
                panda$core$Bit $tmp3337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_133319.$rawValue, $tmp3336);
                if ($tmp3337.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3339 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3338 = $tmp3339;
                    panda$core$Int64$init$builtin_int64(&$tmp3341, 96);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3340, $tmp3341);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3343 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3340, &$s3342);
                    if (((panda$core$Bit) { !$tmp3343.nonnull }).value) {
                    {
                        $tmp3344 = NULL;
                        $returnValue3291 = $tmp3344;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3344));
                        $tmp3285 = 4;
                        goto $l3283;
                        $l3345:;
                        return $returnValue3291;
                    }
                    }
                    {
                        $tmp3347 = other3313;
                        panda$collections$Array* $tmp3350 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3350);
                        $tmp3349 = $tmp3350;
                        $tmp3348 = $tmp3349;
                        other3313 = $tmp3348;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3347));
                    }
                    $l3351:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3354 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1555_253353 = $tmp3354.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3355, 101);
                            panda$core$Bit $tmp3356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253353.$rawValue, $tmp3355);
                            if ($tmp3356.value) {
                            {
                                goto $l3352;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3359, 29);
                            panda$core$Bit $tmp3360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253353.$rawValue, $tmp3359);
                            bool $tmp3358 = $tmp3360.value;
                            if ($tmp3358) goto $l3361;
                            panda$core$Int64$init$builtin_int64(&$tmp3362, 30);
                            panda$core$Bit $tmp3363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253353.$rawValue, $tmp3362);
                            $tmp3358 = $tmp3363.value;
                            $l3361:;
                            panda$core$Bit $tmp3364 = { $tmp3358 };
                            bool $tmp3357 = $tmp3364.value;
                            if ($tmp3357) goto $l3365;
                            panda$core$Int64$init$builtin_int64(&$tmp3366, 28);
                            panda$core$Bit $tmp3367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1555_253353.$rawValue, $tmp3366);
                            $tmp3357 = $tmp3367.value;
                            $l3365:;
                            panda$core$Bit $tmp3368 = { $tmp3357 };
                            if ($tmp3368.value) {
                            {
                                int $tmp3371;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3375 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3374 = $tmp3375;
                                    $tmp3373 = $tmp3374;
                                    stmt3372 = $tmp3373;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3373));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3374));
                                    if (((panda$core$Bit) { stmt3372 == NULL }).value) {
                                    {
                                        $tmp3376 = NULL;
                                        $returnValue3291 = $tmp3376;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3376));
                                        $tmp3371 = 0;
                                        goto $l3369;
                                        $l3377:;
                                        $tmp3285 = 5;
                                        goto $l3283;
                                        $l3378:;
                                        return $returnValue3291;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3313, ((panda$core$Object*) stmt3372));
                                    $tmp3371 = 1;
                                    goto $l3369;
                                    $l3380:;
                                    goto $l3352;
                                }
                                $l3369:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3372));
                                stmt3372 = NULL;
                                switch ($tmp3371) {
                                    case 0: goto $l3377;
                                    case 1: goto $l3380;
                                }
                                $l3381:;
                            }
                            }
                            else {
                            {
                                int $tmp3384;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3388 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3387 = $tmp3388;
                                    $tmp3386 = $tmp3387;
                                    stmt3385 = $tmp3386;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3386));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3387));
                                    if (((panda$core$Bit) { stmt3385 == NULL }).value) {
                                    {
                                        $tmp3389 = NULL;
                                        $returnValue3291 = $tmp3389;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3389));
                                        $tmp3384 = 0;
                                        goto $l3382;
                                        $l3390:;
                                        $tmp3285 = 6;
                                        goto $l3283;
                                        $l3391:;
                                        return $returnValue3291;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3313, ((panda$core$Object*) stmt3385));
                                }
                                $tmp3384 = -1;
                                goto $l3382;
                                $l3382:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3385));
                                stmt3385 = NULL;
                                switch ($tmp3384) {
                                    case 0: goto $l3390;
                                    case -1: goto $l3393;
                                }
                                $l3393:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3352:;
                    goto $l3316;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3400 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3317);
                    $tmp3399 = $tmp3400;
                    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3398, $tmp3399);
                    $tmp3397 = $tmp3401;
                    panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, &$s3402);
                    $tmp3396 = $tmp3403;
                    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3395, $tmp3396);
                    $tmp3394 = $tmp3404;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3317, $tmp3394);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3394));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3397));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3399));
                    goto $l3316;
                }
                }
                }
                }
            }
        }
        }
        $l3316:;
        panda$core$Int64$init$builtin_int64(&$tmp3406, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3405, $tmp3406);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3408 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3405, &$s3407);
        if (((panda$core$Bit) { !$tmp3408.nonnull }).value) {
        {
            $tmp3409 = NULL;
            $returnValue3291 = $tmp3409;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3409));
            $tmp3285 = 7;
            goto $l3283;
            $l3410:;
            return $returnValue3291;
        }
        }
        if (((panda$core$Bit) { other3313 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3414 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3415, 25);
            panda$collections$ImmutableArray* $tmp3417 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3309);
            $tmp3416 = $tmp3417;
            panda$collections$ImmutableArray* $tmp3419 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3313);
            $tmp3418 = $tmp3419;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3414, $tmp3415, ((org$pandalanguage$pandac$parser$Token) start3286.value).position, expr3295, $tmp3416, $tmp3418);
            $tmp3413 = $tmp3414;
            $tmp3412 = $tmp3413;
            $returnValue3291 = $tmp3412;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3412));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3416));
            $tmp3285 = 8;
            goto $l3283;
            $l3420:;
            return $returnValue3291;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3424 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3425, 25);
        panda$collections$ImmutableArray* $tmp3427 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3309);
        $tmp3426 = $tmp3427;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3424, $tmp3425, ((org$pandalanguage$pandac$parser$Token) start3286.value).position, expr3295, $tmp3426, NULL);
        $tmp3423 = $tmp3424;
        $tmp3422 = $tmp3423;
        $returnValue3291 = $tmp3422;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3426));
        $tmp3285 = 9;
        goto $l3283;
        $l3428:;
        return $returnValue3291;
    }
    $l3283:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3313));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3309));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3295));
    expr3295 = NULL;
    whens3309 = NULL;
    switch ($tmp3285) {
        case 7: goto $l3410;
        case 5: goto $l3378;
        case 4: goto $l3345;
        case 1: goto $l3300;
        case 3: goto $l3333;
        case 8: goto $l3420;
        case 2: goto $l3307;
        case 0: goto $l3293;
        case 9: goto $l3428;
        case 6: goto $l3391;
    }
    $l3430:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3434;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3435;
    panda$core$Int64 $tmp3436;
    panda$collections$ImmutableArray* $returnValue3439;
    panda$collections$ImmutableArray* $tmp3440;
    panda$collections$Array* result3443 = NULL;
    panda$collections$Array* $tmp3444;
    panda$collections$Array* $tmp3445;
    org$pandalanguage$pandac$parser$Token$Kind $match$1600_133449;
    panda$core$Int64 $tmp3451;
    panda$core$Int64 $tmp3455;
    panda$core$Int64 $tmp3458;
    panda$core$Int64 $tmp3462;
    org$pandalanguage$pandac$ASTNode* stmt3468 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3469;
    org$pandalanguage$pandac$ASTNode* $tmp3470;
    panda$collections$ImmutableArray* $tmp3472;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3476;
    panda$core$Int64 $tmp3477;
    panda$collections$ImmutableArray* $tmp3480;
    org$pandalanguage$pandac$ASTNode* stmt3489 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3490;
    org$pandalanguage$pandac$ASTNode* $tmp3491;
    panda$collections$ImmutableArray* $tmp3493;
    panda$collections$ImmutableArray* $tmp3498;
    panda$collections$ImmutableArray* $tmp3499;
    int $tmp3433;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3436, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3435, $tmp3436);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3438 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3435, &$s3437);
        start3434 = $tmp3438;
        if (((panda$core$Bit) { !start3434.nonnull }).value) {
        {
            $tmp3440 = NULL;
            $returnValue3439 = $tmp3440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
            $tmp3433 = 0;
            goto $l3431;
            $l3441:;
            return $returnValue3439;
        }
        }
        panda$collections$Array* $tmp3446 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3446);
        $tmp3445 = $tmp3446;
        $tmp3444 = $tmp3445;
        result3443 = $tmp3444;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3445));
        $l3447:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3450 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1600_133449 = $tmp3450.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3451, 101);
                panda$core$Bit $tmp3452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133449.$rawValue, $tmp3451);
                if ($tmp3452.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3448;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3455, 29);
                panda$core$Bit $tmp3456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133449.$rawValue, $tmp3455);
                bool $tmp3454 = $tmp3456.value;
                if ($tmp3454) goto $l3457;
                panda$core$Int64$init$builtin_int64(&$tmp3458, 30);
                panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133449.$rawValue, $tmp3458);
                $tmp3454 = $tmp3459.value;
                $l3457:;
                panda$core$Bit $tmp3460 = { $tmp3454 };
                bool $tmp3453 = $tmp3460.value;
                if ($tmp3453) goto $l3461;
                panda$core$Int64$init$builtin_int64(&$tmp3462, 28);
                panda$core$Bit $tmp3463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1600_133449.$rawValue, $tmp3462);
                $tmp3453 = $tmp3463.value;
                $l3461:;
                panda$core$Bit $tmp3464 = { $tmp3453 };
                if ($tmp3464.value) {
                {
                    int $tmp3467;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3471 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3470 = $tmp3471;
                        $tmp3469 = $tmp3470;
                        stmt3468 = $tmp3469;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3469));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3470));
                        if (((panda$core$Bit) { stmt3468 == NULL }).value) {
                        {
                            $tmp3472 = NULL;
                            $returnValue3439 = $tmp3472;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3472));
                            $tmp3467 = 0;
                            goto $l3465;
                            $l3473:;
                            $tmp3433 = 1;
                            goto $l3431;
                            $l3474:;
                            return $returnValue3439;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3477, 101);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3476, $tmp3477);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3479 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3476, &$s3478);
                        if (((panda$core$Bit) { !$tmp3479.nonnull }).value) {
                        {
                            $tmp3480 = NULL;
                            $returnValue3439 = $tmp3480;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3480));
                            $tmp3467 = 1;
                            goto $l3465;
                            $l3481:;
                            $tmp3433 = 2;
                            goto $l3431;
                            $l3482:;
                            return $returnValue3439;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3443, ((panda$core$Object*) stmt3468));
                        $tmp3467 = 2;
                        goto $l3465;
                        $l3484:;
                        goto $l3448;
                    }
                    $l3465:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3468));
                    stmt3468 = NULL;
                    switch ($tmp3467) {
                        case 2: goto $l3484;
                        case 0: goto $l3473;
                        case 1: goto $l3481;
                    }
                    $l3485:;
                }
                }
                else {
                {
                    int $tmp3488;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3492 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3491 = $tmp3492;
                        $tmp3490 = $tmp3491;
                        stmt3489 = $tmp3490;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3490));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3491));
                        if (((panda$core$Bit) { stmt3489 == NULL }).value) {
                        {
                            $tmp3493 = NULL;
                            $returnValue3439 = $tmp3493;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3493));
                            $tmp3488 = 0;
                            goto $l3486;
                            $l3494:;
                            $tmp3433 = 3;
                            goto $l3431;
                            $l3495:;
                            return $returnValue3439;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3443, ((panda$core$Object*) stmt3489));
                    }
                    $tmp3488 = -1;
                    goto $l3486;
                    $l3486:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3489));
                    stmt3489 = NULL;
                    switch ($tmp3488) {
                        case -1: goto $l3497;
                        case 0: goto $l3494;
                    }
                    $l3497:;
                }
                }
                }
            }
        }
        }
        $l3448:;
        panda$collections$ImmutableArray* $tmp3500 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3443);
        $tmp3499 = $tmp3500;
        $tmp3498 = $tmp3499;
        $returnValue3439 = $tmp3498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3499));
        $tmp3433 = 4;
        goto $l3431;
        $l3501:;
        return $returnValue3439;
    }
    $l3431:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3443));
    result3443 = NULL;
    switch ($tmp3433) {
        case 4: goto $l3501;
        case 2: goto $l3482;
        case 3: goto $l3495;
        case 0: goto $l3441;
        case 1: goto $l3474;
    }
    $l3503:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3507 = NULL;
    panda$collections$ImmutableArray* $tmp3508;
    panda$collections$ImmutableArray* $tmp3509;
    org$pandalanguage$pandac$ASTNode* $returnValue3511;
    org$pandalanguage$pandac$ASTNode* $tmp3512;
    org$pandalanguage$pandac$ASTNode* $tmp3515;
    org$pandalanguage$pandac$ASTNode* $tmp3516;
    panda$core$Int64 $tmp3518;
    org$pandalanguage$pandac$Position $tmp3519;
    int $tmp3506;
    {
        panda$collections$ImmutableArray* $tmp3510 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3509 = $tmp3510;
        $tmp3508 = $tmp3509;
        statements3507 = $tmp3508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3509));
        if (((panda$core$Bit) { statements3507 == NULL }).value) {
        {
            $tmp3512 = NULL;
            $returnValue3511 = $tmp3512;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3512));
            $tmp3506 = 0;
            goto $l3504;
            $l3513:;
            return $returnValue3511;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3517 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3518, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3519);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3517, $tmp3518, $tmp3519, statements3507);
        $tmp3516 = $tmp3517;
        $tmp3515 = $tmp3516;
        $returnValue3511 = $tmp3515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3516));
        $tmp3506 = 1;
        goto $l3504;
        $l3520:;
        return $returnValue3511;
    }
    $l3504:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3507));
    statements3507 = NULL;
    switch ($tmp3506) {
        case 1: goto $l3520;
        case 0: goto $l3513;
    }
    $l3522:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3526 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3527;
    org$pandalanguage$pandac$ASTNode* $tmp3528;
    org$pandalanguage$pandac$ASTNode* $returnValue3530;
    org$pandalanguage$pandac$ASTNode* $tmp3531;
    org$pandalanguage$pandac$parser$Token$Kind $match$1644_93534;
    panda$core$Int64 $tmp3551;
    panda$core$Int64 $tmp3554;
    panda$core$Int64 $tmp3558;
    panda$core$Int64 $tmp3562;
    panda$core$Int64 $tmp3566;
    panda$core$Int64 $tmp3570;
    panda$core$Int64 $tmp3574;
    panda$core$Int64 $tmp3578;
    panda$core$Int64 $tmp3582;
    panda$core$Int64 $tmp3586;
    panda$core$Int64 $tmp3590;
    panda$core$Int64 $tmp3594;
    panda$core$Int64 $tmp3598;
    panda$core$Int64 $tmp3602;
    panda$core$Int64 $tmp3606;
    panda$core$Int64 $tmp3610;
    org$pandalanguage$pandac$parser$Token op3616;
    org$pandalanguage$pandac$ASTNode* rvalue3618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3619;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $tmp3622;
    org$pandalanguage$pandac$ASTNode* $tmp3626;
    org$pandalanguage$pandac$ASTNode* $tmp3627;
    panda$core$Int64 $tmp3629;
    panda$core$Int64 $tmp3636;
    org$pandalanguage$pandac$parser$Token op3643;
    org$pandalanguage$pandac$ASTNode* rvalue3645 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3646;
    org$pandalanguage$pandac$ASTNode* $tmp3647;
    org$pandalanguage$pandac$ASTNode* $tmp3649;
    org$pandalanguage$pandac$ASTNode* $tmp3653;
    org$pandalanguage$pandac$ASTNode* $tmp3654;
    panda$core$Int64 $tmp3656;
    org$pandalanguage$pandac$ASTNode* $tmp3663;
    int $tmp3525;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3529 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3528 = $tmp3529;
        $tmp3527 = $tmp3528;
        start3526 = $tmp3527;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3527));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3528));
        if (((panda$core$Bit) { start3526 == NULL }).value) {
        {
            $tmp3531 = NULL;
            $returnValue3530 = $tmp3531;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3531));
            $tmp3525 = 0;
            goto $l3523;
            $l3532:;
            return $returnValue3530;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3535 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1644_93534 = $tmp3535.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3551, 74);
            panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3551);
            bool $tmp3550 = $tmp3552.value;
            if ($tmp3550) goto $l3553;
            panda$core$Int64$init$builtin_int64(&$tmp3554, 75);
            panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3554);
            $tmp3550 = $tmp3555.value;
            $l3553:;
            panda$core$Bit $tmp3556 = { $tmp3550 };
            bool $tmp3549 = $tmp3556.value;
            if ($tmp3549) goto $l3557;
            panda$core$Int64$init$builtin_int64(&$tmp3558, 76);
            panda$core$Bit $tmp3559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3558);
            $tmp3549 = $tmp3559.value;
            $l3557:;
            panda$core$Bit $tmp3560 = { $tmp3549 };
            bool $tmp3548 = $tmp3560.value;
            if ($tmp3548) goto $l3561;
            panda$core$Int64$init$builtin_int64(&$tmp3562, 77);
            panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3562);
            $tmp3548 = $tmp3563.value;
            $l3561:;
            panda$core$Bit $tmp3564 = { $tmp3548 };
            bool $tmp3547 = $tmp3564.value;
            if ($tmp3547) goto $l3565;
            panda$core$Int64$init$builtin_int64(&$tmp3566, 78);
            panda$core$Bit $tmp3567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3566);
            $tmp3547 = $tmp3567.value;
            $l3565:;
            panda$core$Bit $tmp3568 = { $tmp3547 };
            bool $tmp3546 = $tmp3568.value;
            if ($tmp3546) goto $l3569;
            panda$core$Int64$init$builtin_int64(&$tmp3570, 79);
            panda$core$Bit $tmp3571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3570);
            $tmp3546 = $tmp3571.value;
            $l3569:;
            panda$core$Bit $tmp3572 = { $tmp3546 };
            bool $tmp3545 = $tmp3572.value;
            if ($tmp3545) goto $l3573;
            panda$core$Int64$init$builtin_int64(&$tmp3574, 80);
            panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3574);
            $tmp3545 = $tmp3575.value;
            $l3573:;
            panda$core$Bit $tmp3576 = { $tmp3545 };
            bool $tmp3544 = $tmp3576.value;
            if ($tmp3544) goto $l3577;
            panda$core$Int64$init$builtin_int64(&$tmp3578, 81);
            panda$core$Bit $tmp3579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3578);
            $tmp3544 = $tmp3579.value;
            $l3577:;
            panda$core$Bit $tmp3580 = { $tmp3544 };
            bool $tmp3543 = $tmp3580.value;
            if ($tmp3543) goto $l3581;
            panda$core$Int64$init$builtin_int64(&$tmp3582, 82);
            panda$core$Bit $tmp3583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3582);
            $tmp3543 = $tmp3583.value;
            $l3581:;
            panda$core$Bit $tmp3584 = { $tmp3543 };
            bool $tmp3542 = $tmp3584.value;
            if ($tmp3542) goto $l3585;
            panda$core$Int64$init$builtin_int64(&$tmp3586, 83);
            panda$core$Bit $tmp3587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3586);
            $tmp3542 = $tmp3587.value;
            $l3585:;
            panda$core$Bit $tmp3588 = { $tmp3542 };
            bool $tmp3541 = $tmp3588.value;
            if ($tmp3541) goto $l3589;
            panda$core$Int64$init$builtin_int64(&$tmp3590, 84);
            panda$core$Bit $tmp3591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3590);
            $tmp3541 = $tmp3591.value;
            $l3589:;
            panda$core$Bit $tmp3592 = { $tmp3541 };
            bool $tmp3540 = $tmp3592.value;
            if ($tmp3540) goto $l3593;
            panda$core$Int64$init$builtin_int64(&$tmp3594, 85);
            panda$core$Bit $tmp3595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3594);
            $tmp3540 = $tmp3595.value;
            $l3593:;
            panda$core$Bit $tmp3596 = { $tmp3540 };
            bool $tmp3539 = $tmp3596.value;
            if ($tmp3539) goto $l3597;
            panda$core$Int64$init$builtin_int64(&$tmp3598, 86);
            panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3598);
            $tmp3539 = $tmp3599.value;
            $l3597:;
            panda$core$Bit $tmp3600 = { $tmp3539 };
            bool $tmp3538 = $tmp3600.value;
            if ($tmp3538) goto $l3601;
            panda$core$Int64$init$builtin_int64(&$tmp3602, 87);
            panda$core$Bit $tmp3603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3602);
            $tmp3538 = $tmp3603.value;
            $l3601:;
            panda$core$Bit $tmp3604 = { $tmp3538 };
            bool $tmp3537 = $tmp3604.value;
            if ($tmp3537) goto $l3605;
            panda$core$Int64$init$builtin_int64(&$tmp3606, 88);
            panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3606);
            $tmp3537 = $tmp3607.value;
            $l3605:;
            panda$core$Bit $tmp3608 = { $tmp3537 };
            bool $tmp3536 = $tmp3608.value;
            if ($tmp3536) goto $l3609;
            panda$core$Int64$init$builtin_int64(&$tmp3610, 89);
            panda$core$Bit $tmp3611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3610);
            $tmp3536 = $tmp3611.value;
            $l3609:;
            panda$core$Bit $tmp3612 = { $tmp3536 };
            if ($tmp3612.value) {
            {
                int $tmp3615;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3617 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3616 = $tmp3617;
                    org$pandalanguage$pandac$ASTNode* $tmp3621 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3620 = $tmp3621;
                    $tmp3619 = $tmp3620;
                    rvalue3618 = $tmp3619;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3619));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3620));
                    if (((panda$core$Bit) { rvalue3618 == NULL }).value) {
                    {
                        $tmp3622 = NULL;
                        $returnValue3530 = $tmp3622;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
                        $tmp3615 = 0;
                        goto $l3613;
                        $l3623:;
                        $tmp3525 = 1;
                        goto $l3523;
                        $l3624:;
                        return $returnValue3530;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3628 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3629, 4);
                    org$pandalanguage$pandac$Position $tmp3631 = (($fn3630) start3526->$class->vtable[2])(start3526);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3628, $tmp3629, $tmp3631, start3526, op3616.kind, rvalue3618);
                    $tmp3627 = $tmp3628;
                    $tmp3626 = $tmp3627;
                    $returnValue3530 = $tmp3626;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3626));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
                    $tmp3615 = 1;
                    goto $l3613;
                    $l3632:;
                    $tmp3525 = 2;
                    goto $l3523;
                    $l3633:;
                    return $returnValue3530;
                }
                $l3613:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3618));
                rvalue3618 = NULL;
                switch ($tmp3615) {
                    case 1: goto $l3632;
                    case 0: goto $l3623;
                }
                $l3635:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3636, 59);
            panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1644_93534.$rawValue, $tmp3636);
            if ($tmp3637.value) {
            {
                int $tmp3640;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3641 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3641, &$s3642);
                    org$pandalanguage$pandac$parser$Token $tmp3644 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3643 = $tmp3644;
                    org$pandalanguage$pandac$ASTNode* $tmp3648 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3647 = $tmp3648;
                    $tmp3646 = $tmp3647;
                    rvalue3645 = $tmp3646;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3646));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3647));
                    if (((panda$core$Bit) { rvalue3645 == NULL }).value) {
                    {
                        $tmp3649 = NULL;
                        $returnValue3530 = $tmp3649;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3649));
                        $tmp3640 = 0;
                        goto $l3638;
                        $l3650:;
                        $tmp3525 = 3;
                        goto $l3523;
                        $l3651:;
                        return $returnValue3530;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3655 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3656, 4);
                    org$pandalanguage$pandac$Position $tmp3658 = (($fn3657) start3526->$class->vtable[2])(start3526);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3655, $tmp3656, $tmp3658, start3526, op3643.kind, rvalue3645);
                    $tmp3654 = $tmp3655;
                    $tmp3653 = $tmp3654;
                    $returnValue3530 = $tmp3653;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3653));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3654));
                    $tmp3640 = 1;
                    goto $l3638;
                    $l3659:;
                    $tmp3525 = 4;
                    goto $l3523;
                    $l3660:;
                    return $returnValue3530;
                }
                $l3638:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3645));
                rvalue3645 = NULL;
                switch ($tmp3640) {
                    case 0: goto $l3650;
                    case 1: goto $l3659;
                }
                $l3662:;
            }
            }
            else {
            {
                $tmp3663 = start3526;
                $returnValue3530 = $tmp3663;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
                $tmp3525 = 5;
                goto $l3523;
                $l3664:;
                return $returnValue3530;
            }
            }
            }
        }
    }
    $tmp3525 = -1;
    goto $l3523;
    $l3523:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3526));
    start3526 = NULL;
    switch ($tmp3525) {
        case -1: goto $l3666;
        case 3: goto $l3651;
        case 4: goto $l3660;
        case 5: goto $l3664;
        case 2: goto $l3633;
        case 1: goto $l3624;
        case 0: goto $l3532;
    }
    $l3666:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3670 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3671;
    org$pandalanguage$pandac$ASTNode* $tmp3672;
    org$pandalanguage$pandac$ASTNode* $returnValue3674;
    org$pandalanguage$pandac$ASTNode* $tmp3675;
    org$pandalanguage$pandac$ASTNode* value3678 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3679;
    panda$core$Int64 $tmp3680;
    org$pandalanguage$pandac$ASTNode* $tmp3682;
    org$pandalanguage$pandac$ASTNode* $tmp3683;
    org$pandalanguage$pandac$ASTNode* $tmp3684;
    org$pandalanguage$pandac$ASTNode* $tmp3686;
    panda$core$Int64 $tmp3690;
    org$pandalanguage$pandac$ASTNode* $tmp3694;
    org$pandalanguage$pandac$ASTNode* $tmp3695;
    org$pandalanguage$pandac$ASTNode* $tmp3696;
    org$pandalanguage$pandac$ASTNode* $tmp3698;
    org$pandalanguage$pandac$ASTNode* $tmp3701;
    org$pandalanguage$pandac$ASTNode* $tmp3702;
    org$pandalanguage$pandac$ASTNode* $tmp3703;
    org$pandalanguage$pandac$ASTNode* $tmp3704;
    panda$core$Int64 $tmp3706;
    int $tmp3669;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3673 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3672 = $tmp3673;
        $tmp3671 = $tmp3672;
        t3670 = $tmp3671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3672));
        if (((panda$core$Bit) { t3670 == NULL }).value) {
        {
            $tmp3675 = NULL;
            $returnValue3674 = $tmp3675;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3675));
            $tmp3669 = 0;
            goto $l3667;
            $l3676:;
            return $returnValue3674;
        }
        }
        memset(&value3678, 0, sizeof(value3678));
        panda$core$Int64$init$builtin_int64(&$tmp3680, 74);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3679, $tmp3680);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3681 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3679);
        if (((panda$core$Bit) { $tmp3681.nonnull }).value) {
        {
            {
                $tmp3682 = value3678;
                org$pandalanguage$pandac$ASTNode* $tmp3685 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3684 = $tmp3685;
                $tmp3683 = $tmp3684;
                value3678 = $tmp3683;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3682));
            }
            if (((panda$core$Bit) { value3678 == NULL }).value) {
            {
                $tmp3686 = NULL;
                $returnValue3674 = $tmp3686;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3686));
                $tmp3669 = 1;
                goto $l3667;
                $l3687:;
                return $returnValue3674;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3689 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3690, 59);
        panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3689.kind.$rawValue, $tmp3690);
        if ($tmp3691.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3692 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3692, &$s3693);
            {
                $tmp3694 = value3678;
                org$pandalanguage$pandac$ASTNode* $tmp3697 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3696 = $tmp3697;
                $tmp3695 = $tmp3696;
                value3678 = $tmp3695;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3695));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3694));
            }
            if (((panda$core$Bit) { value3678 == NULL }).value) {
            {
                $tmp3698 = NULL;
                $returnValue3674 = $tmp3698;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3698));
                $tmp3669 = 2;
                goto $l3667;
                $l3699:;
                return $returnValue3674;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3701 = value3678;
                $tmp3702 = NULL;
                value3678 = $tmp3702;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3701));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3705 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3706, 13);
        org$pandalanguage$pandac$Position $tmp3708 = (($fn3707) t3670->$class->vtable[2])(t3670);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3705, $tmp3706, $tmp3708, t3670, value3678);
        $tmp3704 = $tmp3705;
        $tmp3703 = $tmp3704;
        $returnValue3674 = $tmp3703;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3704));
        $tmp3669 = 3;
        goto $l3667;
        $l3709:;
        return $returnValue3674;
    }
    $l3667:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3678));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3670));
    t3670 = NULL;
    switch ($tmp3669) {
        case 2: goto $l3699;
        case 3: goto $l3709;
        case 0: goto $l3676;
        case 1: goto $l3687;
    }
    $l3711:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3715;
    org$pandalanguage$pandac$Variable$Kind kind3717;
    org$pandalanguage$pandac$parser$Token$Kind $match$1703_93718;
    panda$core$Int64 $tmp3719;
    org$pandalanguage$pandac$Variable$Kind $tmp3721;
    panda$core$Int64 $tmp3722;
    panda$core$Int64 $tmp3723;
    org$pandalanguage$pandac$Variable$Kind $tmp3725;
    panda$core$Int64 $tmp3726;
    panda$core$Int64 $tmp3727;
    org$pandalanguage$pandac$Variable$Kind $tmp3729;
    panda$core$Int64 $tmp3730;
    panda$core$Int64 $tmp3731;
    org$pandalanguage$pandac$Variable$Kind $tmp3733;
    panda$core$Int64 $tmp3734;
    panda$collections$Array* declarations3736 = NULL;
    panda$collections$Array* $tmp3737;
    panda$collections$Array* $tmp3738;
    org$pandalanguage$pandac$ASTNode* decl3740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3741;
    org$pandalanguage$pandac$ASTNode* $tmp3742;
    org$pandalanguage$pandac$ASTNode* $returnValue3744;
    org$pandalanguage$pandac$ASTNode* $tmp3745;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3751;
    panda$core$Int64 $tmp3752;
    org$pandalanguage$pandac$ASTNode* decl3757 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3758;
    org$pandalanguage$pandac$ASTNode* $tmp3759;
    org$pandalanguage$pandac$ASTNode* $tmp3761;
    org$pandalanguage$pandac$ASTNode* $tmp3766;
    org$pandalanguage$pandac$ASTNode* $tmp3767;
    panda$core$Int64 $tmp3769;
    panda$collections$ImmutableArray* $tmp3770;
    int $tmp3714;
    {
        org$pandalanguage$pandac$parser$Token $tmp3716 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3715 = $tmp3716;
        memset(&kind3717, 0, sizeof(kind3717));
        {
            $match$1703_93718 = start3715.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3719, 24);
            panda$core$Bit $tmp3720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93718.$rawValue, $tmp3719);
            if ($tmp3720.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3722, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3721, $tmp3722);
                kind3717 = $tmp3721;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3723, 25);
            panda$core$Bit $tmp3724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93718.$rawValue, $tmp3723);
            if ($tmp3724.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3726, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3725, $tmp3726);
                kind3717 = $tmp3725;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3727, 26);
            panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93718.$rawValue, $tmp3727);
            if ($tmp3728.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3730, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3729, $tmp3730);
                kind3717 = $tmp3729;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3731, 27);
            panda$core$Bit $tmp3732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1703_93718.$rawValue, $tmp3731);
            if ($tmp3732.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3734, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3733, $tmp3734);
                kind3717 = $tmp3733;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3715, &$s3735);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3739 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3739);
        $tmp3738 = $tmp3739;
        $tmp3737 = $tmp3738;
        declarations3736 = $tmp3737;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3737));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3738));
        org$pandalanguage$pandac$ASTNode* $tmp3743 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3742 = $tmp3743;
        $tmp3741 = $tmp3742;
        decl3740 = $tmp3741;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3741));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3742));
        if (((panda$core$Bit) { decl3740 == NULL }).value) {
        {
            $tmp3745 = NULL;
            $returnValue3744 = $tmp3745;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3745));
            $tmp3714 = 0;
            goto $l3712;
            $l3746:;
            return $returnValue3744;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3736, ((panda$core$Object*) decl3740));
        $l3748:;
        panda$core$Int64$init$builtin_int64(&$tmp3752, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3751, $tmp3752);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3753 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3751);
        bool $tmp3750 = ((panda$core$Bit) { $tmp3753.nonnull }).value;
        if (!$tmp3750) goto $l3749;
        {
            int $tmp3756;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3760 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3759 = $tmp3760;
                $tmp3758 = $tmp3759;
                decl3757 = $tmp3758;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3759));
                if (((panda$core$Bit) { decl3757 == NULL }).value) {
                {
                    $tmp3761 = NULL;
                    $returnValue3744 = $tmp3761;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3761));
                    $tmp3756 = 0;
                    goto $l3754;
                    $l3762:;
                    $tmp3714 = 1;
                    goto $l3712;
                    $l3763:;
                    return $returnValue3744;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3736, ((panda$core$Object*) decl3757));
            }
            $tmp3756 = -1;
            goto $l3754;
            $l3754:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3757));
            decl3757 = NULL;
            switch ($tmp3756) {
                case 0: goto $l3762;
                case -1: goto $l3765;
            }
            $l3765:;
        }
        goto $l3748;
        $l3749:;
        org$pandalanguage$pandac$ASTNode* $tmp3768 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3769, 47);
        panda$collections$ImmutableArray* $tmp3771 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3736);
        $tmp3770 = $tmp3771;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3768, $tmp3769, start3715.position, kind3717, $tmp3770);
        $tmp3767 = $tmp3768;
        $tmp3766 = $tmp3767;
        $returnValue3744 = $tmp3766;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3766));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3767));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
        $tmp3714 = 2;
        goto $l3712;
        $l3772:;
        return $returnValue3744;
    }
    $l3712:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3740));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3736));
    declarations3736 = NULL;
    decl3740 = NULL;
    switch ($tmp3714) {
        case 1: goto $l3763;
        case 0: goto $l3746;
        case 2: goto $l3772;
    }
    $l3774:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3778;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3779;
    panda$core$Int64 $tmp3780;
    org$pandalanguage$pandac$ASTNode* $returnValue3783;
    org$pandalanguage$pandac$ASTNode* $tmp3784;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3787;
    panda$core$Int64 $tmp3788;
    org$pandalanguage$pandac$ASTNode* $tmp3791;
    panda$core$Object* $tmp3794;
    panda$core$Bit $tmp3795;
    org$pandalanguage$pandac$ASTNode* target3797 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3798;
    org$pandalanguage$pandac$ASTNode* $tmp3799;
    panda$core$Int64 $tmp3801;
    panda$core$String* $tmp3802;
    panda$collections$Array* args3804 = NULL;
    panda$collections$Array* $tmp3805;
    panda$collections$Array* $tmp3806;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3808;
    panda$core$Int64 $tmp3809;
    org$pandalanguage$pandac$ASTNode* expr3814 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3815;
    org$pandalanguage$pandac$ASTNode* $tmp3816;
    panda$core$Object* $tmp3818;
    org$pandalanguage$pandac$ASTNode* $tmp3820;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3827;
    panda$core$Int64 $tmp3828;
    org$pandalanguage$pandac$ASTNode* $tmp3830;
    org$pandalanguage$pandac$ASTNode* $tmp3831;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    panda$core$Object* $tmp3834;
    org$pandalanguage$pandac$ASTNode* $tmp3836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3840;
    panda$core$Int64 $tmp3841;
    panda$core$Object* $tmp3844;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    panda$core$Object* $tmp3851;
    org$pandalanguage$pandac$ASTNode* $tmp3853;
    org$pandalanguage$pandac$ASTNode* $tmp3854;
    panda$core$Int64 $tmp3856;
    panda$collections$ImmutableArray* $tmp3857;
    int $tmp3777;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3780, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3779, $tmp3780);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3782 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3779, &$s3781);
        start3778 = $tmp3782;
        if (((panda$core$Bit) { !start3778.nonnull }).value) {
        {
            $tmp3784 = NULL;
            $returnValue3783 = $tmp3784;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3784));
            $tmp3777 = 0;
            goto $l3775;
            $l3785:;
            return $returnValue3783;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3788, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3787, $tmp3788);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3790 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3787, &$s3789);
        if (((panda$core$Bit) { !$tmp3790.nonnull }).value) {
        {
            $tmp3791 = NULL;
            $returnValue3783 = $tmp3791;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3791));
            $tmp3777 = 1;
            goto $l3775;
            $l3792:;
            return $returnValue3783;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3795, true);
        panda$core$Bit$wrapper* $tmp3796;
        $tmp3796 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3796->value = $tmp3795;
        $tmp3794 = ((panda$core$Object*) $tmp3796);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3794);
        panda$core$Panda$unref$panda$core$Object($tmp3794);
        org$pandalanguage$pandac$ASTNode* $tmp3800 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3801, 20);
        panda$core$String* $tmp3803 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3778.value));
        $tmp3802 = $tmp3803;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3800, $tmp3801, ((org$pandalanguage$pandac$parser$Token) start3778.value).position, $tmp3802);
        $tmp3799 = $tmp3800;
        $tmp3798 = $tmp3799;
        target3797 = $tmp3798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3799));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3802));
        panda$collections$Array* $tmp3807 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3807);
        $tmp3806 = $tmp3807;
        $tmp3805 = $tmp3806;
        args3804 = $tmp3805;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3805));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3806));
        panda$core$Int64$init$builtin_int64(&$tmp3809, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3808, $tmp3809);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3810 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3808);
        if (((panda$core$Bit) { !$tmp3810.nonnull }).value) {
        {
            int $tmp3813;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3817 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3816 = $tmp3817;
                $tmp3815 = $tmp3816;
                expr3814 = $tmp3815;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3816));
                if (((panda$core$Bit) { expr3814 == NULL }).value) {
                {
                    panda$core$Object* $tmp3819 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3818 = $tmp3819;
                    panda$core$Panda$unref$panda$core$Object($tmp3818);
                    $tmp3820 = NULL;
                    $returnValue3783 = $tmp3820;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3820));
                    $tmp3813 = 0;
                    goto $l3811;
                    $l3821:;
                    $tmp3777 = 2;
                    goto $l3775;
                    $l3822:;
                    return $returnValue3783;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3804, ((panda$core$Object*) expr3814));
                $l3824:;
                panda$core$Int64$init$builtin_int64(&$tmp3828, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3827, $tmp3828);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3829 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3827);
                bool $tmp3826 = ((panda$core$Bit) { $tmp3829.nonnull }).value;
                if (!$tmp3826) goto $l3825;
                {
                    {
                        $tmp3830 = expr3814;
                        org$pandalanguage$pandac$ASTNode* $tmp3833 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3832 = $tmp3833;
                        $tmp3831 = $tmp3832;
                        expr3814 = $tmp3831;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3831));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3832));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3830));
                    }
                    if (((panda$core$Bit) { expr3814 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3835 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3834 = $tmp3835;
                        panda$core$Panda$unref$panda$core$Object($tmp3834);
                        $tmp3836 = NULL;
                        $returnValue3783 = $tmp3836;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3836));
                        $tmp3813 = 1;
                        goto $l3811;
                        $l3837:;
                        $tmp3777 = 3;
                        goto $l3775;
                        $l3838:;
                        return $returnValue3783;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3804, ((panda$core$Object*) expr3814));
                }
                goto $l3824;
                $l3825:;
                panda$core$Int64$init$builtin_int64(&$tmp3841, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3840, $tmp3841);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3843 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3840, &$s3842);
                if (((panda$core$Bit) { !$tmp3843.nonnull }).value) {
                {
                    panda$core$Object* $tmp3845 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3844 = $tmp3845;
                    panda$core$Panda$unref$panda$core$Object($tmp3844);
                    $tmp3846 = NULL;
                    $returnValue3783 = $tmp3846;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3846));
                    $tmp3813 = 2;
                    goto $l3811;
                    $l3847:;
                    $tmp3777 = 4;
                    goto $l3775;
                    $l3848:;
                    return $returnValue3783;
                }
                }
            }
            $tmp3813 = -1;
            goto $l3811;
            $l3811:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3814));
            expr3814 = NULL;
            switch ($tmp3813) {
                case 1: goto $l3837;
                case 2: goto $l3847;
                case -1: goto $l3850;
                case 0: goto $l3821;
            }
            $l3850:;
        }
        }
        panda$core$Object* $tmp3852 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3851 = $tmp3852;
        panda$core$Panda$unref$panda$core$Object($tmp3851);
        org$pandalanguage$pandac$ASTNode* $tmp3855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3856, 8);
        panda$collections$ImmutableArray* $tmp3858 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3804);
        $tmp3857 = $tmp3858;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3855, $tmp3856, ((org$pandalanguage$pandac$parser$Token) start3778.value).position, target3797, $tmp3857);
        $tmp3854 = $tmp3855;
        $tmp3853 = $tmp3854;
        $returnValue3783 = $tmp3853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3853));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3854));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3857));
        $tmp3777 = 5;
        goto $l3775;
        $l3859:;
        return $returnValue3783;
    }
    $l3775:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3804));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3797));
    target3797 = NULL;
    args3804 = NULL;
    switch ($tmp3777) {
        case 4: goto $l3848;
        case 2: goto $l3822;
        case 1: goto $l3792;
        case 5: goto $l3859;
        case 3: goto $l3838;
        case 0: goto $l3785;
    }
    $l3861:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3862;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3863;
    panda$core$Int64 $tmp3864;
    org$pandalanguage$pandac$ASTNode* $returnValue3867;
    org$pandalanguage$pandac$ASTNode* $tmp3868;
    org$pandalanguage$pandac$parser$Token$nullable label3870;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3871;
    panda$core$Int64 $tmp3872;
    org$pandalanguage$pandac$ASTNode* $tmp3874;
    org$pandalanguage$pandac$ASTNode* $tmp3875;
    panda$core$Int64 $tmp3877;
    panda$core$String* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    org$pandalanguage$pandac$ASTNode* $tmp3882;
    panda$core$Int64 $tmp3884;
    panda$core$Int64$init$builtin_int64(&$tmp3864, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3863, $tmp3864);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3866 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3863, &$s3865);
    start3862 = $tmp3866;
    if (((panda$core$Bit) { !start3862.nonnull }).value) {
    {
        $tmp3868 = NULL;
        $returnValue3867 = $tmp3868;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3868));
        return $returnValue3867;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3872, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3871, $tmp3872);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3873 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3871);
    label3870 = $tmp3873;
    if (((panda$core$Bit) { label3870.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3876 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3877, 7);
        panda$core$String* $tmp3879 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3870.value));
        $tmp3878 = $tmp3879;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3876, $tmp3877, ((org$pandalanguage$pandac$parser$Token) start3862.value).position, $tmp3878);
        $tmp3875 = $tmp3876;
        $tmp3874 = $tmp3875;
        $returnValue3867 = $tmp3874;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3874));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3878));
        return $returnValue3867;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3883 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3884, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3883, $tmp3884, ((org$pandalanguage$pandac$parser$Token) start3862.value).position, NULL);
    $tmp3882 = $tmp3883;
    $tmp3881 = $tmp3882;
    $returnValue3867 = $tmp3881;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3881));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3882));
    return $returnValue3867;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3886;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3887;
    panda$core$Int64 $tmp3888;
    org$pandalanguage$pandac$ASTNode* $returnValue3891;
    org$pandalanguage$pandac$ASTNode* $tmp3892;
    org$pandalanguage$pandac$parser$Token$nullable label3894;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3895;
    panda$core$Int64 $tmp3896;
    org$pandalanguage$pandac$ASTNode* $tmp3898;
    org$pandalanguage$pandac$ASTNode* $tmp3899;
    panda$core$Int64 $tmp3901;
    panda$core$String* $tmp3902;
    org$pandalanguage$pandac$ASTNode* $tmp3905;
    org$pandalanguage$pandac$ASTNode* $tmp3906;
    panda$core$Int64 $tmp3908;
    panda$core$Int64$init$builtin_int64(&$tmp3888, 30);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3887, $tmp3888);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3890 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3887, &$s3889);
    start3886 = $tmp3890;
    if (((panda$core$Bit) { !start3886.nonnull }).value) {
    {
        $tmp3892 = NULL;
        $returnValue3891 = $tmp3892;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3892));
        return $returnValue3891;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3896, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3895, $tmp3896);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3897 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3895);
    label3894 = $tmp3897;
    if (((panda$core$Bit) { label3894.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3900 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3901, 12);
        panda$core$String* $tmp3903 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3894.value));
        $tmp3902 = $tmp3903;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3900, $tmp3901, ((org$pandalanguage$pandac$parser$Token) start3886.value).position, $tmp3902);
        $tmp3899 = $tmp3900;
        $tmp3898 = $tmp3899;
        $returnValue3891 = $tmp3898;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3898));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3899));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3902));
        return $returnValue3891;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3907 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3908, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3907, $tmp3908, ((org$pandalanguage$pandac$parser$Token) start3886.value).position, NULL);
    $tmp3906 = $tmp3907;
    $tmp3905 = $tmp3906;
    $returnValue3891 = $tmp3905;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3905));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3906));
    return $returnValue3891;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3910;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3911;
    panda$core$Int64 $tmp3912;
    org$pandalanguage$pandac$ASTNode* $returnValue3915;
    org$pandalanguage$pandac$ASTNode* $tmp3916;
    org$pandalanguage$pandac$parser$Token$Kind $match$1807_93918;
    panda$core$Int64 $tmp3922;
    panda$core$Int64 $tmp3925;
    panda$core$Int64 $tmp3929;
    org$pandalanguage$pandac$ASTNode* $tmp3932;
    org$pandalanguage$pandac$ASTNode* $tmp3933;
    panda$core$Int64 $tmp3935;
    panda$collections$Array* children3940 = NULL;
    panda$collections$Array* $tmp3941;
    panda$collections$Array* $tmp3942;
    org$pandalanguage$pandac$ASTNode* expr3944 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3945;
    org$pandalanguage$pandac$ASTNode* $tmp3946;
    org$pandalanguage$pandac$ASTNode* $tmp3948;
    org$pandalanguage$pandac$ASTNode* $tmp3951;
    org$pandalanguage$pandac$ASTNode* $tmp3952;
    panda$core$Int64 $tmp3954;
    panda$core$Int64$init$builtin_int64(&$tmp3912, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3911, $tmp3912);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3914 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3911, &$s3913);
    start3910 = $tmp3914;
    if (((panda$core$Bit) { !start3910.nonnull }).value) {
    {
        $tmp3916 = NULL;
        $returnValue3915 = $tmp3916;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3916));
        return $returnValue3915;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3919 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1807_93918 = $tmp3919.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3922, 101);
        panda$core$Bit $tmp3923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_93918.$rawValue, $tmp3922);
        bool $tmp3921 = $tmp3923.value;
        if ($tmp3921) goto $l3924;
        panda$core$Int64$init$builtin_int64(&$tmp3925, 40);
        panda$core$Bit $tmp3926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_93918.$rawValue, $tmp3925);
        $tmp3921 = $tmp3926.value;
        $l3924:;
        panda$core$Bit $tmp3927 = { $tmp3921 };
        bool $tmp3920 = $tmp3927.value;
        if ($tmp3920) goto $l3928;
        panda$core$Int64$init$builtin_int64(&$tmp3929, 41);
        panda$core$Bit $tmp3930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1807_93918.$rawValue, $tmp3929);
        $tmp3920 = $tmp3930.value;
        $l3928:;
        panda$core$Bit $tmp3931 = { $tmp3920 };
        if ($tmp3931.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3934 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3935, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3934, $tmp3935, ((org$pandalanguage$pandac$parser$Token) start3910.value).position, NULL);
            $tmp3933 = $tmp3934;
            $tmp3932 = $tmp3933;
            $returnValue3915 = $tmp3932;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3933));
            return $returnValue3915;
        }
        }
        else {
        {
            int $tmp3939;
            {
                panda$collections$Array* $tmp3943 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3943);
                $tmp3942 = $tmp3943;
                $tmp3941 = $tmp3942;
                children3940 = $tmp3941;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3942));
                org$pandalanguage$pandac$ASTNode* $tmp3947 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3946 = $tmp3947;
                $tmp3945 = $tmp3946;
                expr3944 = $tmp3945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3946));
                if (((panda$core$Bit) { expr3944 == NULL }).value) {
                {
                    $tmp3948 = NULL;
                    $returnValue3915 = $tmp3948;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3948));
                    $tmp3939 = 0;
                    goto $l3937;
                    $l3949:;
                    return $returnValue3915;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3940, ((panda$core$Object*) expr3944));
                org$pandalanguage$pandac$ASTNode* $tmp3953 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3954, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3953, $tmp3954, ((org$pandalanguage$pandac$parser$Token) start3910.value).position, expr3944);
                $tmp3952 = $tmp3953;
                $tmp3951 = $tmp3952;
                $returnValue3915 = $tmp3951;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3952));
                $tmp3939 = 1;
                goto $l3937;
                $l3955:;
                return $returnValue3915;
            }
            $l3937:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3940));
            children3940 = NULL;
            expr3944 = NULL;
            switch ($tmp3939) {
                case 1: goto $l3955;
                case 0: goto $l3949;
            }
            $l3957:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1825_93958;
    panda$core$Int64 $tmp3960;
    org$pandalanguage$pandac$ASTNode* $returnValue3962;
    org$pandalanguage$pandac$ASTNode* $tmp3963;
    org$pandalanguage$pandac$ASTNode* $tmp3964;
    panda$core$Int64 $tmp3967;
    org$pandalanguage$pandac$ASTNode* $tmp3969;
    org$pandalanguage$pandac$ASTNode* $tmp3970;
    panda$core$Int64 $tmp3973;
    org$pandalanguage$pandac$ASTNode* $tmp3975;
    org$pandalanguage$pandac$ASTNode* $tmp3976;
    panda$core$Bit $tmp3979;
    {
        org$pandalanguage$pandac$parser$Token $tmp3959 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1825_93958 = $tmp3959.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3960, 29);
        panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_93958.$rawValue, $tmp3960);
        if ($tmp3961.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3965 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3964 = $tmp3965;
            $tmp3963 = $tmp3964;
            $returnValue3962 = $tmp3963;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3963));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3964));
            return $returnValue3962;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3967, 30);
        panda$core$Bit $tmp3968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_93958.$rawValue, $tmp3967);
        if ($tmp3968.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3971 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3970 = $tmp3971;
            $tmp3969 = $tmp3970;
            $returnValue3962 = $tmp3969;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3969));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3970));
            return $returnValue3962;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3973, 28);
        panda$core$Bit $tmp3974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1825_93958.$rawValue, $tmp3973);
        if ($tmp3974.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3977 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3976 = $tmp3977;
            $tmp3975 = $tmp3976;
            $returnValue3962 = $tmp3975;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3975));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3976));
            return $returnValue3962;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3979, false);
            if ($tmp3979.value) goto $l3980; else goto $l3981;
            $l3981:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3982, (panda$core$Int64) { 1829 });
            abort();
            $l3980:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1837_93983;
    panda$core$Int64 $tmp3985;
    org$pandalanguage$pandac$ASTNode* $returnValue3987;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    org$pandalanguage$pandac$ASTNode* $tmp3989;
    panda$core$Int64 $tmp3992;
    org$pandalanguage$pandac$ASTNode* $tmp3994;
    org$pandalanguage$pandac$ASTNode* $tmp3995;
    panda$core$Int64 $tmp3998;
    org$pandalanguage$pandac$ASTNode* $tmp4000;
    org$pandalanguage$pandac$ASTNode* $tmp4001;
    panda$core$Int64 $tmp4004;
    org$pandalanguage$pandac$ASTNode* $tmp4006;
    org$pandalanguage$pandac$ASTNode* $tmp4007;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4010;
    panda$core$Int64 $tmp4011;
    org$pandalanguage$pandac$ASTNode* $tmp4013;
    {
        org$pandalanguage$pandac$parser$Token $tmp3984 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1837_93983 = $tmp3984.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3985, 31);
        panda$core$Bit $tmp3986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93983.$rawValue, $tmp3985);
        if ($tmp3986.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3990 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3989 = $tmp3990;
            $tmp3988 = $tmp3989;
            $returnValue3987 = $tmp3988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3988));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3989));
            return $returnValue3987;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3992, 33);
        panda$core$Bit $tmp3993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93983.$rawValue, $tmp3992);
        if ($tmp3993.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3996 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3995 = $tmp3996;
            $tmp3994 = $tmp3995;
            $returnValue3987 = $tmp3994;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3995));
            return $returnValue3987;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3998, 36);
        panda$core$Bit $tmp3999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93983.$rawValue, $tmp3998);
        if ($tmp3999.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4002 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp4001 = $tmp4002;
            $tmp4000 = $tmp4001;
            $returnValue3987 = $tmp4000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4000));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4001));
            return $returnValue3987;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4004, 32);
        panda$core$Bit $tmp4005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1837_93983.$rawValue, $tmp4004);
        if ($tmp4005.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4008 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp4007 = $tmp4008;
            $tmp4006 = $tmp4007;
            $returnValue3987 = $tmp4006;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4006));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4007));
            return $returnValue3987;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4011, 31);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4010, $tmp4011);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4010, &$s4012);
            $tmp4013 = NULL;
            $returnValue3987 = $tmp4013;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4013));
            return $returnValue3987;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4018;
    org$pandalanguage$pandac$parser$Token$nullable start4019;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4020;
    panda$core$Int64 $tmp4021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4023;
    panda$core$Int64 $tmp4024;
    org$pandalanguage$pandac$ASTNode* $returnValue4027;
    org$pandalanguage$pandac$ASTNode* $tmp4028;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4031;
    panda$core$Int64 $tmp4032;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4033;
    panda$core$Int64 $tmp4034;
    org$pandalanguage$pandac$parser$Token$nullable name4035;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4036;
    panda$core$Int64 $tmp4037;
    org$pandalanguage$pandac$ASTNode* $tmp4040;
    panda$collections$ImmutableArray* params4043 = NULL;
    panda$collections$ImmutableArray* $tmp4044;
    panda$collections$ImmutableArray* $tmp4045;
    org$pandalanguage$pandac$ASTNode* $tmp4047;
    org$pandalanguage$pandac$ASTNode* returnType4050 = NULL;
    panda$core$Int64 $tmp4052;
    org$pandalanguage$pandac$ASTNode* $tmp4054;
    org$pandalanguage$pandac$ASTNode* $tmp4055;
    org$pandalanguage$pandac$ASTNode* $tmp4056;
    org$pandalanguage$pandac$ASTNode* $tmp4058;
    org$pandalanguage$pandac$ASTNode* $tmp4061;
    org$pandalanguage$pandac$ASTNode* $tmp4062;
    panda$collections$ImmutableArray* body4063 = NULL;
    panda$collections$ImmutableArray* $tmp4064;
    panda$collections$ImmutableArray* $tmp4065;
    org$pandalanguage$pandac$ASTNode* $tmp4067;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    panda$core$Int64 $tmp4073;
    panda$collections$ImmutableArray* $tmp4074;
    panda$core$String* $tmp4076;
    int $tmp4017;
    {
        memset(&kind4018, 0, sizeof(kind4018));
        panda$core$Int64$init$builtin_int64(&$tmp4021, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4020, $tmp4021);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4022 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4020);
        start4019 = $tmp4022;
        if (((panda$core$Bit) { !start4019.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4024, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4023, $tmp4024);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4026 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4023, &$s4025);
            start4019 = $tmp4026;
            if (((panda$core$Bit) { !start4019.nonnull }).value) {
            {
                $tmp4028 = NULL;
                $returnValue4027 = $tmp4028;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4028));
                $tmp4017 = 0;
                goto $l4015;
                $l4029:;
                return $returnValue4027;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4032, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4031, $tmp4032);
            kind4018 = $tmp4031;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4034, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4033, $tmp4034);
            kind4018 = $tmp4033;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4037, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4036, $tmp4037);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4039 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4036, &$s4038);
        name4035 = $tmp4039;
        if (((panda$core$Bit) { !name4035.nonnull }).value) {
        {
            $tmp4040 = NULL;
            $returnValue4027 = $tmp4040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4040));
            $tmp4017 = 1;
            goto $l4015;
            $l4041:;
            return $returnValue4027;
        }
        }
        panda$collections$ImmutableArray* $tmp4046 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4045 = $tmp4046;
        $tmp4044 = $tmp4045;
        params4043 = $tmp4044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4045));
        if (((panda$core$Bit) { params4043 == NULL }).value) {
        {
            $tmp4047 = NULL;
            $returnValue4027 = $tmp4047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4047));
            $tmp4017 = 2;
            goto $l4015;
            $l4048:;
            return $returnValue4027;
        }
        }
        memset(&returnType4050, 0, sizeof(returnType4050));
        org$pandalanguage$pandac$parser$Token $tmp4051 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4052, 96);
        panda$core$Bit $tmp4053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4051.kind.$rawValue, $tmp4052);
        if ($tmp4053.value) {
        {
            {
                $tmp4054 = returnType4050;
                org$pandalanguage$pandac$ASTNode* $tmp4057 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4056 = $tmp4057;
                $tmp4055 = $tmp4056;
                returnType4050 = $tmp4055;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4055));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4054));
            }
            if (((panda$core$Bit) { returnType4050 == NULL }).value) {
            {
                $tmp4058 = NULL;
                $returnValue4027 = $tmp4058;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4058));
                $tmp4017 = 3;
                goto $l4015;
                $l4059:;
                return $returnValue4027;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4061 = returnType4050;
                $tmp4062 = NULL;
                returnType4050 = $tmp4062;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4062));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4061));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4066 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4065 = $tmp4066;
        $tmp4064 = $tmp4065;
        body4063 = $tmp4064;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4065));
        if (((panda$core$Bit) { body4063 == NULL }).value) {
        {
            $tmp4067 = NULL;
            $returnValue4027 = $tmp4067;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4067));
            $tmp4017 = 4;
            goto $l4015;
            $l4068:;
            return $returnValue4027;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4072 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4073, 26);
        panda$collections$ImmutableArray* $tmp4075 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4075);
        $tmp4074 = $tmp4075;
        panda$core$String* $tmp4077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4035.value));
        $tmp4076 = $tmp4077;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4072, $tmp4073, ((org$pandalanguage$pandac$parser$Token) start4019.value).position, NULL, $tmp4074, kind4018, $tmp4076, NULL, params4043, returnType4050, body4063);
        $tmp4071 = $tmp4072;
        $tmp4070 = $tmp4071;
        $returnValue4027 = $tmp4070;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4074));
        $tmp4017 = 5;
        goto $l4015;
        $l4078:;
        return $returnValue4027;
    }
    $l4015:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4063));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4050));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4043));
    params4043 = NULL;
    body4063 = NULL;
    switch ($tmp4017) {
        case 3: goto $l4059;
        case 5: goto $l4078;
        case 2: goto $l4048;
        case 1: goto $l4041;
        case 0: goto $l4029;
        case 4: goto $l4068;
    }
    $l4080:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1896_94081;
    panda$core$Int64 $tmp4083;
    org$pandalanguage$pandac$ASTNode* $returnValue4085;
    org$pandalanguage$pandac$ASTNode* $tmp4086;
    org$pandalanguage$pandac$ASTNode* $tmp4087;
    panda$core$Int64 $tmp4090;
    org$pandalanguage$pandac$ASTNode* $tmp4092;
    org$pandalanguage$pandac$ASTNode* $tmp4093;
    panda$core$Int64 $tmp4096;
    org$pandalanguage$pandac$ASTNode* $tmp4098;
    org$pandalanguage$pandac$ASTNode* $tmp4099;
    panda$core$Int64 $tmp4102;
    org$pandalanguage$pandac$ASTNode* $tmp4104;
    org$pandalanguage$pandac$ASTNode* $tmp4105;
    panda$core$Int64 $tmp4108;
    org$pandalanguage$pandac$ASTNode* $tmp4110;
    org$pandalanguage$pandac$ASTNode* $tmp4111;
    panda$core$Int64 $tmp4114;
    org$pandalanguage$pandac$ASTNode* $tmp4116;
    org$pandalanguage$pandac$ASTNode* $tmp4117;
    panda$core$Int64 $tmp4120;
    org$pandalanguage$pandac$ASTNode* $tmp4122;
    org$pandalanguage$pandac$ASTNode* $tmp4123;
    panda$core$Int64 $tmp4126;
    org$pandalanguage$pandac$ASTNode* $tmp4128;
    org$pandalanguage$pandac$ASTNode* $tmp4129;
    panda$core$Int64 $tmp4132;
    org$pandalanguage$pandac$parser$Token id4134;
    org$pandalanguage$pandac$parser$Token$nullable colon4136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4137;
    panda$core$Int64 $tmp4138;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4140;
    panda$core$Int64 $tmp4141;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4143;
    panda$core$Int64 $tmp4144;
    org$pandalanguage$pandac$ASTNode* $tmp4146;
    org$pandalanguage$pandac$ASTNode* $tmp4147;
    panda$core$String* $tmp4148;
    org$pandalanguage$pandac$ASTNode* $tmp4152;
    org$pandalanguage$pandac$ASTNode* $tmp4153;
    panda$core$Int64 $tmp4157;
    panda$core$Int64 $tmp4160;
    org$pandalanguage$pandac$ASTNode* $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4164;
    panda$core$Int64 $tmp4170;
    panda$core$Int64 $tmp4173;
    panda$core$Int64 $tmp4177;
    panda$core$Int64 $tmp4181;
    org$pandalanguage$pandac$ASTNode* $tmp4184;
    org$pandalanguage$pandac$ASTNode* $tmp4185;
    panda$core$Int64 $tmp4188;
    org$pandalanguage$pandac$ASTNode* $tmp4190;
    org$pandalanguage$pandac$ASTNode* $tmp4191;
    panda$core$Int64 $tmp4195;
    panda$core$Int64 $tmp4198;
    org$pandalanguage$pandac$ASTNode* $tmp4201;
    org$pandalanguage$pandac$ASTNode* $tmp4202;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4205;
    panda$core$Int64 $tmp4206;
    org$pandalanguage$pandac$ASTNode* $tmp4208;
    {
        org$pandalanguage$pandac$parser$Token $tmp4082 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1896_94081 = $tmp4082.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4083, 37);
        panda$core$Bit $tmp4084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4083);
        if ($tmp4084.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4088 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4087 = $tmp4088;
            $tmp4086 = $tmp4087;
            $returnValue4085 = $tmp4086;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4086));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4087));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4090, 33);
        panda$core$Bit $tmp4091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4090);
        if ($tmp4091.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4094 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4093 = $tmp4094;
            $tmp4092 = $tmp4093;
            $returnValue4085 = $tmp4092;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4093));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4096, 32);
        panda$core$Bit $tmp4097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4096);
        if ($tmp4097.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4100 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4099 = $tmp4100;
            $tmp4098 = $tmp4099;
            $returnValue4085 = $tmp4098;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4098));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4099));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4102, 31);
        panda$core$Bit $tmp4103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4102);
        if ($tmp4103.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4106 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4105 = $tmp4106;
            $tmp4104 = $tmp4105;
            $returnValue4085 = $tmp4104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4105));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4108, 36);
        panda$core$Bit $tmp4109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4108);
        if ($tmp4109.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4112 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4111 = $tmp4112;
            $tmp4110 = $tmp4111;
            $returnValue4085 = $tmp4110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4110));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4111));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4114, 45);
        panda$core$Bit $tmp4115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4114);
        if ($tmp4115.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4118 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4117 = $tmp4118;
            $tmp4116 = $tmp4117;
            $returnValue4085 = $tmp4116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4117));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4120, 39);
        panda$core$Bit $tmp4121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4120);
        if ($tmp4121.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4124 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4123 = $tmp4124;
            $tmp4122 = $tmp4123;
            $returnValue4085 = $tmp4122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4122));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4123));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4126, 100);
        panda$core$Bit $tmp4127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4126);
        if ($tmp4127.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4130 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4129 = $tmp4130;
            $tmp4128 = $tmp4129;
            $returnValue4085 = $tmp4128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4129));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4132, 49);
        panda$core$Bit $tmp4133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4132);
        if ($tmp4133.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4135 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4134 = $tmp4135;
            panda$core$Int64$init$builtin_int64(&$tmp4138, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4137, $tmp4138);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4139 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4137);
            colon4136 = $tmp4139;
            if (((panda$core$Bit) { colon4136.nonnull }).value) {
            {
                if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, ((org$pandalanguage$pandac$parser$Token) colon4136.value));
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4134);
                    panda$core$Int64$init$builtin_int64(&$tmp4141, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4140, $tmp4141);
                    (($fn4142) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp4140);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp4144, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4143, $tmp4144);
                    (($fn4145) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp4143);
                }
                }
                panda$core$String* $tmp4149 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4134);
                $tmp4148 = $tmp4149;
                org$pandalanguage$pandac$ASTNode* $tmp4150 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4148);
                $tmp4147 = $tmp4150;
                $tmp4146 = $tmp4147;
                $returnValue4085 = $tmp4146;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4148));
                return $returnValue4085;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4134);
            org$pandalanguage$pandac$ASTNode* $tmp4154 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4153 = $tmp4154;
            $tmp4152 = $tmp4153;
            $returnValue4085 = $tmp4152;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4153));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4157, 47);
        panda$core$Bit $tmp4158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4157);
        bool $tmp4156 = $tmp4158.value;
        if ($tmp4156) goto $l4159;
        panda$core$Int64$init$builtin_int64(&$tmp4160, 48);
        panda$core$Bit $tmp4161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4160);
        $tmp4156 = $tmp4161.value;
        $l4159:;
        panda$core$Bit $tmp4162 = { $tmp4156 };
        if ($tmp4162.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4165 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4164 = $tmp4165;
            $tmp4163 = $tmp4164;
            $returnValue4085 = $tmp4163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4164));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4170, 24);
        panda$core$Bit $tmp4171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4170);
        bool $tmp4169 = $tmp4171.value;
        if ($tmp4169) goto $l4172;
        panda$core$Int64$init$builtin_int64(&$tmp4173, 25);
        panda$core$Bit $tmp4174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4173);
        $tmp4169 = $tmp4174.value;
        $l4172:;
        panda$core$Bit $tmp4175 = { $tmp4169 };
        bool $tmp4168 = $tmp4175.value;
        if ($tmp4168) goto $l4176;
        panda$core$Int64$init$builtin_int64(&$tmp4177, 26);
        panda$core$Bit $tmp4178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4177);
        $tmp4168 = $tmp4178.value;
        $l4176:;
        panda$core$Bit $tmp4179 = { $tmp4168 };
        bool $tmp4167 = $tmp4179.value;
        if ($tmp4167) goto $l4180;
        panda$core$Int64$init$builtin_int64(&$tmp4181, 27);
        panda$core$Bit $tmp4182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4181);
        $tmp4167 = $tmp4182.value;
        $l4180:;
        panda$core$Bit $tmp4183 = { $tmp4167 };
        if ($tmp4183.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4186 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4185 = $tmp4186;
            $tmp4184 = $tmp4185;
            $returnValue4085 = $tmp4184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4184));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4185));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4188, 23);
        panda$core$Bit $tmp4189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4188);
        if ($tmp4189.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4192 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4191 = $tmp4192;
            $tmp4190 = $tmp4191;
            $returnValue4085 = $tmp4190;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4191));
            return $returnValue4085;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4195, 22);
        panda$core$Bit $tmp4196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4195);
        bool $tmp4194 = $tmp4196.value;
        if ($tmp4194) goto $l4197;
        panda$core$Int64$init$builtin_int64(&$tmp4198, 21);
        panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1896_94081.$rawValue, $tmp4198);
        $tmp4194 = $tmp4199.value;
        $l4197:;
        panda$core$Bit $tmp4200 = { $tmp4194 };
        if ($tmp4200.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4203 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4202 = $tmp4203;
            $tmp4201 = $tmp4202;
            $returnValue4085 = $tmp4201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4202));
            return $returnValue4085;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4206, 37);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4205, $tmp4206);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4205, &$s4207);
            $tmp4208 = NULL;
            $returnValue4085 = $tmp4208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4208));
            return $returnValue4085;
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
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4213;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4214;
    panda$core$Int64 $tmp4215;
    org$pandalanguage$pandac$ASTNode* $returnValue4218;
    org$pandalanguage$pandac$ASTNode* $tmp4219;
    org$pandalanguage$pandac$parser$Token$nullable next4222;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4223;
    panda$core$Int64 $tmp4224;
    org$pandalanguage$pandac$ASTNode* $tmp4227;
    panda$core$MutableString* name4230 = NULL;
    panda$core$MutableString* $tmp4231;
    panda$core$MutableString* $tmp4232;
    panda$core$String* $tmp4234;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4238;
    panda$core$Int64 $tmp4239;
    panda$core$Char8 $tmp4241;
    panda$core$UInt8 $tmp4242;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4243;
    panda$core$Int64 $tmp4244;
    org$pandalanguage$pandac$ASTNode* $tmp4247;
    panda$core$String* $tmp4250;
    org$pandalanguage$pandac$ASTNode* $tmp4252;
    org$pandalanguage$pandac$ASTNode* $tmp4253;
    panda$core$Int64 $tmp4255;
    panda$core$String* $tmp4256;
    int $tmp4212;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4215, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4214, $tmp4215);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4214, &$s4216);
        start4213 = $tmp4217;
        if (((panda$core$Bit) { !start4213.nonnull }).value) {
        {
            $tmp4219 = NULL;
            $returnValue4218 = $tmp4219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4219));
            $tmp4212 = 0;
            goto $l4210;
            $l4220:;
            return $returnValue4218;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4224, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4223, $tmp4224);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4226 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4223, &$s4225);
        next4222 = $tmp4226;
        if (((panda$core$Bit) { !next4222.nonnull }).value) {
        {
            $tmp4227 = NULL;
            $returnValue4218 = $tmp4227;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4227));
            $tmp4212 = 1;
            goto $l4210;
            $l4228:;
            return $returnValue4218;
        }
        }
        panda$core$MutableString* $tmp4233 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4235 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4222.value));
        $tmp4234 = $tmp4235;
        panda$core$MutableString$init$panda$core$String($tmp4233, $tmp4234);
        $tmp4232 = $tmp4233;
        $tmp4231 = $tmp4232;
        name4230 = $tmp4231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4234));
        $l4236:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4239, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4238, $tmp4239);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4240 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4238);
            next4222 = $tmp4240;
            if (((panda$core$Bit) { !next4222.nonnull }).value) {
            {
                goto $l4237;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4242, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4241, $tmp4242);
            panda$core$MutableString$append$panda$core$Char8(name4230, $tmp4241);
            panda$core$Int64$init$builtin_int64(&$tmp4244, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4243, $tmp4244);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4246 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4243, &$s4245);
            next4222 = $tmp4246;
            if (((panda$core$Bit) { !next4222.nonnull }).value) {
            {
                $tmp4247 = NULL;
                $returnValue4218 = $tmp4247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4247));
                $tmp4212 = 2;
                goto $l4210;
                $l4248:;
                return $returnValue4218;
            }
            }
            panda$core$String* $tmp4251 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4222.value));
            $tmp4250 = $tmp4251;
            panda$core$MutableString$append$panda$core$String(name4230, $tmp4250);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4250));
        }
        }
        $l4237:;
        org$pandalanguage$pandac$ASTNode* $tmp4254 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4255, 30);
        panda$core$String* $tmp4257 = panda$core$MutableString$finish$R$panda$core$String(name4230);
        $tmp4256 = $tmp4257;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4254, $tmp4255, ((org$pandalanguage$pandac$parser$Token) start4213.value).position, $tmp4256);
        $tmp4253 = $tmp4254;
        $tmp4252 = $tmp4253;
        $returnValue4218 = $tmp4252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4256));
        $tmp4212 = 3;
        goto $l4210;
        $l4258:;
        return $returnValue4218;
    }
    $l4210:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4230));
    name4230 = NULL;
    switch ($tmp4212) {
        case 1: goto $l4228;
        case 3: goto $l4258;
        case 2: goto $l4248;
        case 0: goto $l4220;
    }
    $l4260:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4265;
    panda$core$Int64 $tmp4266;
    org$pandalanguage$pandac$ASTNode* $returnValue4269;
    org$pandalanguage$pandac$ASTNode* $tmp4270;
    org$pandalanguage$pandac$parser$Token$nullable next4273;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4274;
    panda$core$Int64 $tmp4275;
    org$pandalanguage$pandac$ASTNode* $tmp4278;
    panda$core$MutableString* name4281 = NULL;
    panda$core$MutableString* $tmp4282;
    panda$core$MutableString* $tmp4283;
    panda$core$String* $tmp4285;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4289;
    panda$core$Int64 $tmp4290;
    panda$core$Char8 $tmp4292;
    panda$core$UInt8 $tmp4293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4294;
    panda$core$Int64 $tmp4295;
    org$pandalanguage$pandac$ASTNode* $tmp4298;
    panda$core$String* $tmp4301;
    org$pandalanguage$pandac$ASTNode* $tmp4303;
    org$pandalanguage$pandac$ASTNode* $tmp4304;
    panda$core$Int64 $tmp4306;
    panda$core$String* $tmp4307;
    int $tmp4263;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4266, 16);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4265, $tmp4266);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4265, &$s4267);
        start4264 = $tmp4268;
        if (((panda$core$Bit) { !start4264.nonnull }).value) {
        {
            $tmp4270 = NULL;
            $returnValue4269 = $tmp4270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4270));
            $tmp4263 = 0;
            goto $l4261;
            $l4271:;
            return $returnValue4269;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4275, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4274, $tmp4275);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4277 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4274, &$s4276);
        next4273 = $tmp4277;
        if (((panda$core$Bit) { !next4273.nonnull }).value) {
        {
            $tmp4278 = NULL;
            $returnValue4269 = $tmp4278;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4278));
            $tmp4263 = 1;
            goto $l4261;
            $l4279:;
            return $returnValue4269;
        }
        }
        panda$core$MutableString* $tmp4284 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4286 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4273.value));
        $tmp4285 = $tmp4286;
        panda$core$MutableString$init$panda$core$String($tmp4284, $tmp4285);
        $tmp4283 = $tmp4284;
        $tmp4282 = $tmp4283;
        name4281 = $tmp4282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4285));
        $l4287:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4290, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4289, $tmp4290);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4291 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4289);
            next4273 = $tmp4291;
            if (((panda$core$Bit) { !next4273.nonnull }).value) {
            {
                goto $l4288;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4293, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4292, $tmp4293);
            panda$core$MutableString$append$panda$core$Char8(name4281, $tmp4292);
            panda$core$Int64$init$builtin_int64(&$tmp4295, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4294, $tmp4295);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4297 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4294, &$s4296);
            next4273 = $tmp4297;
            if (((panda$core$Bit) { !next4273.nonnull }).value) {
            {
                $tmp4298 = NULL;
                $returnValue4269 = $tmp4298;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4298));
                $tmp4263 = 2;
                goto $l4261;
                $l4299:;
                return $returnValue4269;
            }
            }
            panda$core$String* $tmp4302 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4273.value));
            $tmp4301 = $tmp4302;
            panda$core$MutableString$append$panda$core$String(name4281, $tmp4301);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4301));
        }
        }
        $l4288:;
        org$pandalanguage$pandac$ASTNode* $tmp4305 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4306, 46);
        panda$core$String* $tmp4308 = panda$core$MutableString$finish$R$panda$core$String(name4281);
        $tmp4307 = $tmp4308;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4305, $tmp4306, ((org$pandalanguage$pandac$parser$Token) start4264.value).position, $tmp4307);
        $tmp4304 = $tmp4305;
        $tmp4303 = $tmp4304;
        $returnValue4269 = $tmp4303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
        $tmp4263 = 3;
        goto $l4261;
        $l4309:;
        return $returnValue4269;
    }
    $l4261:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4281));
    name4281 = NULL;
    switch ($tmp4263) {
        case 3: goto $l4309;
        case 2: goto $l4299;
        case 1: goto $l4279;
        case 0: goto $l4271;
    }
    $l4311:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4315;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4316;
    panda$core$Int64 $tmp4317;
    panda$collections$ImmutableArray* $returnValue4320;
    panda$collections$ImmutableArray* $tmp4321;
    org$pandalanguage$pandac$parser$Token$nullable id4324;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4325;
    panda$core$Int64 $tmp4326;
    panda$collections$ImmutableArray* $tmp4329;
    panda$collections$Array* parameters4332 = NULL;
    panda$collections$Array* $tmp4333;
    panda$collections$Array* $tmp4334;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4336;
    panda$core$Int64 $tmp4337;
    org$pandalanguage$pandac$ASTNode* t4342 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4343;
    org$pandalanguage$pandac$ASTNode* $tmp4344;
    panda$collections$ImmutableArray* $tmp4346;
    org$pandalanguage$pandac$ASTNode* $tmp4350;
    panda$core$Int64 $tmp4352;
    panda$core$String* $tmp4353;
    org$pandalanguage$pandac$ASTNode* $tmp4356;
    panda$core$Int64 $tmp4358;
    panda$core$String* $tmp4359;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4364;
    panda$core$Int64 $tmp4365;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4367;
    panda$core$Int64 $tmp4368;
    panda$collections$ImmutableArray* $tmp4371;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4374;
    panda$core$Int64 $tmp4375;
    org$pandalanguage$pandac$ASTNode* t4380 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4381;
    org$pandalanguage$pandac$ASTNode* $tmp4382;
    panda$collections$ImmutableArray* $tmp4384;
    org$pandalanguage$pandac$ASTNode* $tmp4388;
    panda$core$Int64 $tmp4390;
    panda$core$String* $tmp4391;
    org$pandalanguage$pandac$ASTNode* $tmp4394;
    panda$core$Int64 $tmp4396;
    panda$core$String* $tmp4397;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4399;
    panda$core$Int64 $tmp4400;
    panda$collections$ImmutableArray* $tmp4403;
    panda$collections$ImmutableArray* $tmp4406;
    panda$collections$ImmutableArray* $tmp4407;
    int $tmp4314;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4317, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4316, $tmp4317);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4319 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4316, &$s4318);
        start4315 = $tmp4319;
        if (((panda$core$Bit) { !start4315.nonnull }).value) {
        {
            $tmp4321 = NULL;
            $returnValue4320 = $tmp4321;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4321));
            $tmp4314 = 0;
            goto $l4312;
            $l4322:;
            return $returnValue4320;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4326, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4325, $tmp4326);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4328 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4325, &$s4327);
        id4324 = $tmp4328;
        if (((panda$core$Bit) { !id4324.nonnull }).value) {
        {
            $tmp4329 = NULL;
            $returnValue4320 = $tmp4329;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4329));
            $tmp4314 = 1;
            goto $l4312;
            $l4330:;
            return $returnValue4320;
        }
        }
        panda$collections$Array* $tmp4335 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4335);
        $tmp4334 = $tmp4335;
        $tmp4333 = $tmp4334;
        parameters4332 = $tmp4333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4334));
        panda$core$Int64$init$builtin_int64(&$tmp4337, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4336, $tmp4337);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4338 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4336);
        if (((panda$core$Bit) { $tmp4338.nonnull }).value) {
        {
            int $tmp4341;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4345 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4344 = $tmp4345;
                $tmp4343 = $tmp4344;
                t4342 = $tmp4343;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4343));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4344));
                if (((panda$core$Bit) { t4342 == NULL }).value) {
                {
                    $tmp4346 = NULL;
                    $returnValue4320 = $tmp4346;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4346));
                    $tmp4341 = 0;
                    goto $l4339;
                    $l4347:;
                    $tmp4314 = 2;
                    goto $l4312;
                    $l4348:;
                    return $returnValue4320;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4351 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4352, 44);
                panda$core$String* $tmp4354 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4324.value));
                $tmp4353 = $tmp4354;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4351, $tmp4352, ((org$pandalanguage$pandac$parser$Token) id4324.value).position, $tmp4353, t4342);
                $tmp4350 = $tmp4351;
                panda$collections$Array$add$panda$collections$Array$T(parameters4332, ((panda$core$Object*) $tmp4350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4353));
            }
            $tmp4341 = -1;
            goto $l4339;
            $l4339:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4342));
            t4342 = NULL;
            switch ($tmp4341) {
                case -1: goto $l4355;
                case 0: goto $l4347;
            }
            $l4355:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4357 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4358, 20);
            panda$core$String* $tmp4360 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4324.value));
            $tmp4359 = $tmp4360;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4357, $tmp4358, ((org$pandalanguage$pandac$parser$Token) id4324.value).position, $tmp4359);
            $tmp4356 = $tmp4357;
            panda$collections$Array$add$panda$collections$Array$T(parameters4332, ((panda$core$Object*) $tmp4356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4359));
        }
        }
        $l4361:;
        panda$core$Int64$init$builtin_int64(&$tmp4365, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4364, $tmp4365);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4366 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4364);
        bool $tmp4363 = ((panda$core$Bit) { $tmp4366.nonnull }).value;
        if (!$tmp4363) goto $l4362;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4368, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4367, $tmp4368);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4370 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4367, &$s4369);
            id4324 = $tmp4370;
            if (((panda$core$Bit) { !id4324.nonnull }).value) {
            {
                $tmp4371 = NULL;
                $returnValue4320 = $tmp4371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4371));
                $tmp4314 = 3;
                goto $l4312;
                $l4372:;
                return $returnValue4320;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4375, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4374, $tmp4375);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4376 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4374);
            if (((panda$core$Bit) { $tmp4376.nonnull }).value) {
            {
                int $tmp4379;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4383 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4382 = $tmp4383;
                    $tmp4381 = $tmp4382;
                    t4380 = $tmp4381;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4381));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4382));
                    if (((panda$core$Bit) { t4380 == NULL }).value) {
                    {
                        $tmp4384 = NULL;
                        $returnValue4320 = $tmp4384;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4384));
                        $tmp4379 = 0;
                        goto $l4377;
                        $l4385:;
                        $tmp4314 = 4;
                        goto $l4312;
                        $l4386:;
                        return $returnValue4320;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4389 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4390, 44);
                    panda$core$String* $tmp4392 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4324.value));
                    $tmp4391 = $tmp4392;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4389, $tmp4390, ((org$pandalanguage$pandac$parser$Token) id4324.value).position, $tmp4391, t4380);
                    $tmp4388 = $tmp4389;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4332, ((panda$core$Object*) $tmp4388));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4388));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4391));
                }
                $tmp4379 = -1;
                goto $l4377;
                $l4377:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4380));
                t4380 = NULL;
                switch ($tmp4379) {
                    case 0: goto $l4385;
                    case -1: goto $l4393;
                }
                $l4393:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4395 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4396, 20);
                panda$core$String* $tmp4398 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4324.value));
                $tmp4397 = $tmp4398;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4395, $tmp4396, ((org$pandalanguage$pandac$parser$Token) id4324.value).position, $tmp4397);
                $tmp4394 = $tmp4395;
                panda$collections$Array$add$panda$collections$Array$T(parameters4332, ((panda$core$Object*) $tmp4394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4397));
            }
            }
        }
        goto $l4361;
        $l4362:;
        panda$core$Int64$init$builtin_int64(&$tmp4400, 64);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4399, $tmp4400);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4402 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4399, &$s4401);
        if (((panda$core$Bit) { !$tmp4402.nonnull }).value) {
        {
            $tmp4403 = NULL;
            $returnValue4320 = $tmp4403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4403));
            $tmp4314 = 5;
            goto $l4312;
            $l4404:;
            return $returnValue4320;
        }
        }
        panda$collections$ImmutableArray* $tmp4408 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4332);
        $tmp4407 = $tmp4408;
        $tmp4406 = $tmp4407;
        $returnValue4320 = $tmp4406;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4407));
        $tmp4314 = 6;
        goto $l4312;
        $l4409:;
        return $returnValue4320;
    }
    $l4312:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4332));
    parameters4332 = NULL;
    switch ($tmp4314) {
        case 3: goto $l4372;
        case 1: goto $l4330;
        case 6: goto $l4409;
        case 2: goto $l4348;
        case 4: goto $l4386;
        case 0: goto $l4322;
        case 5: goto $l4404;
    }
    $l4411:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4415;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4416;
    panda$core$Int64 $tmp4417;
    panda$collections$ImmutableArray* $returnValue4420;
    panda$collections$ImmutableArray* $tmp4421;
    panda$collections$Array* result4424 = NULL;
    panda$collections$Array* $tmp4425;
    panda$collections$Array* $tmp4426;
    org$pandalanguage$pandac$ASTNode* t4428 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4429;
    org$pandalanguage$pandac$ASTNode* $tmp4430;
    panda$collections$ImmutableArray* $tmp4432;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4438;
    panda$core$Int64 $tmp4439;
    org$pandalanguage$pandac$ASTNode* $tmp4441;
    org$pandalanguage$pandac$ASTNode* $tmp4442;
    org$pandalanguage$pandac$ASTNode* $tmp4443;
    panda$collections$ImmutableArray* $tmp4445;
    panda$collections$ImmutableArray* $tmp4448;
    panda$collections$ImmutableArray* $tmp4449;
    int $tmp4414;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4417, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4416, $tmp4417);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4419 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4416, &$s4418);
        start4415 = $tmp4419;
        if (((panda$core$Bit) { !start4415.nonnull }).value) {
        {
            $tmp4421 = NULL;
            $returnValue4420 = $tmp4421;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4421));
            $tmp4414 = 0;
            goto $l4412;
            $l4422:;
            return $returnValue4420;
        }
        }
        panda$collections$Array* $tmp4427 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4427);
        $tmp4426 = $tmp4427;
        $tmp4425 = $tmp4426;
        result4424 = $tmp4425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4426));
        org$pandalanguage$pandac$ASTNode* $tmp4431 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4430 = $tmp4431;
        $tmp4429 = $tmp4430;
        t4428 = $tmp4429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4430));
        if (((panda$core$Bit) { t4428 == NULL }).value) {
        {
            $tmp4432 = NULL;
            $returnValue4420 = $tmp4432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4432));
            $tmp4414 = 1;
            goto $l4412;
            $l4433:;
            return $returnValue4420;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4424, ((panda$core$Object*) t4428));
        $l4435:;
        panda$core$Int64$init$builtin_int64(&$tmp4439, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4438, $tmp4439);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4440 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4438);
        bool $tmp4437 = ((panda$core$Bit) { $tmp4440.nonnull }).value;
        if (!$tmp4437) goto $l4436;
        {
            {
                $tmp4441 = t4428;
                org$pandalanguage$pandac$ASTNode* $tmp4444 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4443 = $tmp4444;
                $tmp4442 = $tmp4443;
                t4428 = $tmp4442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4441));
            }
            if (((panda$core$Bit) { t4428 == NULL }).value) {
            {
                $tmp4445 = NULL;
                $returnValue4420 = $tmp4445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4445));
                $tmp4414 = 2;
                goto $l4412;
                $l4446:;
                return $returnValue4420;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4424, ((panda$core$Object*) t4428));
        }
        goto $l4435;
        $l4436:;
        panda$collections$ImmutableArray* $tmp4450 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4424);
        $tmp4449 = $tmp4450;
        $tmp4448 = $tmp4449;
        $returnValue4420 = $tmp4448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4449));
        $tmp4414 = 3;
        goto $l4412;
        $l4451:;
        return $returnValue4420;
    }
    $l4412:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4428));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4424));
    result4424 = NULL;
    t4428 = NULL;
    switch ($tmp4414) {
        case 3: goto $l4451;
        case 2: goto $l4446;
        case 1: goto $l4433;
        case 0: goto $l4422;
    }
    $l4453:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4457;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4458;
    panda$core$Int64 $tmp4459;
    panda$core$String* exprText4462 = NULL;
    org$pandalanguage$pandac$ASTNode* expr4463 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4464;
    org$pandalanguage$pandac$parser$Token$nullable exprStart4465;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4466;
    panda$core$Int64 $tmp4467;
    org$pandalanguage$pandac$ASTNode* $tmp4469;
    org$pandalanguage$pandac$ASTNode* $tmp4470;
    org$pandalanguage$pandac$ASTNode* $tmp4471;
    org$pandalanguage$pandac$ASTNode* $returnValue4473;
    org$pandalanguage$pandac$ASTNode* $tmp4474;
    org$pandalanguage$pandac$parser$Token$nullable exprEnd4477;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4478;
    panda$core$Int64 $tmp4479;
    org$pandalanguage$pandac$ASTNode* $tmp4482;
    panda$core$String* $tmp4485;
    panda$core$String* $tmp4486;
    panda$core$String* $tmp4487;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp4488;
    panda$core$Bit $tmp4490;
    org$pandalanguage$pandac$ASTNode* $tmp4492;
    org$pandalanguage$pandac$ASTNode* $tmp4493;
    panda$core$Int64 $tmp4495;
    panda$core$String* $tmp4496;
    int $tmp4456;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4459, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4458, $tmp4459);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4461 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4458, &$s4460);
        a4457 = $tmp4461;
        memset(&exprText4462, 0, sizeof(exprText4462));
        $tmp4464 = NULL;
        expr4463 = $tmp4464;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4464));
        panda$core$Int64$init$builtin_int64(&$tmp4467, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4466, $tmp4467);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4468 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4466);
        exprStart4465 = $tmp4468;
        if (((panda$core$Bit) { exprStart4465.nonnull }).value) {
        {
            {
                $tmp4469 = expr4463;
                org$pandalanguage$pandac$ASTNode* $tmp4472 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4471 = $tmp4472;
                $tmp4470 = $tmp4471;
                expr4463 = $tmp4470;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4470));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4471));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4469));
            }
            if (((panda$core$Bit) { expr4463 == NULL }).value) {
            {
                $tmp4474 = NULL;
                $returnValue4473 = $tmp4474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4474));
                $tmp4456 = 0;
                goto $l4454;
                $l4475:;
                return $returnValue4473;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4479, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4478, $tmp4479);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4481 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4478, &$s4480);
            exprEnd4477 = $tmp4481;
            if (((panda$core$Bit) { !exprEnd4477.nonnull }).value) {
            {
                $tmp4482 = NULL;
                $returnValue4473 = $tmp4482;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4482));
                $tmp4456 = 1;
                goto $l4454;
                $l4483:;
                return $returnValue4473;
            }
            }
            {
                $tmp4485 = exprText4462;
                panda$core$String$Index $tmp4489 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self->source, ((org$pandalanguage$pandac$parser$Token) exprStart4465.value).start);
                panda$core$Bit$init$builtin_bit(&$tmp4490, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp4488, $tmp4489, ((org$pandalanguage$pandac$parser$Token) exprEnd4477.value).start, $tmp4490);
                panda$core$String* $tmp4491 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp4488);
                $tmp4487 = $tmp4491;
                $tmp4486 = $tmp4487;
                exprText4462 = $tmp4486;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4485));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4494 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4495, 0);
        panda$core$String* $tmp4497 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4457.value));
        $tmp4496 = $tmp4497;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q($tmp4494, $tmp4495, ((org$pandalanguage$pandac$parser$Token) a4457.value).position, $tmp4496, exprText4462, expr4463);
        $tmp4493 = $tmp4494;
        $tmp4492 = $tmp4493;
        $returnValue4473 = $tmp4492;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4496));
        $tmp4456 = 2;
        goto $l4454;
        $l4498:;
        return $returnValue4473;
    }
    $l4454:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4463));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) exprText4462));
    switch ($tmp4456) {
        case 1: goto $l4483;
        case 0: goto $l4475;
        case 2: goto $l4498;
    }
    $l4500:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4504 = NULL;
    panda$collections$Array* $tmp4505;
    panda$collections$Array* $tmp4506;
    panda$core$Int64 $tmp4512;
    org$pandalanguage$pandac$ASTNode* a4517 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4518;
    org$pandalanguage$pandac$ASTNode* $tmp4519;
    panda$collections$ImmutableArray* $returnValue4523;
    panda$collections$ImmutableArray* $tmp4524;
    panda$collections$ImmutableArray* $tmp4525;
    int $tmp4503;
    {
        panda$collections$Array* $tmp4507 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4507);
        $tmp4506 = $tmp4507;
        $tmp4505 = $tmp4506;
        result4504 = $tmp4505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4506));
        $l4508:;
        org$pandalanguage$pandac$parser$Token $tmp4511 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4512, 14);
        panda$core$Bit $tmp4513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4511.kind.$rawValue, $tmp4512);
        bool $tmp4510 = $tmp4513.value;
        if (!$tmp4510) goto $l4509;
        {
            int $tmp4516;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4520 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4519 = $tmp4520;
                $tmp4518 = $tmp4519;
                a4517 = $tmp4518;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4519));
                if (((panda$core$Bit) { a4517 == NULL }).value) {
                {
                    $tmp4516 = 0;
                    goto $l4514;
                    $l4521:;
                    goto $l4509;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4504, ((panda$core$Object*) a4517));
            }
            $tmp4516 = -1;
            goto $l4514;
            $l4514:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4517));
            a4517 = NULL;
            switch ($tmp4516) {
                case 0: goto $l4521;
                case -1: goto $l4522;
            }
            $l4522:;
        }
        goto $l4508;
        $l4509:;
        panda$collections$ImmutableArray* $tmp4526 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4504);
        $tmp4525 = $tmp4526;
        $tmp4524 = $tmp4525;
        $returnValue4523 = $tmp4524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4525));
        $tmp4503 = 0;
        goto $l4501;
        $l4527:;
        return $returnValue4523;
    }
    $l4501:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4504));
    result4504 = NULL;
    switch ($tmp4503) {
        case 0: goto $l4527;
    }
    $l4529:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4533;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4534;
    panda$core$Int64 $tmp4535;
    org$pandalanguage$pandac$ASTNode* $returnValue4538;
    org$pandalanguage$pandac$ASTNode* $tmp4539;
    panda$core$MutableString* result4542 = NULL;
    panda$core$MutableString* $tmp4543;
    panda$core$MutableString* $tmp4544;
    org$pandalanguage$pandac$parser$Token next4548;
    panda$core$Int64 $tmp4550;
    panda$core$Int64 $tmp4552;
    org$pandalanguage$pandac$ASTNode* $tmp4555;
    panda$core$String* $tmp4558;
    org$pandalanguage$pandac$ASTNode* $tmp4560;
    org$pandalanguage$pandac$ASTNode* $tmp4561;
    panda$core$Int64 $tmp4563;
    panda$core$String* $tmp4564;
    int $tmp4532;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4535, 12);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4534, $tmp4535);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4537 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4534, &$s4536);
        start4533 = $tmp4537;
        if (((panda$core$Bit) { !start4533.nonnull }).value) {
        {
            $tmp4539 = NULL;
            $returnValue4538 = $tmp4539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4539));
            $tmp4532 = 0;
            goto $l4530;
            $l4540:;
            return $returnValue4538;
        }
        }
        panda$core$MutableString* $tmp4545 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4545);
        $tmp4544 = $tmp4545;
        $tmp4543 = $tmp4544;
        result4542 = $tmp4543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4544));
        $l4546:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4549 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4548 = $tmp4549;
            panda$core$Int64$init$builtin_int64(&$tmp4550, 12);
            panda$core$Bit $tmp4551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4548.kind.$rawValue, $tmp4550);
            if ($tmp4551.value) {
            {
                goto $l4547;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4552, 0);
            panda$core$Bit $tmp4553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4548.kind.$rawValue, $tmp4552);
            if ($tmp4553.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4533.value), &$s4554);
                $tmp4555 = NULL;
                $returnValue4538 = $tmp4555;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4555));
                $tmp4532 = 1;
                goto $l4530;
                $l4556:;
                return $returnValue4538;
            }
            }
            panda$core$String* $tmp4559 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4548);
            $tmp4558 = $tmp4559;
            panda$core$MutableString$append$panda$core$String(result4542, $tmp4558);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4558));
        }
        }
        $l4547:;
        org$pandalanguage$pandac$ASTNode* $tmp4562 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4563, 38);
        panda$core$String* $tmp4565 = panda$core$MutableString$finish$R$panda$core$String(result4542);
        $tmp4564 = $tmp4565;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4562, $tmp4563, ((org$pandalanguage$pandac$parser$Token) start4533.value).position, $tmp4564);
        $tmp4561 = $tmp4562;
        $tmp4560 = $tmp4561;
        $returnValue4538 = $tmp4560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4564));
        $tmp4532 = 2;
        goto $l4530;
        $l4566:;
        return $returnValue4538;
    }
    $l4530:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4542));
    result4542 = NULL;
    switch ($tmp4532) {
        case 1: goto $l4556;
        case 2: goto $l4566;
        case 0: goto $l4540;
    }
    $l4568:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4572;
    panda$core$Int64 $tmp4573;
    org$pandalanguage$pandac$parser$Token$nullable id4574;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4575;
    panda$core$Int64 $tmp4576;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4579;
    panda$core$Int64 $tmp4580;
    org$pandalanguage$pandac$ASTNode* $returnValue4581;
    org$pandalanguage$pandac$ASTNode* $tmp4582;
    org$pandalanguage$pandac$ASTNode* t4585 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4586;
    org$pandalanguage$pandac$ASTNode* $tmp4587;
    org$pandalanguage$pandac$ASTNode* $tmp4589;
    org$pandalanguage$pandac$ASTNode* $tmp4592;
    org$pandalanguage$pandac$ASTNode* $tmp4593;
    panda$core$Int64 $tmp4595;
    panda$core$String* $tmp4596;
    int $tmp4571;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4573, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4572, $tmp4573);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4572);
        panda$core$Int64$init$builtin_int64(&$tmp4576, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4575, $tmp4576);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4578 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4575, &$s4577);
        id4574 = $tmp4578;
        panda$core$Int64$init$builtin_int64(&$tmp4580, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4579, $tmp4580);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4579);
        if (((panda$core$Bit) { !id4574.nonnull }).value) {
        {
            $tmp4582 = NULL;
            $returnValue4581 = $tmp4582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4582));
            $tmp4571 = 0;
            goto $l4569;
            $l4583:;
            return $returnValue4581;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4588 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4587 = $tmp4588;
        $tmp4586 = $tmp4587;
        t4585 = $tmp4586;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4587));
        if (((panda$core$Bit) { t4585 == NULL }).value) {
        {
            $tmp4589 = NULL;
            $returnValue4581 = $tmp4589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4589));
            $tmp4571 = 1;
            goto $l4569;
            $l4590:;
            return $returnValue4581;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4594 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4595, 31);
        panda$core$String* $tmp4597 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4574.value));
        $tmp4596 = $tmp4597;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4594, $tmp4595, ((org$pandalanguage$pandac$parser$Token) id4574.value).position, $tmp4596, t4585);
        $tmp4593 = $tmp4594;
        $tmp4592 = $tmp4593;
        $returnValue4581 = $tmp4592;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4596));
        $tmp4571 = 2;
        goto $l4569;
        $l4598:;
        return $returnValue4581;
    }
    $l4569:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4585));
    t4585 = NULL;
    switch ($tmp4571) {
        case 1: goto $l4590;
        case 2: goto $l4598;
        case 0: goto $l4583;
    }
    $l4600:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4604;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4605;
    panda$core$Int64 $tmp4606;
    panda$collections$ImmutableArray* $returnValue4609;
    panda$collections$ImmutableArray* $tmp4610;
    panda$collections$Array* result4613 = NULL;
    panda$collections$Array* $tmp4614;
    panda$collections$Array* $tmp4615;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4617;
    panda$core$Int64 $tmp4618;
    org$pandalanguage$pandac$ASTNode* param4623 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4624;
    org$pandalanguage$pandac$ASTNode* $tmp4625;
    panda$collections$ImmutableArray* $tmp4627;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4634;
    panda$core$Int64 $tmp4635;
    org$pandalanguage$pandac$ASTNode* $tmp4637;
    org$pandalanguage$pandac$ASTNode* $tmp4638;
    org$pandalanguage$pandac$ASTNode* $tmp4639;
    panda$collections$ImmutableArray* $tmp4641;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4645;
    panda$core$Int64 $tmp4646;
    panda$collections$ImmutableArray* $tmp4649;
    panda$collections$ImmutableArray* $tmp4654;
    panda$collections$ImmutableArray* $tmp4655;
    int $tmp4603;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4606, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4605, $tmp4606);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4608 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4605, &$s4607);
        start4604 = $tmp4608;
        if (((panda$core$Bit) { !start4604.nonnull }).value) {
        {
            $tmp4610 = NULL;
            $returnValue4609 = $tmp4610;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4610));
            $tmp4603 = 0;
            goto $l4601;
            $l4611:;
            return $returnValue4609;
        }
        }
        panda$collections$Array* $tmp4616 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4616);
        $tmp4615 = $tmp4616;
        $tmp4614 = $tmp4615;
        result4613 = $tmp4614;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4614));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4615));
        panda$core$Int64$init$builtin_int64(&$tmp4618, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4617, $tmp4618);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4619 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4617);
        if (((panda$core$Bit) { !$tmp4619.nonnull }).value) {
        {
            int $tmp4622;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4626 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4625 = $tmp4626;
                $tmp4624 = $tmp4625;
                param4623 = $tmp4624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4625));
                if (((panda$core$Bit) { param4623 == NULL }).value) {
                {
                    $tmp4627 = NULL;
                    $returnValue4609 = $tmp4627;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4627));
                    $tmp4622 = 0;
                    goto $l4620;
                    $l4628:;
                    $tmp4603 = 1;
                    goto $l4601;
                    $l4629:;
                    return $returnValue4609;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4613, ((panda$core$Object*) param4623));
                $l4631:;
                panda$core$Int64$init$builtin_int64(&$tmp4635, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4634, $tmp4635);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4636 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4634);
                bool $tmp4633 = ((panda$core$Bit) { $tmp4636.nonnull }).value;
                if (!$tmp4633) goto $l4632;
                {
                    {
                        $tmp4637 = param4623;
                        org$pandalanguage$pandac$ASTNode* $tmp4640 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4639 = $tmp4640;
                        $tmp4638 = $tmp4639;
                        param4623 = $tmp4638;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4638));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4639));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4637));
                    }
                    if (((panda$core$Bit) { param4623 == NULL }).value) {
                    {
                        $tmp4641 = NULL;
                        $returnValue4609 = $tmp4641;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4641));
                        $tmp4622 = 1;
                        goto $l4620;
                        $l4642:;
                        $tmp4603 = 2;
                        goto $l4601;
                        $l4643:;
                        return $returnValue4609;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4613, ((panda$core$Object*) param4623));
                }
                goto $l4631;
                $l4632:;
                panda$core$Int64$init$builtin_int64(&$tmp4646, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4645, $tmp4646);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4648 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4645, &$s4647);
                if (((panda$core$Bit) { !$tmp4648.nonnull }).value) {
                {
                    $tmp4649 = NULL;
                    $returnValue4609 = $tmp4649;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4649));
                    $tmp4622 = 2;
                    goto $l4620;
                    $l4650:;
                    $tmp4603 = 3;
                    goto $l4601;
                    $l4651:;
                    return $returnValue4609;
                }
                }
            }
            $tmp4622 = -1;
            goto $l4620;
            $l4620:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4623));
            param4623 = NULL;
            switch ($tmp4622) {
                case -1: goto $l4653;
                case 2: goto $l4650;
                case 0: goto $l4628;
                case 1: goto $l4642;
            }
            $l4653:;
        }
        }
        panda$collections$ImmutableArray* $tmp4656 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4613);
        $tmp4655 = $tmp4656;
        $tmp4654 = $tmp4655;
        $returnValue4609 = $tmp4654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4655));
        $tmp4603 = 4;
        goto $l4601;
        $l4657:;
        return $returnValue4609;
    }
    $l4601:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4613));
    result4613 = NULL;
    switch ($tmp4603) {
        case 4: goto $l4657;
        case 3: goto $l4651;
        case 2: goto $l4643;
        case 0: goto $l4611;
        case 1: goto $l4629;
    }
    $l4659:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4663;
    org$pandalanguage$pandac$parser$Token$nullable start4664;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4665;
    panda$core$Int64 $tmp4666;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4668;
    panda$core$Int64 $tmp4669;
    org$pandalanguage$pandac$ASTNode* $returnValue4672;
    org$pandalanguage$pandac$ASTNode* $tmp4673;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4676;
    panda$core$Int64 $tmp4677;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4678;
    panda$core$Int64 $tmp4679;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4680;
    panda$core$Int64 $tmp4681;
    panda$core$String* name4682 = NULL;
    panda$core$String* $tmp4683;
    panda$core$String* $tmp4684;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4686;
    panda$core$Int64 $tmp4687;
    org$pandalanguage$pandac$ASTNode* $tmp4688;
    panda$collections$ImmutableArray* generics4691 = NULL;
    panda$core$Int64 $tmp4693;
    panda$collections$ImmutableArray* $tmp4695;
    panda$collections$ImmutableArray* $tmp4696;
    panda$collections$ImmutableArray* $tmp4697;
    panda$collections$ImmutableArray* $tmp4699;
    panda$collections$ImmutableArray* $tmp4700;
    panda$collections$ImmutableArray* params4701 = NULL;
    panda$collections$ImmutableArray* $tmp4702;
    panda$collections$ImmutableArray* $tmp4703;
    org$pandalanguage$pandac$ASTNode* $tmp4705;
    org$pandalanguage$pandac$ASTNode* returnType4708 = NULL;
    panda$core$Int64 $tmp4710;
    org$pandalanguage$pandac$ASTNode* $tmp4712;
    org$pandalanguage$pandac$ASTNode* $tmp4713;
    org$pandalanguage$pandac$ASTNode* $tmp4714;
    org$pandalanguage$pandac$ASTNode* $tmp4716;
    org$pandalanguage$pandac$ASTNode* $tmp4719;
    org$pandalanguage$pandac$ASTNode* $tmp4720;
    panda$collections$ImmutableArray* body4721 = NULL;
    panda$core$Int64 $tmp4723;
    panda$collections$ImmutableArray* $tmp4725;
    panda$collections$ImmutableArray* $tmp4726;
    panda$collections$ImmutableArray* $tmp4727;
    org$pandalanguage$pandac$ASTNode* $tmp4729;
    panda$collections$ImmutableArray* $tmp4732;
    panda$collections$ImmutableArray* $tmp4733;
    org$pandalanguage$pandac$ASTNode* $tmp4734;
    org$pandalanguage$pandac$ASTNode* $tmp4735;
    panda$core$Int64 $tmp4737;
    int $tmp4662;
    {
        memset(&kind4663, 0, sizeof(kind4663));
        panda$core$Int64$init$builtin_int64(&$tmp4666, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4665, $tmp4666);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4667 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4665);
        start4664 = $tmp4667;
        if (((panda$core$Bit) { !start4664.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4669, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4668, $tmp4669);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4671 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4668, &$s4670);
            start4664 = $tmp4671;
            if (((panda$core$Bit) { !start4664.nonnull }).value) {
            {
                $tmp4673 = NULL;
                $returnValue4672 = $tmp4673;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4673));
                $tmp4662 = 0;
                goto $l4660;
                $l4674:;
                return $returnValue4672;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4677, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4676, $tmp4677);
            kind4663 = $tmp4676;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4679, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4678, $tmp4679);
            kind4663 = $tmp4678;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4681, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4680, $tmp4681);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4680);
        panda$core$String* $tmp4685 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4684 = $tmp4685;
        $tmp4683 = $tmp4684;
        name4682 = $tmp4683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4684));
        panda$core$Int64$init$builtin_int64(&$tmp4687, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4686, $tmp4687);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4686);
        if (((panda$core$Bit) { name4682 == NULL }).value) {
        {
            $tmp4688 = NULL;
            $returnValue4672 = $tmp4688;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4688));
            $tmp4662 = 1;
            goto $l4660;
            $l4689:;
            return $returnValue4672;
        }
        }
        memset(&generics4691, 0, sizeof(generics4691));
        org$pandalanguage$pandac$parser$Token $tmp4692 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4693, 63);
        panda$core$Bit $tmp4694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4692.kind.$rawValue, $tmp4693);
        if ($tmp4694.value) {
        {
            {
                $tmp4695 = generics4691;
                panda$collections$ImmutableArray* $tmp4698 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4697 = $tmp4698;
                $tmp4696 = $tmp4697;
                generics4691 = $tmp4696;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4695));
            }
        }
        }
        else {
        {
            {
                $tmp4699 = generics4691;
                $tmp4700 = NULL;
                generics4691 = $tmp4700;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4699));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4704 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4703 = $tmp4704;
        $tmp4702 = $tmp4703;
        params4701 = $tmp4702;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4703));
        if (((panda$core$Bit) { params4701 == NULL }).value) {
        {
            $tmp4705 = NULL;
            $returnValue4672 = $tmp4705;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4705));
            $tmp4662 = 2;
            goto $l4660;
            $l4706:;
            return $returnValue4672;
        }
        }
        memset(&returnType4708, 0, sizeof(returnType4708));
        org$pandalanguage$pandac$parser$Token $tmp4709 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4710, 96);
        panda$core$Bit $tmp4711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4709.kind.$rawValue, $tmp4710);
        if ($tmp4711.value) {
        {
            {
                $tmp4712 = returnType4708;
                org$pandalanguage$pandac$ASTNode* $tmp4715 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4714 = $tmp4715;
                $tmp4713 = $tmp4714;
                returnType4708 = $tmp4713;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4712));
            }
            if (((panda$core$Bit) { returnType4708 == NULL }).value) {
            {
                $tmp4716 = NULL;
                $returnValue4672 = $tmp4716;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4716));
                $tmp4662 = 3;
                goto $l4660;
                $l4717:;
                return $returnValue4672;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4719 = returnType4708;
                $tmp4720 = NULL;
                returnType4708 = $tmp4720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4719));
            }
        }
        }
        memset(&body4721, 0, sizeof(body4721));
        org$pandalanguage$pandac$parser$Token $tmp4722 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4723, 100);
        panda$core$Bit $tmp4724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4722.kind.$rawValue, $tmp4723);
        if ($tmp4724.value) {
        {
            {
                $tmp4725 = body4721;
                panda$collections$ImmutableArray* $tmp4728 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4727 = $tmp4728;
                $tmp4726 = $tmp4727;
                body4721 = $tmp4726;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4725));
            }
            if (((panda$core$Bit) { body4721 == NULL }).value) {
            {
                $tmp4729 = NULL;
                $returnValue4672 = $tmp4729;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4729));
                $tmp4662 = 4;
                goto $l4660;
                $l4730:;
                return $returnValue4672;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4732 = body4721;
                $tmp4733 = NULL;
                body4721 = $tmp4733;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4733));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4732));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4736 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4737, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4736, $tmp4737, ((org$pandalanguage$pandac$parser$Token) start4664.value).position, p_doccomment, p_annotations, kind4663, name4682, generics4691, params4701, returnType4708, body4721);
        $tmp4735 = $tmp4736;
        $tmp4734 = $tmp4735;
        $returnValue4672 = $tmp4734;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4735));
        $tmp4662 = 5;
        goto $l4660;
        $l4738:;
        return $returnValue4672;
    }
    $l4660:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4721));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4701));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4691));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4682));
    name4682 = NULL;
    params4701 = NULL;
    switch ($tmp4662) {
        case 4: goto $l4730;
        case 3: goto $l4717;
        case 1: goto $l4689;
        case 5: goto $l4738;
        case 2: goto $l4706;
        case 0: goto $l4674;
    }
    $l4740:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4744;
    org$pandalanguage$pandac$parser$Token$nullable start4745;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4746;
    panda$core$Int64 $tmp4747;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4749;
    panda$core$Int64 $tmp4750;
    org$pandalanguage$pandac$ASTNode* $returnValue4753;
    org$pandalanguage$pandac$ASTNode* $tmp4754;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4757;
    panda$core$Int64 $tmp4758;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4759;
    panda$core$Int64 $tmp4760;
    panda$collections$ImmutableArray* params4761 = NULL;
    panda$collections$ImmutableArray* $tmp4762;
    panda$collections$ImmutableArray* $tmp4763;
    org$pandalanguage$pandac$ASTNode* $tmp4765;
    org$pandalanguage$pandac$ASTNode* returnType4768 = NULL;
    panda$core$Int64 $tmp4770;
    org$pandalanguage$pandac$ASTNode* $tmp4772;
    org$pandalanguage$pandac$ASTNode* $tmp4773;
    org$pandalanguage$pandac$ASTNode* $tmp4774;
    org$pandalanguage$pandac$ASTNode* $tmp4776;
    org$pandalanguage$pandac$ASTNode* $tmp4779;
    org$pandalanguage$pandac$ASTNode* $tmp4780;
    panda$collections$ImmutableArray* body4781 = NULL;
    panda$collections$ImmutableArray* $tmp4782;
    panda$collections$ImmutableArray* $tmp4783;
    org$pandalanguage$pandac$ASTNode* $tmp4785;
    org$pandalanguage$pandac$ASTNode* $tmp4788;
    org$pandalanguage$pandac$ASTNode* $tmp4789;
    panda$core$Int64 $tmp4791;
    panda$collections$ImmutableArray* $tmp4792;
    int $tmp4743;
    {
        memset(&kind4744, 0, sizeof(kind4744));
        panda$core$Int64$init$builtin_int64(&$tmp4747, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4746, $tmp4747);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4748 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4746);
        start4745 = $tmp4748;
        if (((panda$core$Bit) { !start4745.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4750, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4749, $tmp4750);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4752 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4749, &$s4751);
            start4745 = $tmp4752;
            if (((panda$core$Bit) { !start4745.nonnull }).value) {
            {
                $tmp4754 = NULL;
                $returnValue4753 = $tmp4754;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4754));
                $tmp4743 = 0;
                goto $l4741;
                $l4755:;
                return $returnValue4753;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4758, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4757, $tmp4758);
            kind4744 = $tmp4757;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4760, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4759, $tmp4760);
            kind4744 = $tmp4759;
        }
        }
        panda$collections$ImmutableArray* $tmp4764 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4763 = $tmp4764;
        $tmp4762 = $tmp4763;
        params4761 = $tmp4762;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4762));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4763));
        if (((panda$core$Bit) { params4761 == NULL }).value) {
        {
            $tmp4765 = NULL;
            $returnValue4753 = $tmp4765;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4765));
            $tmp4743 = 1;
            goto $l4741;
            $l4766:;
            return $returnValue4753;
        }
        }
        memset(&returnType4768, 0, sizeof(returnType4768));
        org$pandalanguage$pandac$parser$Token $tmp4769 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4770, 96);
        panda$core$Bit $tmp4771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4769.kind.$rawValue, $tmp4770);
        if ($tmp4771.value) {
        {
            {
                $tmp4772 = returnType4768;
                org$pandalanguage$pandac$ASTNode* $tmp4775 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4774 = $tmp4775;
                $tmp4773 = $tmp4774;
                returnType4768 = $tmp4773;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4772));
            }
            if (((panda$core$Bit) { returnType4768 == NULL }).value) {
            {
                $tmp4776 = NULL;
                $returnValue4753 = $tmp4776;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4776));
                $tmp4743 = 2;
                goto $l4741;
                $l4777:;
                return $returnValue4753;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4779 = returnType4768;
                $tmp4780 = NULL;
                returnType4768 = $tmp4780;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4779));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4784 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4783 = $tmp4784;
        $tmp4782 = $tmp4783;
        body4781 = $tmp4782;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4782));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4783));
        if (((panda$core$Bit) { body4781 == NULL }).value) {
        {
            $tmp4785 = NULL;
            $returnValue4753 = $tmp4785;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4785));
            $tmp4743 = 3;
            goto $l4741;
            $l4786:;
            return $returnValue4753;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4791, 26);
        panda$collections$ImmutableArray* $tmp4793 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4793);
        $tmp4792 = $tmp4793;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4790, $tmp4791, ((org$pandalanguage$pandac$parser$Token) start4745.value).position, NULL, $tmp4792, kind4744, &$s4794, NULL, params4761, returnType4768, body4781);
        $tmp4789 = $tmp4790;
        $tmp4788 = $tmp4789;
        $returnValue4753 = $tmp4788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4789));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4792));
        $tmp4743 = 4;
        goto $l4741;
        $l4795:;
        return $returnValue4753;
    }
    $l4741:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4781));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4768));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4761));
    params4761 = NULL;
    body4781 = NULL;
    switch ($tmp4743) {
        case 2: goto $l4777;
        case 4: goto $l4795;
        case 3: goto $l4786;
        case 1: goto $l4766;
        case 0: goto $l4755;
    }
    $l4797:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4801;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4802;
    panda$core$Int64 $tmp4803;
    org$pandalanguage$pandac$ASTNode* $returnValue4806;
    org$pandalanguage$pandac$ASTNode* $tmp4807;
    panda$collections$ImmutableArray* params4810 = NULL;
    panda$collections$ImmutableArray* $tmp4811;
    panda$collections$ImmutableArray* $tmp4812;
    org$pandalanguage$pandac$ASTNode* $tmp4814;
    panda$collections$ImmutableArray* b4817 = NULL;
    panda$collections$ImmutableArray* $tmp4818;
    panda$collections$ImmutableArray* $tmp4819;
    org$pandalanguage$pandac$ASTNode* $tmp4821;
    org$pandalanguage$pandac$ASTNode* $tmp4824;
    org$pandalanguage$pandac$ASTNode* $tmp4825;
    panda$core$Int64 $tmp4827;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4828;
    panda$core$Int64 $tmp4829;
    int $tmp4800;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4803, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4802, $tmp4803);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4805 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4802, &$s4804);
        start4801 = $tmp4805;
        if (((panda$core$Bit) { !start4801.nonnull }).value) {
        {
            $tmp4807 = NULL;
            $returnValue4806 = $tmp4807;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4807));
            $tmp4800 = 0;
            goto $l4798;
            $l4808:;
            return $returnValue4806;
        }
        }
        panda$collections$ImmutableArray* $tmp4813 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4812 = $tmp4813;
        $tmp4811 = $tmp4812;
        params4810 = $tmp4811;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4811));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4812));
        if (((panda$core$Bit) { params4810 == NULL }).value) {
        {
            $tmp4814 = NULL;
            $returnValue4806 = $tmp4814;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4814));
            $tmp4800 = 1;
            goto $l4798;
            $l4815:;
            return $returnValue4806;
        }
        }
        panda$collections$ImmutableArray* $tmp4820 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4819 = $tmp4820;
        $tmp4818 = $tmp4819;
        b4817 = $tmp4818;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4818));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4819));
        if (((panda$core$Bit) { b4817 == NULL }).value) {
        {
            $tmp4821 = NULL;
            $returnValue4806 = $tmp4821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4821));
            $tmp4800 = 2;
            goto $l4798;
            $l4822:;
            return $returnValue4806;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4827, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4829, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4828, $tmp4829);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4826, $tmp4827, ((org$pandalanguage$pandac$parser$Token) start4801.value).position, p_doccomment, p_annotations, $tmp4828, &$s4830, NULL, params4810, NULL, b4817);
        $tmp4825 = $tmp4826;
        $tmp4824 = $tmp4825;
        $returnValue4806 = $tmp4824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4825));
        $tmp4800 = 3;
        goto $l4798;
        $l4831:;
        return $returnValue4806;
    }
    $l4798:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4817));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4810));
    params4810 = NULL;
    b4817 = NULL;
    switch ($tmp4800) {
        case 2: goto $l4822;
        case 3: goto $l4831;
        case 1: goto $l4815;
        case 0: goto $l4808;
    }
    $l4833:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4837 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4838;
    org$pandalanguage$pandac$ASTNode* $tmp4839;
    org$pandalanguage$pandac$ASTNode* $returnValue4841;
    org$pandalanguage$pandac$ASTNode* $tmp4842;
    org$pandalanguage$pandac$ASTNode* $tmp4845;
    org$pandalanguage$pandac$ASTNode* $tmp4846;
    panda$core$Int64 $tmp4848;
    int $tmp4836;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4840 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4839 = $tmp4840;
        $tmp4838 = $tmp4839;
        decl4837 = $tmp4838;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4838));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4839));
        if (((panda$core$Bit) { decl4837 == NULL }).value) {
        {
            $tmp4842 = NULL;
            $returnValue4841 = $tmp4842;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4842));
            $tmp4836 = 0;
            goto $l4834;
            $l4843:;
            return $returnValue4841;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4847 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4848, 16);
        org$pandalanguage$pandac$Position $tmp4850 = (($fn4849) decl4837->$class->vtable[2])(decl4837);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4847, $tmp4848, $tmp4850, p_doccomment, p_annotations, decl4837);
        $tmp4846 = $tmp4847;
        $tmp4845 = $tmp4846;
        $returnValue4841 = $tmp4845;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4845));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4846));
        $tmp4836 = 1;
        goto $l4834;
        $l4851:;
        return $returnValue4841;
    }
    $l4834:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4837));
    decl4837 = NULL;
    switch ($tmp4836) {
        case 1: goto $l4851;
        case 0: goto $l4843;
    }
    $l4853:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4857;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4858;
    panda$core$Int64 $tmp4859;
    org$pandalanguage$pandac$ASTNode* $returnValue4862;
    org$pandalanguage$pandac$ASTNode* $tmp4863;
    panda$collections$Array* fields4866 = NULL;
    panda$collections$Array* $tmp4867;
    panda$collections$Array* $tmp4868;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4870;
    panda$core$Int64 $tmp4871;
    panda$core$Int64 $tmp4874;
    org$pandalanguage$pandac$ASTNode* field4879 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4880;
    org$pandalanguage$pandac$ASTNode* $tmp4881;
    org$pandalanguage$pandac$ASTNode* $tmp4883;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4890;
    panda$core$Int64 $tmp4891;
    org$pandalanguage$pandac$ASTNode* $tmp4893;
    org$pandalanguage$pandac$ASTNode* $tmp4894;
    org$pandalanguage$pandac$ASTNode* $tmp4895;
    org$pandalanguage$pandac$ASTNode* $tmp4897;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4902;
    panda$core$Int64 $tmp4903;
    org$pandalanguage$pandac$ASTNode* $tmp4906;
    org$pandalanguage$pandac$ASTNode* $tmp4909;
    org$pandalanguage$pandac$ASTNode* $tmp4910;
    panda$core$Int64 $tmp4912;
    panda$core$String* $tmp4913;
    panda$collections$ImmutableArray* $tmp4915;
    int $tmp4856;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4859, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4858, $tmp4859);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4861 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4858, &$s4860);
        name4857 = $tmp4861;
        if (((panda$core$Bit) { !name4857.nonnull }).value) {
        {
            $tmp4863 = NULL;
            $returnValue4862 = $tmp4863;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4863));
            $tmp4856 = 0;
            goto $l4854;
            $l4864:;
            return $returnValue4862;
        }
        }
        panda$collections$Array* $tmp4869 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4869);
        $tmp4868 = $tmp4869;
        $tmp4867 = $tmp4868;
        fields4866 = $tmp4867;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4868));
        panda$core$Int64$init$builtin_int64(&$tmp4871, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4870, $tmp4871);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4872 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4870);
        if (((panda$core$Bit) { $tmp4872.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4873 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4874, 105);
            panda$core$Bit $tmp4875 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4873.kind.$rawValue, $tmp4874);
            if ($tmp4875.value) {
            {
                int $tmp4878;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4882 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4881 = $tmp4882;
                    $tmp4880 = $tmp4881;
                    field4879 = $tmp4880;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4880));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4881));
                    if (((panda$core$Bit) { field4879 == NULL }).value) {
                    {
                        $tmp4883 = NULL;
                        $returnValue4862 = $tmp4883;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4883));
                        $tmp4878 = 0;
                        goto $l4876;
                        $l4884:;
                        $tmp4856 = 1;
                        goto $l4854;
                        $l4885:;
                        return $returnValue4862;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4866, ((panda$core$Object*) field4879));
                    $l4887:;
                    panda$core$Int64$init$builtin_int64(&$tmp4891, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4890, $tmp4891);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4892 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4890);
                    bool $tmp4889 = ((panda$core$Bit) { $tmp4892.nonnull }).value;
                    if (!$tmp4889) goto $l4888;
                    {
                        {
                            $tmp4893 = field4879;
                            org$pandalanguage$pandac$ASTNode* $tmp4896 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4895 = $tmp4896;
                            $tmp4894 = $tmp4895;
                            field4879 = $tmp4894;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4894));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4895));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4893));
                        }
                        if (((panda$core$Bit) { field4879 == NULL }).value) {
                        {
                            $tmp4897 = NULL;
                            $returnValue4862 = $tmp4897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4897));
                            $tmp4878 = 1;
                            goto $l4876;
                            $l4898:;
                            $tmp4856 = 2;
                            goto $l4854;
                            $l4899:;
                            return $returnValue4862;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4866, ((panda$core$Object*) field4879));
                    }
                    goto $l4887;
                    $l4888:;
                }
                $tmp4878 = -1;
                goto $l4876;
                $l4876:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4879));
                field4879 = NULL;
                switch ($tmp4878) {
                    case -1: goto $l4901;
                    case 1: goto $l4898;
                    case 0: goto $l4884;
                }
                $l4901:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4903, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4902, $tmp4903);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4905 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4902, &$s4904);
            if (((panda$core$Bit) { !$tmp4905.nonnull }).value) {
            {
                $tmp4906 = NULL;
                $returnValue4862 = $tmp4906;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4906));
                $tmp4856 = 3;
                goto $l4854;
                $l4907:;
                return $returnValue4862;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4911 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4912, 9);
        panda$core$String* $tmp4914 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4857.value));
        $tmp4913 = $tmp4914;
        panda$collections$ImmutableArray* $tmp4916 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4866);
        $tmp4915 = $tmp4916;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4911, $tmp4912, ((org$pandalanguage$pandac$parser$Token) name4857.value).position, p_doccomment, $tmp4913, $tmp4915);
        $tmp4910 = $tmp4911;
        $tmp4909 = $tmp4910;
        $returnValue4862 = $tmp4909;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4909));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4910));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4915));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4913));
        $tmp4856 = 4;
        goto $l4854;
        $l4917:;
        return $returnValue4862;
    }
    $l4854:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4866));
    fields4866 = NULL;
    switch ($tmp4856) {
        case 4: goto $l4917;
        case 1: goto $l4885;
        case 3: goto $l4907;
        case 2: goto $l4899;
        case 0: goto $l4864;
    }
    $l4919:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4923;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4924;
    panda$core$Int64 $tmp4925;
    org$pandalanguage$pandac$ASTNode* $returnValue4928;
    org$pandalanguage$pandac$ASTNode* $tmp4929;
    org$pandalanguage$pandac$parser$Token$nullable name4932;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4933;
    panda$core$Int64 $tmp4934;
    org$pandalanguage$pandac$ASTNode* $tmp4937;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4940;
    panda$core$Int64 $tmp4941;
    org$pandalanguage$pandac$ASTNode* $tmp4944;
    panda$collections$Array* members4947 = NULL;
    panda$collections$Array* $tmp4948;
    panda$collections$Array* $tmp4949;
    org$pandalanguage$pandac$ASTNode* dc4951 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4952;
    org$pandalanguage$pandac$parser$Token next4955;
    org$pandalanguage$pandac$parser$Token$Kind $match$2342_134957;
    panda$core$Int64 $tmp4967;
    panda$core$Int64 $tmp4970;
    panda$core$Int64 $tmp4974;
    panda$core$Int64 $tmp4978;
    panda$core$Int64 $tmp4982;
    panda$core$Int64 $tmp4986;
    panda$core$Int64 $tmp4990;
    panda$core$Int64 $tmp4994;
    panda$core$Int64 $tmp4998;
    panda$core$Int64 $tmp5002;
    panda$core$Int64 $tmp5005;
    panda$core$String* $tmp5007;
    panda$core$String* $tmp5008;
    panda$core$String* $tmp5010;
    org$pandalanguage$pandac$ASTNode* $tmp5015;
    org$pandalanguage$pandac$ASTNode* $tmp5016;
    org$pandalanguage$pandac$ASTNode* $tmp5017;
    panda$core$Int64 $tmp5019;
    org$pandalanguage$pandac$ASTNode* c5024 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5025;
    org$pandalanguage$pandac$ASTNode* $tmp5026;
    org$pandalanguage$pandac$ASTNode* $tmp5028;
    org$pandalanguage$pandac$ASTNode* $tmp5032;
    org$pandalanguage$pandac$ASTNode* $tmp5033;
    panda$collections$ImmutableArray* a5035 = NULL;
    panda$collections$ImmutableArray* $tmp5036;
    panda$collections$ImmutableArray* $tmp5037;
    org$pandalanguage$pandac$parser$Token next5041;
    org$pandalanguage$pandac$parser$Token$Kind $match$2366_135043;
    panda$core$Int64 $tmp5044;
    panda$core$Int64 $tmp5050;
    panda$core$String* $tmp5052;
    panda$core$String* $tmp5053;
    panda$core$String* $tmp5055;
    org$pandalanguage$pandac$ASTNode* $tmp5060;
    panda$collections$ImmutableArray* $tmp5063;
    panda$collections$ImmutableArray* $tmp5064;
    panda$collections$ImmutableArray* $tmp5065;
    panda$core$Int64 $tmp5067;
    panda$core$Int64 $tmp5075;
    panda$core$String* $tmp5078;
    panda$core$String* $tmp5079;
    panda$core$String* $tmp5081;
    org$pandalanguage$pandac$ASTNode* $tmp5086;
    org$pandalanguage$pandac$ASTNode* $tmp5089;
    org$pandalanguage$pandac$ASTNode* $tmp5090;
    org$pandalanguage$pandac$ASTNode* $tmp5091;
    panda$core$Int64 $tmp5093;
    org$pandalanguage$pandac$ASTNode* decl5098 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5099;
    org$pandalanguage$pandac$ASTNode* $tmp5100;
    org$pandalanguage$pandac$ASTNode* $tmp5102;
    org$pandalanguage$pandac$ASTNode* $tmp5106;
    org$pandalanguage$pandac$ASTNode* $tmp5107;
    panda$collections$ImmutableArray* $tmp5108;
    panda$collections$ImmutableArray* $tmp5109;
    panda$collections$ImmutableArray* $tmp5110;
    panda$core$Int64 $tmp5113;
    org$pandalanguage$pandac$ASTNode* decl5118 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5119;
    org$pandalanguage$pandac$ASTNode* $tmp5120;
    org$pandalanguage$pandac$ASTNode* $tmp5122;
    org$pandalanguage$pandac$ASTNode* $tmp5126;
    org$pandalanguage$pandac$ASTNode* $tmp5127;
    panda$collections$ImmutableArray* $tmp5128;
    panda$collections$ImmutableArray* $tmp5129;
    panda$collections$ImmutableArray* $tmp5130;
    panda$core$Int64 $tmp5133;
    org$pandalanguage$pandac$ASTNode* decl5138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5139;
    org$pandalanguage$pandac$ASTNode* $tmp5140;
    org$pandalanguage$pandac$ASTNode* $tmp5142;
    org$pandalanguage$pandac$ASTNode* $tmp5146;
    org$pandalanguage$pandac$ASTNode* $tmp5147;
    panda$collections$ImmutableArray* $tmp5148;
    panda$collections$ImmutableArray* $tmp5149;
    panda$collections$ImmutableArray* $tmp5150;
    panda$core$Int64 $tmp5154;
    panda$core$Int64 $tmp5157;
    org$pandalanguage$pandac$ASTNode* decl5163 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5164;
    org$pandalanguage$pandac$ASTNode* $tmp5165;
    org$pandalanguage$pandac$ASTNode* $tmp5167;
    org$pandalanguage$pandac$ASTNode* $tmp5171;
    org$pandalanguage$pandac$ASTNode* $tmp5172;
    panda$collections$ImmutableArray* $tmp5173;
    panda$collections$ImmutableArray* $tmp5174;
    panda$collections$ImmutableArray* $tmp5175;
    panda$core$Int64 $tmp5181;
    panda$core$Int64 $tmp5184;
    panda$core$Int64 $tmp5188;
    panda$core$Int64 $tmp5192;
    org$pandalanguage$pandac$ASTNode* decl5198 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5199;
    org$pandalanguage$pandac$ASTNode* $tmp5200;
    org$pandalanguage$pandac$ASTNode* $tmp5202;
    org$pandalanguage$pandac$ASTNode* $tmp5206;
    org$pandalanguage$pandac$ASTNode* $tmp5207;
    panda$collections$ImmutableArray* $tmp5208;
    panda$collections$ImmutableArray* $tmp5209;
    panda$collections$ImmutableArray* $tmp5210;
    panda$core$Int64 $tmp5213;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5215;
    panda$core$Int64 $tmp5216;
    panda$core$String* $tmp5218;
    panda$core$String* $tmp5219;
    panda$core$String* $tmp5221;
    org$pandalanguage$pandac$ASTNode* $tmp5226;
    org$pandalanguage$pandac$ASTNode* $tmp5229;
    org$pandalanguage$pandac$ASTNode* $tmp5230;
    panda$core$Int64 $tmp5232;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5233;
    panda$core$Int64 $tmp5234;
    panda$core$String* $tmp5235;
    panda$collections$ImmutableArray* $tmp5237;
    int $tmp4922;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4925, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4924, $tmp4925);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4927 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4924, &$s4926);
        start4923 = $tmp4927;
        if (((panda$core$Bit) { !start4923.nonnull }).value) {
        {
            $tmp4929 = NULL;
            $returnValue4928 = $tmp4929;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4929));
            $tmp4922 = 0;
            goto $l4920;
            $l4930:;
            return $returnValue4928;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4934, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4933, $tmp4934);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4936 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4933, &$s4935);
        name4932 = $tmp4936;
        if (((panda$core$Bit) { !name4932.nonnull }).value) {
        {
            $tmp4937 = NULL;
            $returnValue4928 = $tmp4937;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4937));
            $tmp4922 = 1;
            goto $l4920;
            $l4938:;
            return $returnValue4928;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4941, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4940, $tmp4941);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4943 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4940, &$s4942);
        if (((panda$core$Bit) { !$tmp4943.nonnull }).value) {
        {
            $tmp4944 = NULL;
            $returnValue4928 = $tmp4944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4944));
            $tmp4922 = 2;
            goto $l4920;
            $l4945:;
            return $returnValue4928;
        }
        }
        panda$collections$Array* $tmp4950 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4950);
        $tmp4949 = $tmp4950;
        $tmp4948 = $tmp4949;
        members4947 = $tmp4948;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4949));
        $tmp4952 = NULL;
        dc4951 = $tmp4952;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4952));
        $l4953:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4956 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4955 = $tmp4956;
            {
                $match$2342_134957 = next4955.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4967, 18);
                panda$core$Bit $tmp4968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4967);
                bool $tmp4966 = $tmp4968.value;
                if ($tmp4966) goto $l4969;
                panda$core$Int64$init$builtin_int64(&$tmp4970, 19);
                panda$core$Bit $tmp4971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4970);
                $tmp4966 = $tmp4971.value;
                $l4969:;
                panda$core$Bit $tmp4972 = { $tmp4966 };
                bool $tmp4965 = $tmp4972.value;
                if ($tmp4965) goto $l4973;
                panda$core$Int64$init$builtin_int64(&$tmp4974, 20);
                panda$core$Bit $tmp4975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4974);
                $tmp4965 = $tmp4975.value;
                $l4973:;
                panda$core$Bit $tmp4976 = { $tmp4965 };
                bool $tmp4964 = $tmp4976.value;
                if ($tmp4964) goto $l4977;
                panda$core$Int64$init$builtin_int64(&$tmp4978, 22);
                panda$core$Bit $tmp4979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4978);
                $tmp4964 = $tmp4979.value;
                $l4977:;
                panda$core$Bit $tmp4980 = { $tmp4964 };
                bool $tmp4963 = $tmp4980.value;
                if ($tmp4963) goto $l4981;
                panda$core$Int64$init$builtin_int64(&$tmp4982, 21);
                panda$core$Bit $tmp4983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4982);
                $tmp4963 = $tmp4983.value;
                $l4981:;
                panda$core$Bit $tmp4984 = { $tmp4963 };
                bool $tmp4962 = $tmp4984.value;
                if ($tmp4962) goto $l4985;
                panda$core$Int64$init$builtin_int64(&$tmp4986, 14);
                panda$core$Bit $tmp4987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4986);
                $tmp4962 = $tmp4987.value;
                $l4985:;
                panda$core$Bit $tmp4988 = { $tmp4962 };
                bool $tmp4961 = $tmp4988.value;
                if ($tmp4961) goto $l4989;
                panda$core$Int64$init$builtin_int64(&$tmp4990, 24);
                panda$core$Bit $tmp4991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4990);
                $tmp4961 = $tmp4991.value;
                $l4989:;
                panda$core$Bit $tmp4992 = { $tmp4961 };
                bool $tmp4960 = $tmp4992.value;
                if ($tmp4960) goto $l4993;
                panda$core$Int64$init$builtin_int64(&$tmp4994, 25);
                panda$core$Bit $tmp4995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4994);
                $tmp4960 = $tmp4995.value;
                $l4993:;
                panda$core$Bit $tmp4996 = { $tmp4960 };
                bool $tmp4959 = $tmp4996.value;
                if ($tmp4959) goto $l4997;
                panda$core$Int64$init$builtin_int64(&$tmp4998, 26);
                panda$core$Bit $tmp4999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp4998);
                $tmp4959 = $tmp4999.value;
                $l4997:;
                panda$core$Bit $tmp5000 = { $tmp4959 };
                bool $tmp4958 = $tmp5000.value;
                if ($tmp4958) goto $l5001;
                panda$core$Int64$init$builtin_int64(&$tmp5002, 27);
                panda$core$Bit $tmp5003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp5002);
                $tmp4958 = $tmp5003.value;
                $l5001:;
                panda$core$Bit $tmp5004 = { $tmp4958 };
                if ($tmp5004.value) {
                {
                    goto $l4954;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5005, 12);
                panda$core$Bit $tmp5006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp5005);
                if ($tmp5006.value) {
                {
                    if (((panda$core$Bit) { dc4951 != NULL }).value) {
                    {
                        panda$core$String* $tmp5011 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4955);
                        $tmp5010 = $tmp5011;
                        panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5009, $tmp5010);
                        $tmp5008 = $tmp5012;
                        panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, &$s5013);
                        $tmp5007 = $tmp5014;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4955, $tmp5007);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5007));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5008));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5010));
                    }
                    }
                    {
                        $tmp5015 = dc4951;
                        org$pandalanguage$pandac$ASTNode* $tmp5018 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5017 = $tmp5018;
                        $tmp5016 = $tmp5017;
                        dc4951 = $tmp5016;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5016));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5017));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5015));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5019, 49);
                panda$core$Bit $tmp5020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2342_134957.$rawValue, $tmp5019);
                if ($tmp5020.value) {
                {
                    int $tmp5023;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5027 = org$pandalanguage$pandac$parser$Parser$choiceCase$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4951);
                        $tmp5026 = $tmp5027;
                        $tmp5025 = $tmp5026;
                        c5024 = $tmp5025;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5025));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5026));
                        if (((panda$core$Bit) { c5024 == NULL }).value) {
                        {
                            $tmp5028 = NULL;
                            $returnValue4928 = $tmp5028;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5028));
                            $tmp5023 = 0;
                            goto $l5021;
                            $l5029:;
                            $tmp4922 = 3;
                            goto $l4920;
                            $l5030:;
                            return $returnValue4928;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4947, ((panda$core$Object*) c5024));
                        {
                            $tmp5032 = dc4951;
                            $tmp5033 = NULL;
                            dc4951 = $tmp5033;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5033));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5032));
                        }
                    }
                    $tmp5023 = -1;
                    goto $l5021;
                    $l5021:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c5024));
                    c5024 = NULL;
                    switch ($tmp5023) {
                        case -1: goto $l5034;
                        case 0: goto $l5029;
                    }
                    $l5034:;
                }
                }
                else {
                {
                    goto $l4954;
                }
                }
                }
                }
            }
        }
        }
        $l4954:;
        panda$collections$ImmutableArray* $tmp5038 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp5038);
        $tmp5037 = $tmp5038;
        $tmp5036 = $tmp5037;
        a5035 = $tmp5036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5037));
        $l5039:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp5042 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next5041 = $tmp5042;
            {
                $match$2366_135043 = next5041.kind;
                panda$core$Int64$init$builtin_int64(&$tmp5044, 14);
                panda$core$Bit $tmp5045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5044);
                if ($tmp5045.value) {
                {
                    ITable* $tmp5046 = ((panda$collections$CollectionView*) a5035)->$class->itable;
                    while ($tmp5046->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp5046 = $tmp5046->next;
                    }
                    $fn5048 $tmp5047 = $tmp5046->methods[0];
                    panda$core$Int64 $tmp5049 = $tmp5047(((panda$collections$CollectionView*) a5035));
                    panda$core$Int64$init$builtin_int64(&$tmp5050, 0);
                    panda$core$Bit $tmp5051 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5049, $tmp5050);
                    if ($tmp5051.value) {
                    {
                        panda$core$String* $tmp5056 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5041);
                        $tmp5055 = $tmp5056;
                        panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5054, $tmp5055);
                        $tmp5053 = $tmp5057;
                        panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5053, &$s5058);
                        $tmp5052 = $tmp5059;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5041, $tmp5052);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5052));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5053));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5055));
                        $tmp5060 = NULL;
                        $returnValue4928 = $tmp5060;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5060));
                        $tmp4922 = 4;
                        goto $l4920;
                        $l5061:;
                        return $returnValue4928;
                    }
                    }
                    {
                        $tmp5063 = a5035;
                        panda$collections$ImmutableArray* $tmp5066 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp5065 = $tmp5066;
                        $tmp5064 = $tmp5065;
                        a5035 = $tmp5064;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5064));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5065));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5063));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5067, 12);
                panda$core$Bit $tmp5068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5067);
                if ($tmp5068.value) {
                {
                    bool $tmp5069 = ((panda$core$Bit) { dc4951 != NULL }).value;
                    if ($tmp5069) goto $l5070;
                    ITable* $tmp5071 = ((panda$collections$CollectionView*) a5035)->$class->itable;
                    while ($tmp5071->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp5071 = $tmp5071->next;
                    }
                    $fn5073 $tmp5072 = $tmp5071->methods[0];
                    panda$core$Int64 $tmp5074 = $tmp5072(((panda$collections$CollectionView*) a5035));
                    panda$core$Int64$init$builtin_int64(&$tmp5075, 0);
                    panda$core$Bit $tmp5076 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5074, $tmp5075);
                    $tmp5069 = $tmp5076.value;
                    $l5070:;
                    panda$core$Bit $tmp5077 = { $tmp5069 };
                    if ($tmp5077.value) {
                    {
                        panda$core$String* $tmp5082 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5041);
                        $tmp5081 = $tmp5082;
                        panda$core$String* $tmp5083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5080, $tmp5081);
                        $tmp5079 = $tmp5083;
                        panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, &$s5084);
                        $tmp5078 = $tmp5085;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5041, $tmp5078);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5078));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5079));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5081));
                        $tmp5086 = NULL;
                        $returnValue4928 = $tmp5086;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5086));
                        $tmp4922 = 5;
                        goto $l4920;
                        $l5087:;
                        return $returnValue4928;
                    }
                    }
                    {
                        $tmp5089 = dc4951;
                        org$pandalanguage$pandac$ASTNode* $tmp5092 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5091 = $tmp5092;
                        $tmp5090 = $tmp5091;
                        dc4951 = $tmp5090;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5090));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5091));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5089));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5093, 18);
                panda$core$Bit $tmp5094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5093);
                if ($tmp5094.value) {
                {
                    int $tmp5097;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5101 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4951, a5035);
                        $tmp5100 = $tmp5101;
                        $tmp5099 = $tmp5100;
                        decl5098 = $tmp5099;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5099));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5100));
                        if (((panda$core$Bit) { decl5098 == NULL }).value) {
                        {
                            $tmp5102 = NULL;
                            $returnValue4928 = $tmp5102;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5102));
                            $tmp5097 = 0;
                            goto $l5095;
                            $l5103:;
                            $tmp4922 = 6;
                            goto $l4920;
                            $l5104:;
                            return $returnValue4928;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4947, ((panda$core$Object*) decl5098));
                        {
                            $tmp5106 = dc4951;
                            $tmp5107 = NULL;
                            dc4951 = $tmp5107;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5107));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5106));
                        }
                        {
                            $tmp5108 = a5035;
                            panda$collections$ImmutableArray* $tmp5111 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5111);
                            $tmp5110 = $tmp5111;
                            $tmp5109 = $tmp5110;
                            a5035 = $tmp5109;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5109));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5110));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5108));
                        }
                    }
                    $tmp5097 = -1;
                    goto $l5095;
                    $l5095:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5098));
                    decl5098 = NULL;
                    switch ($tmp5097) {
                        case 0: goto $l5103;
                        case -1: goto $l5112;
                    }
                    $l5112:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5113, 19);
                panda$core$Bit $tmp5114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5113);
                if ($tmp5114.value) {
                {
                    int $tmp5117;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5121 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4951, a5035);
                        $tmp5120 = $tmp5121;
                        $tmp5119 = $tmp5120;
                        decl5118 = $tmp5119;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5119));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5120));
                        if (((panda$core$Bit) { decl5118 == NULL }).value) {
                        {
                            $tmp5122 = NULL;
                            $returnValue4928 = $tmp5122;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5122));
                            $tmp5117 = 0;
                            goto $l5115;
                            $l5123:;
                            $tmp4922 = 7;
                            goto $l4920;
                            $l5124:;
                            return $returnValue4928;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4947, ((panda$core$Object*) decl5118));
                        {
                            $tmp5126 = dc4951;
                            $tmp5127 = NULL;
                            dc4951 = $tmp5127;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5127));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5126));
                        }
                        {
                            $tmp5128 = a5035;
                            panda$collections$ImmutableArray* $tmp5131 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5131);
                            $tmp5130 = $tmp5131;
                            $tmp5129 = $tmp5130;
                            a5035 = $tmp5129;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5129));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5130));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5128));
                        }
                    }
                    $tmp5117 = -1;
                    goto $l5115;
                    $l5115:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5118));
                    decl5118 = NULL;
                    switch ($tmp5117) {
                        case -1: goto $l5132;
                        case 0: goto $l5123;
                    }
                    $l5132:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5133, 20);
                panda$core$Bit $tmp5134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5133);
                if ($tmp5134.value) {
                {
                    int $tmp5137;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5141 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4951, a5035);
                        $tmp5140 = $tmp5141;
                        $tmp5139 = $tmp5140;
                        decl5138 = $tmp5139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5139));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5140));
                        if (((panda$core$Bit) { decl5138 == NULL }).value) {
                        {
                            $tmp5142 = NULL;
                            $returnValue4928 = $tmp5142;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5142));
                            $tmp5137 = 0;
                            goto $l5135;
                            $l5143:;
                            $tmp4922 = 8;
                            goto $l4920;
                            $l5144:;
                            return $returnValue4928;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4947, ((panda$core$Object*) decl5138));
                        {
                            $tmp5146 = dc4951;
                            $tmp5147 = NULL;
                            dc4951 = $tmp5147;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5147));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5146));
                        }
                        {
                            $tmp5148 = a5035;
                            panda$collections$ImmutableArray* $tmp5151 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5151);
                            $tmp5150 = $tmp5151;
                            $tmp5149 = $tmp5150;
                            a5035 = $tmp5149;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5149));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5150));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5148));
                        }
                    }
                    $tmp5137 = -1;
                    goto $l5135;
                    $l5135:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5138));
                    decl5138 = NULL;
                    switch ($tmp5137) {
                        case -1: goto $l5152;
                        case 0: goto $l5143;
                    }
                    $l5152:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5154, 22);
                panda$core$Bit $tmp5155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5154);
                bool $tmp5153 = $tmp5155.value;
                if ($tmp5153) goto $l5156;
                panda$core$Int64$init$builtin_int64(&$tmp5157, 21);
                panda$core$Bit $tmp5158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5157);
                $tmp5153 = $tmp5158.value;
                $l5156:;
                panda$core$Bit $tmp5159 = { $tmp5153 };
                if ($tmp5159.value) {
                {
                    int $tmp5162;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5166 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4951, a5035);
                        $tmp5165 = $tmp5166;
                        $tmp5164 = $tmp5165;
                        decl5163 = $tmp5164;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5164));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5165));
                        if (((panda$core$Bit) { decl5163 == NULL }).value) {
                        {
                            $tmp5167 = NULL;
                            $returnValue4928 = $tmp5167;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5167));
                            $tmp5162 = 0;
                            goto $l5160;
                            $l5168:;
                            $tmp4922 = 9;
                            goto $l4920;
                            $l5169:;
                            return $returnValue4928;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4947, ((panda$core$Object*) decl5163));
                        {
                            $tmp5171 = dc4951;
                            $tmp5172 = NULL;
                            dc4951 = $tmp5172;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5172));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5171));
                        }
                        {
                            $tmp5173 = a5035;
                            panda$collections$ImmutableArray* $tmp5176 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5176);
                            $tmp5175 = $tmp5176;
                            $tmp5174 = $tmp5175;
                            a5035 = $tmp5174;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5174));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5175));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5173));
                        }
                    }
                    $tmp5162 = -1;
                    goto $l5160;
                    $l5160:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5163));
                    decl5163 = NULL;
                    switch ($tmp5162) {
                        case 0: goto $l5168;
                        case -1: goto $l5177;
                    }
                    $l5177:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5181, 24);
                panda$core$Bit $tmp5182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5181);
                bool $tmp5180 = $tmp5182.value;
                if ($tmp5180) goto $l5183;
                panda$core$Int64$init$builtin_int64(&$tmp5184, 25);
                panda$core$Bit $tmp5185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5184);
                $tmp5180 = $tmp5185.value;
                $l5183:;
                panda$core$Bit $tmp5186 = { $tmp5180 };
                bool $tmp5179 = $tmp5186.value;
                if ($tmp5179) goto $l5187;
                panda$core$Int64$init$builtin_int64(&$tmp5188, 26);
                panda$core$Bit $tmp5189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5188);
                $tmp5179 = $tmp5189.value;
                $l5187:;
                panda$core$Bit $tmp5190 = { $tmp5179 };
                bool $tmp5178 = $tmp5190.value;
                if ($tmp5178) goto $l5191;
                panda$core$Int64$init$builtin_int64(&$tmp5192, 27);
                panda$core$Bit $tmp5193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5192);
                $tmp5178 = $tmp5193.value;
                $l5191:;
                panda$core$Bit $tmp5194 = { $tmp5178 };
                if ($tmp5194.value) {
                {
                    int $tmp5197;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5201 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4951, a5035);
                        $tmp5200 = $tmp5201;
                        $tmp5199 = $tmp5200;
                        decl5198 = $tmp5199;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5199));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5200));
                        if (((panda$core$Bit) { decl5198 == NULL }).value) {
                        {
                            $tmp5202 = NULL;
                            $returnValue4928 = $tmp5202;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5202));
                            $tmp5197 = 0;
                            goto $l5195;
                            $l5203:;
                            $tmp4922 = 10;
                            goto $l4920;
                            $l5204:;
                            return $returnValue4928;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4947, ((panda$core$Object*) decl5198));
                        {
                            $tmp5206 = dc4951;
                            $tmp5207 = NULL;
                            dc4951 = $tmp5207;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5206));
                        }
                        {
                            $tmp5208 = a5035;
                            panda$collections$ImmutableArray* $tmp5211 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5211);
                            $tmp5210 = $tmp5211;
                            $tmp5209 = $tmp5210;
                            a5035 = $tmp5209;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5209));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5210));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5208));
                        }
                    }
                    $tmp5197 = -1;
                    goto $l5195;
                    $l5195:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5198));
                    decl5198 = NULL;
                    switch ($tmp5197) {
                        case -1: goto $l5212;
                        case 0: goto $l5203;
                    }
                    $l5212:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5213, 101);
                panda$core$Bit $tmp5214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2366_135043.$rawValue, $tmp5213);
                if ($tmp5214.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5216, 101);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5215, $tmp5216);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5215, &$s5217);
                    goto $l5040;
                }
                }
                else {
                {
                    panda$core$String* $tmp5222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next5041);
                    $tmp5221 = $tmp5222;
                    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5220, $tmp5221);
                    $tmp5219 = $tmp5223;
                    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5224);
                    $tmp5218 = $tmp5225;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next5041, $tmp5218);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5218));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5219));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5221));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5226 = NULL;
                    $returnValue4928 = $tmp5226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5226));
                    $tmp4922 = 11;
                    goto $l4920;
                    $l5227:;
                    return $returnValue4928;
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
        $l5040:;
        org$pandalanguage$pandac$ASTNode* $tmp5231 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5232, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5234, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5233, $tmp5234);
        panda$core$String* $tmp5236 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4932.value));
        $tmp5235 = $tmp5236;
        panda$collections$ImmutableArray* $tmp5238 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4947);
        $tmp5237 = $tmp5238;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5231, $tmp5232, ((org$pandalanguage$pandac$parser$Token) start4923.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5233, $tmp5235, NULL, NULL, $tmp5237);
        $tmp5230 = $tmp5231;
        $tmp5229 = $tmp5230;
        $returnValue4928 = $tmp5229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5235));
        $tmp4922 = 12;
        goto $l4920;
        $l5239:;
        return $returnValue4928;
    }
    $l4920:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5035));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4951));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4947));
    members4947 = NULL;
    a5035 = NULL;
    switch ($tmp4922) {
        case 1: goto $l4938;
        case 5: goto $l5087;
        case 12: goto $l5239;
        case 3: goto $l5030;
        case 7: goto $l5124;
        case 4: goto $l5061;
        case 6: goto $l5104;
        case 8: goto $l5144;
        case 9: goto $l5169;
        case 2: goto $l4945;
        case 11: goto $l5227;
        case 0: goto $l4930;
        case 10: goto $l5204;
    }
    $l5241:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5245;
    org$pandalanguage$pandac$ASTNode* dc5247 = NULL;
    panda$core$Int64 $tmp5248;
    org$pandalanguage$pandac$ASTNode* $tmp5250;
    org$pandalanguage$pandac$ASTNode* $tmp5251;
    org$pandalanguage$pandac$ASTNode* $tmp5252;
    org$pandalanguage$pandac$ASTNode* $returnValue5254;
    org$pandalanguage$pandac$ASTNode* $tmp5255;
    org$pandalanguage$pandac$ASTNode* $tmp5258;
    org$pandalanguage$pandac$ASTNode* $tmp5259;
    panda$collections$ImmutableArray* a5260 = NULL;
    panda$collections$ImmutableArray* $tmp5261;
    panda$collections$ImmutableArray* $tmp5262;
    org$pandalanguage$pandac$ASTNode* $tmp5264;
    org$pandalanguage$pandac$parser$Token$Kind $match$2452_95267;
    panda$core$Int64 $tmp5269;
    org$pandalanguage$pandac$ASTNode* $tmp5271;
    org$pandalanguage$pandac$ASTNode* $tmp5272;
    panda$core$Int64 $tmp5276;
    org$pandalanguage$pandac$ASTNode* $tmp5278;
    org$pandalanguage$pandac$ASTNode* $tmp5279;
    panda$core$Int64 $tmp5283;
    org$pandalanguage$pandac$ASTNode* $tmp5285;
    org$pandalanguage$pandac$ASTNode* $tmp5286;
    panda$core$Int64 $tmp5291;
    panda$core$Int64 $tmp5294;
    org$pandalanguage$pandac$ASTNode* $tmp5297;
    org$pandalanguage$pandac$ASTNode* $tmp5298;
    panda$core$Int64 $tmp5302;
    org$pandalanguage$pandac$ASTNode* $tmp5304;
    org$pandalanguage$pandac$ASTNode* $tmp5305;
    panda$core$Int64 $tmp5312;
    panda$core$Int64 $tmp5315;
    panda$core$Int64 $tmp5319;
    panda$core$Int64 $tmp5323;
    org$pandalanguage$pandac$ASTNode* $tmp5326;
    org$pandalanguage$pandac$ASTNode* $tmp5327;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5331;
    panda$core$Int64 $tmp5332;
    org$pandalanguage$pandac$ASTNode* $tmp5334;
    int $tmp5244;
    {
        org$pandalanguage$pandac$parser$Token $tmp5246 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5245 = $tmp5246;
        memset(&dc5247, 0, sizeof(dc5247));
        panda$core$Int64$init$builtin_int64(&$tmp5248, 12);
        panda$core$Bit $tmp5249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5245.kind.$rawValue, $tmp5248);
        if ($tmp5249.value) {
        {
            {
                $tmp5250 = dc5247;
                org$pandalanguage$pandac$ASTNode* $tmp5253 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5252 = $tmp5253;
                $tmp5251 = $tmp5252;
                dc5247 = $tmp5251;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5251));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5252));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5250));
            }
            if (((panda$core$Bit) { dc5247 == NULL }).value) {
            {
                $tmp5255 = NULL;
                $returnValue5254 = $tmp5255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5255));
                $tmp5244 = 0;
                goto $l5242;
                $l5256:;
                return $returnValue5254;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5258 = dc5247;
                $tmp5259 = NULL;
                dc5247 = $tmp5259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5258));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5263 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5262 = $tmp5263;
        $tmp5261 = $tmp5262;
        a5260 = $tmp5261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5262));
        if (((panda$core$Bit) { a5260 == NULL }).value) {
        {
            $tmp5264 = NULL;
            $returnValue5254 = $tmp5264;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5264));
            $tmp5244 = 1;
            goto $l5242;
            $l5265:;
            return $returnValue5254;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5268 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2452_95267 = $tmp5268.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5269, 18);
            panda$core$Bit $tmp5270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5269);
            if ($tmp5270.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5273 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5247, a5260);
                $tmp5272 = $tmp5273;
                $tmp5271 = $tmp5272;
                $returnValue5254 = $tmp5271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5271));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5272));
                $tmp5244 = 2;
                goto $l5242;
                $l5274:;
                return $returnValue5254;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5276, 19);
            panda$core$Bit $tmp5277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5276);
            if ($tmp5277.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5280 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5247, a5260);
                $tmp5279 = $tmp5280;
                $tmp5278 = $tmp5279;
                $returnValue5254 = $tmp5278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5279));
                $tmp5244 = 3;
                goto $l5242;
                $l5281:;
                return $returnValue5254;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5283, 20);
            panda$core$Bit $tmp5284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5283);
            if ($tmp5284.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5287 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5247, a5260);
                $tmp5286 = $tmp5287;
                $tmp5285 = $tmp5286;
                $returnValue5254 = $tmp5285;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5286));
                $tmp5244 = 4;
                goto $l5242;
                $l5288:;
                return $returnValue5254;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5291, 22);
            panda$core$Bit $tmp5292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5291);
            bool $tmp5290 = $tmp5292.value;
            if ($tmp5290) goto $l5293;
            panda$core$Int64$init$builtin_int64(&$tmp5294, 21);
            panda$core$Bit $tmp5295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5294);
            $tmp5290 = $tmp5295.value;
            $l5293:;
            panda$core$Bit $tmp5296 = { $tmp5290 };
            if ($tmp5296.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5299 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5247, a5260);
                $tmp5298 = $tmp5299;
                $tmp5297 = $tmp5298;
                $returnValue5254 = $tmp5297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5298));
                $tmp5244 = 5;
                goto $l5242;
                $l5300:;
                return $returnValue5254;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5302, 23);
            panda$core$Bit $tmp5303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5302);
            if ($tmp5303.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5306 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5247, a5260);
                $tmp5305 = $tmp5306;
                $tmp5304 = $tmp5305;
                $returnValue5254 = $tmp5304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5305));
                $tmp5244 = 6;
                goto $l5242;
                $l5307:;
                return $returnValue5254;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5312, 24);
            panda$core$Bit $tmp5313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5312);
            bool $tmp5311 = $tmp5313.value;
            if ($tmp5311) goto $l5314;
            panda$core$Int64$init$builtin_int64(&$tmp5315, 25);
            panda$core$Bit $tmp5316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5315);
            $tmp5311 = $tmp5316.value;
            $l5314:;
            panda$core$Bit $tmp5317 = { $tmp5311 };
            bool $tmp5310 = $tmp5317.value;
            if ($tmp5310) goto $l5318;
            panda$core$Int64$init$builtin_int64(&$tmp5319, 26);
            panda$core$Bit $tmp5320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5319);
            $tmp5310 = $tmp5320.value;
            $l5318:;
            panda$core$Bit $tmp5321 = { $tmp5310 };
            bool $tmp5309 = $tmp5321.value;
            if ($tmp5309) goto $l5322;
            panda$core$Int64$init$builtin_int64(&$tmp5323, 27);
            panda$core$Bit $tmp5324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2452_95267.$rawValue, $tmp5323);
            $tmp5309 = $tmp5324.value;
            $l5322:;
            panda$core$Bit $tmp5325 = { $tmp5309 };
            if ($tmp5325.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5328 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5247, a5260);
                $tmp5327 = $tmp5328;
                $tmp5326 = $tmp5327;
                $returnValue5254 = $tmp5326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5327));
                $tmp5244 = 7;
                goto $l5242;
                $l5329:;
                return $returnValue5254;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5332, 18);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5331, $tmp5332);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5331, &$s5333);
                $tmp5334 = NULL;
                $returnValue5254 = $tmp5334;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5334));
                $tmp5244 = 8;
                goto $l5242;
                $l5335:;
                return $returnValue5254;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5244 = -1;
    goto $l5242;
    $l5242:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5247));
    a5260 = NULL;
    switch ($tmp5244) {
        case 3: goto $l5281;
        case 4: goto $l5288;
        case 2: goto $l5274;
        case 6: goto $l5307;
        case 7: goto $l5329;
        case -1: goto $l5337;
        case 5: goto $l5300;
        case 0: goto $l5256;
        case 1: goto $l5265;
        case 8: goto $l5335;
    }
    $l5337:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5341;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5342;
    panda$core$Int64 $tmp5343;
    org$pandalanguage$pandac$ASTNode* $returnValue5346;
    org$pandalanguage$pandac$ASTNode* $tmp5347;
    org$pandalanguage$pandac$parser$Token$nullable name5350;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5351;
    panda$core$Int64 $tmp5352;
    org$pandalanguage$pandac$ASTNode* $tmp5355;
    panda$collections$ImmutableArray* generics5358 = NULL;
    panda$core$Int64 $tmp5360;
    panda$collections$ImmutableArray* $tmp5362;
    panda$collections$ImmutableArray* $tmp5363;
    panda$collections$ImmutableArray* $tmp5364;
    org$pandalanguage$pandac$ASTNode* $tmp5366;
    panda$collections$ImmutableArray* $tmp5369;
    panda$collections$ImmutableArray* $tmp5370;
    panda$collections$ImmutableArray* stypes5371 = NULL;
    panda$core$Int64 $tmp5373;
    panda$collections$ImmutableArray* $tmp5375;
    panda$collections$ImmutableArray* $tmp5376;
    panda$collections$ImmutableArray* $tmp5377;
    org$pandalanguage$pandac$ASTNode* $tmp5379;
    panda$collections$ImmutableArray* $tmp5382;
    panda$collections$ImmutableArray* $tmp5383;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5384;
    panda$core$Int64 $tmp5385;
    org$pandalanguage$pandac$ASTNode* $tmp5388;
    panda$collections$Array* members5391 = NULL;
    panda$collections$Array* $tmp5392;
    panda$collections$Array* $tmp5393;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5398;
    panda$core$Int64 $tmp5399;
    org$pandalanguage$pandac$ASTNode* member5404 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5405;
    org$pandalanguage$pandac$ASTNode* $tmp5406;
    org$pandalanguage$pandac$ASTNode* $tmp5408;
    org$pandalanguage$pandac$ASTNode* $tmp5413;
    org$pandalanguage$pandac$ASTNode* $tmp5414;
    panda$core$Int64 $tmp5416;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5417;
    panda$core$Int64 $tmp5418;
    panda$core$String* $tmp5419;
    panda$collections$ImmutableArray* $tmp5421;
    int $tmp5340;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5343, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5342, $tmp5343);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5345 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5342, &$s5344);
        start5341 = $tmp5345;
        if (((panda$core$Bit) { !start5341.nonnull }).value) {
        {
            $tmp5347 = NULL;
            $returnValue5346 = $tmp5347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5347));
            $tmp5340 = 0;
            goto $l5338;
            $l5348:;
            return $returnValue5346;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5352, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5351, $tmp5352);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5354 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5351, &$s5353);
        name5350 = $tmp5354;
        if (((panda$core$Bit) { !name5350.nonnull }).value) {
        {
            $tmp5355 = NULL;
            $returnValue5346 = $tmp5355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5355));
            $tmp5340 = 1;
            goto $l5338;
            $l5356:;
            return $returnValue5346;
        }
        }
        memset(&generics5358, 0, sizeof(generics5358));
        org$pandalanguage$pandac$parser$Token $tmp5359 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5360, 63);
        panda$core$Bit $tmp5361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5359.kind.$rawValue, $tmp5360);
        if ($tmp5361.value) {
        {
            {
                $tmp5362 = generics5358;
                panda$collections$ImmutableArray* $tmp5365 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5364 = $tmp5365;
                $tmp5363 = $tmp5364;
                generics5358 = $tmp5363;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5362));
            }
            if (((panda$core$Bit) { generics5358 == NULL }).value) {
            {
                $tmp5366 = NULL;
                $returnValue5346 = $tmp5366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5366));
                $tmp5340 = 2;
                goto $l5338;
                $l5367:;
                return $returnValue5346;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5369 = generics5358;
                $tmp5370 = NULL;
                generics5358 = $tmp5370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5369));
            }
        }
        }
        memset(&stypes5371, 0, sizeof(stypes5371));
        org$pandalanguage$pandac$parser$Token $tmp5372 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5373, 96);
        panda$core$Bit $tmp5374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5372.kind.$rawValue, $tmp5373);
        if ($tmp5374.value) {
        {
            {
                $tmp5375 = stypes5371;
                panda$collections$ImmutableArray* $tmp5378 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5377 = $tmp5378;
                $tmp5376 = $tmp5377;
                stypes5371 = $tmp5376;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5376));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5375));
            }
            if (((panda$core$Bit) { stypes5371 == NULL }).value) {
            {
                $tmp5379 = NULL;
                $returnValue5346 = $tmp5379;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5379));
                $tmp5340 = 3;
                goto $l5338;
                $l5380:;
                return $returnValue5346;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5382 = stypes5371;
                $tmp5383 = NULL;
                stypes5371 = $tmp5383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5382));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5385, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5384, $tmp5385);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5387 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5384, &$s5386);
        if (((panda$core$Bit) { !$tmp5387.nonnull }).value) {
        {
            $tmp5388 = NULL;
            $returnValue5346 = $tmp5388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5388));
            $tmp5340 = 4;
            goto $l5338;
            $l5389:;
            return $returnValue5346;
        }
        }
        panda$collections$Array* $tmp5394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5394);
        $tmp5393 = $tmp5394;
        $tmp5392 = $tmp5393;
        members5391 = $tmp5392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5393));
        $l5395:;
        panda$core$Int64$init$builtin_int64(&$tmp5399, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5398, $tmp5399);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5400 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5398);
        bool $tmp5397 = ((panda$core$Bit) { !$tmp5400.nonnull }).value;
        if (!$tmp5397) goto $l5396;
        {
            int $tmp5403;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5407 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5406 = $tmp5407;
                $tmp5405 = $tmp5406;
                member5404 = $tmp5405;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5405));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5406));
                if (((panda$core$Bit) { member5404 == NULL }).value) {
                {
                    $tmp5408 = NULL;
                    $returnValue5346 = $tmp5408;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5408));
                    $tmp5403 = 0;
                    goto $l5401;
                    $l5409:;
                    $tmp5340 = 5;
                    goto $l5338;
                    $l5410:;
                    return $returnValue5346;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5391, ((panda$core$Object*) member5404));
            }
            $tmp5403 = -1;
            goto $l5401;
            $l5401:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5404));
            member5404 = NULL;
            switch ($tmp5403) {
                case 0: goto $l5409;
                case -1: goto $l5412;
            }
            $l5412:;
        }
        goto $l5395;
        $l5396:;
        org$pandalanguage$pandac$ASTNode* $tmp5415 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5416, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5418, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5417, $tmp5418);
        panda$core$String* $tmp5420 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5350.value));
        $tmp5419 = $tmp5420;
        panda$collections$ImmutableArray* $tmp5422 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5391);
        $tmp5421 = $tmp5422;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5415, $tmp5416, ((org$pandalanguage$pandac$parser$Token) start5341.value).position, p_doccomment, p_annotations, $tmp5417, $tmp5419, generics5358, stypes5371, $tmp5421);
        $tmp5414 = $tmp5415;
        $tmp5413 = $tmp5414;
        $returnValue5346 = $tmp5413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5419));
        $tmp5340 = 6;
        goto $l5338;
        $l5423:;
        return $returnValue5346;
    }
    $l5338:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5391));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5358));
    members5391 = NULL;
    switch ($tmp5340) {
        case 2: goto $l5367;
        case 3: goto $l5380;
        case 5: goto $l5410;
        case 6: goto $l5423;
        case 4: goto $l5389;
        case 0: goto $l5348;
        case 1: goto $l5356;
    }
    $l5425:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5429;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5430;
    panda$core$Int64 $tmp5431;
    org$pandalanguage$pandac$ASTNode* $returnValue5434;
    org$pandalanguage$pandac$ASTNode* $tmp5435;
    org$pandalanguage$pandac$parser$Token$nullable name5438;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5439;
    panda$core$Int64 $tmp5440;
    org$pandalanguage$pandac$ASTNode* $tmp5443;
    panda$collections$ImmutableArray* generics5446 = NULL;
    panda$core$Int64 $tmp5448;
    panda$collections$ImmutableArray* $tmp5450;
    panda$collections$ImmutableArray* $tmp5451;
    panda$collections$ImmutableArray* $tmp5452;
    org$pandalanguage$pandac$ASTNode* $tmp5454;
    panda$collections$ImmutableArray* $tmp5457;
    panda$collections$ImmutableArray* $tmp5458;
    panda$collections$ImmutableArray* $tmp5459;
    panda$collections$Array* intfs5461 = NULL;
    panda$collections$Array* $tmp5462;
    panda$collections$Array* $tmp5463;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5465;
    panda$core$Int64 $tmp5466;
    org$pandalanguage$pandac$ASTNode* t5471 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5472;
    org$pandalanguage$pandac$ASTNode* $tmp5473;
    org$pandalanguage$pandac$ASTNode* $tmp5475;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5482;
    panda$core$Int64 $tmp5483;
    org$pandalanguage$pandac$ASTNode* $tmp5485;
    org$pandalanguage$pandac$ASTNode* $tmp5486;
    org$pandalanguage$pandac$ASTNode* $tmp5487;
    org$pandalanguage$pandac$ASTNode* $tmp5489;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5494;
    panda$core$Int64 $tmp5495;
    org$pandalanguage$pandac$ASTNode* $tmp5498;
    panda$collections$Array* members5501 = NULL;
    panda$collections$Array* $tmp5502;
    panda$collections$Array* $tmp5503;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5508;
    panda$core$Int64 $tmp5509;
    org$pandalanguage$pandac$ASTNode* member5514 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5515;
    org$pandalanguage$pandac$ASTNode* $tmp5516;
    org$pandalanguage$pandac$ASTNode* $tmp5518;
    org$pandalanguage$pandac$ASTNode* $tmp5523;
    org$pandalanguage$pandac$ASTNode* $tmp5524;
    panda$core$Int64 $tmp5526;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5527;
    panda$core$Int64 $tmp5528;
    panda$core$String* $tmp5529;
    panda$collections$ImmutableArray* $tmp5531;
    panda$collections$ImmutableArray* $tmp5533;
    int $tmp5428;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5431, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5430, $tmp5431);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5433 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5430, &$s5432);
        start5429 = $tmp5433;
        if (((panda$core$Bit) { !start5429.nonnull }).value) {
        {
            $tmp5435 = NULL;
            $returnValue5434 = $tmp5435;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5435));
            $tmp5428 = 0;
            goto $l5426;
            $l5436:;
            return $returnValue5434;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5440, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5439, $tmp5440);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5442 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5439, &$s5441);
        name5438 = $tmp5442;
        if (((panda$core$Bit) { !name5438.nonnull }).value) {
        {
            $tmp5443 = NULL;
            $returnValue5434 = $tmp5443;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5443));
            $tmp5428 = 1;
            goto $l5426;
            $l5444:;
            return $returnValue5434;
        }
        }
        memset(&generics5446, 0, sizeof(generics5446));
        org$pandalanguage$pandac$parser$Token $tmp5447 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5448, 63);
        panda$core$Bit $tmp5449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5447.kind.$rawValue, $tmp5448);
        if ($tmp5449.value) {
        {
            {
                $tmp5450 = generics5446;
                panda$collections$ImmutableArray* $tmp5453 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5452 = $tmp5453;
                $tmp5451 = $tmp5452;
                generics5446 = $tmp5451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5450));
            }
            if (((panda$core$Bit) { generics5446 == NULL }).value) {
            {
                $tmp5454 = NULL;
                $returnValue5434 = $tmp5454;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5454));
                $tmp5428 = 2;
                goto $l5426;
                $l5455:;
                return $returnValue5434;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5457 = generics5446;
                panda$collections$ImmutableArray* $tmp5460 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5460);
                $tmp5459 = $tmp5460;
                $tmp5458 = $tmp5459;
                generics5446 = $tmp5458;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5458));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5457));
            }
        }
        }
        panda$collections$Array* $tmp5464 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5464);
        $tmp5463 = $tmp5464;
        $tmp5462 = $tmp5463;
        intfs5461 = $tmp5462;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5463));
        panda$core$Int64$init$builtin_int64(&$tmp5466, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5465, $tmp5466);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5467 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5465);
        if (((panda$core$Bit) { $tmp5467.nonnull }).value) {
        {
            int $tmp5470;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5474 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5473 = $tmp5474;
                $tmp5472 = $tmp5473;
                t5471 = $tmp5472;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5473));
                if (((panda$core$Bit) { t5471 == NULL }).value) {
                {
                    $tmp5475 = NULL;
                    $returnValue5434 = $tmp5475;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5475));
                    $tmp5470 = 0;
                    goto $l5468;
                    $l5476:;
                    $tmp5428 = 3;
                    goto $l5426;
                    $l5477:;
                    return $returnValue5434;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5461, ((panda$core$Object*) t5471));
                $l5479:;
                panda$core$Int64$init$builtin_int64(&$tmp5483, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5482, $tmp5483);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5484 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5482);
                bool $tmp5481 = ((panda$core$Bit) { $tmp5484.nonnull }).value;
                if (!$tmp5481) goto $l5480;
                {
                    {
                        $tmp5485 = t5471;
                        org$pandalanguage$pandac$ASTNode* $tmp5488 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5487 = $tmp5488;
                        $tmp5486 = $tmp5487;
                        t5471 = $tmp5486;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5486));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5487));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5485));
                    }
                    if (((panda$core$Bit) { t5471 == NULL }).value) {
                    {
                        $tmp5489 = NULL;
                        $returnValue5434 = $tmp5489;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5489));
                        $tmp5470 = 1;
                        goto $l5468;
                        $l5490:;
                        $tmp5428 = 4;
                        goto $l5426;
                        $l5491:;
                        return $returnValue5434;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5461, ((panda$core$Object*) t5471));
                }
                goto $l5479;
                $l5480:;
            }
            $tmp5470 = -1;
            goto $l5468;
            $l5468:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5471));
            t5471 = NULL;
            switch ($tmp5470) {
                case 1: goto $l5490;
                case -1: goto $l5493;
                case 0: goto $l5476;
            }
            $l5493:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5495, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5494, $tmp5495);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5497 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5494, &$s5496);
        if (((panda$core$Bit) { !$tmp5497.nonnull }).value) {
        {
            $tmp5498 = NULL;
            $returnValue5434 = $tmp5498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5498));
            $tmp5428 = 5;
            goto $l5426;
            $l5499:;
            return $returnValue5434;
        }
        }
        panda$collections$Array* $tmp5504 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5504);
        $tmp5503 = $tmp5504;
        $tmp5502 = $tmp5503;
        members5501 = $tmp5502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5503));
        $l5505:;
        panda$core$Int64$init$builtin_int64(&$tmp5509, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5508, $tmp5509);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5510 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5508);
        bool $tmp5507 = ((panda$core$Bit) { !$tmp5510.nonnull }).value;
        if (!$tmp5507) goto $l5506;
        {
            int $tmp5513;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5517 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5516 = $tmp5517;
                $tmp5515 = $tmp5516;
                member5514 = $tmp5515;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5516));
                if (((panda$core$Bit) { member5514 == NULL }).value) {
                {
                    $tmp5518 = NULL;
                    $returnValue5434 = $tmp5518;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5518));
                    $tmp5513 = 0;
                    goto $l5511;
                    $l5519:;
                    $tmp5428 = 6;
                    goto $l5426;
                    $l5520:;
                    return $returnValue5434;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5501, ((panda$core$Object*) member5514));
            }
            $tmp5513 = -1;
            goto $l5511;
            $l5511:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5514));
            member5514 = NULL;
            switch ($tmp5513) {
                case -1: goto $l5522;
                case 0: goto $l5519;
            }
            $l5522:;
        }
        goto $l5505;
        $l5506:;
        org$pandalanguage$pandac$ASTNode* $tmp5525 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5526, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5528, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5527, $tmp5528);
        panda$core$String* $tmp5530 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5438.value));
        $tmp5529 = $tmp5530;
        panda$collections$ImmutableArray* $tmp5532 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5461);
        $tmp5531 = $tmp5532;
        panda$collections$ImmutableArray* $tmp5534 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5501);
        $tmp5533 = $tmp5534;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5525, $tmp5526, ((org$pandalanguage$pandac$parser$Token) start5429.value).position, p_doccomment, p_annotations, $tmp5527, $tmp5529, generics5446, $tmp5531, $tmp5533);
        $tmp5524 = $tmp5525;
        $tmp5523 = $tmp5524;
        $returnValue5434 = $tmp5523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5529));
        $tmp5428 = 7;
        goto $l5426;
        $l5535:;
        return $returnValue5434;
    }
    $l5426:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5446));
    intfs5461 = NULL;
    members5501 = NULL;
    switch ($tmp5428) {
        case 1: goto $l5444;
        case 4: goto $l5491;
        case 2: goto $l5455;
        case 7: goto $l5535;
        case 6: goto $l5520;
        case 3: goto $l5477;
        case 0: goto $l5436;
        case 5: goto $l5499;
    }
    $l5537:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2576_95538;
    panda$core$Int64 $tmp5540;
    org$pandalanguage$pandac$ASTNode* $returnValue5542;
    org$pandalanguage$pandac$ASTNode* $tmp5543;
    org$pandalanguage$pandac$ASTNode* $tmp5544;
    org$pandalanguage$pandac$ASTNode* $tmp5547;
    org$pandalanguage$pandac$ASTNode* $tmp5548;
    {
        org$pandalanguage$pandac$parser$Token $tmp5539 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2576_95538 = $tmp5539.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5540, 16);
        panda$core$Bit $tmp5541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2576_95538.$rawValue, $tmp5540);
        if ($tmp5541.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5545 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5544 = $tmp5545;
            $tmp5543 = $tmp5544;
            $returnValue5542 = $tmp5543;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5543));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5544));
            return $returnValue5542;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5549 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5548 = $tmp5549;
            $tmp5547 = $tmp5548;
            $returnValue5542 = $tmp5547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5548));
            return $returnValue5542;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5554 = NULL;
    panda$collections$Array* $tmp5555;
    panda$collections$Array* $tmp5556;
    panda$core$Int64 $tmp5559;
    org$pandalanguage$pandac$ASTNode* decl5564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5565;
    org$pandalanguage$pandac$ASTNode* $tmp5566;
    panda$core$Int64 $tmp5573;
    org$pandalanguage$pandac$ASTNode* entry5578 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5579;
    org$pandalanguage$pandac$ASTNode* $tmp5580;
    org$pandalanguage$pandac$ASTNode* $returnValue5582;
    org$pandalanguage$pandac$ASTNode* $tmp5583;
    org$pandalanguage$pandac$ASTNode* $tmp5592;
    org$pandalanguage$pandac$ASTNode* $tmp5593;
    panda$core$Int64 $tmp5595;
    panda$collections$ImmutableArray* $tmp5596;
    int $tmp5553;
    {
        panda$collections$Array* $tmp5557 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5557);
        $tmp5556 = $tmp5557;
        $tmp5555 = $tmp5556;
        entries5554 = $tmp5555;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5556));
        org$pandalanguage$pandac$parser$Token $tmp5558 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5559, 15);
        panda$core$Bit $tmp5560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5558.kind.$rawValue, $tmp5559);
        if ($tmp5560.value) {
        {
            int $tmp5563;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5567 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5566 = $tmp5567;
                $tmp5565 = $tmp5566;
                decl5564 = $tmp5565;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5565));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5566));
                if (((panda$core$Bit) { decl5564 != NULL }).value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(entries5554, ((panda$core$Object*) decl5564));
                }
                }
            }
            $tmp5563 = -1;
            goto $l5561;
            $l5561:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5564));
            decl5564 = NULL;
            switch ($tmp5563) {
                case -1: goto $l5568;
            }
            $l5568:;
        }
        }
        $l5569:;
        org$pandalanguage$pandac$parser$Token $tmp5572 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5573, 0);
        panda$core$Bit $tmp5574 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5572.kind.$rawValue, $tmp5573);
        bool $tmp5571 = $tmp5574.value;
        if (!$tmp5571) goto $l5570;
        {
            int $tmp5577;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5581 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5580 = $tmp5581;
                $tmp5579 = $tmp5580;
                entry5578 = $tmp5579;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5580));
                if (((panda$core$Bit) { entry5578 == NULL }).value) {
                {
                    $tmp5583 = NULL;
                    $returnValue5582 = $tmp5583;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5583));
                    $tmp5577 = 0;
                    goto $l5575;
                    $l5584:;
                    $tmp5553 = 0;
                    goto $l5551;
                    $l5585:;
                    return $returnValue5582;
                }
                }
                panda$core$Bit $tmp5587 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5587.value) goto $l5588; else goto $l5589;
                $l5589:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5590, (panda$core$Int64) { 2600 });
                abort();
                $l5588:;
                panda$collections$Array$add$panda$collections$Array$T(entries5554, ((panda$core$Object*) entry5578));
            }
            $tmp5577 = -1;
            goto $l5575;
            $l5575:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5578));
            entry5578 = NULL;
            switch ($tmp5577) {
                case 0: goto $l5584;
                case -1: goto $l5591;
            }
            $l5591:;
        }
        goto $l5569;
        $l5570:;
        org$pandalanguage$pandac$ASTNode* $tmp5594 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5595, 17);
        panda$collections$ImmutableArray* $tmp5597 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5554);
        $tmp5596 = $tmp5597;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5594, $tmp5595, $tmp5596);
        $tmp5593 = $tmp5594;
        $tmp5592 = $tmp5593;
        $returnValue5582 = $tmp5592;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5596));
        $tmp5553 = 1;
        goto $l5551;
        $l5598:;
        return $returnValue5582;
    }
    $l5551:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5554));
    entries5554 = NULL;
    switch ($tmp5553) {
        case 0: goto $l5585;
        case 1: goto $l5598;
    }
    $l5600:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5603;
    {
    }
    $tmp5603 = -1;
    goto $l5601;
    $l5601:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5603) {
        case -1: goto $l5604;
    }
    $l5604:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->regexParser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->syntaxHighlighter));
}

