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
#include "panda/collections/CollectionView.h"
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
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn31)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn41)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn61)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn64)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn65)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Bit (*$fn143)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn150)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn151)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn193)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn194)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn292)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn359)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn481)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn561)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn569)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn578)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn586)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn692)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn776)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn784)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn793)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn808)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn835)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn843)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn858)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn875)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn1358)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn1359)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef org$pandalanguage$pandac$Position (*$fn1365)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn1367)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$Position (*$fn2087)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2341)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3601)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3628)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3678)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4113)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4116)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn4805)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5034 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
    panda$core$Int64 $tmp33;
    panda$core$Int64 idx35;
    panda$core$Int64 $tmp37;
    org$pandalanguage$pandac$parser$Token result39;
    org$pandalanguage$pandac$parser$Token $returnValue42;
    org$pandalanguage$pandac$parser$Token result44;
    panda$core$Int64 $tmp46;
    panda$core$Int64 $tmp50;
    panda$core$Object* $tmp53;
    panda$core$Int64 $tmp54;
    panda$core$Int64 $tmp56;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp59;
    panda$core$Int64 $tmp60;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp62;
    panda$core$Int64 $tmp63;
    panda$core$Int64 $tmp32 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp33, 0);
    panda$core$Bit $tmp34 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp32, $tmp33);
    if ($tmp34.value) {
    {
        panda$core$Int64 $tmp36 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp37, 1);
        panda$core$Int64 $tmp38 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp36, $tmp37);
        idx35 = $tmp38;
        org$pandalanguage$pandac$parser$Token $tmp40 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx35);
        result39 = $tmp40;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx35);
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn41) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, result39);
        }
        }
        $returnValue42 = result39;
        return $returnValue42;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp45 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result44 = $tmp45;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp46, 12);
        panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result44.kind.$rawValue, $tmp46);
        if ($tmp47.value) {
        {
            panda$core$Int64 $tmp49 = panda$collections$Stack$get_count$R$panda$core$Int64(self->syntaxHighlighter->stack);
            panda$core$Int64$init$builtin_int64(&$tmp50, 0);
            panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp49, $tmp50);
            bool $tmp48 = $tmp51.value;
            if ($tmp48) goto $l52;
            panda$core$Int64$init$builtin_int64(&$tmp54, 0);
            panda$core$Object* $tmp55 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->syntaxHighlighter->stack, $tmp54);
            $tmp53 = $tmp55;
            panda$core$Int64$init$builtin_int64(&$tmp56, 2);
            panda$core$Bit $tmp57 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp53)->value.$rawValue, $tmp56);
            $tmp48 = $tmp57.value;
            panda$core$Panda$unref$panda$core$Object($tmp53);
            $l52:;
            panda$core$Bit $tmp58 = { $tmp48 };
            if ($tmp58.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp60, 2);
                org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp59, $tmp60);
                (($fn61) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp59);
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp63, 2);
                org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp62, $tmp63);
                (($fn64) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp62);
            }
            }
        }
        }
        (($fn65) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, result44);
    }
    }
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result44);
    }
    }
    $returnValue42 = result44;
    return $returnValue42;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result69;
    org$pandalanguage$pandac$parser$Token$Kind $match$108_1371;
    panda$core$Int64 $tmp72;
    panda$core$Int64 $tmp74;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto79 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp80;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp81;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp83;
    panda$core$Int64 $tmp84;
    org$pandalanguage$pandac$parser$Token t87;
    org$pandalanguage$pandac$parser$Token$Kind $match$115_2589;
    panda$core$Int64 $tmp90;
    panda$core$String* $tmp92;
    panda$core$Char8 $tmp94;
    panda$core$UInt8 $tmp95;
    panda$core$Int64 $tmp97;
    org$pandalanguage$pandac$parser$Token $returnValue99;
    panda$core$Int64 $tmp103;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto108 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp109;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp110;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp112;
    panda$core$Int64 $tmp113;
    org$pandalanguage$pandac$parser$Token t116;
    org$pandalanguage$pandac$parser$Token$Kind $match$128_25118;
    panda$core$Int64 $tmp119;
    panda$core$Int64 $tmp121;
    panda$core$Bit $tmp124;
    $l67:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp70 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result69 = $tmp70;
        {
            $match$108_1371 = result69.kind;
            panda$core$Int64$init$builtin_int64(&$tmp72, 13);
            panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp72);
            if ($tmp73.value) {
            {
                goto $l67;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp74, 9);
            panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp74);
            if ($tmp75.value) {
            {
                int $tmp78;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp82 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp84, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp83, $tmp84);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp82, self, $tmp83);
                    $tmp81 = $tmp82;
                    $tmp80 = $tmp81;
                    auto79 = $tmp80;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
                    $l85:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp88 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        t87 = $tmp88;
                        {
                            $match$115_2589 = t87.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp90, 13);
                            panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_2589.$rawValue, $tmp90);
                            if ($tmp91.value) {
                            {
                                panda$core$String* $tmp93 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t87);
                                $tmp92 = $tmp93;
                                panda$core$UInt8$init$builtin_uint8(&$tmp95, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp94, $tmp95);
                                panda$core$Bit $tmp96 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp92, $tmp94);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
                                if ($tmp96.value) {
                                {
                                    goto $l86;
                                }
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp97, 0);
                            panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_2589.$rawValue, $tmp97);
                            if ($tmp98.value) {
                            {
                                $returnValue99 = t87;
                                $tmp78 = 0;
                                goto $l76;
                                $l100:;
                                return $returnValue99;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l86:;
                }
                $tmp78 = -1;
                goto $l76;
                $l76:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto79));
                auto79 = NULL;
                switch ($tmp78) {
                    case 0: goto $l100;
                    case -1: goto $l102;
                }
                $l102:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp103, 10);
            panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp103);
            if ($tmp104.value) {
            {
                int $tmp107;
                {
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp111 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
                    panda$core$Int64$init$builtin_int64(&$tmp113, 1);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp112, $tmp113);
                    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp111, self, $tmp112);
                    $tmp110 = $tmp111;
                    $tmp109 = $tmp110;
                    auto108 = $tmp109;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                    $l114:;
                    while (true) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp117 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        t116 = $tmp117;
                        {
                            $match$128_25118 = t116.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp119, 11);
                            panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_25118.$rawValue, $tmp119);
                            if ($tmp120.value) {
                            {
                                goto $l115;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp121, 0);
                            panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_25118.$rawValue, $tmp121);
                            if ($tmp122.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result69, &$s123);
                                panda$core$Bit$init$builtin_bit(&$tmp124, false);
                                self->reportErrors = $tmp124;
                                $returnValue99 = t116;
                                $tmp107 = 0;
                                goto $l105;
                                $l125:;
                                return $returnValue99;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l115:;
                }
                $tmp107 = -1;
                goto $l105;
                $l105:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto108));
                auto108 = NULL;
                switch ($tmp107) {
                    case -1: goto $l127;
                    case 0: goto $l125;
                }
                $l127:;
            }
            }
            else {
            {
                $returnValue99 = result69;
                return $returnValue99;
            }
            }
            }
            }
        }
    }
    }
    $l68:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp132;
    panda$core$Object* $tmp133;
    panda$core$Int64 $tmp135;
    panda$core$String* $tmp139;
    panda$core$Object* $tmp145;
    panda$core$Int64 $tmp147;
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        $l129:;
        panda$core$Int64 $tmp134 = panda$collections$Array$get_count$R$panda$core$Int64(self->syntaxHighlighter->tokens);
        panda$core$Int64$init$builtin_int64(&$tmp135, 1);
        panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp134, $tmp135);
        panda$core$Object* $tmp137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp136);
        $tmp133 = $tmp137;
        panda$core$String* $tmp138 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp133)->first)->value);
        $tmp132 = $tmp138;
        panda$core$String* $tmp140 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, p_token);
        $tmp139 = $tmp140;
        ITable* $tmp141 = ((panda$core$Equatable*) $tmp132)->$class->itable;
        while ($tmp141->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp141 = $tmp141->next;
        }
        $fn143 $tmp142 = $tmp141->methods[1];
        panda$core$Bit $tmp144 = $tmp142(((panda$core$Equatable*) $tmp132), ((panda$core$Equatable*) $tmp139));
        bool $tmp131 = $tmp144.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
        panda$core$Panda$unref$panda$core$Object($tmp133);
        if (!$tmp131) goto $l130;
        {
            panda$core$Int64 $tmp146 = panda$collections$Array$get_count$R$panda$core$Int64(self->syntaxHighlighter->tokens);
            panda$core$Int64$init$builtin_int64(&$tmp147, 1);
            panda$core$Int64 $tmp148 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp146, $tmp147);
            panda$core$Object* $tmp149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp148);
            $tmp145 = $tmp149;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp145)->first)->value);
            panda$core$Panda$unref$panda$core$Object($tmp145);
            (($fn150) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
        }
        goto $l129;
        $l130:;
        (($fn151) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp153;
    org$pandalanguage$pandac$parser$Token $returnValue156;
    panda$core$Int64 $tmp158;
    panda$core$Int64 $tmp152 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp153, 0);
    panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp152, $tmp153);
    if ($tmp154.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp155 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp155);
    }
    }
    panda$core$Int64 $tmp157 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp158, 1);
    panda$core$Int64 $tmp159 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp157, $tmp158);
    org$pandalanguage$pandac$parser$Token $tmp160 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp159);
    $returnValue156 = $tmp160;
    return $returnValue156;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result162;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue165;
    org$pandalanguage$pandac$parser$Token $tmp163 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result162 = $tmp163;
    panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result162.kind.$rawValue, p_kind.$rawValue);
    if ($tmp164.value) {
    {
        $returnValue165 = ((org$pandalanguage$pandac$parser$Token$nullable) { result162, true });
        return $returnValue165;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result162);
    $returnValue165 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue165;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result168;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue171;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp181;
    org$pandalanguage$pandac$parser$Token $tmp169 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result168 = $tmp169;
    panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result168.kind.$rawValue, p_kind.$rawValue);
    if ($tmp170.value) {
    {
        $returnValue171 = ((org$pandalanguage$pandac$parser$Token$nullable) { result168, true });
        return $returnValue171;
    }
    }
    panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, p_expected);
    $tmp176 = $tmp178;
    panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s179);
    $tmp175 = $tmp180;
    panda$core$String* $tmp182 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result168);
    $tmp181 = $tmp182;
    panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, $tmp181);
    $tmp174 = $tmp183;
    panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s184);
    $tmp173 = $tmp185;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result168, $tmp173);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    $returnValue171 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue171;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp191;
    panda$core$Bit $tmp188 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp187 = $tmp188.value;
    if (!$tmp187) goto $l189;
    $tmp187 = self->reportErrors.value;
    $l189:;
    panda$core$Bit $tmp190 = { $tmp187 };
    if ($tmp190.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp192 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp192, self->path, p_token.position, p_msg);
        $tmp191 = $tmp192;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn193) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn194) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp207;
    int $tmp197;
    {
        panda$core$Bit $tmp198 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp198.value) goto $l199; else goto $l200;
        $l200:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s201, (panda$core$Int64) { 201 }, &$s202);
        abort();
        $l199:;
        panda$core$Bit $tmp203 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp203.value) goto $l204; else goto $l205;
        $l205:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s206, (panda$core$Int64) { 202 });
        abort();
        $l204:;
        panda$core$Bit$init$builtin_bit(&$tmp207, true);
        self->inSpeculative = $tmp207;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp197 = -1;
    goto $l195;
    $l195:;
    if (self->inSpeculative.value) goto $l209; else goto $l210;
    $l210:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s211, (panda$core$Int64) { 201 }, &$s212);
    abort();
    $l209:;
    switch ($tmp197) {
        case -1: goto $l208;
    }
    $l208:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp220;
    int $tmp215;
    {
        if (self->inSpeculative.value) goto $l216; else goto $l217;
        $l217:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s218, (panda$core$Int64) { 210 }, &$s219);
        abort();
        $l216:;
        panda$core$Bit$init$builtin_bit(&$tmp220, false);
        self->inSpeculative = $tmp220;
    }
    $tmp215 = -1;
    goto $l213;
    $l213:;
    panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp222.value) goto $l223; else goto $l224;
    $l224:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s225, (panda$core$Int64) { 210 }, &$s226);
    abort();
    $l223:;
    switch ($tmp215) {
        case -1: goto $l221;
    }
    $l221:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp234;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp235;
    panda$core$Int64 $tmp237;
    panda$core$Int64 $tmp239;
    panda$core$Int64 $tmp240;
    panda$core$Bit $tmp241;
    int $tmp229;
    {
        if (self->inSpeculative.value) goto $l230; else goto $l231;
        $l231:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s232, (panda$core$Int64) { 216 }, &$s233);
        abort();
        $l230:;
        panda$core$Bit$init$builtin_bit(&$tmp234, false);
        self->inSpeculative = $tmp234;
        panda$core$Int64 $tmp236 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp237, 1);
        panda$core$Int64 $tmp238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp236, $tmp237);
        panda$core$Int64$init$builtin_int64(&$tmp239, 0);
        panda$core$Int64$init$builtin_int64(&$tmp240, -1);
        panda$core$Bit$init$builtin_bit(&$tmp241, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp235, $tmp238, $tmp239, $tmp240, $tmp241);
        int64_t $tmp243 = $tmp235.start.value;
        panda$core$Int64 i242 = { $tmp243 };
        int64_t $tmp245 = $tmp235.end.value;
        int64_t $tmp246 = $tmp235.step.value;
        bool $tmp247 = $tmp235.inclusive.value;
        bool $tmp254 = $tmp246 > 0;
        if ($tmp254) goto $l252; else goto $l253;
        $l252:;
        if ($tmp247) goto $l255; else goto $l256;
        $l255:;
        if ($tmp243 <= $tmp245) goto $l248; else goto $l250;
        $l256:;
        if ($tmp243 < $tmp245) goto $l248; else goto $l250;
        $l253:;
        if ($tmp247) goto $l257; else goto $l258;
        $l257:;
        if ($tmp243 >= $tmp245) goto $l248; else goto $l250;
        $l258:;
        if ($tmp243 > $tmp245) goto $l248; else goto $l250;
        $l248:;
        {
            org$pandalanguage$pandac$parser$Token $tmp260 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i242);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp260);
        }
        $l251:;
        if ($tmp254) goto $l262; else goto $l263;
        $l262:;
        int64_t $tmp264 = $tmp245 - i242.value;
        if ($tmp247) goto $l265; else goto $l266;
        $l265:;
        if ((uint64_t) $tmp264 >= $tmp246) goto $l261; else goto $l250;
        $l266:;
        if ((uint64_t) $tmp264 > $tmp246) goto $l261; else goto $l250;
        $l263:;
        int64_t $tmp268 = i242.value - $tmp245;
        if ($tmp247) goto $l269; else goto $l270;
        $l269:;
        if ((uint64_t) $tmp268 >= -$tmp246) goto $l261; else goto $l250;
        $l270:;
        if ((uint64_t) $tmp268 > -$tmp246) goto $l261; else goto $l250;
        $l261:;
        i242.value += $tmp246;
        goto $l248;
        $l250:;
    }
    $tmp229 = -1;
    goto $l227;
    $l227:;
    panda$core$Bit $tmp273 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp273.value) goto $l274; else goto $l275;
    $l275:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s276, (panda$core$Int64) { 216 }, &$s277);
    abort();
    $l274:;
    switch ($tmp229) {
        case -1: goto $l272;
    }
    $l272:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue278;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp281;
    panda$core$Bit $tmp282;
    panda$core$Bit$init$builtin_bit(&$tmp282, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp281, p_token.start, p_token.end, $tmp282);
    panda$core$String* $tmp283 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp281);
    $tmp280 = $tmp283;
    $tmp279 = $tmp280;
    $returnValue278 = $tmp279;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
    return $returnValue278;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue285;
    org$pandalanguage$pandac$ASTNode* $tmp286;
    org$pandalanguage$pandac$ASTNode* $tmp288;
    org$pandalanguage$pandac$ASTNode* $tmp289;
    panda$core$Int64 $tmp291;
    org$pandalanguage$pandac$parser$Token$Kind $tmp294;
    panda$core$Int64 $tmp295;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp286 = p_chunk;
        $returnValue285 = $tmp286;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
        return $returnValue285;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp290 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp291, 4);
    org$pandalanguage$pandac$Position $tmp293 = (($fn292) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp295, 52);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp294, $tmp295);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp290, $tmp291, $tmp293, p_string, $tmp294, p_chunk);
    $tmp289 = $tmp290;
    $tmp288 = $tmp289;
    $returnValue285 = $tmp288;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
    return $returnValue285;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result300 = NULL;
    panda$core$MutableString* $tmp301;
    panda$core$MutableString* $tmp302;
    org$pandalanguage$pandac$parser$Token token306;
    org$pandalanguage$pandac$parser$Token$Kind $match$238_13308;
    panda$core$Int64 $tmp309;
    panda$core$String* str314 = NULL;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$Char8 $tmp318;
    panda$core$UInt8 $tmp319;
    panda$core$String* $returnValue322;
    panda$core$String* $tmp323;
    panda$core$Int64 $tmp328;
    panda$core$String* $tmp331;
    panda$core$Int64 $tmp334;
    org$pandalanguage$pandac$parser$Token escape339;
    panda$core$Int64 $tmp341;
    panda$core$String* $tmp344;
    panda$core$String* escapeText348 = NULL;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350;
    panda$core$Char8 c352;
    panda$core$Object* $tmp353;
    panda$collections$ListView* $tmp354;
    panda$core$Int64 $tmp356;
    panda$core$Char8 $match$257_21361;
    panda$core$Char8 $tmp362;
    panda$core$UInt8 $tmp363;
    panda$core$Char8 $tmp365;
    panda$core$UInt8 $tmp366;
    panda$core$Char8 $tmp367;
    panda$core$UInt8 $tmp368;
    panda$core$Char8 $tmp370;
    panda$core$UInt8 $tmp371;
    panda$core$Char8 $tmp372;
    panda$core$UInt8 $tmp373;
    panda$core$Char8 $tmp375;
    panda$core$UInt8 $tmp376;
    panda$core$Char8 $tmp377;
    panda$core$UInt8 $tmp378;
    panda$core$Char8 $tmp380;
    panda$core$UInt8 $tmp381;
    panda$core$Char8 $tmp382;
    panda$core$UInt8 $tmp383;
    panda$core$Char8 $tmp385;
    panda$core$UInt8 $tmp386;
    panda$core$Char8 $tmp387;
    panda$core$UInt8 $tmp388;
    panda$core$Char8 $tmp390;
    panda$core$UInt8 $tmp391;
    panda$core$Char8 $tmp392;
    panda$core$UInt8 $tmp393;
    panda$core$Char8 $tmp395;
    panda$core$UInt8 $tmp396;
    panda$core$String* $tmp398;
    panda$core$String* $tmp402;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp403;
    panda$core$Bit $tmp406;
    panda$core$Int64 $tmp409;
    panda$core$String* $tmp411;
    panda$core$String* $tmp412;
    panda$core$String* $tmp416;
    int $tmp299;
    {
        panda$core$MutableString* $tmp303 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp303);
        $tmp302 = $tmp303;
        $tmp301 = $tmp302;
        result300 = $tmp301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
        $l304:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp307 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token306 = $tmp307;
            {
                $match$238_13308 = token306.kind;
                panda$core$Int64$init$builtin_int64(&$tmp309, 13);
                panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13308.$rawValue, $tmp309);
                if ($tmp310.value) {
                {
                    int $tmp313;
                    {
                        panda$core$String* $tmp317 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token306);
                        $tmp316 = $tmp317;
                        $tmp315 = $tmp316;
                        str314 = $tmp315;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                        panda$core$UInt8$init$builtin_uint8(&$tmp319, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp318, $tmp319);
                        panda$core$Bit $tmp320 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str314, $tmp318);
                        if ($tmp320.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token306, &$s321);
                            $tmp323 = NULL;
                            $returnValue322 = $tmp323;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                            $tmp313 = 0;
                            goto $l311;
                            $l324:;
                            $tmp299 = 0;
                            goto $l297;
                            $l325:;
                            return $returnValue322;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result300, str314);
                    }
                    $tmp313 = -1;
                    goto $l311;
                    $l311:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str314));
                    str314 = NULL;
                    switch ($tmp313) {
                        case -1: goto $l327;
                        case 0: goto $l324;
                    }
                    $l327:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp328, 0);
                panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13308.$rawValue, $tmp328);
                if ($tmp329.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token306, &$s330);
                    $tmp331 = NULL;
                    $returnValue322 = $tmp331;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                    $tmp299 = 1;
                    goto $l297;
                    $l332:;
                    return $returnValue322;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp334, 107);
                panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13308.$rawValue, $tmp334);
                if ($tmp335.value) {
                {
                    int $tmp338;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp340 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape339 = $tmp340;
                        panda$core$Int64$init$builtin_int64(&$tmp341, 0);
                        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape339.kind.$rawValue, $tmp341);
                        if ($tmp342.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token306, &$s343);
                            $tmp344 = NULL;
                            $returnValue322 = $tmp344;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
                            $tmp338 = 0;
                            goto $l336;
                            $l345:;
                            $tmp299 = 2;
                            goto $l297;
                            $l346:;
                            return $returnValue322;
                        }
                        }
                        panda$core$String* $tmp351 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape339);
                        $tmp350 = $tmp351;
                        $tmp349 = $tmp350;
                        escapeText348 = $tmp349;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
                        panda$collections$ListView* $tmp355 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText348);
                        $tmp354 = $tmp355;
                        panda$core$Int64$init$builtin_int64(&$tmp356, 0);
                        ITable* $tmp357 = $tmp354->$class->itable;
                        while ($tmp357->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp357 = $tmp357->next;
                        }
                        $fn359 $tmp358 = $tmp357->methods[0];
                        panda$core$Object* $tmp360 = $tmp358($tmp354, $tmp356);
                        $tmp353 = $tmp360;
                        c352 = ((panda$core$Char8$wrapper*) $tmp353)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp353);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                        {
                            $match$257_21361 = c352;
                            panda$core$UInt8$init$builtin_uint8(&$tmp363, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp362, $tmp363);
                            panda$core$Bit $tmp364 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp362);
                            if ($tmp364.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp366, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp365, $tmp366);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp365);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp368, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp367, $tmp368);
                            panda$core$Bit $tmp369 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp367);
                            if ($tmp369.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp371, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp370, $tmp371);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp370);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp373, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp372, $tmp373);
                            panda$core$Bit $tmp374 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp372);
                            if ($tmp374.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp376, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp375, $tmp376);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp375);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp378, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp377, $tmp378);
                            panda$core$Bit $tmp379 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp377);
                            if ($tmp379.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp381, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp380, $tmp381);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp380);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp383, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp382, $tmp383);
                            panda$core$Bit $tmp384 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp382);
                            if ($tmp384.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp386, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp385, $tmp386);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp385);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp388, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp387, $tmp388);
                            panda$core$Bit $tmp389 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp387);
                            if ($tmp389.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp391, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp390, $tmp391);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp390);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp393, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp392, $tmp393);
                            panda$core$Bit $tmp394 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21361, $tmp392);
                            if ($tmp394.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp396, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp395, $tmp396);
                                panda$core$MutableString$append$panda$core$Char8(result300, $tmp395);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token306, &$s397);
                                $tmp398 = NULL;
                                $returnValue322 = $tmp398;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                                $tmp338 = 1;
                                goto $l336;
                                $l399:;
                                $tmp299 = 3;
                                goto $l297;
                                $l400:;
                                return $returnValue322;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp404 = panda$core$String$start$R$panda$core$String$Index(escapeText348);
                        panda$core$String$Index $tmp405 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText348, $tmp404);
                        panda$core$Bit$init$builtin_bit(&$tmp406, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp403, ((panda$core$String$Index$nullable) { $tmp405, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp406);
                        panda$core$String* $tmp407 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText348, $tmp403);
                        $tmp402 = $tmp407;
                        panda$core$MutableString$append$panda$core$String(result300, $tmp402);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                    }
                    $tmp338 = -1;
                    goto $l336;
                    $l336:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText348));
                    escapeText348 = NULL;
                    switch ($tmp338) {
                        case 1: goto $l399;
                        case 0: goto $l345;
                        case -1: goto $l408;
                    }
                    $l408:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp409, 101);
                panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13308.$rawValue, $tmp409);
                if ($tmp410.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token306);
                    panda$core$String* $tmp413 = panda$core$MutableString$finish$R$panda$core$String(result300);
                    $tmp412 = $tmp413;
                    $tmp411 = $tmp412;
                    $returnValue322 = $tmp411;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                    $tmp299 = 4;
                    goto $l297;
                    $l414:;
                    return $returnValue322;
                }
                }
                else {
                {
                    panda$core$String* $tmp417 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token306);
                    $tmp416 = $tmp417;
                    panda$core$MutableString$append$panda$core$String(result300, $tmp416);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                }
                }
                }
                }
                }
            }
        }
        }
        $l305:;
    }
    $tmp299 = -1;
    goto $l297;
    $l297:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result300));
    result300 = NULL;
    switch ($tmp299) {
        case 2: goto $l346;
        case 0: goto $l325;
        case 3: goto $l400;
        case -1: goto $l418;
        case 4: goto $l414;
        case 1: goto $l332;
    }
    $l418:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result422 = NULL;
    panda$core$MutableString* $tmp423;
    panda$core$MutableString* $tmp424;
    org$pandalanguage$pandac$parser$Token token428;
    org$pandalanguage$pandac$parser$Token$Kind $match$283_13430;
    panda$core$Int64 $tmp431;
    panda$core$String* str436 = NULL;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$core$Char8 $tmp440;
    panda$core$UInt8 $tmp441;
    panda$core$String* $returnValue444;
    panda$core$String* $tmp445;
    panda$core$Int64 $tmp450;
    panda$core$String* $tmp453;
    panda$core$Int64 $tmp456;
    org$pandalanguage$pandac$parser$Token escape461;
    panda$core$Int64 $tmp463;
    panda$core$String* $tmp466;
    panda$core$String* escapeText470 = NULL;
    panda$core$String* $tmp471;
    panda$core$String* $tmp472;
    panda$core$Char8 c474;
    panda$core$Object* $tmp475;
    panda$collections$ListView* $tmp476;
    panda$core$Int64 $tmp478;
    panda$core$Char8 $match$302_21483;
    panda$core$Char8 $tmp484;
    panda$core$UInt8 $tmp485;
    panda$core$Char8 $tmp487;
    panda$core$UInt8 $tmp488;
    panda$core$Char8 $tmp489;
    panda$core$UInt8 $tmp490;
    panda$core$Char8 $tmp492;
    panda$core$UInt8 $tmp493;
    panda$core$Char8 $tmp494;
    panda$core$UInt8 $tmp495;
    panda$core$Char8 $tmp497;
    panda$core$UInt8 $tmp498;
    panda$core$Char8 $tmp499;
    panda$core$UInt8 $tmp500;
    panda$core$Char8 $tmp502;
    panda$core$UInt8 $tmp503;
    panda$core$Char8 $tmp504;
    panda$core$UInt8 $tmp505;
    panda$core$Char8 $tmp507;
    panda$core$UInt8 $tmp508;
    panda$core$Char8 $tmp509;
    panda$core$UInt8 $tmp510;
    panda$core$Char8 $tmp512;
    panda$core$UInt8 $tmp513;
    panda$core$Char8 $tmp514;
    panda$core$UInt8 $tmp515;
    panda$core$Char8 $tmp517;
    panda$core$UInt8 $tmp518;
    panda$core$Char8 $tmp519;
    panda$core$UInt8 $tmp520;
    panda$core$Char8 $tmp522;
    panda$core$UInt8 $tmp523;
    panda$core$String* $tmp525;
    panda$core$String* $tmp529;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp530;
    panda$core$Bit $tmp533;
    panda$core$Int64 $tmp536;
    panda$core$String* $tmp538;
    panda$core$String* $tmp539;
    panda$core$Int64 $tmp543;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp550;
    int $tmp421;
    {
        panda$core$MutableString* $tmp425 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp425);
        $tmp424 = $tmp425;
        $tmp423 = $tmp424;
        result422 = $tmp423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
        $l426:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp429 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token428 = $tmp429;
            {
                $match$283_13430 = token428.kind;
                panda$core$Int64$init$builtin_int64(&$tmp431, 13);
                panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13430.$rawValue, $tmp431);
                if ($tmp432.value) {
                {
                    int $tmp435;
                    {
                        panda$core$String* $tmp439 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token428);
                        $tmp438 = $tmp439;
                        $tmp437 = $tmp438;
                        str436 = $tmp437;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
                        panda$core$UInt8$init$builtin_uint8(&$tmp441, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp440, $tmp441);
                        panda$core$Bit $tmp442 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str436, $tmp440);
                        if ($tmp442.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token428, &$s443);
                            $tmp445 = NULL;
                            $returnValue444 = $tmp445;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                            $tmp435 = 0;
                            goto $l433;
                            $l446:;
                            $tmp421 = 0;
                            goto $l419;
                            $l447:;
                            return $returnValue444;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result422, str436);
                    }
                    $tmp435 = -1;
                    goto $l433;
                    $l433:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str436));
                    str436 = NULL;
                    switch ($tmp435) {
                        case -1: goto $l449;
                        case 0: goto $l446;
                    }
                    $l449:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp450, 0);
                panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13430.$rawValue, $tmp450);
                if ($tmp451.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token428, &$s452);
                    $tmp453 = NULL;
                    $returnValue444 = $tmp453;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
                    $tmp421 = 1;
                    goto $l419;
                    $l454:;
                    return $returnValue444;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp456, 107);
                panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13430.$rawValue, $tmp456);
                if ($tmp457.value) {
                {
                    int $tmp460;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp462 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape461 = $tmp462;
                        panda$core$Int64$init$builtin_int64(&$tmp463, 0);
                        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape461.kind.$rawValue, $tmp463);
                        if ($tmp464.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token428, &$s465);
                            $tmp466 = NULL;
                            $returnValue444 = $tmp466;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                            $tmp460 = 0;
                            goto $l458;
                            $l467:;
                            $tmp421 = 2;
                            goto $l419;
                            $l468:;
                            return $returnValue444;
                        }
                        }
                        panda$core$String* $tmp473 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape461);
                        $tmp472 = $tmp473;
                        $tmp471 = $tmp472;
                        escapeText470 = $tmp471;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                        panda$collections$ListView* $tmp477 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText470);
                        $tmp476 = $tmp477;
                        panda$core$Int64$init$builtin_int64(&$tmp478, 0);
                        ITable* $tmp479 = $tmp476->$class->itable;
                        while ($tmp479->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp479 = $tmp479->next;
                        }
                        $fn481 $tmp480 = $tmp479->methods[0];
                        panda$core$Object* $tmp482 = $tmp480($tmp476, $tmp478);
                        $tmp475 = $tmp482;
                        c474 = ((panda$core$Char8$wrapper*) $tmp475)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp475);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                        {
                            $match$302_21483 = c474;
                            panda$core$UInt8$init$builtin_uint8(&$tmp485, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp484, $tmp485);
                            panda$core$Bit $tmp486 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp484);
                            if ($tmp486.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp488, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp487, $tmp488);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp487);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp490, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp489, $tmp490);
                            panda$core$Bit $tmp491 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp489);
                            if ($tmp491.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp493, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp492, $tmp493);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp492);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp495, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp494, $tmp495);
                            panda$core$Bit $tmp496 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp494);
                            if ($tmp496.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp498, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp497, $tmp498);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp497);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp500, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp499, $tmp500);
                            panda$core$Bit $tmp501 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp499);
                            if ($tmp501.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp503, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp502, $tmp503);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp502);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp505, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp504, $tmp505);
                            panda$core$Bit $tmp506 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp504);
                            if ($tmp506.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp508, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp507, $tmp508);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp507);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp510, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp509, $tmp510);
                            panda$core$Bit $tmp511 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp509);
                            if ($tmp511.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp513, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp512, $tmp513);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp512);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp515, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp514, $tmp515);
                            panda$core$Bit $tmp516 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp514);
                            if ($tmp516.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp518, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp517, $tmp518);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp517);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp520, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp519, $tmp520);
                            panda$core$Bit $tmp521 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21483, $tmp519);
                            if ($tmp521.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp523, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp522, $tmp523);
                                panda$core$MutableString$append$panda$core$Char8(result422, $tmp522);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token428, &$s524);
                                $tmp525 = NULL;
                                $returnValue444 = $tmp525;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp525));
                                $tmp460 = 1;
                                goto $l458;
                                $l526:;
                                $tmp421 = 3;
                                goto $l419;
                                $l527:;
                                return $returnValue444;
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
                        panda$core$String$Index $tmp531 = panda$core$String$start$R$panda$core$String$Index(escapeText470);
                        panda$core$String$Index $tmp532 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText470, $tmp531);
                        panda$core$Bit$init$builtin_bit(&$tmp533, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp530, ((panda$core$String$Index$nullable) { $tmp532, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp533);
                        panda$core$String* $tmp534 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText470, $tmp530);
                        $tmp529 = $tmp534;
                        panda$core$MutableString$append$panda$core$String(result422, $tmp529);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
                    }
                    $tmp460 = -1;
                    goto $l458;
                    $l458:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText470));
                    escapeText470 = NULL;
                    switch ($tmp460) {
                        case 0: goto $l467;
                        case 1: goto $l526;
                        case -1: goto $l535;
                    }
                    $l535:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp536, 96);
                panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13430.$rawValue, $tmp536);
                if ($tmp537.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token428);
                    panda$core$String* $tmp540 = panda$core$MutableString$finish$R$panda$core$String(result422);
                    $tmp539 = $tmp540;
                    $tmp538 = $tmp539;
                    $returnValue444 = $tmp538;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp538));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
                    $tmp421 = 4;
                    goto $l419;
                    $l541:;
                    return $returnValue444;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp543, 101);
                panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13430.$rawValue, $tmp543);
                if ($tmp544.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token428);
                    panda$core$String* $tmp547 = panda$core$MutableString$finish$R$panda$core$String(result422);
                    $tmp546 = $tmp547;
                    $tmp545 = $tmp546;
                    $returnValue444 = $tmp545;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                    $tmp421 = 5;
                    goto $l419;
                    $l548:;
                    return $returnValue444;
                }
                }
                else {
                {
                    panda$core$String* $tmp551 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token428);
                    $tmp550 = $tmp551;
                    panda$core$MutableString$append$panda$core$String(result422, $tmp550);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l427:;
    }
    $tmp421 = -1;
    goto $l419;
    $l419:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result422));
    result422 = NULL;
    switch ($tmp421) {
        case 1: goto $l454;
        case 4: goto $l541;
        case 3: goto $l527;
        case 2: goto $l468;
        case 0: goto $l447;
        case 5: goto $l548;
        case -1: goto $l552;
    }
    $l552:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot556 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp557;
    org$pandalanguage$pandac$ASTNode* $tmp558;
    panda$core$Int64 $tmp560;
    org$pandalanguage$pandac$ASTNode* call564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp565;
    org$pandalanguage$pandac$ASTNode* $tmp566;
    panda$core$Int64 $tmp568;
    panda$collections$ImmutableArray* $tmp571;
    org$pandalanguage$pandac$ASTNode* stringType573 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp574;
    org$pandalanguage$pandac$ASTNode* $tmp575;
    panda$core$Int64 $tmp577;
    org$pandalanguage$pandac$ASTNode* $returnValue581;
    org$pandalanguage$pandac$ASTNode* $tmp582;
    org$pandalanguage$pandac$ASTNode* $tmp583;
    panda$core$Int64 $tmp585;
    org$pandalanguage$pandac$parser$Token$Kind $tmp588;
    panda$core$Int64 $tmp589;
    int $tmp555;
    {
        org$pandalanguage$pandac$ASTNode* $tmp559 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp560, 15);
        org$pandalanguage$pandac$Position $tmp562 = (($fn561) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp559, $tmp560, $tmp562, p_expr, &$s563);
        $tmp558 = $tmp559;
        $tmp557 = $tmp558;
        dot556 = $tmp557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
        org$pandalanguage$pandac$ASTNode* $tmp567 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp568, 8);
        org$pandalanguage$pandac$Position $tmp570 = (($fn569) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp572 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp572);
        $tmp571 = $tmp572;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp567, $tmp568, $tmp570, dot556, $tmp571);
        $tmp566 = $tmp567;
        $tmp565 = $tmp566;
        call564 = $tmp565;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
        org$pandalanguage$pandac$ASTNode* $tmp576 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp577, 42);
        org$pandalanguage$pandac$Position $tmp579 = (($fn578) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp576, $tmp577, $tmp579, &$s580);
        $tmp575 = $tmp576;
        $tmp574 = $tmp575;
        stringType573 = $tmp574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
        org$pandalanguage$pandac$ASTNode* $tmp584 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp585, 4);
        org$pandalanguage$pandac$Position $tmp587 = (($fn586) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp589, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp588, $tmp589);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp584, $tmp585, $tmp587, call564, $tmp588, stringType573);
        $tmp583 = $tmp584;
        $tmp582 = $tmp583;
        $returnValue581 = $tmp582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
        $tmp555 = 0;
        goto $l553;
        $l590:;
        return $returnValue581;
    }
    $l553:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType573));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call564));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot556));
    dot556 = NULL;
    call564 = NULL;
    stringType573 = NULL;
    switch ($tmp555) {
        case 0: goto $l590;
    }
    $l592:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1596;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto600 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp601;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp602;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp604;
    panda$core$Int64 $tmp605;
    org$pandalanguage$pandac$parser$Token start606;
    panda$core$Int64 $tmp609;
    panda$core$Int64 $tmp612;
    panda$core$String* $tmp615;
    panda$core$String* $tmp616;
    panda$core$String* $tmp618;
    org$pandalanguage$pandac$ASTNode* $returnValue623;
    org$pandalanguage$pandac$ASTNode* $tmp624;
    org$pandalanguage$pandac$ASTNode* result628 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp629;
    panda$core$MutableString* chunk630 = NULL;
    panda$core$MutableString* $tmp631;
    panda$core$MutableString* $tmp632;
    org$pandalanguage$pandac$parser$Token token636;
    org$pandalanguage$pandac$parser$Token$Kind $match$351_13639;
    panda$core$Int64 $tmp640;
    panda$core$String* str645 = NULL;
    panda$core$String* $tmp646;
    panda$core$String* $tmp647;
    panda$core$Char8 $tmp649;
    panda$core$UInt8 $tmp650;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    panda$core$Int64 $tmp659;
    org$pandalanguage$pandac$ASTNode* $tmp662;
    panda$core$Int64 $tmp666;
    org$pandalanguage$pandac$parser$Token escape671;
    panda$core$Int64 $tmp673;
    org$pandalanguage$pandac$ASTNode* $tmp676;
    panda$core$String* escapeText681 = NULL;
    panda$core$String* $tmp682;
    panda$core$String* $tmp683;
    panda$core$Char8 c685;
    panda$core$Object* $tmp686;
    panda$collections$ListView* $tmp687;
    panda$core$Int64 $tmp689;
    panda$core$Char8 $match$370_21694;
    panda$core$Char8 $tmp695;
    panda$core$UInt8 $tmp696;
    panda$core$Char8 $tmp698;
    panda$core$UInt8 $tmp699;
    panda$core$Char8 $tmp700;
    panda$core$UInt8 $tmp701;
    panda$core$Char8 $tmp703;
    panda$core$UInt8 $tmp704;
    panda$core$Char8 $tmp705;
    panda$core$UInt8 $tmp706;
    panda$core$Char8 $tmp708;
    panda$core$UInt8 $tmp709;
    panda$core$Char8 $tmp710;
    panda$core$UInt8 $tmp711;
    panda$core$Char8 $tmp713;
    panda$core$UInt8 $tmp714;
    panda$core$Char8 $tmp715;
    panda$core$UInt8 $tmp716;
    panda$core$Char8 $tmp718;
    panda$core$UInt8 $tmp719;
    panda$core$Char8 $tmp720;
    panda$core$UInt8 $tmp721;
    panda$core$Char8 $tmp723;
    panda$core$UInt8 $tmp724;
    panda$core$Char8 $tmp725;
    panda$core$UInt8 $tmp726;
    panda$core$Bit oldAllow731;
    panda$core$Bit $tmp732;
    org$pandalanguage$pandac$ASTNode* expr733 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    org$pandalanguage$pandac$ASTNode* $tmp735;
    org$pandalanguage$pandac$ASTNode* $tmp737;
    panda$core$String* align743 = NULL;
    panda$core$String* $tmp744;
    panda$core$String* format745 = NULL;
    panda$core$String* $tmp746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp747;
    panda$core$Int64 $tmp748;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    org$pandalanguage$pandac$parser$Token$Kind $tmp754;
    panda$core$Int64 $tmp755;
    panda$core$String* $tmp760;
    panda$core$String* $tmp761;
    panda$core$String* $tmp762;
    org$pandalanguage$pandac$ASTNode* $tmp764;
    org$pandalanguage$pandac$ASTNode* formattable771 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp772;
    org$pandalanguage$pandac$ASTNode* $tmp773;
    panda$core$Int64 $tmp775;
    org$pandalanguage$pandac$ASTNode* cast779 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp780;
    org$pandalanguage$pandac$ASTNode* $tmp781;
    panda$core$Int64 $tmp783;
    org$pandalanguage$pandac$parser$Token$Kind $tmp786;
    panda$core$Int64 $tmp787;
    org$pandalanguage$pandac$ASTNode* dot788 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp789;
    org$pandalanguage$pandac$ASTNode* $tmp790;
    panda$core$Int64 $tmp792;
    panda$collections$Array* callArgs796 = NULL;
    panda$collections$Array* $tmp797;
    panda$collections$Array* $tmp798;
    org$pandalanguage$pandac$ASTNode* $tmp800;
    panda$core$Int64 $tmp802;
    org$pandalanguage$pandac$ASTNode* $tmp803;
    org$pandalanguage$pandac$ASTNode* $tmp804;
    org$pandalanguage$pandac$ASTNode* $tmp805;
    panda$core$Int64 $tmp807;
    panda$collections$ImmutableArray* $tmp810;
    org$pandalanguage$pandac$parser$Token$Kind $tmp813;
    panda$core$Int64 $tmp814;
    org$pandalanguage$pandac$ASTNode* $tmp817;
    org$pandalanguage$pandac$ASTNode* $tmp826;
    org$pandalanguage$pandac$ASTNode* $tmp827;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* pandaType830 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp831;
    org$pandalanguage$pandac$ASTNode* $tmp832;
    panda$core$Int64 $tmp834;
    org$pandalanguage$pandac$ASTNode* callTarget838 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp839;
    org$pandalanguage$pandac$ASTNode* $tmp840;
    panda$core$Int64 $tmp842;
    panda$collections$Array* callArgs846 = NULL;
    panda$collections$Array* $tmp847;
    panda$collections$Array* $tmp848;
    org$pandalanguage$pandac$ASTNode* $tmp850;
    panda$core$Int64 $tmp852;
    org$pandalanguage$pandac$ASTNode* $tmp853;
    org$pandalanguage$pandac$ASTNode* $tmp854;
    org$pandalanguage$pandac$ASTNode* $tmp855;
    panda$core$Int64 $tmp857;
    panda$collections$ImmutableArray* $tmp860;
    panda$core$String* text863 = NULL;
    panda$core$String* $tmp864;
    panda$core$String* $tmp865;
    panda$core$MutableString* $tmp867;
    panda$core$MutableString* $tmp868;
    panda$core$MutableString* $tmp869;
    org$pandalanguage$pandac$ASTNode* $tmp879;
    org$pandalanguage$pandac$ASTNode* $tmp880;
    org$pandalanguage$pandac$ASTNode* $tmp881;
    org$pandalanguage$pandac$ASTNode* $tmp882;
    panda$core$Int64 $tmp884;
    org$pandalanguage$pandac$ASTNode* $tmp886;
    org$pandalanguage$pandac$ASTNode* $tmp887;
    org$pandalanguage$pandac$ASTNode* $tmp888;
    org$pandalanguage$pandac$ASTNode* $tmp890;
    org$pandalanguage$pandac$ASTNode* $tmp891;
    org$pandalanguage$pandac$ASTNode* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp896;
    panda$core$String* $tmp901;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp902;
    panda$core$Bit $tmp905;
    panda$core$String* $tmp908;
    org$pandalanguage$pandac$ASTNode* $tmp910;
    org$pandalanguage$pandac$ASTNode* $tmp911;
    org$pandalanguage$pandac$ASTNode* $tmp912;
    panda$core$Int64 $tmp914;
    panda$core$String* $tmp915;
    int $tmp595;
    {
        $atPre1596 = self->allowLambdas;
        int $tmp599;
        {
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp603 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
            panda$core$Int64$init$builtin_int64(&$tmp605, 10);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp604, $tmp605);
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp603, self, $tmp604);
            $tmp602 = $tmp603;
            $tmp601 = $tmp602;
            auto600 = $tmp601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
            org$pandalanguage$pandac$parser$Token $tmp607 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start606 = $tmp607;
            panda$core$Int64$init$builtin_int64(&$tmp609, 8);
            panda$core$Bit $tmp610 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start606.kind.$rawValue, $tmp609);
            bool $tmp608 = $tmp610.value;
            if (!$tmp608) goto $l611;
            panda$core$Int64$init$builtin_int64(&$tmp612, 7);
            panda$core$Bit $tmp613 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start606.kind.$rawValue, $tmp612);
            $tmp608 = $tmp613.value;
            $l611:;
            panda$core$Bit $tmp614 = { $tmp608 };
            if ($tmp614.value) {
            {
                panda$core$String* $tmp619 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start606);
                $tmp618 = $tmp619;
                panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s617, $tmp618);
                $tmp616 = $tmp620;
                panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s621);
                $tmp615 = $tmp622;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start606, $tmp615);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                $tmp624 = NULL;
                $returnValue623 = $tmp624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
                $tmp599 = 0;
                goto $l597;
                $l625:;
                $tmp595 = 0;
                goto $l593;
                $l626:;
                return $returnValue623;
            }
            }
            $tmp629 = NULL;
            result628 = $tmp629;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
            panda$core$MutableString* $tmp633 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp633);
            $tmp632 = $tmp633;
            $tmp631 = $tmp632;
            chunk630 = $tmp631;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
            $l634:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp637 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token636 = $tmp637;
                panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token636.kind.$rawValue, start606.kind.$rawValue);
                if ($tmp638.value) {
                {
                    goto $l635;
                }
                }
                {
                    $match$351_13639 = token636.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp640, 13);
                    panda$core$Bit $tmp641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_13639.$rawValue, $tmp640);
                    if ($tmp641.value) {
                    {
                        int $tmp644;
                        {
                            panda$core$String* $tmp648 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token636);
                            $tmp647 = $tmp648;
                            $tmp646 = $tmp647;
                            str645 = $tmp646;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                            panda$core$UInt8$init$builtin_uint8(&$tmp650, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp649, $tmp650);
                            panda$core$Bit $tmp651 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str645, $tmp649);
                            if ($tmp651.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start606, &$s652);
                                $tmp653 = NULL;
                                $returnValue623 = $tmp653;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
                                $tmp644 = 0;
                                goto $l642;
                                $l654:;
                                $tmp599 = 1;
                                goto $l597;
                                $l655:;
                                $tmp595 = 1;
                                goto $l593;
                                $l656:;
                                return $returnValue623;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk630, str645);
                        }
                        $tmp644 = -1;
                        goto $l642;
                        $l642:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str645));
                        str645 = NULL;
                        switch ($tmp644) {
                            case 0: goto $l654;
                            case -1: goto $l658;
                        }
                        $l658:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp659, 0);
                    panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_13639.$rawValue, $tmp659);
                    if ($tmp660.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start606, &$s661);
                        $tmp662 = NULL;
                        $returnValue623 = $tmp662;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp662));
                        $tmp599 = 2;
                        goto $l597;
                        $l663:;
                        $tmp595 = 2;
                        goto $l593;
                        $l664:;
                        return $returnValue623;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp666, 107);
                    panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_13639.$rawValue, $tmp666);
                    if ($tmp667.value) {
                    {
                        int $tmp670;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp672 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape671 = $tmp672;
                            panda$core$Int64$init$builtin_int64(&$tmp673, 0);
                            panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape671.kind.$rawValue, $tmp673);
                            if ($tmp674.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start606, &$s675);
                                $tmp676 = NULL;
                                $returnValue623 = $tmp676;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                                $tmp670 = 0;
                                goto $l668;
                                $l677:;
                                $tmp599 = 3;
                                goto $l597;
                                $l678:;
                                $tmp595 = 3;
                                goto $l593;
                                $l679:;
                                return $returnValue623;
                            }
                            }
                            panda$core$String* $tmp684 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape671);
                            $tmp683 = $tmp684;
                            $tmp682 = $tmp683;
                            escapeText681 = $tmp682;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp682));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                            panda$collections$ListView* $tmp688 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText681);
                            $tmp687 = $tmp688;
                            panda$core$Int64$init$builtin_int64(&$tmp689, 0);
                            ITable* $tmp690 = $tmp687->$class->itable;
                            while ($tmp690->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp690 = $tmp690->next;
                            }
                            $fn692 $tmp691 = $tmp690->methods[0];
                            panda$core$Object* $tmp693 = $tmp691($tmp687, $tmp689);
                            $tmp686 = $tmp693;
                            c685 = ((panda$core$Char8$wrapper*) $tmp686)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp686);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                            {
                                $match$370_21694 = c685;
                                panda$core$UInt8$init$builtin_uint8(&$tmp696, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp695, $tmp696);
                                panda$core$Bit $tmp697 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp695);
                                if ($tmp697.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp699, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp698, $tmp699);
                                    panda$core$MutableString$append$panda$core$Char8(chunk630, $tmp698);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp701, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp700, $tmp701);
                                panda$core$Bit $tmp702 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp700);
                                if ($tmp702.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp704, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp703, $tmp704);
                                    panda$core$MutableString$append$panda$core$Char8(chunk630, $tmp703);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp706, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp705, $tmp706);
                                panda$core$Bit $tmp707 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp705);
                                if ($tmp707.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp709, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp708, $tmp709);
                                    panda$core$MutableString$append$panda$core$Char8(chunk630, $tmp708);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp711, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp710, $tmp711);
                                panda$core$Bit $tmp712 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp710);
                                if ($tmp712.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp714, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp713, $tmp714);
                                    panda$core$MutableString$append$panda$core$Char8(chunk630, $tmp713);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp716, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp715, $tmp716);
                                panda$core$Bit $tmp717 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp715);
                                if ($tmp717.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp719, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp718, $tmp719);
                                    panda$core$MutableString$append$panda$core$Char8(chunk630, $tmp718);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp721, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp720, $tmp721);
                                panda$core$Bit $tmp722 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp720);
                                if ($tmp722.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp724, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp723, $tmp724);
                                    panda$core$MutableString$append$panda$core$Char8(chunk630, $tmp723);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp726, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp725, $tmp726);
                                panda$core$Bit $tmp727 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21694, $tmp725);
                                if ($tmp727.value) {
                                {
                                    {
                                        int $tmp730;
                                        {
                                            oldAllow731 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp732, false);
                                            self->allowLambdas = $tmp732;
                                            org$pandalanguage$pandac$ASTNode* $tmp736 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp735 = $tmp736;
                                            $tmp734 = $tmp735;
                                            expr733 = $tmp734;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
                                            self->allowLambdas = oldAllow731;
                                            if (((panda$core$Bit) { expr733 == NULL }).value) {
                                            {
                                                $tmp737 = NULL;
                                                $returnValue623 = $tmp737;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp737));
                                                $tmp730 = 0;
                                                goto $l728;
                                                $l738:;
                                                $tmp670 = 1;
                                                goto $l668;
                                                $l739:;
                                                $tmp599 = 4;
                                                goto $l597;
                                                $l740:;
                                                $tmp595 = 4;
                                                goto $l593;
                                                $l741:;
                                                return $returnValue623;
                                            }
                                            }
                                            $tmp744 = NULL;
                                            align743 = $tmp744;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
                                            $tmp746 = NULL;
                                            format745 = $tmp746;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp746));
                                            panda$core$Int64$init$builtin_int64(&$tmp748, 106);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp747, $tmp748);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp749 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp747);
                                            if (((panda$core$Bit) { $tmp749.nonnull }).value) {
                                            {
                                                {
                                                    $tmp750 = align743;
                                                    panda$core$String* $tmp753 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start606);
                                                    $tmp752 = $tmp753;
                                                    $tmp751 = $tmp752;
                                                    align743 = $tmp751;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp755, 96);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp754, $tmp755);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp756 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp754);
                                            if (((panda$core$Bit) { $tmp756.nonnull }).value) {
                                            {
                                                int $tmp759;
                                                {
                                                    {
                                                        $tmp760 = format745;
                                                        panda$core$String* $tmp763 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start606);
                                                        $tmp762 = $tmp763;
                                                        $tmp761 = $tmp762;
                                                        format745 = $tmp761;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                                                    }
                                                    if (((panda$core$Bit) { format745 == NULL }).value) {
                                                    {
                                                        $tmp764 = NULL;
                                                        $returnValue623 = $tmp764;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                                                        $tmp759 = 0;
                                                        goto $l757;
                                                        $l765:;
                                                        $tmp730 = 1;
                                                        goto $l728;
                                                        $l766:;
                                                        $tmp670 = 2;
                                                        goto $l668;
                                                        $l767:;
                                                        $tmp599 = 5;
                                                        goto $l597;
                                                        $l768:;
                                                        $tmp595 = 5;
                                                        goto $l593;
                                                        $l769:;
                                                        return $returnValue623;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp774 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp775, 42);
                                                    org$pandalanguage$pandac$Position $tmp777 = (($fn776) expr733->$class->vtable[2])(expr733);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp774, $tmp775, $tmp777, &$s778);
                                                    $tmp773 = $tmp774;
                                                    $tmp772 = $tmp773;
                                                    formattable771 = $tmp772;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                                                    org$pandalanguage$pandac$ASTNode* $tmp782 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp783, 4);
                                                    org$pandalanguage$pandac$Position $tmp785 = (($fn784) expr733->$class->vtable[2])(expr733);
                                                    panda$core$Int64$init$builtin_int64(&$tmp787, 90);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp786, $tmp787);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp782, $tmp783, $tmp785, expr733, $tmp786, formattable771);
                                                    $tmp781 = $tmp782;
                                                    $tmp780 = $tmp781;
                                                    cast779 = $tmp780;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp780));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp781));
                                                    org$pandalanguage$pandac$ASTNode* $tmp791 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp792, 15);
                                                    org$pandalanguage$pandac$Position $tmp794 = (($fn793) expr733->$class->vtable[2])(expr733);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp791, $tmp792, $tmp794, cast779, &$s795);
                                                    $tmp790 = $tmp791;
                                                    $tmp789 = $tmp790;
                                                    dot788 = $tmp789;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
                                                    panda$collections$Array* $tmp799 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp799);
                                                    $tmp798 = $tmp799;
                                                    $tmp797 = $tmp798;
                                                    callArgs796 = $tmp797;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp797));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                                                    org$pandalanguage$pandac$ASTNode* $tmp801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp802, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp801, $tmp802, start606.position, format745);
                                                    $tmp800 = $tmp801;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs796, ((panda$core$Object*) $tmp800));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                                                    {
                                                        $tmp803 = expr733;
                                                        org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp807, 8);
                                                        org$pandalanguage$pandac$Position $tmp809 = (($fn808) expr733->$class->vtable[2])(expr733);
                                                        panda$collections$ImmutableArray* $tmp811 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs796);
                                                        $tmp810 = $tmp811;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp806, $tmp807, $tmp809, dot788, $tmp810);
                                                        $tmp805 = $tmp806;
                                                        $tmp804 = $tmp805;
                                                        expr733 = $tmp804;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                                                    }
                                                }
                                                $tmp759 = -1;
                                                goto $l757;
                                                $l757:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs796));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot788));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast779));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable771));
                                                formattable771 = NULL;
                                                cast779 = NULL;
                                                dot788 = NULL;
                                                callArgs796 = NULL;
                                                switch ($tmp759) {
                                                    case -1: goto $l812;
                                                    case 0: goto $l765;
                                                }
                                                $l812:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp814, 101);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp813, $tmp814);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp816 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp813, &$s815);
                                            if (((panda$core$Bit) { !$tmp816.nonnull }).value) {
                                            {
                                                $tmp817 = NULL;
                                                $returnValue623 = $tmp817;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp817));
                                                $tmp730 = 2;
                                                goto $l728;
                                                $l818:;
                                                $tmp670 = 3;
                                                goto $l668;
                                                $l819:;
                                                $tmp599 = 6;
                                                goto $l597;
                                                $l820:;
                                                $tmp595 = 6;
                                                goto $l593;
                                                $l821:;
                                                return $returnValue623;
                                            }
                                            }
                                            if (((panda$core$Bit) { align743 != NULL }).value) {
                                            {
                                                int $tmp825;
                                                {
                                                    if (((panda$core$Bit) { format745 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp826 = expr733;
                                                            org$pandalanguage$pandac$ASTNode* $tmp829 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr733);
                                                            $tmp828 = $tmp829;
                                                            $tmp827 = $tmp828;
                                                            expr733 = $tmp827;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp833 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp834, 42);
                                                    org$pandalanguage$pandac$Position $tmp836 = (($fn835) expr733->$class->vtable[2])(expr733);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp833, $tmp834, $tmp836, &$s837);
                                                    $tmp832 = $tmp833;
                                                    $tmp831 = $tmp832;
                                                    pandaType830 = $tmp831;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp831));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
                                                    org$pandalanguage$pandac$ASTNode* $tmp841 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp842, 15);
                                                    org$pandalanguage$pandac$Position $tmp844 = (($fn843) expr733->$class->vtable[2])(expr733);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp841, $tmp842, $tmp844, pandaType830, &$s845);
                                                    $tmp840 = $tmp841;
                                                    $tmp839 = $tmp840;
                                                    callTarget838 = $tmp839;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp839));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
                                                    panda$collections$Array* $tmp849 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp849);
                                                    $tmp848 = $tmp849;
                                                    $tmp847 = $tmp848;
                                                    callArgs846 = $tmp847;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs846, ((panda$core$Object*) expr733));
                                                    org$pandalanguage$pandac$ASTNode* $tmp851 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp852, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp851, $tmp852, start606.position, align743);
                                                    $tmp850 = $tmp851;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs846, ((panda$core$Object*) $tmp850));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                                                    {
                                                        $tmp853 = expr733;
                                                        org$pandalanguage$pandac$ASTNode* $tmp856 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp857, 8);
                                                        org$pandalanguage$pandac$Position $tmp859 = (($fn858) expr733->$class->vtable[2])(expr733);
                                                        panda$collections$ImmutableArray* $tmp861 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs846);
                                                        $tmp860 = $tmp861;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp856, $tmp857, $tmp859, callTarget838, $tmp860);
                                                        $tmp855 = $tmp856;
                                                        $tmp854 = $tmp855;
                                                        expr733 = $tmp854;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp860));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                                                    }
                                                }
                                                $tmp825 = -1;
                                                goto $l823;
                                                $l823:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs846));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget838));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType830));
                                                pandaType830 = NULL;
                                                callTarget838 = NULL;
                                                callArgs846 = NULL;
                                                switch ($tmp825) {
                                                    case -1: goto $l862;
                                                }
                                                $l862:;
                                            }
                                            }
                                            panda$core$String* $tmp866 = panda$core$MutableString$finish$R$panda$core$String(chunk630);
                                            $tmp865 = $tmp866;
                                            $tmp864 = $tmp865;
                                            text863 = $tmp864;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp864));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp865));
                                            {
                                                $tmp867 = chunk630;
                                                panda$core$MutableString* $tmp870 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp870);
                                                $tmp869 = $tmp870;
                                                $tmp868 = $tmp869;
                                                chunk630 = $tmp868;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp868));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
                                            }
                                            ITable* $tmp873 = ((panda$core$Equatable*) text863)->$class->itable;
                                            while ($tmp873->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                                                $tmp873 = $tmp873->next;
                                            }
                                            $fn875 $tmp874 = $tmp873->methods[1];
                                            panda$core$Bit $tmp876 = $tmp874(((panda$core$Equatable*) text863), ((panda$core$Equatable*) &$s872));
                                            bool $tmp871 = $tmp876.value;
                                            if ($tmp871) goto $l877;
                                            $tmp871 = ((panda$core$Bit) { result628 != NULL }).value;
                                            $l877:;
                                            panda$core$Bit $tmp878 = { $tmp871 };
                                            if ($tmp878.value) {
                                            {
                                                {
                                                    $tmp879 = result628;
                                                    org$pandalanguage$pandac$ASTNode* $tmp883 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp884, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp883, $tmp884, start606.position, text863);
                                                    $tmp882 = $tmp883;
                                                    org$pandalanguage$pandac$ASTNode* $tmp885 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result628, $tmp882);
                                                    $tmp881 = $tmp885;
                                                    $tmp880 = $tmp881;
                                                    result628 = $tmp880;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp880));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                                                }
                                                {
                                                    $tmp886 = result628;
                                                    org$pandalanguage$pandac$ASTNode* $tmp889 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result628, expr733);
                                                    $tmp888 = $tmp889;
                                                    $tmp887 = $tmp888;
                                                    result628 = $tmp887;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp890 = result628;
                                                    org$pandalanguage$pandac$ASTNode* $tmp893 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr733);
                                                    $tmp892 = $tmp893;
                                                    $tmp891 = $tmp892;
                                                    result628 = $tmp891;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
                                                }
                                            }
                                            }
                                        }
                                        $tmp730 = -1;
                                        goto $l728;
                                        $l728:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text863));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format745));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align743));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr733));
                                        expr733 = NULL;
                                        text863 = NULL;
                                        switch ($tmp730) {
                                            case -1: goto $l894;
                                            case 2: goto $l818;
                                            case 0: goto $l738;
                                            case 1: goto $l766;
                                        }
                                        $l894:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token636, &$s895);
                                    $tmp896 = NULL;
                                    $returnValue623 = $tmp896;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
                                    $tmp670 = 4;
                                    goto $l668;
                                    $l897:;
                                    $tmp599 = 7;
                                    goto $l597;
                                    $l898:;
                                    $tmp595 = 7;
                                    goto $l593;
                                    $l899:;
                                    return $returnValue623;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp903 = panda$core$String$start$R$panda$core$String$Index(escapeText681);
                            panda$core$String$Index $tmp904 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText681, $tmp903);
                            panda$core$Bit$init$builtin_bit(&$tmp905, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp902, ((panda$core$String$Index$nullable) { $tmp904, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp905);
                            panda$core$String* $tmp906 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText681, $tmp902);
                            $tmp901 = $tmp906;
                            panda$core$MutableString$append$panda$core$String(chunk630, $tmp901);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
                        }
                        $tmp670 = -1;
                        goto $l668;
                        $l668:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText681));
                        escapeText681 = NULL;
                        switch ($tmp670) {
                            case 2: goto $l767;
                            case 4: goto $l897;
                            case 1: goto $l739;
                            case 3: goto $l819;
                            case 0: goto $l677;
                            case -1: goto $l907;
                        }
                        $l907:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp909 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token636);
                        $tmp908 = $tmp909;
                        panda$core$MutableString$append$panda$core$String(chunk630, $tmp908);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l635:;
            org$pandalanguage$pandac$ASTNode* $tmp913 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp914, 38);
            panda$core$String* $tmp916 = panda$core$MutableString$finish$R$panda$core$String(chunk630);
            $tmp915 = $tmp916;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp913, $tmp914, start606.position, $tmp915);
            $tmp912 = $tmp913;
            org$pandalanguage$pandac$ASTNode* $tmp917 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result628, $tmp912);
            $tmp911 = $tmp917;
            $tmp910 = $tmp911;
            $returnValue623 = $tmp910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp910));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
            $tmp599 = 8;
            goto $l597;
            $l918:;
            $tmp595 = 8;
            goto $l593;
            $l919:;
            return $returnValue623;
        }
        $l597:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto600));
        auto600 = NULL;
        chunk630 = NULL;
        switch ($tmp599) {
            case 5: goto $l768;
            case 4: goto $l740;
            case 0: goto $l625;
            case 8: goto $l918;
            case 1: goto $l655;
            case 6: goto $l820;
            case 3: goto $l678;
            case 2: goto $l663;
            case 7: goto $l898;
        }
        $l921:;
    }
    $tmp595 = -1;
    goto $l593;
    $l593:;
    panda$core$Bit $tmp923 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1596);
    if ($tmp923.value) goto $l924; else goto $l925;
    $l925:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s926, (panda$core$Int64) { 337 }, &$s927);
    abort();
    $l924:;
    switch ($tmp595) {
        case -1: goto $l922;
        case 5: goto $l769;
        case 8: goto $l919;
        case 3: goto $l679;
        case 0: goto $l626;
        case 1: goto $l656;
        case 2: goto $l664;
        case 7: goto $l899;
        case 6: goto $l821;
        case 4: goto $l741;
    }
    $l922:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start931;
    org$pandalanguage$pandac$parser$Token$Kind $tmp932;
    panda$core$Int64 $tmp933;
    org$pandalanguage$pandac$ASTNode* $returnValue936;
    org$pandalanguage$pandac$ASTNode* $tmp937;
    org$pandalanguage$pandac$ASTNode* expr940 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp941;
    org$pandalanguage$pandac$ASTNode* $tmp942;
    org$pandalanguage$pandac$ASTNode* $tmp944;
    org$pandalanguage$pandac$ASTNode* $match$456_9950 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp951;
    panda$core$Int64 $tmp952;
    org$pandalanguage$pandac$Position firstPosition954;
    panda$core$String* firstName956 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp958;
    panda$core$Int64 $tmp959;
    panda$collections$Array* parameters964 = NULL;
    panda$collections$Array* $tmp965;
    panda$collections$Array* $tmp966;
    org$pandalanguage$pandac$ASTNode* firstType968 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp969;
    org$pandalanguage$pandac$ASTNode* $tmp970;
    org$pandalanguage$pandac$ASTNode* $tmp972;
    org$pandalanguage$pandac$ASTNode* $tmp977;
    panda$core$Int64 $tmp979;
    org$pandalanguage$pandac$parser$Token$Kind $tmp983;
    panda$core$Int64 $tmp984;
    org$pandalanguage$pandac$parser$Token$nullable nextName989;
    org$pandalanguage$pandac$parser$Token$Kind $tmp990;
    panda$core$Int64 $tmp991;
    org$pandalanguage$pandac$parser$Token$Kind $tmp994;
    panda$core$Int64 $tmp995;
    org$pandalanguage$pandac$ASTNode* $tmp998;
    org$pandalanguage$pandac$ASTNode* nextType1004 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1005;
    org$pandalanguage$pandac$ASTNode* $tmp1006;
    org$pandalanguage$pandac$ASTNode* $tmp1008;
    org$pandalanguage$pandac$ASTNode* $tmp1014;
    panda$core$Int64 $tmp1016;
    panda$core$String* $tmp1017;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1020;
    panda$core$Int64 $tmp1021;
    org$pandalanguage$pandac$ASTNode* $tmp1024;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1029;
    panda$core$Int64 $tmp1030;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$ASTNode* body1038 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1039;
    org$pandalanguage$pandac$ASTNode* $tmp1040;
    org$pandalanguage$pandac$ASTNode* $tmp1042;
    org$pandalanguage$pandac$ASTNode* $tmp1047;
    org$pandalanguage$pandac$ASTNode* $tmp1048;
    panda$core$Int64 $tmp1050;
    panda$collections$ImmutableArray* $tmp1051;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1058;
    panda$core$Int64 $tmp1059;
    panda$collections$Array* parameters1064 = NULL;
    panda$collections$Array* $tmp1065;
    panda$collections$Array* $tmp1066;
    panda$core$Bit validLambda1068;
    panda$core$Bit $tmp1069;
    org$pandalanguage$pandac$ASTNode* nextExpr1075 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1076;
    org$pandalanguage$pandac$ASTNode* $tmp1077;
    org$pandalanguage$pandac$ASTNode* $tmp1079;
    org$pandalanguage$pandac$ASTNode* $tmp1087;
    panda$core$Int64 $tmp1092;
    panda$core$Bit $tmp1094;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1098;
    panda$core$Int64 $tmp1099;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1101;
    panda$core$Int64 $tmp1102;
    org$pandalanguage$pandac$ASTNode* $tmp1105;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1112;
    panda$core$Int64 $tmp1113;
    org$pandalanguage$pandac$ASTNode* body1119 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1120;
    org$pandalanguage$pandac$ASTNode* $tmp1121;
    org$pandalanguage$pandac$ASTNode* $tmp1123;
    org$pandalanguage$pandac$ASTNode* $tmp1129;
    org$pandalanguage$pandac$ASTNode* $tmp1130;
    panda$core$Int64 $tmp1132;
    panda$collections$ImmutableArray* $tmp1133;
    org$pandalanguage$pandac$ASTNode* $tmp1142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1148;
    panda$core$Int64 $tmp1149;
    org$pandalanguage$pandac$ASTNode* $tmp1152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1156;
    panda$core$Int64 $tmp1157;
    panda$collections$Array* parameters1162 = NULL;
    panda$collections$Array* $tmp1163;
    panda$collections$Array* $tmp1164;
    org$pandalanguage$pandac$ASTNode* body1166 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1167;
    org$pandalanguage$pandac$ASTNode* $tmp1168;
    org$pandalanguage$pandac$ASTNode* $tmp1170;
    org$pandalanguage$pandac$ASTNode* $tmp1175;
    org$pandalanguage$pandac$ASTNode* $tmp1176;
    panda$core$Int64 $tmp1178;
    panda$collections$ImmutableArray* $tmp1179;
    org$pandalanguage$pandac$ASTNode* $tmp1186;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1193;
    panda$core$Int64 $tmp1194;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1196;
    panda$core$Int64 $tmp1197;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    panda$collections$Array* arguments1204 = NULL;
    panda$collections$Array* $tmp1205;
    panda$collections$Array* $tmp1206;
    org$pandalanguage$pandac$ASTNode* nextExpr1213 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1214;
    org$pandalanguage$pandac$ASTNode* $tmp1215;
    org$pandalanguage$pandac$ASTNode* $tmp1217;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1225;
    panda$core$Int64 $tmp1226;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1228;
    panda$core$Int64 $tmp1229;
    org$pandalanguage$pandac$ASTNode* $tmp1232;
    int $tmp930;
    {
        panda$core$Int64$init$builtin_int64(&$tmp933, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp932, $tmp933);
        org$pandalanguage$pandac$parser$Token$nullable $tmp935 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp932, &$s934);
        start931 = $tmp935;
        if (((panda$core$Bit) { !start931.nonnull }).value) {
        {
            $tmp937 = NULL;
            $returnValue936 = $tmp937;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp937));
            $tmp930 = 0;
            goto $l928;
            $l938:;
            return $returnValue936;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp943 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp942 = $tmp943;
        $tmp941 = $tmp942;
        expr940 = $tmp941;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
        if (((panda$core$Bit) { expr940 == NULL }).value) {
        {
            $tmp944 = NULL;
            $returnValue936 = $tmp944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
            $tmp930 = 1;
            goto $l928;
            $l945:;
            return $returnValue936;
        }
        }
        int $tmp949;
        {
            $tmp951 = expr940;
            $match$456_9950 = $tmp951;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp951));
            panda$core$Int64$init$builtin_int64(&$tmp952, 20);
            panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9950->$rawValue, $tmp952);
            if ($tmp953.value) {
            {
                org$pandalanguage$pandac$Position* $tmp955 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_9950->$data + 0));
                firstPosition954 = *$tmp955;
                panda$core$String** $tmp957 = ((panda$core$String**) ((char*) $match$456_9950->$data + 16));
                firstName956 = *$tmp957;
                panda$core$Int64$init$builtin_int64(&$tmp959, 96);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp958, $tmp959);
                org$pandalanguage$pandac$parser$Token$nullable $tmp960 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp958);
                if (((panda$core$Bit) { $tmp960.nonnull }).value) {
                {
                    int $tmp963;
                    {
                        panda$collections$Array* $tmp967 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp967);
                        $tmp966 = $tmp967;
                        $tmp965 = $tmp966;
                        parameters964 = $tmp965;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                        org$pandalanguage$pandac$ASTNode* $tmp971 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp970 = $tmp971;
                        $tmp969 = $tmp970;
                        firstType968 = $tmp969;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
                        if (((panda$core$Bit) { firstType968 == NULL }).value) {
                        {
                            $tmp972 = NULL;
                            $returnValue936 = $tmp972;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
                            $tmp963 = 0;
                            goto $l961;
                            $l973:;
                            $tmp949 = 0;
                            goto $l947;
                            $l974:;
                            $tmp930 = 2;
                            goto $l928;
                            $l975:;
                            return $returnValue936;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp978 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp979, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp978, $tmp979, firstPosition954, firstName956, firstType968);
                        $tmp977 = $tmp978;
                        panda$collections$Array$add$panda$collections$Array$T(parameters964, ((panda$core$Object*) $tmp977));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
                        $l980:;
                        panda$core$Int64$init$builtin_int64(&$tmp984, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp983, $tmp984);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp985 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp983);
                        bool $tmp982 = ((panda$core$Bit) { $tmp985.nonnull }).value;
                        if (!$tmp982) goto $l981;
                        {
                            int $tmp988;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp991, 49);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp990, $tmp991);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp993 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp990, &$s992);
                                nextName989 = $tmp993;
                                panda$core$Int64$init$builtin_int64(&$tmp995, 96);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp994, $tmp995);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp997 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp994, &$s996);
                                if (((panda$core$Bit) { !$tmp997.nonnull }).value) {
                                {
                                    $tmp998 = NULL;
                                    $returnValue936 = $tmp998;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                                    $tmp988 = 0;
                                    goto $l986;
                                    $l999:;
                                    $tmp963 = 1;
                                    goto $l961;
                                    $l1000:;
                                    $tmp949 = 1;
                                    goto $l947;
                                    $l1001:;
                                    $tmp930 = 3;
                                    goto $l928;
                                    $l1002:;
                                    return $returnValue936;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1007 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1006 = $tmp1007;
                                $tmp1005 = $tmp1006;
                                nextType1004 = $tmp1005;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                                if (((panda$core$Bit) { nextType1004 == NULL }).value) {
                                {
                                    $tmp1008 = NULL;
                                    $returnValue936 = $tmp1008;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
                                    $tmp988 = 1;
                                    goto $l986;
                                    $l1009:;
                                    $tmp963 = 2;
                                    goto $l961;
                                    $l1010:;
                                    $tmp949 = 2;
                                    goto $l947;
                                    $l1011:;
                                    $tmp930 = 4;
                                    goto $l928;
                                    $l1012:;
                                    return $returnValue936;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1015 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1016, 31);
                                panda$core$String* $tmp1018 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName989.value));
                                $tmp1017 = $tmp1018;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1015, $tmp1016, ((org$pandalanguage$pandac$parser$Token) nextName989.value).position, $tmp1017, nextType1004);
                                $tmp1014 = $tmp1015;
                                panda$collections$Array$add$panda$collections$Array$T(parameters964, ((panda$core$Object*) $tmp1014));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
                            }
                            $tmp988 = -1;
                            goto $l986;
                            $l986:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType1004));
                            nextType1004 = NULL;
                            switch ($tmp988) {
                                case -1: goto $l1019;
                                case 0: goto $l999;
                                case 1: goto $l1009;
                            }
                            $l1019:;
                        }
                        goto $l980;
                        $l981:;
                        panda$core$Int64$init$builtin_int64(&$tmp1021, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1020, $tmp1021);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1023 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1020, &$s1022);
                        if (((panda$core$Bit) { !$tmp1023.nonnull }).value) {
                        {
                            $tmp1024 = NULL;
                            $returnValue936 = $tmp1024;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
                            $tmp963 = 3;
                            goto $l961;
                            $l1025:;
                            $tmp949 = 3;
                            goto $l947;
                            $l1026:;
                            $tmp930 = 5;
                            goto $l928;
                            $l1027:;
                            return $returnValue936;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1030, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1029, $tmp1030);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1029, &$s1031);
                        if (((panda$core$Bit) { !$tmp1032.nonnull }).value) {
                        {
                            $tmp1033 = NULL;
                            $returnValue936 = $tmp1033;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                            $tmp963 = 4;
                            goto $l961;
                            $l1034:;
                            $tmp949 = 4;
                            goto $l947;
                            $l1035:;
                            $tmp930 = 6;
                            goto $l928;
                            $l1036:;
                            return $returnValue936;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1041 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1040 = $tmp1041;
                        $tmp1039 = $tmp1040;
                        body1038 = $tmp1039;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                        if (((panda$core$Bit) { body1038 == NULL }).value) {
                        {
                            $tmp1042 = NULL;
                            $returnValue936 = $tmp1042;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                            $tmp963 = 5;
                            goto $l961;
                            $l1043:;
                            $tmp949 = 5;
                            goto $l947;
                            $l1044:;
                            $tmp930 = 7;
                            goto $l928;
                            $l1045:;
                            return $returnValue936;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1049 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1050, 43);
                        panda$collections$ImmutableArray* $tmp1052 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters964);
                        $tmp1051 = $tmp1052;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1049, $tmp1050, ((org$pandalanguage$pandac$parser$Token) start931.value).position, $tmp1051, body1038);
                        $tmp1048 = $tmp1049;
                        $tmp1047 = $tmp1048;
                        $returnValue936 = $tmp1047;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
                        $tmp963 = 6;
                        goto $l961;
                        $l1053:;
                        $tmp949 = 6;
                        goto $l947;
                        $l1054:;
                        $tmp930 = 8;
                        goto $l928;
                        $l1055:;
                        return $returnValue936;
                    }
                    $l961:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1038));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType968));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters964));
                    parameters964 = NULL;
                    firstType968 = NULL;
                    body1038 = NULL;
                    switch ($tmp963) {
                        case 1: goto $l1000;
                        case 4: goto $l1034;
                        case 0: goto $l973;
                        case 2: goto $l1010;
                        case 3: goto $l1025;
                        case 5: goto $l1043;
                        case 6: goto $l1053;
                    }
                    $l1057:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1059, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1058, $tmp1059);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1060 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1058);
                if (((panda$core$Bit) { $tmp1060.nonnull }).value) {
                {
                    int $tmp1063;
                    {
                        panda$collections$Array* $tmp1067 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1067);
                        $tmp1066 = $tmp1067;
                        $tmp1065 = $tmp1066;
                        parameters1064 = $tmp1065;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1064, ((panda$core$Object*) expr940));
                        panda$core$Bit$init$builtin_bit(&$tmp1069, true);
                        validLambda1068 = $tmp1069;
                        $l1070:;
                        {
                            int $tmp1074;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1078 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1077 = $tmp1078;
                                $tmp1076 = $tmp1077;
                                nextExpr1075 = $tmp1076;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1076));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1077));
                                if (((panda$core$Bit) { nextExpr1075 == NULL }).value) {
                                {
                                    $tmp1079 = NULL;
                                    $returnValue936 = $tmp1079;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1079));
                                    $tmp1074 = 0;
                                    goto $l1072;
                                    $l1080:;
                                    $tmp1063 = 0;
                                    goto $l1061;
                                    $l1081:;
                                    $tmp949 = 7;
                                    goto $l947;
                                    $l1082:;
                                    $tmp930 = 9;
                                    goto $l928;
                                    $l1083:;
                                    return $returnValue936;
                                }
                                }
                                bool $tmp1085 = validLambda1068.value;
                                if (!$tmp1085) goto $l1086;
                                $tmp1087 = nextExpr1075;
                                panda$core$Bit $tmp1091;
                                if (((panda$core$Bit) { $tmp1087 != NULL }).value) goto $l1088; else goto $l1089;
                                $l1088:;
                                panda$core$Int64$init$builtin_int64(&$tmp1092, 20);
                                panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1087->$rawValue, $tmp1092);
                                $tmp1091 = $tmp1093;
                                goto $l1090;
                                $l1089:;
                                panda$core$Bit$init$builtin_bit(&$tmp1094, false);
                                $tmp1091 = $tmp1094;
                                goto $l1090;
                                $l1090:;
                                $tmp1085 = $tmp1091.value;
                                $l1086:;
                                panda$core$Bit $tmp1095 = { $tmp1085 };
                                validLambda1068 = $tmp1095;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1064, ((panda$core$Object*) nextExpr1075));
                            }
                            $tmp1074 = -1;
                            goto $l1072;
                            $l1072:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1075));
                            nextExpr1075 = NULL;
                            switch ($tmp1074) {
                                case 0: goto $l1080;
                                case -1: goto $l1096;
                            }
                            $l1096:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1099, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1098, $tmp1099);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1100 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1098);
                        bool $tmp1097 = ((panda$core$Bit) { $tmp1100.nonnull }).value;
                        if ($tmp1097) goto $l1070;
                        $l1071:;
                        panda$core$Int64$init$builtin_int64(&$tmp1102, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1101, $tmp1102);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1104 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1101, &$s1103);
                        if (((panda$core$Bit) { !$tmp1104.nonnull }).value) {
                        {
                            $tmp1105 = NULL;
                            $returnValue936 = $tmp1105;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
                            $tmp1063 = 1;
                            goto $l1061;
                            $l1106:;
                            $tmp949 = 8;
                            goto $l947;
                            $l1107:;
                            $tmp930 = 10;
                            goto $l928;
                            $l1108:;
                            return $returnValue936;
                        }
                        }
                        bool $tmp1110 = validLambda1068.value;
                        if (!$tmp1110) goto $l1111;
                        panda$core$Int64$init$builtin_int64(&$tmp1113, 91);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1112, $tmp1113);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1114 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1112);
                        $tmp1110 = ((panda$core$Bit) { $tmp1114.nonnull }).value;
                        $l1111:;
                        panda$core$Bit $tmp1115 = { $tmp1110 };
                        if ($tmp1115.value) {
                        {
                            int $tmp1118;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1122 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1121 = $tmp1122;
                                $tmp1120 = $tmp1121;
                                body1119 = $tmp1120;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1120));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
                                if (((panda$core$Bit) { body1119 == NULL }).value) {
                                {
                                    $tmp1123 = NULL;
                                    $returnValue936 = $tmp1123;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
                                    $tmp1118 = 0;
                                    goto $l1116;
                                    $l1124:;
                                    $tmp1063 = 2;
                                    goto $l1061;
                                    $l1125:;
                                    $tmp949 = 9;
                                    goto $l947;
                                    $l1126:;
                                    $tmp930 = 11;
                                    goto $l928;
                                    $l1127:;
                                    return $returnValue936;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1131 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1132, 45);
                                panda$collections$ImmutableArray* $tmp1134 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1064);
                                $tmp1133 = $tmp1134;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1131, $tmp1132, ((org$pandalanguage$pandac$parser$Token) start931.value).position, $tmp1133, body1119);
                                $tmp1130 = $tmp1131;
                                $tmp1129 = $tmp1130;
                                $returnValue936 = $tmp1129;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1129));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                                $tmp1118 = 1;
                                goto $l1116;
                                $l1135:;
                                $tmp1063 = 3;
                                goto $l1061;
                                $l1136:;
                                $tmp949 = 10;
                                goto $l947;
                                $l1137:;
                                $tmp930 = 12;
                                goto $l928;
                                $l1138:;
                                return $returnValue936;
                            }
                            $l1116:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1119));
                            body1119 = NULL;
                            switch ($tmp1118) {
                                case 1: goto $l1135;
                                case 0: goto $l1124;
                            }
                            $l1140:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start931.value), &$s1141);
                        $tmp1142 = NULL;
                        $returnValue936 = $tmp1142;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
                        $tmp1063 = 4;
                        goto $l1061;
                        $l1143:;
                        $tmp949 = 11;
                        goto $l947;
                        $l1144:;
                        $tmp930 = 13;
                        goto $l928;
                        $l1145:;
                        return $returnValue936;
                    }
                    $l1061:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1064));
                    parameters1064 = NULL;
                    switch ($tmp1063) {
                        case 2: goto $l1125;
                        case 3: goto $l1136;
                        case 0: goto $l1081;
                        case 1: goto $l1106;
                        case 4: goto $l1143;
                    }
                    $l1147:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1149, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1148, $tmp1149);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1151 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1148, &$s1150);
                if (((panda$core$Bit) { !$tmp1151.nonnull }).value) {
                {
                    $tmp1152 = NULL;
                    $returnValue936 = $tmp1152;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
                    $tmp949 = 12;
                    goto $l947;
                    $l1153:;
                    $tmp930 = 14;
                    goto $l928;
                    $l1154:;
                    return $returnValue936;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1157, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1156, $tmp1157);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1158 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1156);
                if (((panda$core$Bit) { $tmp1158.nonnull }).value) {
                {
                    int $tmp1161;
                    {
                        panda$collections$Array* $tmp1165 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1165);
                        $tmp1164 = $tmp1165;
                        $tmp1163 = $tmp1164;
                        parameters1162 = $tmp1163;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1163));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1164));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1162, ((panda$core$Object*) expr940));
                        org$pandalanguage$pandac$ASTNode* $tmp1169 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1168 = $tmp1169;
                        $tmp1167 = $tmp1168;
                        body1166 = $tmp1167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1168));
                        if (((panda$core$Bit) { body1166 == NULL }).value) {
                        {
                            $tmp1170 = NULL;
                            $returnValue936 = $tmp1170;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                            $tmp1161 = 0;
                            goto $l1159;
                            $l1171:;
                            $tmp949 = 13;
                            goto $l947;
                            $l1172:;
                            $tmp930 = 15;
                            goto $l928;
                            $l1173:;
                            return $returnValue936;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1177 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1178, 45);
                        panda$collections$ImmutableArray* $tmp1180 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1162);
                        $tmp1179 = $tmp1180;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1177, $tmp1178, ((org$pandalanguage$pandac$parser$Token) start931.value).position, $tmp1179, body1166);
                        $tmp1176 = $tmp1177;
                        $tmp1175 = $tmp1176;
                        $returnValue936 = $tmp1175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1179));
                        $tmp1161 = 1;
                        goto $l1159;
                        $l1181:;
                        $tmp949 = 14;
                        goto $l947;
                        $l1182:;
                        $tmp930 = 16;
                        goto $l928;
                        $l1183:;
                        return $returnValue936;
                    }
                    $l1159:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1166));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1162));
                    parameters1162 = NULL;
                    body1166 = NULL;
                    switch ($tmp1161) {
                        case 1: goto $l1181;
                        case 0: goto $l1171;
                    }
                    $l1185:;
                }
                }
                $tmp1186 = expr940;
                $returnValue936 = $tmp1186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                $tmp949 = 15;
                goto $l947;
                $l1187:;
                $tmp930 = 17;
                goto $l928;
                $l1188:;
                return $returnValue936;
            }
            }
            else {
            {
                int $tmp1192;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1194, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1193, $tmp1194);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1195 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1193);
                    if (((panda$core$Bit) { !$tmp1195.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1197, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1196, $tmp1197);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1196, &$s1198);
                        $tmp1199 = expr940;
                        $returnValue936 = $tmp1199;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                        $tmp1192 = 0;
                        goto $l1190;
                        $l1200:;
                        $tmp949 = 16;
                        goto $l947;
                        $l1201:;
                        $tmp930 = 18;
                        goto $l928;
                        $l1202:;
                        return $returnValue936;
                    }
                    }
                    panda$collections$Array* $tmp1207 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1207);
                    $tmp1206 = $tmp1207;
                    $tmp1205 = $tmp1206;
                    arguments1204 = $tmp1205;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1204, ((panda$core$Object*) expr940));
                    $l1208:;
                    {
                        int $tmp1212;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1216 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1215 = $tmp1216;
                            $tmp1214 = $tmp1215;
                            nextExpr1213 = $tmp1214;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                            if (((panda$core$Bit) { nextExpr1213 == NULL }).value) {
                            {
                                $tmp1217 = NULL;
                                $returnValue936 = $tmp1217;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                                $tmp1212 = 0;
                                goto $l1210;
                                $l1218:;
                                $tmp1192 = 1;
                                goto $l1190;
                                $l1219:;
                                $tmp949 = 17;
                                goto $l947;
                                $l1220:;
                                $tmp930 = 19;
                                goto $l928;
                                $l1221:;
                                return $returnValue936;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1204, ((panda$core$Object*) nextExpr1213));
                        }
                        $tmp1212 = -1;
                        goto $l1210;
                        $l1210:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1213));
                        nextExpr1213 = NULL;
                        switch ($tmp1212) {
                            case -1: goto $l1223;
                            case 0: goto $l1218;
                        }
                        $l1223:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1226, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1225, $tmp1226);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1227 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1225);
                    bool $tmp1224 = ((panda$core$Bit) { $tmp1227.nonnull }).value;
                    if ($tmp1224) goto $l1208;
                    $l1209:;
                    panda$core$Int64$init$builtin_int64(&$tmp1229, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1228, $tmp1229);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1228, &$s1230);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start931.value), &$s1231);
                    $tmp1232 = NULL;
                    $returnValue936 = $tmp1232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1232));
                    $tmp1192 = 2;
                    goto $l1190;
                    $l1233:;
                    $tmp949 = 18;
                    goto $l947;
                    $l1234:;
                    $tmp930 = 20;
                    goto $l928;
                    $l1235:;
                    return $returnValue936;
                }
                $l1190:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1204));
                arguments1204 = NULL;
                switch ($tmp1192) {
                    case 0: goto $l1200;
                    case 2: goto $l1233;
                    case 1: goto $l1219;
                }
                $l1237:;
            }
            }
        }
        $tmp949 = -1;
        goto $l947;
        $l947:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
        switch ($tmp949) {
            case 1: goto $l1001;
            case -1: goto $l1238;
            case 12: goto $l1153;
            case 9: goto $l1126;
            case 3: goto $l1026;
            case 7: goto $l1082;
            case 18: goto $l1234;
            case 15: goto $l1187;
            case 16: goto $l1201;
            case 14: goto $l1182;
            case 13: goto $l1172;
            case 4: goto $l1035;
            case 5: goto $l1044;
            case 11: goto $l1144;
            case 2: goto $l1011;
            case 0: goto $l974;
            case 10: goto $l1137;
            case 8: goto $l1107;
            case 6: goto $l1054;
            case 17: goto $l1220;
        }
        $l1238:;
    }
    $tmp930 = -1;
    goto $l928;
    $l928:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr940));
    expr940 = NULL;
    switch ($tmp930) {
        case 19: goto $l1221;
        case 3: goto $l1002;
        case -1: goto $l1239;
        case 11: goto $l1127;
        case 1: goto $l945;
        case 20: goto $l1235;
        case 5: goto $l1027;
        case 14: goto $l1154;
        case 18: goto $l1202;
        case 15: goto $l1173;
        case 17: goto $l1188;
        case 16: goto $l1183;
        case 7: goto $l1045;
        case 6: goto $l1036;
        case 13: goto $l1145;
        case 12: goto $l1138;
        case 2: goto $l975;
        case 10: goto $l1108;
        case 4: goto $l1012;
        case 8: goto $l1055;
        case 9: goto $l1083;
        case 0: goto $l938;
    }
    $l1239:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1243;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1244;
    panda$core$Int64 $tmp1245;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1248;
    panda$core$Int64 $tmp1249;
    org$pandalanguage$pandac$ASTNode* t1254 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1255;
    org$pandalanguage$pandac$ASTNode* $tmp1256;
    org$pandalanguage$pandac$ASTNode* $returnValue1258;
    org$pandalanguage$pandac$ASTNode* $tmp1259;
    panda$collections$Array* parameters1263 = NULL;
    panda$collections$Array* $tmp1264;
    panda$collections$Array* $tmp1265;
    org$pandalanguage$pandac$ASTNode* $tmp1267;
    panda$core$Int64 $tmp1269;
    panda$core$String* $tmp1270;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1272;
    panda$core$Int64 $tmp1273;
    org$pandalanguage$pandac$ASTNode* $tmp1276;
    org$pandalanguage$pandac$ASTNode* expr1280 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1281;
    org$pandalanguage$pandac$ASTNode* $tmp1282;
    org$pandalanguage$pandac$ASTNode* $tmp1284;
    org$pandalanguage$pandac$ASTNode* $tmp1288;
    org$pandalanguage$pandac$ASTNode* $tmp1289;
    panda$core$Int64 $tmp1291;
    panda$collections$ImmutableArray* $tmp1292;
    panda$collections$Array* parameters1298 = NULL;
    panda$collections$Array* $tmp1299;
    panda$collections$Array* $tmp1300;
    org$pandalanguage$pandac$ASTNode* $tmp1302;
    panda$core$Int64 $tmp1304;
    panda$core$String* $tmp1305;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1307;
    panda$core$Int64 $tmp1308;
    org$pandalanguage$pandac$ASTNode* $tmp1311;
    org$pandalanguage$pandac$ASTNode* expr1314 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1315;
    org$pandalanguage$pandac$ASTNode* $tmp1316;
    org$pandalanguage$pandac$ASTNode* $tmp1318;
    org$pandalanguage$pandac$ASTNode* $tmp1321;
    org$pandalanguage$pandac$ASTNode* $tmp1322;
    panda$core$Int64 $tmp1324;
    panda$collections$ImmutableArray* $tmp1325;
    int $tmp1242;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1245, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1244, $tmp1245);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1247 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1244, &$s1246);
        start1243 = $tmp1247;
        panda$core$Int64$init$builtin_int64(&$tmp1249, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1248, $tmp1249);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1248);
        if (((panda$core$Bit) { $tmp1250.nonnull }).value) {
        {
            int $tmp1253;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1257 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1256 = $tmp1257;
                $tmp1255 = $tmp1256;
                t1254 = $tmp1255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
                if (((panda$core$Bit) { t1254 == NULL }).value) {
                {
                    $tmp1259 = NULL;
                    $returnValue1258 = $tmp1259;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1259));
                    $tmp1253 = 0;
                    goto $l1251;
                    $l1260:;
                    $tmp1242 = 0;
                    goto $l1240;
                    $l1261:;
                    return $returnValue1258;
                }
                }
                panda$collections$Array* $tmp1266 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1266);
                $tmp1265 = $tmp1266;
                $tmp1264 = $tmp1265;
                parameters1263 = $tmp1264;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
                org$pandalanguage$pandac$ASTNode* $tmp1268 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1269, 31);
                panda$core$String* $tmp1271 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1243.value));
                $tmp1270 = $tmp1271;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1268, $tmp1269, ((org$pandalanguage$pandac$parser$Token) start1243.value).position, $tmp1270, t1254);
                $tmp1267 = $tmp1268;
                panda$collections$Array$add$panda$collections$Array$T(parameters1263, ((panda$core$Object*) $tmp1267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
                panda$core$Int64$init$builtin_int64(&$tmp1273, 91);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1272, $tmp1273);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1275 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1272, &$s1274);
                if (((panda$core$Bit) { !$tmp1275.nonnull }).value) {
                {
                    $tmp1276 = NULL;
                    $returnValue1258 = $tmp1276;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                    $tmp1253 = 1;
                    goto $l1251;
                    $l1277:;
                    $tmp1242 = 1;
                    goto $l1240;
                    $l1278:;
                    return $returnValue1258;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1283 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1282 = $tmp1283;
                $tmp1281 = $tmp1282;
                expr1280 = $tmp1281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                if (((panda$core$Bit) { expr1280 == NULL }).value) {
                {
                    $tmp1284 = NULL;
                    $returnValue1258 = $tmp1284;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
                    $tmp1253 = 2;
                    goto $l1251;
                    $l1285:;
                    $tmp1242 = 2;
                    goto $l1240;
                    $l1286:;
                    return $returnValue1258;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1290 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1291, 43);
                panda$collections$ImmutableArray* $tmp1293 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1263);
                $tmp1292 = $tmp1293;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1290, $tmp1291, ((org$pandalanguage$pandac$parser$Token) start1243.value).position, $tmp1292, expr1280);
                $tmp1289 = $tmp1290;
                $tmp1288 = $tmp1289;
                $returnValue1258 = $tmp1288;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1288));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1292));
                $tmp1253 = 3;
                goto $l1251;
                $l1294:;
                $tmp1242 = 3;
                goto $l1240;
                $l1295:;
                return $returnValue1258;
            }
            $l1251:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1280));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1254));
            t1254 = NULL;
            parameters1263 = NULL;
            expr1280 = NULL;
            switch ($tmp1253) {
                case 1: goto $l1277;
                case 3: goto $l1294;
                case 2: goto $l1285;
                case 0: goto $l1260;
            }
            $l1297:;
        }
        }
        panda$collections$Array* $tmp1301 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1301);
        $tmp1300 = $tmp1301;
        $tmp1299 = $tmp1300;
        parameters1298 = $tmp1299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
        org$pandalanguage$pandac$ASTNode* $tmp1303 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1304, 20);
        panda$core$String* $tmp1306 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1243.value));
        $tmp1305 = $tmp1306;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1303, $tmp1304, ((org$pandalanguage$pandac$parser$Token) start1243.value).position, $tmp1305);
        $tmp1302 = $tmp1303;
        panda$collections$Array$add$panda$collections$Array$T(parameters1298, ((panda$core$Object*) $tmp1302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
        panda$core$Int64$init$builtin_int64(&$tmp1308, 91);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1307, $tmp1308);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1310 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1307, &$s1309);
        if (((panda$core$Bit) { !$tmp1310.nonnull }).value) {
        {
            $tmp1311 = NULL;
            $returnValue1258 = $tmp1311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
            $tmp1242 = 4;
            goto $l1240;
            $l1312:;
            return $returnValue1258;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1317 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1316 = $tmp1317;
        $tmp1315 = $tmp1316;
        expr1314 = $tmp1315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
        if (((panda$core$Bit) { expr1314 == NULL }).value) {
        {
            $tmp1318 = NULL;
            $returnValue1258 = $tmp1318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
            $tmp1242 = 5;
            goto $l1240;
            $l1319:;
            return $returnValue1258;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1323 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1324, 45);
        panda$collections$ImmutableArray* $tmp1326 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1298);
        $tmp1325 = $tmp1326;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1323, $tmp1324, ((org$pandalanguage$pandac$parser$Token) start1243.value).position, $tmp1325, expr1314);
        $tmp1322 = $tmp1323;
        $tmp1321 = $tmp1322;
        $returnValue1258 = $tmp1321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
        $tmp1242 = 6;
        goto $l1240;
        $l1327:;
        return $returnValue1258;
    }
    $l1240:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1314));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1298));
    parameters1298 = NULL;
    expr1314 = NULL;
    switch ($tmp1242) {
        case 5: goto $l1319;
        case 4: goto $l1312;
        case 0: goto $l1261;
        case 2: goto $l1286;
        case 3: goto $l1295;
        case 6: goto $l1327;
        case 1: goto $l1278;
    }
    $l1329:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1333;
    panda$core$Int64 $tmp1334;
    org$pandalanguage$pandac$ASTNode* $returnValue1337;
    org$pandalanguage$pandac$ASTNode* $tmp1338;
    panda$core$Int64 start1341;
    panda$core$Int64 $tmp1342;
    org$pandalanguage$pandac$ASTNode* regex1344 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    org$pandalanguage$pandac$ASTNode* $tmp1346;
    org$pandalanguage$pandac$ASTNode* $tmp1348;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1351;
    panda$core$Int64 $tmp1352;
    org$pandalanguage$pandac$ASTNode* $tmp1355;
    org$pandalanguage$pandac$parser$Token $tmp1360;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1361;
    panda$core$Int64 $tmp1362;
    panda$core$String$Index $tmp1363;
    panda$core$String$Index $tmp1364;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    int $tmp1332;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1334, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1333, $tmp1334);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1336 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1333, &$s1335);
        if (((panda$core$Bit) { !$tmp1336.nonnull }).value) {
        {
            $tmp1338 = NULL;
            $returnValue1337 = $tmp1338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1338));
            $tmp1332 = 0;
            goto $l1330;
            $l1339:;
            return $returnValue1337;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1342, 1);
        panda$core$Int64 $tmp1343 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, $tmp1342);
        start1341 = $tmp1343;
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1347 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1346 = $tmp1347;
        $tmp1345 = $tmp1346;
        regex1344 = $tmp1345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1344 == NULL }).value) {
        {
            $tmp1348 = NULL;
            $returnValue1337 = $tmp1348;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1348));
            $tmp1332 = 1;
            goto $l1330;
            $l1349:;
            return $returnValue1337;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1352, 55);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1351, $tmp1352);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1354 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1351, &$s1353);
        if (((panda$core$Bit) { !$tmp1354.nonnull }).value) {
        {
            $tmp1355 = NULL;
            $returnValue1337 = $tmp1355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1355));
            $tmp1332 = 2;
            goto $l1330;
            $l1356:;
            return $returnValue1337;
        }
        }
        if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
        {
            (($fn1358) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            (($fn1359) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
            panda$core$Int64$init$builtin_int64(&$tmp1362, 2);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1361, $tmp1362);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1363, start1341);
            panda$core$String$Index$init$panda$core$Int64(&$tmp1364, self->lexer->dfa->offset);
            org$pandalanguage$pandac$Position $tmp1366 = (($fn1365) regex1344->$class->vtable[2])(regex1344);
            org$pandalanguage$pandac$parser$Token$init$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$Index$panda$core$String$Index$org$pandalanguage$pandac$Position(&$tmp1360, $tmp1361, $tmp1363, $tmp1364, $tmp1366);
            (($fn1367) self->syntaxHighlighter->$class->vtable[6])(self->syntaxHighlighter, $tmp1360);
        }
        }
        $tmp1368 = regex1344;
        $returnValue1337 = $tmp1368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
        $tmp1332 = 3;
        goto $l1330;
        $l1369:;
        return $returnValue1337;
    }
    $l1330:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1344));
    regex1344 = NULL;
    switch ($tmp1332) {
        case 1: goto $l1349;
        case 2: goto $l1356;
        case 3: goto $l1369;
        case 0: goto $l1339;
    }
    $l1371:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1372;
    org$pandalanguage$pandac$parser$Token$Kind $match$628_91374;
    panda$core$Int64 $tmp1375;
    org$pandalanguage$pandac$parser$Token$Kind check1377;
    panda$core$Int64 $tmp1382;
    panda$core$Int64 $tmp1386;
    org$pandalanguage$pandac$ASTNode* $returnValue1389;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    org$pandalanguage$pandac$ASTNode* $tmp1391;
    org$pandalanguage$pandac$ASTNode* $tmp1394;
    org$pandalanguage$pandac$ASTNode* $tmp1395;
    panda$core$Int64 $tmp1397;
    panda$core$String* $tmp1398;
    panda$core$Int64 $tmp1401;
    org$pandalanguage$pandac$ASTNode* $tmp1403;
    org$pandalanguage$pandac$ASTNode* $tmp1404;
    panda$core$Int64 $tmp1406;
    panda$core$String* $tmp1407;
    panda$core$Int64 $tmp1411;
    org$pandalanguage$pandac$ASTNode* $tmp1413;
    org$pandalanguage$pandac$ASTNode* $tmp1414;
    panda$core$Int64 $tmp1416;
    panda$core$String* $tmp1417;
    panda$core$String* $tmp1418;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1420;
    panda$core$Int64 $tmp1421;
    panda$core$Bit $tmp1422;
    panda$core$Int64 $tmp1424;
    panda$core$Int64 $tmp1427;
    org$pandalanguage$pandac$ASTNode* $tmp1429;
    org$pandalanguage$pandac$ASTNode* $tmp1430;
    panda$core$Int64 $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1436;
    panda$core$Int64 $tmp1437;
    panda$core$Bit $tmp1438;
    panda$core$Int64 $tmp1440;
    panda$core$Int64 $tmp1443;
    org$pandalanguage$pandac$ASTNode* $tmp1445;
    org$pandalanguage$pandac$ASTNode* $tmp1446;
    panda$core$Int64 $tmp1448;
    panda$core$String* $tmp1449;
    panda$core$Int64 $tmp1453;
    org$pandalanguage$pandac$ASTNode* $tmp1455;
    org$pandalanguage$pandac$ASTNode* $tmp1456;
    panda$core$Int64 $tmp1458;
    panda$core$Int64 $tmp1460;
    org$pandalanguage$pandac$ASTNode* $tmp1462;
    org$pandalanguage$pandac$ASTNode* $tmp1463;
    panda$core$Int64 $tmp1465;
    panda$core$Int64 $tmp1467;
    org$pandalanguage$pandac$ASTNode* $tmp1469;
    org$pandalanguage$pandac$ASTNode* $tmp1470;
    panda$core$Int64 $tmp1472;
    panda$core$Int64 $tmp1474;
    org$pandalanguage$pandac$ASTNode* $tmp1476;
    org$pandalanguage$pandac$ASTNode* $tmp1477;
    panda$core$Int64 $tmp1479;
    panda$core$Bit $tmp1480;
    panda$core$Int64 $tmp1482;
    org$pandalanguage$pandac$ASTNode* $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    panda$core$Int64 $tmp1487;
    panda$core$Bit $tmp1488;
    panda$core$Int64 $tmp1491;
    panda$core$Int64 $tmp1494;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    org$pandalanguage$pandac$ASTNode* $tmp1498;
    panda$core$Int64 $tmp1501;
    org$pandalanguage$pandac$ASTNode* $tmp1503;
    org$pandalanguage$pandac$ASTNode* $tmp1504;
    panda$core$Int64 $tmp1507;
    panda$core$String* name1512 = NULL;
    panda$core$String* $tmp1513;
    panda$core$String* $tmp1514;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1521;
    panda$core$Int64 $tmp1522;
    org$pandalanguage$pandac$ASTNode* expr1524 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1525;
    org$pandalanguage$pandac$ASTNode* $tmp1526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1528;
    panda$core$Int64 $tmp1529;
    org$pandalanguage$pandac$ASTNode* $tmp1531;
    org$pandalanguage$pandac$ASTNode* $tmp1532;
    panda$core$Int64 $tmp1534;
    org$pandalanguage$pandac$ASTNode* $tmp1541;
    org$pandalanguage$pandac$ASTNode* $tmp1542;
    panda$core$Int64 $tmp1544;
    panda$core$String* $tmp1547;
    panda$core$String* $tmp1548;
    org$pandalanguage$pandac$ASTNode* $tmp1553;
    panda$core$Int64 $tmp1558;
    panda$core$Int64 $tmp1561;
    org$pandalanguage$pandac$ASTNode* $tmp1564;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$Int64 $tmp1568;
    org$pandalanguage$pandac$ASTNode* $tmp1570;
    org$pandalanguage$pandac$ASTNode* $tmp1571;
    panda$core$String* $tmp1574;
    panda$core$String* $tmp1575;
    panda$core$String* $tmp1577;
    org$pandalanguage$pandac$ASTNode* $tmp1582;
    org$pandalanguage$pandac$parser$Token $tmp1373 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1372 = $tmp1373;
    {
        $match$628_91374 = t1372.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1375, 49);
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1375);
        if ($tmp1376.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1378 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1377 = $tmp1378.kind;
            bool $tmp1380 = self->allowLambdas.value;
            if (!$tmp1380) goto $l1381;
            panda$core$Int64$init$builtin_int64(&$tmp1382, 96);
            panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1377.$rawValue, $tmp1382);
            $tmp1380 = $tmp1383.value;
            $l1381:;
            panda$core$Bit $tmp1384 = { $tmp1380 };
            bool $tmp1379 = $tmp1384.value;
            if ($tmp1379) goto $l1385;
            panda$core$Int64$init$builtin_int64(&$tmp1386, 91);
            panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1377.$rawValue, $tmp1386);
            $tmp1379 = $tmp1387.value;
            $l1385:;
            panda$core$Bit $tmp1388 = { $tmp1379 };
            if ($tmp1388.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1372);
                org$pandalanguage$pandac$ASTNode* $tmp1392 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1391 = $tmp1392;
                $tmp1390 = $tmp1391;
                $returnValue1389 = $tmp1390;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                return $returnValue1389;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1396 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1397, 20);
            panda$core$String* $tmp1399 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
            $tmp1398 = $tmp1399;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1396, $tmp1397, t1372.position, $tmp1398);
            $tmp1395 = $tmp1396;
            $tmp1394 = $tmp1395;
            $returnValue1389 = $tmp1394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1401, 3);
        panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1401);
        if ($tmp1402.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1405 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1406, 22);
            panda$core$String* $tmp1408 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
            $tmp1407 = $tmp1408;
            panda$core$UInt64$nullable $tmp1409 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1407);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1405, $tmp1406, t1372.position, ((panda$core$UInt64) $tmp1409.value));
            $tmp1404 = $tmp1405;
            $tmp1403 = $tmp1404;
            $returnValue1389 = $tmp1403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1411, 4);
        panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1411);
        if ($tmp1412.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1415 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1416, 22);
            panda$core$String* $tmp1419 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
            $tmp1418 = $tmp1419;
            panda$core$Int64$init$builtin_int64(&$tmp1421, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1422, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1420, ((panda$core$Int64$nullable) { $tmp1421, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1422);
            panda$core$String* $tmp1423 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1418, $tmp1420);
            $tmp1417 = $tmp1423;
            panda$core$Int64$init$builtin_int64(&$tmp1424, 2);
            panda$core$UInt64$nullable $tmp1425 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1417, $tmp1424);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1415, $tmp1416, t1372.position, ((panda$core$UInt64) $tmp1425.value));
            $tmp1414 = $tmp1415;
            $tmp1413 = $tmp1414;
            $returnValue1389 = $tmp1413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1427, 5);
        panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1427);
        if ($tmp1428.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1431 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1432, 22);
            panda$core$String* $tmp1435 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
            $tmp1434 = $tmp1435;
            panda$core$Int64$init$builtin_int64(&$tmp1437, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1438, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1436, ((panda$core$Int64$nullable) { $tmp1437, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1438);
            panda$core$String* $tmp1439 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1434, $tmp1436);
            $tmp1433 = $tmp1439;
            panda$core$Int64$init$builtin_int64(&$tmp1440, 16);
            panda$core$UInt64$nullable $tmp1441 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1433, $tmp1440);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1431, $tmp1432, t1372.position, ((panda$core$UInt64) $tmp1441.value));
            $tmp1430 = $tmp1431;
            $tmp1429 = $tmp1430;
            $returnValue1389 = $tmp1429;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1429));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1443, 6);
        panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1443);
        if ($tmp1444.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1447 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1448, 34);
            panda$core$String* $tmp1450 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
            $tmp1449 = $tmp1450;
            panda$core$Real64$nullable $tmp1451 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1449);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1447, $tmp1448, t1372.position, ((panda$core$Real64) $tmp1451.value));
            $tmp1446 = $tmp1447;
            $tmp1445 = $tmp1446;
            $returnValue1389 = $tmp1445;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1449));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1453, 47);
        panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1453);
        if ($tmp1454.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1457 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1458, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1457, $tmp1458, t1372.position);
            $tmp1456 = $tmp1457;
            $tmp1455 = $tmp1456;
            $returnValue1389 = $tmp1455;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1460, 48);
        panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1460);
        if ($tmp1461.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1464 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1465, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1464, $tmp1465, t1372.position);
            $tmp1463 = $tmp1464;
            $tmp1462 = $tmp1463;
            $returnValue1389 = $tmp1462;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1467, 44);
        panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1467);
        if ($tmp1468.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1471 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1472, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1471, $tmp1472, t1372.position);
            $tmp1470 = $tmp1471;
            $tmp1469 = $tmp1470;
            $returnValue1389 = $tmp1469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1474, 42);
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1474);
        if ($tmp1475.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1478 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1479, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1480, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1478, $tmp1479, t1372.position, $tmp1480);
            $tmp1477 = $tmp1478;
            $tmp1476 = $tmp1477;
            $returnValue1389 = $tmp1476;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1476));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1482, 43);
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1482);
        if ($tmp1483.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1487, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1488, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1486, $tmp1487, t1372.position, $tmp1488);
            $tmp1485 = $tmp1486;
            $tmp1484 = $tmp1485;
            $returnValue1389 = $tmp1484;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1485));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1491, 8);
        panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1491);
        bool $tmp1490 = $tmp1492.value;
        if ($tmp1490) goto $l1493;
        panda$core$Int64$init$builtin_int64(&$tmp1494, 7);
        panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1494);
        $tmp1490 = $tmp1495.value;
        $l1493:;
        panda$core$Bit $tmp1496 = { $tmp1490 };
        if ($tmp1496.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1372);
            org$pandalanguage$pandac$ASTNode* $tmp1499 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1498 = $tmp1499;
            $tmp1497 = $tmp1498;
            $returnValue1389 = $tmp1497;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1501, 104);
        panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1501);
        if ($tmp1502.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1372);
            org$pandalanguage$pandac$ASTNode* $tmp1505 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1504 = $tmp1505;
            $tmp1503 = $tmp1504;
            $returnValue1389 = $tmp1503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1507, 14);
        panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1507);
        if ($tmp1508.value) {
        {
            int $tmp1511;
            {
                panda$core$String* $tmp1515 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
                $tmp1514 = $tmp1515;
                $tmp1513 = $tmp1514;
                name1512 = $tmp1513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                panda$core$Bit $tmp1517 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1512, &$s1516);
                if ($tmp1517.value) {
                {
                    int $tmp1520;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1522, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1521, $tmp1522);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1521, &$s1523);
                        org$pandalanguage$pandac$ASTNode* $tmp1527 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1526 = $tmp1527;
                        $tmp1525 = $tmp1526;
                        expr1524 = $tmp1525;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1525));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
                        panda$core$Int64$init$builtin_int64(&$tmp1529, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1528, $tmp1529);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1528, &$s1530);
                        org$pandalanguage$pandac$ASTNode* $tmp1533 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1534, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1533, $tmp1534, t1372.position, expr1524);
                        $tmp1532 = $tmp1533;
                        $tmp1531 = $tmp1532;
                        $returnValue1389 = $tmp1531;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
                        $tmp1520 = 0;
                        goto $l1518;
                        $l1535:;
                        $tmp1511 = 0;
                        goto $l1509;
                        $l1536:;
                        return $returnValue1389;
                    }
                    $l1518:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1524));
                    expr1524 = NULL;
                    switch ($tmp1520) {
                        case 0: goto $l1535;
                    }
                    $l1538:;
                }
                }
                else {
                panda$core$Bit $tmp1540 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1512, &$s1539);
                if ($tmp1540.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1543 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1544, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1543, $tmp1544, t1372.position);
                    $tmp1542 = $tmp1543;
                    $tmp1541 = $tmp1542;
                    $returnValue1389 = $tmp1541;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1541));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
                    $tmp1511 = 1;
                    goto $l1509;
                    $l1545:;
                    return $returnValue1389;
                }
                }
                }
                panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1549, name1512);
                $tmp1548 = $tmp1550;
                panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1548, &$s1551);
                $tmp1547 = $tmp1552;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1372, $tmp1547);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                $tmp1553 = NULL;
                $returnValue1389 = $tmp1553;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
                $tmp1511 = 2;
                goto $l1509;
                $l1554:;
                return $returnValue1389;
            }
            $l1509:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1512));
            name1512 = NULL;
            switch ($tmp1511) {
                case 1: goto $l1545;
                case 2: goto $l1554;
                case 0: goto $l1536;
            }
            $l1556:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1558, 21);
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1558);
        bool $tmp1557 = $tmp1559.value;
        if ($tmp1557) goto $l1560;
        panda$core$Int64$init$builtin_int64(&$tmp1561, 22);
        panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1561);
        $tmp1557 = $tmp1562.value;
        $l1560:;
        panda$core$Bit $tmp1563 = { $tmp1557 };
        if ($tmp1563.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1372);
            org$pandalanguage$pandac$ASTNode* $tmp1566 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1565 = $tmp1566;
            $tmp1564 = $tmp1565;
            $returnValue1389 = $tmp1564;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
            return $returnValue1389;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1568, 55);
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$628_91374.$rawValue, $tmp1568);
        if ($tmp1569.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1372);
            org$pandalanguage$pandac$ASTNode* $tmp1572 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1571 = $tmp1572;
            $tmp1570 = $tmp1571;
            $returnValue1389 = $tmp1570;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            return $returnValue1389;
        }
        }
        else {
        {
            panda$core$String* $tmp1578 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1372);
            $tmp1577 = $tmp1578;
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1576, $tmp1577);
            $tmp1575 = $tmp1579;
            panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1575, &$s1580);
            $tmp1574 = $tmp1581;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1372, $tmp1574);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
            $tmp1582 = NULL;
            $returnValue1389 = $tmp1582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
            return $returnValue1389;
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
    org$pandalanguage$pandac$ASTNode* $match$687_91587 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1588;
    panda$core$Int64 $tmp1589;
    panda$core$String* text1591 = NULL;
    panda$core$String* $returnValue1593;
    panda$core$String* $tmp1594;
    panda$core$Int64 $tmp1597;
    org$pandalanguage$pandac$ASTNode* base1599 = NULL;
    panda$core$String* field1601 = NULL;
    panda$core$String* result1606 = NULL;
    panda$core$String* $tmp1607;
    panda$core$String* $tmp1608;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1613;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1618;
    panda$core$String* $tmp1623;
    int $tmp1586;
    {
        $tmp1588 = p_expr;
        $match$687_91587 = $tmp1588;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
        panda$core$Int64$init$builtin_int64(&$tmp1589, 20);
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$687_91587->$rawValue, $tmp1589);
        if ($tmp1590.value) {
        {
            panda$core$String** $tmp1592 = ((panda$core$String**) ((char*) $match$687_91587->$data + 16));
            text1591 = *$tmp1592;
            $tmp1594 = text1591;
            $returnValue1593 = $tmp1594;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1594));
            $tmp1586 = 0;
            goto $l1584;
            $l1595:;
            return $returnValue1593;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1597, 15);
        panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$687_91587->$rawValue, $tmp1597);
        if ($tmp1598.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$687_91587->$data + 16));
            base1599 = *$tmp1600;
            panda$core$String** $tmp1602 = ((panda$core$String**) ((char*) $match$687_91587->$data + 24));
            field1601 = *$tmp1602;
            int $tmp1605;
            {
                panda$core$String* $tmp1609 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1599);
                $tmp1608 = $tmp1609;
                $tmp1607 = $tmp1608;
                result1606 = $tmp1607;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
                if (((panda$core$Bit) { result1606 != NULL }).value) {
                {
                    {
                        $tmp1611 = result1606;
                        $tmp1610 = $tmp1611;
                        panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1615, field1601);
                        $tmp1614 = $tmp1616;
                        panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1606, $tmp1614);
                        $tmp1613 = $tmp1617;
                        $tmp1612 = $tmp1613;
                        result1606 = $tmp1612;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1612));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                    }
                }
                }
                $tmp1618 = result1606;
                $returnValue1593 = $tmp1618;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
                $tmp1605 = 0;
                goto $l1603;
                $l1619:;
                $tmp1586 = 1;
                goto $l1584;
                $l1620:;
                return $returnValue1593;
            }
            $l1603:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1606));
            result1606 = NULL;
            switch ($tmp1605) {
                case 0: goto $l1619;
            }
            $l1622:;
        }
        }
        else {
        {
            $tmp1623 = NULL;
            $returnValue1593 = $tmp1623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1623));
            $tmp1586 = 2;
            goto $l1584;
            $l1624:;
            return $returnValue1593;
        }
        }
        }
    }
    $tmp1586 = -1;
    goto $l1584;
    $l1584:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
    switch ($tmp1586) {
        case 1: goto $l1620;
        case 2: goto $l1624;
        case -1: goto $l1626;
        case 0: goto $l1595;
    }
    $l1626:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1627;
    org$pandalanguage$pandac$parser$Token$Kind $match$707_91629;
    panda$core$Int64 $tmp1651;
    panda$core$Int64 $tmp1654;
    panda$core$Int64 $tmp1658;
    panda$core$Int64 $tmp1662;
    panda$core$Int64 $tmp1666;
    panda$core$Int64 $tmp1670;
    panda$core$Int64 $tmp1674;
    panda$core$Int64 $tmp1678;
    panda$core$Int64 $tmp1682;
    panda$core$Int64 $tmp1686;
    panda$core$Int64 $tmp1690;
    panda$core$Int64 $tmp1694;
    panda$core$Int64 $tmp1698;
    panda$core$Int64 $tmp1702;
    panda$core$Int64 $tmp1706;
    panda$core$Int64 $tmp1710;
    panda$core$Int64 $tmp1714;
    panda$core$Int64 $tmp1718;
    panda$core$Int64 $tmp1722;
    panda$core$Int64 $tmp1726;
    panda$core$Int64 $tmp1730;
    panda$core$Int64 $tmp1734;
    panda$core$String* $returnValue1737;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1739;
    panda$core$Int64 $tmp1742;
    org$pandalanguage$pandac$parser$Token token1744;
    panda$core$Int64 $tmp1746;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1751;
    panda$core$Int64 $tmp1754;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1756;
    panda$core$Int64 $tmp1757;
    panda$core$String* $tmp1760;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1762;
    panda$core$Int64 $tmp1763;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1771;
    panda$core$String* $tmp1772;
    panda$core$String* $tmp1774;
    panda$core$String* $tmp1779;
    org$pandalanguage$pandac$parser$Token $tmp1628 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1627 = $tmp1628;
    {
        $match$707_91629 = name1627.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1651, 49);
        panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1651);
        bool $tmp1650 = $tmp1652.value;
        if ($tmp1650) goto $l1653;
        panda$core$Int64$init$builtin_int64(&$tmp1654, 52);
        panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1654);
        $tmp1650 = $tmp1655.value;
        $l1653:;
        panda$core$Bit $tmp1656 = { $tmp1650 };
        bool $tmp1649 = $tmp1656.value;
        if ($tmp1649) goto $l1657;
        panda$core$Int64$init$builtin_int64(&$tmp1658, 53);
        panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1658);
        $tmp1649 = $tmp1659.value;
        $l1657:;
        panda$core$Bit $tmp1660 = { $tmp1649 };
        bool $tmp1648 = $tmp1660.value;
        if ($tmp1648) goto $l1661;
        panda$core$Int64$init$builtin_int64(&$tmp1662, 54);
        panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1662);
        $tmp1648 = $tmp1663.value;
        $l1661:;
        panda$core$Bit $tmp1664 = { $tmp1648 };
        bool $tmp1647 = $tmp1664.value;
        if ($tmp1647) goto $l1665;
        panda$core$Int64$init$builtin_int64(&$tmp1666, 55);
        panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1666);
        $tmp1647 = $tmp1667.value;
        $l1665:;
        panda$core$Bit $tmp1668 = { $tmp1647 };
        bool $tmp1646 = $tmp1668.value;
        if ($tmp1646) goto $l1669;
        panda$core$Int64$init$builtin_int64(&$tmp1670, 56);
        panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1670);
        $tmp1646 = $tmp1671.value;
        $l1669:;
        panda$core$Bit $tmp1672 = { $tmp1646 };
        bool $tmp1645 = $tmp1672.value;
        if ($tmp1645) goto $l1673;
        panda$core$Int64$init$builtin_int64(&$tmp1674, 58);
        panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1674);
        $tmp1645 = $tmp1675.value;
        $l1673:;
        panda$core$Bit $tmp1676 = { $tmp1645 };
        bool $tmp1644 = $tmp1676.value;
        if ($tmp1644) goto $l1677;
        panda$core$Int64$init$builtin_int64(&$tmp1678, 59);
        panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1678);
        $tmp1644 = $tmp1679.value;
        $l1677:;
        panda$core$Bit $tmp1680 = { $tmp1644 };
        bool $tmp1643 = $tmp1680.value;
        if ($tmp1643) goto $l1681;
        panda$core$Int64$init$builtin_int64(&$tmp1682, 60);
        panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1682);
        $tmp1643 = $tmp1683.value;
        $l1681:;
        panda$core$Bit $tmp1684 = { $tmp1643 };
        bool $tmp1642 = $tmp1684.value;
        if ($tmp1642) goto $l1685;
        panda$core$Int64$init$builtin_int64(&$tmp1686, 63);
        panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1686);
        $tmp1642 = $tmp1687.value;
        $l1685:;
        panda$core$Bit $tmp1688 = { $tmp1642 };
        bool $tmp1641 = $tmp1688.value;
        if ($tmp1641) goto $l1689;
        panda$core$Int64$init$builtin_int64(&$tmp1690, 66);
        panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1690);
        $tmp1641 = $tmp1691.value;
        $l1689:;
        panda$core$Bit $tmp1692 = { $tmp1641 };
        bool $tmp1640 = $tmp1692.value;
        if ($tmp1640) goto $l1693;
        panda$core$Int64$init$builtin_int64(&$tmp1694, 65);
        panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1694);
        $tmp1640 = $tmp1695.value;
        $l1693:;
        panda$core$Bit $tmp1696 = { $tmp1640 };
        bool $tmp1639 = $tmp1696.value;
        if ($tmp1639) goto $l1697;
        panda$core$Int64$init$builtin_int64(&$tmp1698, 57);
        panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1698);
        $tmp1639 = $tmp1699.value;
        $l1697:;
        panda$core$Bit $tmp1700 = { $tmp1639 };
        bool $tmp1638 = $tmp1700.value;
        if ($tmp1638) goto $l1701;
        panda$core$Int64$init$builtin_int64(&$tmp1702, 67);
        panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1702);
        $tmp1638 = $tmp1703.value;
        $l1701:;
        panda$core$Bit $tmp1704 = { $tmp1638 };
        bool $tmp1637 = $tmp1704.value;
        if ($tmp1637) goto $l1705;
        panda$core$Int64$init$builtin_int64(&$tmp1706, 68);
        panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1706);
        $tmp1637 = $tmp1707.value;
        $l1705:;
        panda$core$Bit $tmp1708 = { $tmp1637 };
        bool $tmp1636 = $tmp1708.value;
        if ($tmp1636) goto $l1709;
        panda$core$Int64$init$builtin_int64(&$tmp1710, 69);
        panda$core$Bit $tmp1711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1710);
        $tmp1636 = $tmp1711.value;
        $l1709:;
        panda$core$Bit $tmp1712 = { $tmp1636 };
        bool $tmp1635 = $tmp1712.value;
        if ($tmp1635) goto $l1713;
        panda$core$Int64$init$builtin_int64(&$tmp1714, 70);
        panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1714);
        $tmp1635 = $tmp1715.value;
        $l1713:;
        panda$core$Bit $tmp1716 = { $tmp1635 };
        bool $tmp1634 = $tmp1716.value;
        if ($tmp1634) goto $l1717;
        panda$core$Int64$init$builtin_int64(&$tmp1718, 71);
        panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1718);
        $tmp1634 = $tmp1719.value;
        $l1717:;
        panda$core$Bit $tmp1720 = { $tmp1634 };
        bool $tmp1633 = $tmp1720.value;
        if ($tmp1633) goto $l1721;
        panda$core$Int64$init$builtin_int64(&$tmp1722, 72);
        panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1722);
        $tmp1633 = $tmp1723.value;
        $l1721:;
        panda$core$Bit $tmp1724 = { $tmp1633 };
        bool $tmp1632 = $tmp1724.value;
        if ($tmp1632) goto $l1725;
        panda$core$Int64$init$builtin_int64(&$tmp1726, 50);
        panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1726);
        $tmp1632 = $tmp1727.value;
        $l1725:;
        panda$core$Bit $tmp1728 = { $tmp1632 };
        bool $tmp1631 = $tmp1728.value;
        if ($tmp1631) goto $l1729;
        panda$core$Int64$init$builtin_int64(&$tmp1730, 51);
        panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1730);
        $tmp1631 = $tmp1731.value;
        $l1729:;
        panda$core$Bit $tmp1732 = { $tmp1631 };
        bool $tmp1630 = $tmp1732.value;
        if ($tmp1630) goto $l1733;
        panda$core$Int64$init$builtin_int64(&$tmp1734, 73);
        panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1734);
        $tmp1630 = $tmp1735.value;
        $l1733:;
        panda$core$Bit $tmp1736 = { $tmp1630 };
        if ($tmp1736.value) {
        {
            panda$core$String* $tmp1740 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1627);
            $tmp1739 = $tmp1740;
            $tmp1738 = $tmp1739;
            $returnValue1737 = $tmp1738;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
            return $returnValue1737;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1742, 64);
        panda$core$Bit $tmp1743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1742);
        if ($tmp1743.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1745 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1744 = $tmp1745;
            panda$core$Int64$init$builtin_int64(&$tmp1746, 64);
            panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1744.kind.$rawValue, $tmp1746);
            if ($tmp1747.value) {
            {
                $tmp1748 = &$s1749;
                $returnValue1737 = $tmp1748;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
                return $returnValue1737;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1744);
                $tmp1751 = &$s1752;
                $returnValue1737 = $tmp1751;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
                return $returnValue1737;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1754, 102);
        panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$707_91629.$rawValue, $tmp1754);
        if ($tmp1755.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1757, 103);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1756, $tmp1757);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1759 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1756, &$s1758);
            if (((panda$core$Bit) { !$tmp1759.nonnull }).value) {
            {
                $tmp1760 = NULL;
                $returnValue1737 = $tmp1760;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
                return $returnValue1737;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1763, 74);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1762, $tmp1763);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1764 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1762);
            if (((panda$core$Bit) { $tmp1764.nonnull }).value) {
            {
                $tmp1765 = &$s1766;
                $returnValue1737 = $tmp1765;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
                return $returnValue1737;
            }
            }
            $tmp1768 = &$s1769;
            $returnValue1737 = $tmp1768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
            return $returnValue1737;
        }
        }
        else {
        {
            panda$core$String* $tmp1775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1627);
            $tmp1774 = $tmp1775;
            panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1773, $tmp1774);
            $tmp1772 = $tmp1776;
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, &$s1777);
            $tmp1771 = $tmp1778;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1627, $tmp1771);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1772));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
            $tmp1779 = NULL;
            $returnValue1737 = $tmp1779;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1779));
            return $returnValue1737;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1781;
    org$pandalanguage$pandac$ASTNode* $tmp1782;
    org$pandalanguage$pandac$ASTNode* $tmp1783;
    panda$core$Bit $tmp1784;
    panda$core$Bit$init$builtin_bit(&$tmp1784, true);
    org$pandalanguage$pandac$ASTNode* $tmp1785 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1784);
    $tmp1783 = $tmp1785;
    $tmp1782 = $tmp1783;
    $returnValue1781 = $tmp1782;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
    return $returnValue1781;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1790;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1791;
    panda$core$Int64 $tmp1792;
    org$pandalanguage$pandac$ASTNode* $returnValue1795;
    org$pandalanguage$pandac$ASTNode* $tmp1796;
    panda$collections$Array* subtypes1799 = NULL;
    panda$collections$Array* $tmp1800;
    panda$collections$Array* $tmp1801;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1803;
    panda$core$Int64 $tmp1804;
    org$pandalanguage$pandac$ASTNode* t1809 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1810;
    org$pandalanguage$pandac$ASTNode* $tmp1811;
    org$pandalanguage$pandac$ASTNode* $tmp1813;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1820;
    panda$core$Int64 $tmp1821;
    org$pandalanguage$pandac$ASTNode* $tmp1823;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* $tmp1825;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1831;
    panda$core$Int64 $tmp1832;
    org$pandalanguage$pandac$ASTNode* $tmp1835;
    org$pandalanguage$pandac$parser$Token yields1840;
    org$pandalanguage$pandac$parser$Token$Kind $match$771_91842;
    panda$core$Int64 $tmp1846;
    panda$core$Int64 $tmp1849;
    panda$core$Int64 $tmp1853;
    panda$core$Int64 $tmp1857;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1863;
    panda$core$Int64 $tmp1864;
    org$pandalanguage$pandac$ASTNode* $tmp1867;
    panda$collections$Array* returnTypes1871 = NULL;
    panda$collections$Array* $tmp1872;
    panda$collections$Array* $tmp1873;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1875;
    panda$core$Int64 $tmp1876;
    org$pandalanguage$pandac$ASTNode* t1881 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1882;
    org$pandalanguage$pandac$ASTNode* $tmp1883;
    org$pandalanguage$pandac$ASTNode* $tmp1885;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1893;
    panda$core$Int64 $tmp1894;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$ASTNode* $tmp1897;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    org$pandalanguage$pandac$ASTNode* $tmp1900;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1905;
    panda$core$Int64 $tmp1906;
    org$pandalanguage$pandac$ASTNode* $tmp1909;
    org$pandalanguage$pandac$ASTNode* returnType1915 = NULL;
    panda$core$Int64 $tmp1917;
    org$pandalanguage$pandac$ASTNode* $tmp1919;
    org$pandalanguage$pandac$ASTNode* $tmp1920;
    panda$core$Int64 $tmp1922;
    org$pandalanguage$pandac$ASTNode* $tmp1924;
    org$pandalanguage$pandac$ASTNode* $tmp1925;
    panda$core$Object* $tmp1926;
    panda$core$Int64 $tmp1927;
    org$pandalanguage$pandac$ASTNode* $tmp1930;
    org$pandalanguage$pandac$ASTNode* $tmp1934;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    panda$core$Int64 $tmp1937;
    panda$collections$ImmutableArray* $tmp1938;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    int $tmp1789;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1792, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1791, $tmp1792);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1794 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1791, &$s1793);
        start1790 = $tmp1794;
        if (((panda$core$Bit) { !start1790.nonnull }).value) {
        {
            $tmp1796 = NULL;
            $returnValue1795 = $tmp1796;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
            $tmp1789 = 0;
            goto $l1787;
            $l1797:;
            return $returnValue1795;
        }
        }
        panda$collections$Array* $tmp1802 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1802);
        $tmp1801 = $tmp1802;
        $tmp1800 = $tmp1801;
        subtypes1799 = $tmp1800;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
        panda$core$Int64$init$builtin_int64(&$tmp1804, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1803, $tmp1804);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1805 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1803);
        if (((panda$core$Bit) { !$tmp1805.nonnull }).value) {
        {
            int $tmp1808;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1812 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1811 = $tmp1812;
                $tmp1810 = $tmp1811;
                t1809 = $tmp1810;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1811));
                if (((panda$core$Bit) { t1809 == NULL }).value) {
                {
                    $tmp1813 = NULL;
                    $returnValue1795 = $tmp1813;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
                    $tmp1808 = 0;
                    goto $l1806;
                    $l1814:;
                    $tmp1789 = 1;
                    goto $l1787;
                    $l1815:;
                    return $returnValue1795;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1799, ((panda$core$Object*) t1809));
                $l1817:;
                panda$core$Int64$init$builtin_int64(&$tmp1821, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1820, $tmp1821);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1822 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1820);
                bool $tmp1819 = ((panda$core$Bit) { $tmp1822.nonnull }).value;
                if (!$tmp1819) goto $l1818;
                {
                    {
                        $tmp1823 = t1809;
                        org$pandalanguage$pandac$ASTNode* $tmp1826 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1825 = $tmp1826;
                        $tmp1824 = $tmp1825;
                        t1809 = $tmp1824;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1824));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1825));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                    }
                    if (((panda$core$Bit) { t1809 == NULL }).value) {
                    {
                        $tmp1827 = NULL;
                        $returnValue1795 = $tmp1827;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                        $tmp1808 = 1;
                        goto $l1806;
                        $l1828:;
                        $tmp1789 = 2;
                        goto $l1787;
                        $l1829:;
                        return $returnValue1795;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1799, ((panda$core$Object*) t1809));
                }
                goto $l1817;
                $l1818:;
                panda$core$Int64$init$builtin_int64(&$tmp1832, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1831, $tmp1832);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1834 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1831, &$s1833);
                if (((panda$core$Bit) { !$tmp1834.nonnull }).value) {
                {
                    $tmp1835 = NULL;
                    $returnValue1795 = $tmp1835;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1835));
                    $tmp1808 = 2;
                    goto $l1806;
                    $l1836:;
                    $tmp1789 = 3;
                    goto $l1787;
                    $l1837:;
                    return $returnValue1795;
                }
                }
            }
            $tmp1808 = -1;
            goto $l1806;
            $l1806:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1809));
            t1809 = NULL;
            switch ($tmp1808) {
                case 2: goto $l1836;
                case 1: goto $l1828;
                case 0: goto $l1814;
                case -1: goto $l1839;
            }
            $l1839:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1841 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1840 = $tmp1841;
        {
            $match$771_91842 = yields1840.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1846, 91);
            panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771_91842.$rawValue, $tmp1846);
            bool $tmp1845 = $tmp1847.value;
            if ($tmp1845) goto $l1848;
            panda$core$Int64$init$builtin_int64(&$tmp1849, 92);
            panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771_91842.$rawValue, $tmp1849);
            $tmp1845 = $tmp1850.value;
            $l1848:;
            panda$core$Bit $tmp1851 = { $tmp1845 };
            bool $tmp1844 = $tmp1851.value;
            if ($tmp1844) goto $l1852;
            panda$core$Int64$init$builtin_int64(&$tmp1853, 93);
            panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771_91842.$rawValue, $tmp1853);
            $tmp1844 = $tmp1854.value;
            $l1852:;
            panda$core$Bit $tmp1855 = { $tmp1844 };
            bool $tmp1843 = $tmp1855.value;
            if ($tmp1843) goto $l1856;
            panda$core$Int64$init$builtin_int64(&$tmp1857, 94);
            panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$771_91842.$rawValue, $tmp1857);
            $tmp1843 = $tmp1858.value;
            $l1856:;
            panda$core$Bit $tmp1859 = { $tmp1843 };
            if ($tmp1859.value) {
            {
                int $tmp1862;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1864, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1863, $tmp1864);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1866 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1863, &$s1865);
                    if (((panda$core$Bit) { !$tmp1866.nonnull }).value) {
                    {
                        $tmp1867 = NULL;
                        $returnValue1795 = $tmp1867;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1867));
                        $tmp1862 = 0;
                        goto $l1860;
                        $l1868:;
                        $tmp1789 = 4;
                        goto $l1787;
                        $l1869:;
                        return $returnValue1795;
                    }
                    }
                    panda$collections$Array* $tmp1874 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1874);
                    $tmp1873 = $tmp1874;
                    $tmp1872 = $tmp1873;
                    returnTypes1871 = $tmp1872;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                    panda$core$Int64$init$builtin_int64(&$tmp1876, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1875, $tmp1876);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1877 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1875);
                    if (((panda$core$Bit) { !$tmp1877.nonnull }).value) {
                    {
                        int $tmp1880;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1884 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1883 = $tmp1884;
                            $tmp1882 = $tmp1883;
                            t1881 = $tmp1882;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
                            if (((panda$core$Bit) { t1881 == NULL }).value) {
                            {
                                $tmp1885 = NULL;
                                $returnValue1795 = $tmp1885;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1885));
                                $tmp1880 = 0;
                                goto $l1878;
                                $l1886:;
                                $tmp1862 = 1;
                                goto $l1860;
                                $l1887:;
                                $tmp1789 = 5;
                                goto $l1787;
                                $l1888:;
                                return $returnValue1795;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1871, ((panda$core$Object*) t1881));
                            $l1890:;
                            panda$core$Int64$init$builtin_int64(&$tmp1894, 106);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1893, $tmp1894);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1895 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1893);
                            bool $tmp1892 = ((panda$core$Bit) { $tmp1895.nonnull }).value;
                            if (!$tmp1892) goto $l1891;
                            {
                                {
                                    $tmp1896 = t1881;
                                    org$pandalanguage$pandac$ASTNode* $tmp1899 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1898 = $tmp1899;
                                    $tmp1897 = $tmp1898;
                                    t1881 = $tmp1897;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1897));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                                }
                                if (((panda$core$Bit) { t1881 == NULL }).value) {
                                {
                                    $tmp1900 = NULL;
                                    $returnValue1795 = $tmp1900;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                                    $tmp1880 = 1;
                                    goto $l1878;
                                    $l1901:;
                                    $tmp1862 = 2;
                                    goto $l1860;
                                    $l1902:;
                                    $tmp1789 = 6;
                                    goto $l1787;
                                    $l1903:;
                                    return $returnValue1795;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1871, ((panda$core$Object*) t1881));
                            }
                            goto $l1890;
                            $l1891:;
                            panda$core$Int64$init$builtin_int64(&$tmp1906, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1905, $tmp1906);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1908 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1905, &$s1907);
                            if (((panda$core$Bit) { !$tmp1908.nonnull }).value) {
                            {
                                $tmp1909 = NULL;
                                $returnValue1795 = $tmp1909;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1909));
                                $tmp1880 = 2;
                                goto $l1878;
                                $l1910:;
                                $tmp1862 = 3;
                                goto $l1860;
                                $l1911:;
                                $tmp1789 = 7;
                                goto $l1787;
                                $l1912:;
                                return $returnValue1795;
                            }
                            }
                        }
                        $tmp1880 = -1;
                        goto $l1878;
                        $l1878:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1881));
                        t1881 = NULL;
                        switch ($tmp1880) {
                            case -1: goto $l1914;
                            case 1: goto $l1901;
                            case 2: goto $l1910;
                            case 0: goto $l1886;
                        }
                        $l1914:;
                    }
                    }
                    memset(&returnType1915, 0, sizeof(returnType1915));
                    panda$core$Int64 $tmp1916 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1871);
                    panda$core$Int64$init$builtin_int64(&$tmp1917, 0);
                    panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1916, $tmp1917);
                    if ($tmp1918.value) {
                    {
                        {
                            $tmp1919 = returnType1915;
                            $tmp1920 = NULL;
                            returnType1915 = $tmp1920;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1920));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1919));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1921 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1871);
                    panda$core$Int64$init$builtin_int64(&$tmp1922, 1);
                    panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1921, $tmp1922);
                    if ($tmp1923.value) {
                    {
                        {
                            $tmp1924 = returnType1915;
                            panda$core$Int64$init$builtin_int64(&$tmp1927, 0);
                            panda$core$Object* $tmp1928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1871, $tmp1927);
                            $tmp1926 = $tmp1928;
                            $tmp1925 = ((org$pandalanguage$pandac$ASTNode*) $tmp1926);
                            returnType1915 = $tmp1925;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
                            panda$core$Panda$unref$panda$core$Object($tmp1926);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1790.value), &$s1929);
                        $tmp1930 = NULL;
                        $returnValue1795 = $tmp1930;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
                        $tmp1862 = 4;
                        goto $l1860;
                        $l1931:;
                        $tmp1789 = 8;
                        goto $l1787;
                        $l1932:;
                        return $returnValue1795;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1936 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1937, 27);
                    panda$collections$ImmutableArray* $tmp1939 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1799);
                    $tmp1938 = $tmp1939;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1936, $tmp1937, ((org$pandalanguage$pandac$parser$Token) start1790.value).position, yields1840.kind, $tmp1938, returnType1915);
                    $tmp1935 = $tmp1936;
                    $tmp1934 = $tmp1935;
                    $returnValue1795 = $tmp1934;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                    $tmp1862 = 5;
                    goto $l1860;
                    $l1940:;
                    $tmp1789 = 9;
                    goto $l1787;
                    $l1941:;
                    return $returnValue1795;
                }
                $l1860:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1871));
                returnTypes1871 = NULL;
                switch ($tmp1862) {
                    case 0: goto $l1868;
                    case 3: goto $l1911;
                    case 5: goto $l1940;
                    case 2: goto $l1902;
                    case 1: goto $l1887;
                    case 4: goto $l1931;
                }
                $l1943:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1790.value), &$s1944);
                $tmp1945 = NULL;
                $returnValue1795 = $tmp1945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1945));
                $tmp1789 = 10;
                goto $l1787;
                $l1946:;
                return $returnValue1795;
            }
            }
        }
    }
    $tmp1789 = -1;
    goto $l1787;
    $l1787:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1799));
    subtypes1799 = NULL;
    switch ($tmp1789) {
        case 9: goto $l1941;
        case 2: goto $l1829;
        case 7: goto $l1912;
        case 10: goto $l1946;
        case -1: goto $l1948;
        case 1: goto $l1815;
        case 3: goto $l1837;
        case 8: goto $l1932;
        case 5: goto $l1888;
        case 6: goto $l1903;
        case 4: goto $l1869;
        case 0: goto $l1797;
    }
    $l1948:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1952 = NULL;
    panda$core$Int64 $tmp1954;
    org$pandalanguage$pandac$ASTNode* $tmp1956;
    org$pandalanguage$pandac$ASTNode* $tmp1957;
    org$pandalanguage$pandac$ASTNode* $tmp1958;
    org$pandalanguage$pandac$ASTNode* $returnValue1960;
    org$pandalanguage$pandac$ASTNode* $tmp1961;
    org$pandalanguage$pandac$parser$Token$nullable start1967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1968;
    panda$core$Int64 $tmp1969;
    org$pandalanguage$pandac$ASTNode* $tmp1972;
    panda$core$MutableString* name1976 = NULL;
    panda$core$MutableString* $tmp1977;
    panda$core$MutableString* $tmp1978;
    panda$core$String* $tmp1980;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1985;
    panda$core$Int64 $tmp1986;
    org$pandalanguage$pandac$parser$Token$nullable id1988;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1989;
    panda$core$Int64 $tmp1990;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    panda$core$Char8 $tmp1997;
    panda$core$UInt8 $tmp1998;
    panda$core$String* $tmp1999;
    panda$core$String* finalName2001 = NULL;
    panda$core$String* $tmp2002;
    panda$core$String* $tmp2003;
    org$pandalanguage$pandac$ASTNode* $tmp2005;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    panda$core$Int64 $tmp2009;
    panda$core$Int64 $tmp2011;
    panda$collections$Array* children2016 = NULL;
    panda$collections$Array* $tmp2017;
    panda$collections$Array* $tmp2018;
    org$pandalanguage$pandac$ASTNode* t2020 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$ASTNode* $tmp2022;
    panda$core$Bit $tmp2023;
    org$pandalanguage$pandac$ASTNode* $tmp2025;
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2038;
    panda$core$Int64 $tmp2039;
    org$pandalanguage$pandac$ASTNode* $tmp2041;
    org$pandalanguage$pandac$ASTNode* $tmp2042;
    org$pandalanguage$pandac$ASTNode* $tmp2043;
    panda$core$Bit $tmp2044;
    org$pandalanguage$pandac$ASTNode* $tmp2046;
    org$pandalanguage$pandac$ASTNode* $tmp2051;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2056;
    panda$core$Int64 $tmp2057;
    org$pandalanguage$pandac$ASTNode* $tmp2060;
    org$pandalanguage$pandac$ASTNode* $tmp2065;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    org$pandalanguage$pandac$ASTNode* $tmp2071;
    org$pandalanguage$pandac$ASTNode* $tmp2072;
    panda$core$Int64 $tmp2074;
    panda$collections$ImmutableArray* $tmp2075;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2079;
    panda$core$Int64 $tmp2080;
    org$pandalanguage$pandac$ASTNode* $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2083;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    panda$core$Int64 $tmp2086;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    int $tmp1951;
    {
        memset(&result1952, 0, sizeof(result1952));
        org$pandalanguage$pandac$parser$Token $tmp1953 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1954, 104);
        panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1953.kind.$rawValue, $tmp1954);
        if ($tmp1955.value) {
        {
            {
                $tmp1956 = result1952;
                org$pandalanguage$pandac$ASTNode* $tmp1959 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1958 = $tmp1959;
                $tmp1957 = $tmp1958;
                result1952 = $tmp1957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
            }
            if (((panda$core$Bit) { result1952 == NULL }).value) {
            {
                $tmp1961 = NULL;
                $returnValue1960 = $tmp1961;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
                $tmp1951 = 0;
                goto $l1949;
                $l1962:;
                return $returnValue1960;
            }
            }
        }
        }
        else {
        {
            int $tmp1966;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1969, 49);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1968, $tmp1969);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1971 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1968, &$s1970);
                start1967 = $tmp1971;
                if (((panda$core$Bit) { !start1967.nonnull }).value) {
                {
                    $tmp1972 = NULL;
                    $returnValue1960 = $tmp1972;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
                    $tmp1966 = 0;
                    goto $l1964;
                    $l1973:;
                    $tmp1951 = 1;
                    goto $l1949;
                    $l1974:;
                    return $returnValue1960;
                }
                }
                panda$core$MutableString* $tmp1979 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1981 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1967.value));
                $tmp1980 = $tmp1981;
                panda$core$MutableString$init$panda$core$String($tmp1979, $tmp1980);
                $tmp1978 = $tmp1979;
                $tmp1977 = $tmp1978;
                name1976 = $tmp1977;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1977));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
                $l1982:;
                panda$core$Int64$init$builtin_int64(&$tmp1986, 99);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1985, $tmp1986);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1987 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1985);
                bool $tmp1984 = ((panda$core$Bit) { $tmp1987.nonnull }).value;
                if (!$tmp1984) goto $l1983;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1990, 49);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1989, $tmp1990);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1992 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1989, &$s1991);
                    id1988 = $tmp1992;
                    if (((panda$core$Bit) { !id1988.nonnull }).value) {
                    {
                        $tmp1993 = NULL;
                        $returnValue1960 = $tmp1993;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
                        $tmp1966 = 1;
                        goto $l1964;
                        $l1994:;
                        $tmp1951 = 2;
                        goto $l1949;
                        $l1995:;
                        return $returnValue1960;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1998, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1997, $tmp1998);
                    panda$core$MutableString$append$panda$core$Char8(name1976, $tmp1997);
                    panda$core$String* $tmp2000 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1988.value));
                    $tmp1999 = $tmp2000;
                    panda$core$MutableString$append$panda$core$String(name1976, $tmp1999);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
                }
                goto $l1982;
                $l1983:;
                panda$core$String* $tmp2004 = panda$core$MutableString$finish$R$panda$core$String(name1976);
                $tmp2003 = $tmp2004;
                $tmp2002 = $tmp2003;
                finalName2001 = $tmp2002;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
                {
                    $tmp2005 = result1952;
                    org$pandalanguage$pandac$ASTNode* $tmp2008 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2009, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2008, $tmp2009, ((org$pandalanguage$pandac$parser$Token) start1967.value).position, finalName2001);
                    $tmp2007 = $tmp2008;
                    $tmp2006 = $tmp2007;
                    result1952 = $tmp2006;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
                }
                org$pandalanguage$pandac$parser$Token $tmp2010 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp2011, 63);
                panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2010.kind.$rawValue, $tmp2011);
                if ($tmp2012.value) {
                {
                    int $tmp2015;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp2019 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2019);
                        $tmp2018 = $tmp2019;
                        $tmp2017 = $tmp2018;
                        children2016 = $tmp2017;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2017));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2018));
                        panda$core$Bit$init$builtin_bit(&$tmp2023, false);
                        org$pandalanguage$pandac$ASTNode* $tmp2024 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2023);
                        $tmp2022 = $tmp2024;
                        $tmp2021 = $tmp2022;
                        t2020 = $tmp2021;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                        if (((panda$core$Bit) { t2020 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2025 = result1952;
                                $returnValue1960 = $tmp2025;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
                                $tmp2015 = 0;
                                goto $l2013;
                                $l2026:;
                                $tmp1966 = 2;
                                goto $l1964;
                                $l2027:;
                                $tmp1951 = 3;
                                goto $l1949;
                                $l2028:;
                                return $returnValue1960;
                            }
                            }
                            $tmp2030 = NULL;
                            $returnValue1960 = $tmp2030;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
                            $tmp2015 = 1;
                            goto $l2013;
                            $l2031:;
                            $tmp1966 = 3;
                            goto $l1964;
                            $l2032:;
                            $tmp1951 = 4;
                            goto $l1949;
                            $l2033:;
                            return $returnValue1960;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children2016, ((panda$core$Object*) t2020));
                        $l2035:;
                        panda$core$Int64$init$builtin_int64(&$tmp2039, 106);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2038, $tmp2039);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2040 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2038);
                        bool $tmp2037 = ((panda$core$Bit) { $tmp2040.nonnull }).value;
                        if (!$tmp2037) goto $l2036;
                        {
                            {
                                $tmp2041 = t2020;
                                panda$core$Bit$init$builtin_bit(&$tmp2044, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2045 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2044);
                                $tmp2043 = $tmp2045;
                                $tmp2042 = $tmp2043;
                                t2020 = $tmp2042;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2043));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
                            }
                            if (((panda$core$Bit) { t2020 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2046 = result1952;
                                    $returnValue1960 = $tmp2046;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
                                    $tmp2015 = 2;
                                    goto $l2013;
                                    $l2047:;
                                    $tmp1966 = 4;
                                    goto $l1964;
                                    $l2048:;
                                    $tmp1951 = 5;
                                    goto $l1949;
                                    $l2049:;
                                    return $returnValue1960;
                                }
                                }
                                $tmp2051 = NULL;
                                $returnValue1960 = $tmp2051;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2051));
                                $tmp2015 = 3;
                                goto $l2013;
                                $l2052:;
                                $tmp1966 = 5;
                                goto $l1964;
                                $l2053:;
                                $tmp1951 = 6;
                                goto $l1949;
                                $l2054:;
                                return $returnValue1960;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children2016, ((panda$core$Object*) t2020));
                        }
                        goto $l2035;
                        $l2036:;
                        panda$core$Int64$init$builtin_int64(&$tmp2057, 64);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2056, $tmp2057);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2059 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2056, &$s2058);
                        if (((panda$core$Bit) { !$tmp2059.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2060 = result1952;
                                $returnValue1960 = $tmp2060;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
                                $tmp2015 = 4;
                                goto $l2013;
                                $l2061:;
                                $tmp1966 = 6;
                                goto $l1964;
                                $l2062:;
                                $tmp1951 = 7;
                                goto $l1949;
                                $l2063:;
                                return $returnValue1960;
                            }
                            }
                            $tmp2065 = NULL;
                            $returnValue1960 = $tmp2065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
                            $tmp2015 = 5;
                            goto $l2013;
                            $l2066:;
                            $tmp1966 = 7;
                            goto $l1964;
                            $l2067:;
                            $tmp1951 = 8;
                            goto $l1949;
                            $l2068:;
                            return $returnValue1960;
                        }
                        }
                        {
                            $tmp2070 = result1952;
                            org$pandalanguage$pandac$ASTNode* $tmp2073 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2074, 19);
                            panda$collections$ImmutableArray* $tmp2076 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children2016);
                            $tmp2075 = $tmp2076;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2073, $tmp2074, ((org$pandalanguage$pandac$parser$Token) start1967.value).position, finalName2001, $tmp2075);
                            $tmp2072 = $tmp2073;
                            $tmp2071 = $tmp2072;
                            result1952 = $tmp2071;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2071));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp2015 = -1;
                    goto $l2013;
                    $l2013:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2020));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2016));
                    children2016 = NULL;
                    t2020 = NULL;
                    switch ($tmp2015) {
                        case 3: goto $l2052;
                        case 4: goto $l2061;
                        case -1: goto $l2077;
                        case 1: goto $l2031;
                        case 0: goto $l2026;
                        case 5: goto $l2066;
                        case 2: goto $l2047;
                    }
                    $l2077:;
                }
                }
            }
            $tmp1966 = -1;
            goto $l1964;
            $l1964:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName2001));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1976));
            name1976 = NULL;
            finalName2001 = NULL;
            switch ($tmp1966) {
                case 4: goto $l2048;
                case 2: goto $l2027;
                case 1: goto $l1994;
                case -1: goto $l2078;
                case 3: goto $l2032;
                case 7: goto $l2067;
                case 5: goto $l2053;
                case 0: goto $l1973;
                case 6: goto $l2062;
            }
            $l2078:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2080, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2079, $tmp2080);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2081 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2079);
        if (((panda$core$Bit) { $tmp2081.nonnull }).value) {
        {
            {
                $tmp2082 = result1952;
                org$pandalanguage$pandac$ASTNode* $tmp2085 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2086, 29);
                org$pandalanguage$pandac$Position $tmp2088 = (($fn2087) result1952->$class->vtable[2])(result1952);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2085, $tmp2086, $tmp2088, result1952);
                $tmp2084 = $tmp2085;
                $tmp2083 = $tmp2084;
                result1952 = $tmp2083;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2083));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2082));
            }
        }
        }
        $tmp2089 = result1952;
        $returnValue1960 = $tmp2089;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
        $tmp1951 = 9;
        goto $l1949;
        $l2090:;
        return $returnValue1960;
    }
    $l1949:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1952));
    switch ($tmp1951) {
        case 1: goto $l1974;
        case 5: goto $l2049;
        case 8: goto $l2068;
        case 3: goto $l2028;
        case 2: goto $l1995;
        case 9: goto $l2090;
        case 6: goto $l2054;
        case 0: goto $l1962;
        case 7: goto $l2063;
        case 4: goto $l2033;
    }
    $l2092:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2096 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2097;
    org$pandalanguage$pandac$ASTNode* $tmp2098;
    org$pandalanguage$pandac$ASTNode* $returnValue2100;
    org$pandalanguage$pandac$ASTNode* $tmp2101;
    org$pandalanguage$pandac$parser$Token token2106;
    org$pandalanguage$pandac$parser$Token$Kind $match$909_132108;
    panda$core$Int64 $tmp2109;
    panda$core$Object* $tmp2114;
    panda$core$Bit $tmp2115;
    panda$collections$Array* args2117 = NULL;
    panda$collections$Array* $tmp2118;
    panda$collections$Array* $tmp2119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2121;
    panda$core$Int64 $tmp2122;
    org$pandalanguage$pandac$ASTNode* expr2127 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2128;
    org$pandalanguage$pandac$ASTNode* $tmp2129;
    panda$core$Object* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2141;
    panda$core$Int64 $tmp2142;
    org$pandalanguage$pandac$ASTNode* $tmp2144;
    org$pandalanguage$pandac$ASTNode* $tmp2145;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    panda$core$Object* $tmp2148;
    org$pandalanguage$pandac$ASTNode* $tmp2150;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2155;
    panda$core$Int64 $tmp2156;
    panda$core$Object* $tmp2159;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    panda$core$Object* $tmp2167;
    org$pandalanguage$pandac$ASTNode* $tmp2169;
    org$pandalanguage$pandac$ASTNode* $tmp2170;
    org$pandalanguage$pandac$ASTNode* $tmp2171;
    panda$core$Int64 $tmp2173;
    panda$collections$ImmutableArray* $tmp2174;
    panda$core$Int64 $tmp2177;
    org$pandalanguage$pandac$ASTNode* arg2182 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2183;
    org$pandalanguage$pandac$ASTNode* $tmp2184;
    org$pandalanguage$pandac$ASTNode* $tmp2186;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2190;
    panda$core$Int64 $tmp2191;
    org$pandalanguage$pandac$ASTNode* $tmp2194;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    panda$core$Int64 $tmp2202;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2203;
    panda$core$Int64 $tmp2204;
    panda$core$Int64 $tmp2206;
    panda$core$String* name2211 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2212;
    panda$core$Int64 $tmp2213;
    panda$core$String* $tmp2215;
    panda$core$String* $tmp2216;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2220;
    org$pandalanguage$pandac$ASTNode* $tmp2222;
    org$pandalanguage$pandac$ASTNode* $tmp2226;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    panda$core$Int64 $tmp2230;
    panda$core$Int64 $tmp2232;
    org$pandalanguage$pandac$ASTNode* target2237 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2238;
    org$pandalanguage$pandac$ASTNode* $tmp2239;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$ASTNode* $tmp2246;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    panda$core$Int64 $tmp2249;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2250;
    panda$core$Int64 $tmp2251;
    panda$core$Int64 $tmp2253;
    panda$core$String* name2258 = NULL;
    panda$core$String* $tmp2259;
    panda$core$String* $tmp2260;
    panda$collections$Array* types2265 = NULL;
    panda$collections$Array* $tmp2266;
    panda$collections$Array* $tmp2267;
    org$pandalanguage$pandac$ASTNode* t2269 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2270;
    org$pandalanguage$pandac$ASTNode* $tmp2271;
    panda$core$Bit $tmp2272;
    org$pandalanguage$pandac$ASTNode* $tmp2274;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2282;
    panda$core$Int64 $tmp2283;
    org$pandalanguage$pandac$ASTNode* $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2286;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    panda$core$Bit $tmp2288;
    org$pandalanguage$pandac$ASTNode* $tmp2290;
    org$pandalanguage$pandac$parser$Token$nullable gt2295;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2296;
    panda$core$Int64 $tmp2297;
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    panda$core$Bit shouldAccept2305;
    panda$core$Object* $tmp2306;
    panda$core$Int64 $tmp2307;
    org$pandalanguage$pandac$parser$Token n2309;
    org$pandalanguage$pandac$parser$Token$Kind $match$1022_292311;
    panda$core$Int64 $tmp2314;
    panda$core$Int64 $tmp2317;
    panda$core$Int64 $tmp2321;
    panda$core$Bit $tmp2324;
    panda$core$Int64 $tmp2325;
    panda$core$Int64 $tmp2330;
    panda$core$Bit $tmp2334;
    panda$core$Bit $tmp2335;
    org$pandalanguage$pandac$ASTNode* $tmp2336;
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    panda$core$Int64 $tmp2340;
    panda$collections$ImmutableArray* $tmp2343;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2358;
    int $tmp2095;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2099 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2098 = $tmp2099;
        $tmp2097 = $tmp2098;
        result2096 = $tmp2097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
        if (((panda$core$Bit) { result2096 == NULL }).value) {
        {
            $tmp2101 = NULL;
            $returnValue2100 = $tmp2101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2101));
            $tmp2095 = 0;
            goto $l2093;
            $l2102:;
            return $returnValue2100;
        }
        }
        $l2104:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2107 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2106 = $tmp2107;
            {
                $match$909_132108 = token2106.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2109, 104);
                panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$909_132108.$rawValue, $tmp2109);
                if ($tmp2110.value) {
                {
                    int $tmp2113;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2115, true);
                        panda$core$Bit$wrapper* $tmp2116;
                        $tmp2116 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2116->value = $tmp2115;
                        $tmp2114 = ((panda$core$Object*) $tmp2116);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2114);
                        panda$core$Panda$unref$panda$core$Object($tmp2114);
                        panda$collections$Array* $tmp2120 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2120);
                        $tmp2119 = $tmp2120;
                        $tmp2118 = $tmp2119;
                        args2117 = $tmp2118;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
                        panda$core$Int64$init$builtin_int64(&$tmp2122, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2121, $tmp2122);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2123 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2121);
                        if (((panda$core$Bit) { !$tmp2123.nonnull }).value) {
                        {
                            int $tmp2126;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2130 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2129 = $tmp2130;
                                $tmp2128 = $tmp2129;
                                expr2127 = $tmp2128;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                                if (((panda$core$Bit) { expr2127 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2132 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2131 = $tmp2132;
                                    panda$core$Panda$unref$panda$core$Object($tmp2131);
                                    $tmp2133 = NULL;
                                    $returnValue2100 = $tmp2133;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
                                    $tmp2126 = 0;
                                    goto $l2124;
                                    $l2134:;
                                    $tmp2113 = 0;
                                    goto $l2111;
                                    $l2135:;
                                    $tmp2095 = 1;
                                    goto $l2093;
                                    $l2136:;
                                    return $returnValue2100;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2117, ((panda$core$Object*) expr2127));
                                $l2138:;
                                panda$core$Int64$init$builtin_int64(&$tmp2142, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2141, $tmp2142);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2143 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2141);
                                bool $tmp2140 = ((panda$core$Bit) { $tmp2143.nonnull }).value;
                                if (!$tmp2140) goto $l2139;
                                {
                                    {
                                        $tmp2144 = expr2127;
                                        org$pandalanguage$pandac$ASTNode* $tmp2147 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2146 = $tmp2147;
                                        $tmp2145 = $tmp2146;
                                        expr2127 = $tmp2145;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                                    }
                                    if (((panda$core$Bit) { expr2127 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2149 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2148 = $tmp2149;
                                        panda$core$Panda$unref$panda$core$Object($tmp2148);
                                        $tmp2150 = NULL;
                                        $returnValue2100 = $tmp2150;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2150));
                                        $tmp2126 = 1;
                                        goto $l2124;
                                        $l2151:;
                                        $tmp2113 = 1;
                                        goto $l2111;
                                        $l2152:;
                                        $tmp2095 = 2;
                                        goto $l2093;
                                        $l2153:;
                                        return $returnValue2100;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2117, ((panda$core$Object*) expr2127));
                                }
                                goto $l2138;
                                $l2139:;
                                panda$core$Int64$init$builtin_int64(&$tmp2156, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2155, $tmp2156);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2158 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2155, &$s2157);
                                if (((panda$core$Bit) { !$tmp2158.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2160 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2159 = $tmp2160;
                                    panda$core$Panda$unref$panda$core$Object($tmp2159);
                                    $tmp2161 = NULL;
                                    $returnValue2100 = $tmp2161;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2161));
                                    $tmp2126 = 2;
                                    goto $l2124;
                                    $l2162:;
                                    $tmp2113 = 2;
                                    goto $l2111;
                                    $l2163:;
                                    $tmp2095 = 3;
                                    goto $l2093;
                                    $l2164:;
                                    return $returnValue2100;
                                }
                                }
                            }
                            $tmp2126 = -1;
                            goto $l2124;
                            $l2124:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2127));
                            expr2127 = NULL;
                            switch ($tmp2126) {
                                case 2: goto $l2162;
                                case -1: goto $l2166;
                                case 1: goto $l2151;
                                case 0: goto $l2134;
                            }
                            $l2166:;
                        }
                        }
                        panda$core$Object* $tmp2168 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2167 = $tmp2168;
                        panda$core$Panda$unref$panda$core$Object($tmp2167);
                        {
                            $tmp2169 = result2096;
                            org$pandalanguage$pandac$ASTNode* $tmp2172 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2173, 8);
                            panda$collections$ImmutableArray* $tmp2175 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2117);
                            $tmp2174 = $tmp2175;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2172, $tmp2173, token2106.position, result2096, $tmp2174);
                            $tmp2171 = $tmp2172;
                            $tmp2170 = $tmp2171;
                            result2096 = $tmp2170;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2170));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2171));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
                        }
                    }
                    $tmp2113 = -1;
                    goto $l2111;
                    $l2111:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2117));
                    args2117 = NULL;
                    switch ($tmp2113) {
                        case 2: goto $l2163;
                        case 1: goto $l2152;
                        case -1: goto $l2176;
                        case 0: goto $l2135;
                    }
                    $l2176:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2177, 102);
                panda$core$Bit $tmp2178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$909_132108.$rawValue, $tmp2177);
                if ($tmp2178.value) {
                {
                    int $tmp2181;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2185 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2184 = $tmp2185;
                        $tmp2183 = $tmp2184;
                        arg2182 = $tmp2183;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2183));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2184));
                        if (((panda$core$Bit) { arg2182 == NULL }).value) {
                        {
                            $tmp2186 = NULL;
                            $returnValue2100 = $tmp2186;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2186));
                            $tmp2181 = 0;
                            goto $l2179;
                            $l2187:;
                            $tmp2095 = 4;
                            goto $l2093;
                            $l2188:;
                            return $returnValue2100;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2191, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2190, $tmp2191);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2193 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2190, &$s2192);
                        if (((panda$core$Bit) { !$tmp2193.nonnull }).value) {
                        {
                            $tmp2194 = NULL;
                            $returnValue2100 = $tmp2194;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2194));
                            $tmp2181 = 1;
                            goto $l2179;
                            $l2195:;
                            $tmp2095 = 5;
                            goto $l2093;
                            $l2196:;
                            return $returnValue2100;
                        }
                        }
                        {
                            $tmp2198 = result2096;
                            org$pandalanguage$pandac$ASTNode* $tmp2201 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2202, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2204, 102);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2203, $tmp2204);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2201, $tmp2202, token2106.position, result2096, $tmp2203, arg2182);
                            $tmp2200 = $tmp2201;
                            $tmp2199 = $tmp2200;
                            result2096 = $tmp2199;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                        }
                    }
                    $tmp2181 = -1;
                    goto $l2179;
                    $l2179:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2182));
                    arg2182 = NULL;
                    switch ($tmp2181) {
                        case 0: goto $l2187;
                        case -1: goto $l2205;
                        case 1: goto $l2195;
                    }
                    $l2205:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2206, 99);
                panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$909_132108.$rawValue, $tmp2206);
                if ($tmp2207.value) {
                {
                    int $tmp2210;
                    {
                        memset(&name2211, 0, sizeof(name2211));
                        panda$core$Int64$init$builtin_int64(&$tmp2213, 23);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2212, $tmp2213);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2214 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2212);
                        if (((panda$core$Bit) { $tmp2214.nonnull }).value) {
                        {
                            {
                                $tmp2215 = name2211;
                                $tmp2216 = &$s2217;
                                name2211 = $tmp2216;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2218 = name2211;
                                panda$core$String* $tmp2221 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2220 = $tmp2221;
                                $tmp2219 = $tmp2220;
                                name2211 = $tmp2219;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
                            }
                            if (((panda$core$Bit) { name2211 == NULL }).value) {
                            {
                                $tmp2222 = NULL;
                                $returnValue2100 = $tmp2222;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2222));
                                $tmp2210 = 0;
                                goto $l2208;
                                $l2223:;
                                $tmp2095 = 6;
                                goto $l2093;
                                $l2224:;
                                return $returnValue2100;
                            }
                            }
                        }
                        }
                        {
                            $tmp2226 = result2096;
                            org$pandalanguage$pandac$ASTNode* $tmp2229 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2230, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2229, $tmp2230, token2106.position, result2096, name2211);
                            $tmp2228 = $tmp2229;
                            $tmp2227 = $tmp2228;
                            result2096 = $tmp2227;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                        }
                    }
                    $tmp2210 = -1;
                    goto $l2208;
                    $l2208:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2211));
                    switch ($tmp2210) {
                        case 0: goto $l2223;
                        case -1: goto $l2231;
                    }
                    $l2231:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2232, 90);
                panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$909_132108.$rawValue, $tmp2232);
                if ($tmp2233.value) {
                {
                    int $tmp2236;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2240 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2239 = $tmp2240;
                        $tmp2238 = $tmp2239;
                        target2237 = $tmp2238;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
                        if (((panda$core$Bit) { target2237 == NULL }).value) {
                        {
                            $tmp2241 = NULL;
                            $returnValue2100 = $tmp2241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
                            $tmp2236 = 0;
                            goto $l2234;
                            $l2242:;
                            $tmp2095 = 7;
                            goto $l2093;
                            $l2243:;
                            return $returnValue2100;
                        }
                        }
                        {
                            $tmp2245 = result2096;
                            org$pandalanguage$pandac$ASTNode* $tmp2248 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2249, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2251, 90);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2250, $tmp2251);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2248, $tmp2249, token2106.position, result2096, $tmp2250, target2237);
                            $tmp2247 = $tmp2248;
                            $tmp2246 = $tmp2247;
                            result2096 = $tmp2246;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2247));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
                        }
                    }
                    $tmp2236 = -1;
                    goto $l2234;
                    $l2234:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2237));
                    target2237 = NULL;
                    switch ($tmp2236) {
                        case -1: goto $l2252;
                        case 0: goto $l2242;
                    }
                    $l2252:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2253, 63);
                panda$core$Bit $tmp2254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$909_132108.$rawValue, $tmp2253);
                if ($tmp2254.value) {
                {
                    int $tmp2257;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2106);
                        panda$core$String* $tmp2261 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2096);
                        $tmp2260 = $tmp2261;
                        $tmp2259 = $tmp2260;
                        name2258 = $tmp2259;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
                        if (((panda$core$Bit) { name2258 != NULL }).value) {
                        {
                            int $tmp2264;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2268 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2268);
                                $tmp2267 = $tmp2268;
                                $tmp2266 = $tmp2267;
                                types2265 = $tmp2266;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2266));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
                                panda$core$Bit$init$builtin_bit(&$tmp2272, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2273 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2272);
                                $tmp2271 = $tmp2273;
                                $tmp2270 = $tmp2271;
                                t2269 = $tmp2270;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
                                if (((panda$core$Bit) { t2269 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2274 = result2096;
                                    $returnValue2100 = $tmp2274;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2274));
                                    $tmp2264 = 0;
                                    goto $l2262;
                                    $l2275:;
                                    $tmp2257 = 0;
                                    goto $l2255;
                                    $l2276:;
                                    $tmp2095 = 8;
                                    goto $l2093;
                                    $l2277:;
                                    return $returnValue2100;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2265, ((panda$core$Object*) t2269));
                                $l2279:;
                                panda$core$Int64$init$builtin_int64(&$tmp2283, 106);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2282, $tmp2283);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2284 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2282);
                                bool $tmp2281 = ((panda$core$Bit) { $tmp2284.nonnull }).value;
                                if (!$tmp2281) goto $l2280;
                                {
                                    {
                                        $tmp2285 = t2269;
                                        panda$core$Bit$init$builtin_bit(&$tmp2288, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2289 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2288);
                                        $tmp2287 = $tmp2289;
                                        $tmp2286 = $tmp2287;
                                        t2269 = $tmp2286;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                                    }
                                    if (((panda$core$Bit) { t2269 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2290 = result2096;
                                        $returnValue2100 = $tmp2290;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
                                        $tmp2264 = 1;
                                        goto $l2262;
                                        $l2291:;
                                        $tmp2257 = 1;
                                        goto $l2255;
                                        $l2292:;
                                        $tmp2095 = 9;
                                        goto $l2093;
                                        $l2293:;
                                        return $returnValue2100;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2265, ((panda$core$Object*) t2269));
                                }
                                goto $l2279;
                                $l2280:;
                                panda$core$Int64$init$builtin_int64(&$tmp2297, 64);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2296, $tmp2297);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2299 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2296, &$s2298);
                                gt2295 = $tmp2299;
                                if (((panda$core$Bit) { !gt2295.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2300 = result2096;
                                    $returnValue2100 = $tmp2300;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
                                    $tmp2264 = 2;
                                    goto $l2262;
                                    $l2301:;
                                    $tmp2257 = 2;
                                    goto $l2255;
                                    $l2302:;
                                    $tmp2095 = 10;
                                    goto $l2093;
                                    $l2303:;
                                    return $returnValue2100;
                                }
                                }
                                memset(&shouldAccept2305, 0, sizeof(shouldAccept2305));
                                panda$core$Int64$init$builtin_int64(&$tmp2307, 0);
                                panda$core$Object* $tmp2308 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2307);
                                $tmp2306 = $tmp2308;
                                panda$core$Panda$unref$panda$core$Object($tmp2306);
                                if (((panda$core$Bit$wrapper*) $tmp2306)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2310 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2309 = $tmp2310;
                                    {
                                        $match$1022_292311 = n2309.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2314, 99);
                                        panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1022_292311.$rawValue, $tmp2314);
                                        bool $tmp2313 = $tmp2315.value;
                                        if ($tmp2313) goto $l2316;
                                        panda$core$Int64$init$builtin_int64(&$tmp2317, 106);
                                        panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1022_292311.$rawValue, $tmp2317);
                                        $tmp2313 = $tmp2318.value;
                                        $l2316:;
                                        panda$core$Bit $tmp2319 = { $tmp2313 };
                                        bool $tmp2312 = $tmp2319.value;
                                        if ($tmp2312) goto $l2320;
                                        panda$core$Int64$init$builtin_int64(&$tmp2321, 90);
                                        panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1022_292311.$rawValue, $tmp2321);
                                        $tmp2312 = $tmp2322.value;
                                        $l2320:;
                                        panda$core$Bit $tmp2323 = { $tmp2312 };
                                        if ($tmp2323.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2324, true);
                                            shouldAccept2305 = $tmp2324;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2325, 104);
                                        panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1022_292311.$rawValue, $tmp2325);
                                        if ($tmp2326.value) {
                                        {
                                            panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2309.position.line, ((org$pandalanguage$pandac$parser$Token) gt2295.value).position.line);
                                            bool $tmp2327 = $tmp2328.value;
                                            if (!$tmp2327) goto $l2329;
                                            panda$core$Int64$init$builtin_int64(&$tmp2330, 1);
                                            panda$core$Int64 $tmp2331 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2295.value).position.column, $tmp2330);
                                            panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2309.position.column, $tmp2331);
                                            $tmp2327 = $tmp2332.value;
                                            $l2329:;
                                            panda$core$Bit $tmp2333 = { $tmp2327 };
                                            shouldAccept2305 = $tmp2333;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2334, false);
                                            shouldAccept2305 = $tmp2334;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2305.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2309);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2335, true);
                                    shouldAccept2305 = $tmp2335;
                                }
                                }
                                if (shouldAccept2305.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2336 = result2096;
                                        org$pandalanguage$pandac$ASTNode* $tmp2339 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2340, 19);
                                        org$pandalanguage$pandac$Position $tmp2342 = (($fn2341) result2096->$class->vtable[2])(result2096);
                                        panda$collections$ImmutableArray* $tmp2344 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2265);
                                        $tmp2343 = $tmp2344;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2339, $tmp2340, $tmp2342, name2258, $tmp2343);
                                        $tmp2338 = $tmp2339;
                                        $tmp2337 = $tmp2338;
                                        result2096 = $tmp2337;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
                                    }
                                    $tmp2264 = 3;
                                    goto $l2262;
                                    $l2345:;
                                    $tmp2257 = 3;
                                    goto $l2255;
                                    $l2346:;
                                    goto $l2104;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2347 = result2096;
                                    $returnValue2100 = $tmp2347;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
                                    $tmp2264 = 4;
                                    goto $l2262;
                                    $l2348:;
                                    $tmp2257 = 4;
                                    goto $l2255;
                                    $l2349:;
                                    $tmp2095 = 11;
                                    goto $l2093;
                                    $l2350:;
                                    return $returnValue2100;
                                }
                                }
                            }
                            $tmp2264 = -1;
                            goto $l2262;
                            $l2262:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2269));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2265));
                            types2265 = NULL;
                            t2269 = NULL;
                            switch ($tmp2264) {
                                case -1: goto $l2352;
                                case 0: goto $l2275;
                                case 3: goto $l2345;
                                case 1: goto $l2291;
                                case 4: goto $l2348;
                                case 2: goto $l2301;
                            }
                            $l2352:;
                        }
                        }
                        $tmp2353 = result2096;
                        $returnValue2100 = $tmp2353;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
                        $tmp2257 = 5;
                        goto $l2255;
                        $l2354:;
                        $tmp2095 = 12;
                        goto $l2093;
                        $l2355:;
                        return $returnValue2100;
                    }
                    $l2255:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2258));
                    name2258 = NULL;
                    switch ($tmp2257) {
                        case 3: goto $l2346;
                        case 0: goto $l2276;
                        case 2: goto $l2302;
                        case 4: goto $l2349;
                        case 1: goto $l2292;
                        case 5: goto $l2354;
                    }
                    $l2357:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2106);
                    $tmp2358 = result2096;
                    $returnValue2100 = $tmp2358;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
                    $tmp2095 = 13;
                    goto $l2093;
                    $l2359:;
                    return $returnValue2100;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2105:;
    }
    $tmp2095 = -1;
    goto $l2093;
    $l2093:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2096));
    result2096 = NULL;
    switch ($tmp2095) {
        case 6: goto $l2224;
        case 7: goto $l2243;
        case 8: goto $l2277;
        case 1: goto $l2136;
        case 10: goto $l2303;
        case 11: goto $l2350;
        case 13: goto $l2359;
        case 9: goto $l2293;
        case 12: goto $l2355;
        case 2: goto $l2153;
        case 3: goto $l2164;
        case 5: goto $l2196;
        case 4: goto $l2188;
        case -1: goto $l2361;
        case 0: goto $l2102;
    }
    $l2361:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2365 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2366;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    org$pandalanguage$pandac$ASTNode* $returnValue2369;
    org$pandalanguage$pandac$ASTNode* $tmp2370;
    org$pandalanguage$pandac$parser$Token$nullable op2378;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2379;
    panda$core$Int64 $tmp2380;
    org$pandalanguage$pandac$ASTNode* next2383 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2384;
    org$pandalanguage$pandac$ASTNode* $tmp2385;
    org$pandalanguage$pandac$ASTNode* $tmp2387;
    org$pandalanguage$pandac$ASTNode* $tmp2391;
    org$pandalanguage$pandac$ASTNode* $tmp2392;
    org$pandalanguage$pandac$ASTNode* $tmp2393;
    panda$core$Int64 $tmp2395;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    int $tmp2364;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2368 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2367 = $tmp2368;
        $tmp2366 = $tmp2367;
        result2365 = $tmp2366;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
        if (((panda$core$Bit) { result2365 == NULL }).value) {
        {
            $tmp2370 = NULL;
            $returnValue2369 = $tmp2370;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2370));
            $tmp2364 = 0;
            goto $l2362;
            $l2371:;
            return $returnValue2369;
        }
        }
        $l2373:;
        while (true) {
        {
            int $tmp2377;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2380, 58);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2379, $tmp2380);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2381 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2379);
                op2378 = $tmp2381;
                if (((panda$core$Bit) { !op2378.nonnull }).value) {
                {
                    $tmp2377 = 0;
                    goto $l2375;
                    $l2382:;
                    goto $l2374;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2386 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2385 = $tmp2386;
                $tmp2384 = $tmp2385;
                next2383 = $tmp2384;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
                if (((panda$core$Bit) { next2383 == NULL }).value) {
                {
                    $tmp2387 = NULL;
                    $returnValue2369 = $tmp2387;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
                    $tmp2377 = 1;
                    goto $l2375;
                    $l2388:;
                    $tmp2364 = 1;
                    goto $l2362;
                    $l2389:;
                    return $returnValue2369;
                }
                }
                {
                    $tmp2391 = result2365;
                    org$pandalanguage$pandac$ASTNode* $tmp2394 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2395, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2394, $tmp2395, ((org$pandalanguage$pandac$parser$Token) op2378.value).position, result2365, ((org$pandalanguage$pandac$parser$Token) op2378.value).kind, next2383);
                    $tmp2393 = $tmp2394;
                    $tmp2392 = $tmp2393;
                    result2365 = $tmp2392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
                }
            }
            $tmp2377 = -1;
            goto $l2375;
            $l2375:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2383));
            next2383 = NULL;
            switch ($tmp2377) {
                case -1: goto $l2396;
                case 1: goto $l2388;
                case 0: goto $l2382;
            }
            $l2396:;
        }
        }
        $l2374:;
        $tmp2397 = result2365;
        $returnValue2369 = $tmp2397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
        $tmp2364 = 2;
        goto $l2362;
        $l2398:;
        return $returnValue2369;
    }
    $l2362:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2365));
    result2365 = NULL;
    switch ($tmp2364) {
        case 1: goto $l2389;
        case 2: goto $l2398;
        case 0: goto $l2371;
    }
    $l2400:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2401;
    org$pandalanguage$pandac$parser$Token$Kind $match$1083_92403;
    panda$core$Int64 $tmp2406;
    panda$core$Int64 $tmp2409;
    panda$core$Int64 $tmp2413;
    org$pandalanguage$pandac$ASTNode* base2419 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2421;
    org$pandalanguage$pandac$ASTNode* $returnValue2423;
    org$pandalanguage$pandac$ASTNode* $tmp2424;
    org$pandalanguage$pandac$ASTNode* $tmp2427;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    panda$core$Int64 $tmp2430;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    org$pandalanguage$pandac$ASTNode* $tmp2435;
    org$pandalanguage$pandac$parser$Token $tmp2402 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2401 = $tmp2402;
    {
        $match$1083_92403 = op2401.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2406, 53);
        panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1083_92403.$rawValue, $tmp2406);
        bool $tmp2405 = $tmp2407.value;
        if ($tmp2405) goto $l2408;
        panda$core$Int64$init$builtin_int64(&$tmp2409, 50);
        panda$core$Bit $tmp2410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1083_92403.$rawValue, $tmp2409);
        $tmp2405 = $tmp2410.value;
        $l2408:;
        panda$core$Bit $tmp2411 = { $tmp2405 };
        bool $tmp2404 = $tmp2411.value;
        if ($tmp2404) goto $l2412;
        panda$core$Int64$init$builtin_int64(&$tmp2413, 51);
        panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1083_92403.$rawValue, $tmp2413);
        $tmp2404 = $tmp2414.value;
        $l2412:;
        panda$core$Bit $tmp2415 = { $tmp2404 };
        if ($tmp2415.value) {
        {
            int $tmp2418;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2422 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2421 = $tmp2422;
                $tmp2420 = $tmp2421;
                base2419 = $tmp2420;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
                if (((panda$core$Bit) { base2419 == NULL }).value) {
                {
                    $tmp2424 = NULL;
                    $returnValue2423 = $tmp2424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2424));
                    $tmp2418 = 0;
                    goto $l2416;
                    $l2425:;
                    return $returnValue2423;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2429 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2430, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2429, $tmp2430, op2401.position, op2401.kind, base2419);
                $tmp2428 = $tmp2429;
                $tmp2427 = $tmp2428;
                $returnValue2423 = $tmp2427;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                $tmp2418 = 1;
                goto $l2416;
                $l2431:;
                return $returnValue2423;
            }
            $l2416:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2419));
            base2419 = NULL;
            switch ($tmp2418) {
                case 1: goto $l2431;
                case 0: goto $l2425;
            }
            $l2433:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2401);
            org$pandalanguage$pandac$ASTNode* $tmp2436 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2435 = $tmp2436;
            $tmp2434 = $tmp2435;
            $returnValue2423 = $tmp2434;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
            return $returnValue2423;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2441 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2442;
    org$pandalanguage$pandac$ASTNode* $tmp2443;
    org$pandalanguage$pandac$ASTNode* $returnValue2445;
    org$pandalanguage$pandac$ASTNode* $tmp2446;
    org$pandalanguage$pandac$parser$Token op2451;
    org$pandalanguage$pandac$parser$Token$Kind $match$1109_132453;
    panda$core$Int64 $tmp2460;
    panda$core$Int64 $tmp2463;
    panda$core$Int64 $tmp2467;
    panda$core$Int64 $tmp2471;
    panda$core$Int64 $tmp2475;
    panda$core$Int64 $tmp2479;
    panda$core$Int64 $tmp2483;
    org$pandalanguage$pandac$ASTNode* next2489 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2490;
    org$pandalanguage$pandac$ASTNode* $tmp2491;
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$ASTNode* $tmp2497;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    panda$core$Int64 $tmp2501;
    panda$core$Int64 $tmp2503;
    org$pandalanguage$pandac$parser$Token nextToken2505;
    panda$core$Int64 $tmp2507;
    org$pandalanguage$pandac$ASTNode* next2512 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2513;
    org$pandalanguage$pandac$ASTNode* $tmp2514;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $tmp2520;
    org$pandalanguage$pandac$ASTNode* $tmp2521;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    panda$core$Int64 $tmp2524;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2525;
    panda$core$Int64 $tmp2526;
    org$pandalanguage$pandac$ASTNode* $tmp2528;
    org$pandalanguage$pandac$ASTNode* $tmp2531;
    int $tmp2440;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2444 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2443 = $tmp2444;
        $tmp2442 = $tmp2443;
        result2441 = $tmp2442;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
        if (((panda$core$Bit) { result2441 == NULL }).value) {
        {
            $tmp2446 = NULL;
            $returnValue2445 = $tmp2446;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2446));
            $tmp2440 = 0;
            goto $l2438;
            $l2447:;
            return $returnValue2445;
        }
        }
        $l2449:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2452 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2451 = $tmp2452;
            {
                $match$1109_132453 = op2451.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2460, 54);
                panda$core$Bit $tmp2461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2460);
                bool $tmp2459 = $tmp2461.value;
                if ($tmp2459) goto $l2462;
                panda$core$Int64$init$builtin_int64(&$tmp2463, 55);
                panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2463);
                $tmp2459 = $tmp2464.value;
                $l2462:;
                panda$core$Bit $tmp2465 = { $tmp2459 };
                bool $tmp2458 = $tmp2465.value;
                if ($tmp2458) goto $l2466;
                panda$core$Int64$init$builtin_int64(&$tmp2467, 56);
                panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2467);
                $tmp2458 = $tmp2468.value;
                $l2466:;
                panda$core$Bit $tmp2469 = { $tmp2458 };
                bool $tmp2457 = $tmp2469.value;
                if ($tmp2457) goto $l2470;
                panda$core$Int64$init$builtin_int64(&$tmp2471, 57);
                panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2471);
                $tmp2457 = $tmp2472.value;
                $l2470:;
                panda$core$Bit $tmp2473 = { $tmp2457 };
                bool $tmp2456 = $tmp2473.value;
                if ($tmp2456) goto $l2474;
                panda$core$Int64$init$builtin_int64(&$tmp2475, 73);
                panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2475);
                $tmp2456 = $tmp2476.value;
                $l2474:;
                panda$core$Bit $tmp2477 = { $tmp2456 };
                bool $tmp2455 = $tmp2477.value;
                if ($tmp2455) goto $l2478;
                panda$core$Int64$init$builtin_int64(&$tmp2479, 68);
                panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2479);
                $tmp2455 = $tmp2480.value;
                $l2478:;
                panda$core$Bit $tmp2481 = { $tmp2455 };
                bool $tmp2454 = $tmp2481.value;
                if ($tmp2454) goto $l2482;
                panda$core$Int64$init$builtin_int64(&$tmp2483, 70);
                panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2483);
                $tmp2454 = $tmp2484.value;
                $l2482:;
                panda$core$Bit $tmp2485 = { $tmp2454 };
                if ($tmp2485.value) {
                {
                    int $tmp2488;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2492 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2491 = $tmp2492;
                        $tmp2490 = $tmp2491;
                        next2489 = $tmp2490;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
                        if (((panda$core$Bit) { next2489 == NULL }).value) {
                        {
                            $tmp2493 = NULL;
                            $returnValue2445 = $tmp2493;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                            $tmp2488 = 0;
                            goto $l2486;
                            $l2494:;
                            $tmp2440 = 1;
                            goto $l2438;
                            $l2495:;
                            return $returnValue2445;
                        }
                        }
                        {
                            $tmp2497 = result2441;
                            org$pandalanguage$pandac$ASTNode* $tmp2500 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2501, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2500, $tmp2501, op2451.position, result2441, op2451.kind, next2489);
                            $tmp2499 = $tmp2500;
                            $tmp2498 = $tmp2499;
                            result2441 = $tmp2498;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                        }
                    }
                    $tmp2488 = -1;
                    goto $l2486;
                    $l2486:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2489));
                    next2489 = NULL;
                    switch ($tmp2488) {
                        case -1: goto $l2502;
                        case 0: goto $l2494;
                    }
                    $l2502:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2503, 64);
                panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1109_132453.$rawValue, $tmp2503);
                if ($tmp2504.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2506 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2505 = $tmp2506;
                    panda$core$Int64$init$builtin_int64(&$tmp2507, 64);
                    panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2505.kind.$rawValue, $tmp2507);
                    if ($tmp2508.value) {
                    {
                        int $tmp2511;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2515 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2514 = $tmp2515;
                            $tmp2513 = $tmp2514;
                            next2512 = $tmp2513;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
                            if (((panda$core$Bit) { next2512 == NULL }).value) {
                            {
                                $tmp2516 = NULL;
                                $returnValue2445 = $tmp2516;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2516));
                                $tmp2511 = 0;
                                goto $l2509;
                                $l2517:;
                                $tmp2440 = 2;
                                goto $l2438;
                                $l2518:;
                                return $returnValue2445;
                            }
                            }
                            {
                                $tmp2520 = result2441;
                                org$pandalanguage$pandac$ASTNode* $tmp2523 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2524, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2526, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2525, $tmp2526);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2523, $tmp2524, op2451.position, result2441, $tmp2525, next2512);
                                $tmp2522 = $tmp2523;
                                $tmp2521 = $tmp2522;
                                result2441 = $tmp2521;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2521));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                            }
                        }
                        $tmp2511 = -1;
                        goto $l2509;
                        $l2509:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2512));
                        next2512 = NULL;
                        switch ($tmp2511) {
                            case 0: goto $l2517;
                            case -1: goto $l2527;
                        }
                        $l2527:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2505);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2451);
                        $tmp2528 = result2441;
                        $returnValue2445 = $tmp2528;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2528));
                        $tmp2440 = 3;
                        goto $l2438;
                        $l2529:;
                        return $returnValue2445;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2451);
                    $tmp2531 = result2441;
                    $returnValue2445 = $tmp2531;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2531));
                    $tmp2440 = 4;
                    goto $l2438;
                    $l2532:;
                    return $returnValue2445;
                }
                }
                }
            }
        }
        }
        $l2450:;
    }
    $tmp2440 = -1;
    goto $l2438;
    $l2438:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2441));
    result2441 = NULL;
    switch ($tmp2440) {
        case 1: goto $l2495;
        case 4: goto $l2532;
        case -1: goto $l2534;
        case 3: goto $l2529;
        case 2: goto $l2518;
        case 0: goto $l2447;
    }
    $l2534:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2538 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2539;
    org$pandalanguage$pandac$ASTNode* $tmp2540;
    org$pandalanguage$pandac$ASTNode* $returnValue2542;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    org$pandalanguage$pandac$parser$Token op2548;
    org$pandalanguage$pandac$parser$Token$Kind $match$1150_132550;
    panda$core$Int64 $tmp2553;
    panda$core$Int64 $tmp2556;
    panda$core$Int64 $tmp2560;
    org$pandalanguage$pandac$ASTNode* next2566 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2567;
    org$pandalanguage$pandac$ASTNode* $tmp2568;
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    org$pandalanguage$pandac$ASTNode* $tmp2574;
    org$pandalanguage$pandac$ASTNode* $tmp2575;
    org$pandalanguage$pandac$ASTNode* $tmp2576;
    panda$core$Int64 $tmp2578;
    org$pandalanguage$pandac$ASTNode* $tmp2580;
    int $tmp2537;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2541 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2540 = $tmp2541;
        $tmp2539 = $tmp2540;
        result2538 = $tmp2539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
        if (((panda$core$Bit) { result2538 == NULL }).value) {
        {
            $tmp2543 = NULL;
            $returnValue2542 = $tmp2543;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2543));
            $tmp2537 = 0;
            goto $l2535;
            $l2544:;
            return $returnValue2542;
        }
        }
        $l2546:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2549 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2548 = $tmp2549;
            {
                $match$1150_132550 = op2548.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2553, 52);
                panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1150_132550.$rawValue, $tmp2553);
                bool $tmp2552 = $tmp2554.value;
                if ($tmp2552) goto $l2555;
                panda$core$Int64$init$builtin_int64(&$tmp2556, 53);
                panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1150_132550.$rawValue, $tmp2556);
                $tmp2552 = $tmp2557.value;
                $l2555:;
                panda$core$Bit $tmp2558 = { $tmp2552 };
                bool $tmp2551 = $tmp2558.value;
                if ($tmp2551) goto $l2559;
                panda$core$Int64$init$builtin_int64(&$tmp2560, 72);
                panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1150_132550.$rawValue, $tmp2560);
                $tmp2551 = $tmp2561.value;
                $l2559:;
                panda$core$Bit $tmp2562 = { $tmp2551 };
                if ($tmp2562.value) {
                {
                    int $tmp2565;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2569 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2568 = $tmp2569;
                        $tmp2567 = $tmp2568;
                        next2566 = $tmp2567;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2567));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
                        if (((panda$core$Bit) { next2566 == NULL }).value) {
                        {
                            $tmp2570 = NULL;
                            $returnValue2542 = $tmp2570;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2570));
                            $tmp2565 = 0;
                            goto $l2563;
                            $l2571:;
                            $tmp2537 = 1;
                            goto $l2535;
                            $l2572:;
                            return $returnValue2542;
                        }
                        }
                        {
                            $tmp2574 = result2538;
                            org$pandalanguage$pandac$ASTNode* $tmp2577 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2578, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2577, $tmp2578, op2548.position, result2538, op2548.kind, next2566);
                            $tmp2576 = $tmp2577;
                            $tmp2575 = $tmp2576;
                            result2538 = $tmp2575;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2575));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2574));
                        }
                    }
                    $tmp2565 = -1;
                    goto $l2563;
                    $l2563:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2566));
                    next2566 = NULL;
                    switch ($tmp2565) {
                        case 0: goto $l2571;
                        case -1: goto $l2579;
                    }
                    $l2579:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2548);
                    $tmp2580 = result2538;
                    $returnValue2542 = $tmp2580;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2580));
                    $tmp2537 = 2;
                    goto $l2535;
                    $l2581:;
                    return $returnValue2542;
                }
                }
            }
        }
        }
        $l2547:;
    }
    $tmp2537 = -1;
    goto $l2535;
    $l2535:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2538));
    result2538 = NULL;
    switch ($tmp2537) {
        case -1: goto $l2583;
        case 2: goto $l2581;
        case 0: goto $l2544;
        case 1: goto $l2572;
    }
    $l2583:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2587 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1170_92588;
    panda$core$Int64 $tmp2591;
    panda$core$Int64 $tmp2594;
    org$pandalanguage$pandac$ASTNode* $tmp2597;
    org$pandalanguage$pandac$ASTNode* $tmp2598;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2600;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    org$pandalanguage$pandac$ASTNode* $returnValue2603;
    org$pandalanguage$pandac$ASTNode* $tmp2604;
    org$pandalanguage$pandac$parser$Token op2607;
    org$pandalanguage$pandac$parser$Token$Kind $match$1180_92609;
    panda$core$Int64 $tmp2611;
    panda$core$Int64 $tmp2614;
    org$pandalanguage$pandac$parser$Token next2620;
    org$pandalanguage$pandac$ASTNode* right2622 = NULL;
    panda$core$Int64 $tmp2625;
    panda$core$Int64 $tmp2628;
    panda$core$Int64 $tmp2632;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    org$pandalanguage$pandac$ASTNode* $tmp2639;
    org$pandalanguage$pandac$ASTNode* $tmp2643;
    org$pandalanguage$pandac$ASTNode* $tmp2644;
    org$pandalanguage$pandac$ASTNode* step2645 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2646;
    panda$core$Int64 $tmp2647;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    org$pandalanguage$pandac$ASTNode* $tmp2650;
    org$pandalanguage$pandac$ASTNode* $tmp2651;
    org$pandalanguage$pandac$ASTNode* $tmp2653;
    org$pandalanguage$pandac$ASTNode* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* $tmp2659;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    panda$core$Int64 $tmp2662;
    panda$core$Int64 $tmp2663;
    org$pandalanguage$pandac$ASTNode* $tmp2669;
    int $tmp2586;
    {
        memset(&result2587, 0, sizeof(result2587));
        {
            org$pandalanguage$pandac$parser$Token $tmp2589 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1170_92588 = $tmp2589.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2591, 98);
            panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1170_92588.$rawValue, $tmp2591);
            bool $tmp2590 = $tmp2592.value;
            if ($tmp2590) goto $l2593;
            panda$core$Int64$init$builtin_int64(&$tmp2594, 97);
            panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1170_92588.$rawValue, $tmp2594);
            $tmp2590 = $tmp2595.value;
            $l2593:;
            panda$core$Bit $tmp2596 = { $tmp2590 };
            if ($tmp2596.value) {
            {
                {
                    $tmp2597 = result2587;
                    $tmp2598 = NULL;
                    result2587 = $tmp2598;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2598));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                }
            }
            }
            else {
            {
                {
                    $tmp2599 = result2587;
                    org$pandalanguage$pandac$ASTNode* $tmp2602 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2601 = $tmp2602;
                    $tmp2600 = $tmp2601;
                    result2587 = $tmp2600;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                }
                if (((panda$core$Bit) { result2587 == NULL }).value) {
                {
                    $tmp2604 = NULL;
                    $returnValue2603 = $tmp2604;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2604));
                    $tmp2586 = 0;
                    goto $l2584;
                    $l2605:;
                    return $returnValue2603;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2608 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2607 = $tmp2608;
        {
            $match$1180_92609 = op2607.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2611, 98);
            panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1180_92609.$rawValue, $tmp2611);
            bool $tmp2610 = $tmp2612.value;
            if ($tmp2610) goto $l2613;
            panda$core$Int64$init$builtin_int64(&$tmp2614, 97);
            panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1180_92609.$rawValue, $tmp2614);
            $tmp2610 = $tmp2615.value;
            $l2613:;
            panda$core$Bit $tmp2616 = { $tmp2610 };
            if ($tmp2616.value) {
            {
                int $tmp2619;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2621 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2620 = $tmp2621;
                    memset(&right2622, 0, sizeof(right2622));
                    panda$core$Int64$init$builtin_int64(&$tmp2625, 103);
                    panda$core$Bit $tmp2626 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2620.kind.$rawValue, $tmp2625);
                    bool $tmp2624 = $tmp2626.value;
                    if (!$tmp2624) goto $l2627;
                    panda$core$Int64$init$builtin_int64(&$tmp2628, 105);
                    panda$core$Bit $tmp2629 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2620.kind.$rawValue, $tmp2628);
                    $tmp2624 = $tmp2629.value;
                    $l2627:;
                    panda$core$Bit $tmp2630 = { $tmp2624 };
                    bool $tmp2623 = $tmp2630.value;
                    if (!$tmp2623) goto $l2631;
                    panda$core$Int64$init$builtin_int64(&$tmp2632, 34);
                    panda$core$Bit $tmp2633 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2620.kind.$rawValue, $tmp2632);
                    $tmp2623 = $tmp2633.value;
                    $l2631:;
                    panda$core$Bit $tmp2634 = { $tmp2623 };
                    if ($tmp2634.value) {
                    {
                        {
                            $tmp2635 = right2622;
                            org$pandalanguage$pandac$ASTNode* $tmp2638 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2637 = $tmp2638;
                            $tmp2636 = $tmp2637;
                            right2622 = $tmp2636;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2635));
                        }
                        if (((panda$core$Bit) { right2622 == NULL }).value) {
                        {
                            $tmp2639 = NULL;
                            $returnValue2603 = $tmp2639;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
                            $tmp2619 = 0;
                            goto $l2617;
                            $l2640:;
                            $tmp2586 = 1;
                            goto $l2584;
                            $l2641:;
                            return $returnValue2603;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2643 = right2622;
                            $tmp2644 = NULL;
                            right2622 = $tmp2644;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2644));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
                        }
                    }
                    }
                    memset(&step2645, 0, sizeof(step2645));
                    panda$core$Int64$init$builtin_int64(&$tmp2647, 34);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2646, $tmp2647);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2648 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2646);
                    if (((panda$core$Bit) { $tmp2648.nonnull }).value) {
                    {
                        {
                            $tmp2649 = step2645;
                            org$pandalanguage$pandac$ASTNode* $tmp2652 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2651 = $tmp2652;
                            $tmp2650 = $tmp2651;
                            step2645 = $tmp2650;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2650));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2649));
                        }
                        if (((panda$core$Bit) { step2645 == NULL }).value) {
                        {
                            $tmp2653 = NULL;
                            $returnValue2603 = $tmp2653;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2653));
                            $tmp2619 = 1;
                            goto $l2617;
                            $l2654:;
                            $tmp2586 = 2;
                            goto $l2584;
                            $l2655:;
                            return $returnValue2603;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2657 = step2645;
                            $tmp2658 = NULL;
                            step2645 = $tmp2658;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2657));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2661 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2662, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2663, 97);
                    panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2607.kind.$rawValue, $tmp2663);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2661, $tmp2662, op2607.position, result2587, right2622, $tmp2664, step2645);
                    $tmp2660 = $tmp2661;
                    $tmp2659 = $tmp2660;
                    $returnValue2603 = $tmp2659;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2659));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2660));
                    $tmp2619 = 2;
                    goto $l2617;
                    $l2665:;
                    $tmp2586 = 3;
                    goto $l2584;
                    $l2666:;
                    return $returnValue2603;
                }
                $l2617:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2622));
                switch ($tmp2619) {
                    case 0: goto $l2640;
                    case 2: goto $l2665;
                    case 1: goto $l2654;
                }
                $l2668:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2607);
                $tmp2669 = result2587;
                $returnValue2603 = $tmp2669;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2669));
                $tmp2586 = 4;
                goto $l2584;
                $l2670:;
                return $returnValue2603;
            }
            }
        }
    }
    $tmp2586 = -1;
    goto $l2584;
    $l2584:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2587));
    switch ($tmp2586) {
        case 4: goto $l2670;
        case 2: goto $l2655;
        case 3: goto $l2666;
        case 0: goto $l2605;
        case -1: goto $l2672;
        case 1: goto $l2641;
    }
    $l2672:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2676 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2677;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    org$pandalanguage$pandac$ASTNode* $returnValue2680;
    org$pandalanguage$pandac$ASTNode* $tmp2681;
    org$pandalanguage$pandac$parser$Token op2686;
    org$pandalanguage$pandac$parser$Token$Kind $match$1223_132688;
    panda$core$Int64 $tmp2696;
    panda$core$Int64 $tmp2699;
    panda$core$Int64 $tmp2703;
    panda$core$Int64 $tmp2707;
    panda$core$Int64 $tmp2711;
    panda$core$Int64 $tmp2715;
    panda$core$Int64 $tmp2719;
    panda$core$Int64 $tmp2723;
    org$pandalanguage$pandac$ASTNode* next2729 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    org$pandalanguage$pandac$ASTNode* $tmp2733;
    org$pandalanguage$pandac$ASTNode* $tmp2737;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    org$pandalanguage$pandac$ASTNode* $tmp2739;
    panda$core$Int64 $tmp2741;
    org$pandalanguage$pandac$ASTNode* $tmp2743;
    int $tmp2675;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2679 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2678 = $tmp2679;
        $tmp2677 = $tmp2678;
        result2676 = $tmp2677;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2678));
        if (((panda$core$Bit) { result2676 == NULL }).value) {
        {
            $tmp2681 = NULL;
            $returnValue2680 = $tmp2681;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2681));
            $tmp2675 = 0;
            goto $l2673;
            $l2682:;
            return $returnValue2680;
        }
        }
        $l2684:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2687 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2686 = $tmp2687;
            {
                $match$1223_132688 = op2686.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2696, 59);
                panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2696);
                bool $tmp2695 = $tmp2697.value;
                if ($tmp2695) goto $l2698;
                panda$core$Int64$init$builtin_int64(&$tmp2699, 60);
                panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2699);
                $tmp2695 = $tmp2700.value;
                $l2698:;
                panda$core$Bit $tmp2701 = { $tmp2695 };
                bool $tmp2694 = $tmp2701.value;
                if ($tmp2694) goto $l2702;
                panda$core$Int64$init$builtin_int64(&$tmp2703, 61);
                panda$core$Bit $tmp2704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2703);
                $tmp2694 = $tmp2704.value;
                $l2702:;
                panda$core$Bit $tmp2705 = { $tmp2694 };
                bool $tmp2693 = $tmp2705.value;
                if ($tmp2693) goto $l2706;
                panda$core$Int64$init$builtin_int64(&$tmp2707, 62);
                panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2707);
                $tmp2693 = $tmp2708.value;
                $l2706:;
                panda$core$Bit $tmp2709 = { $tmp2693 };
                bool $tmp2692 = $tmp2709.value;
                if ($tmp2692) goto $l2710;
                panda$core$Int64$init$builtin_int64(&$tmp2711, 63);
                panda$core$Bit $tmp2712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2711);
                $tmp2692 = $tmp2712.value;
                $l2710:;
                panda$core$Bit $tmp2713 = { $tmp2692 };
                bool $tmp2691 = $tmp2713.value;
                if ($tmp2691) goto $l2714;
                panda$core$Int64$init$builtin_int64(&$tmp2715, 64);
                panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2715);
                $tmp2691 = $tmp2716.value;
                $l2714:;
                panda$core$Bit $tmp2717 = { $tmp2691 };
                bool $tmp2690 = $tmp2717.value;
                if ($tmp2690) goto $l2718;
                panda$core$Int64$init$builtin_int64(&$tmp2719, 65);
                panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2719);
                $tmp2690 = $tmp2720.value;
                $l2718:;
                panda$core$Bit $tmp2721 = { $tmp2690 };
                bool $tmp2689 = $tmp2721.value;
                if ($tmp2689) goto $l2722;
                panda$core$Int64$init$builtin_int64(&$tmp2723, 66);
                panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1223_132688.$rawValue, $tmp2723);
                $tmp2689 = $tmp2724.value;
                $l2722:;
                panda$core$Bit $tmp2725 = { $tmp2689 };
                if ($tmp2725.value) {
                {
                    int $tmp2728;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2732 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2731 = $tmp2732;
                        $tmp2730 = $tmp2731;
                        next2729 = $tmp2730;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2730));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
                        if (((panda$core$Bit) { next2729 == NULL }).value) {
                        {
                            $tmp2733 = NULL;
                            $returnValue2680 = $tmp2733;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2733));
                            $tmp2728 = 0;
                            goto $l2726;
                            $l2734:;
                            $tmp2675 = 1;
                            goto $l2673;
                            $l2735:;
                            return $returnValue2680;
                        }
                        }
                        {
                            $tmp2737 = result2676;
                            org$pandalanguage$pandac$ASTNode* $tmp2740 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2741, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2740, $tmp2741, op2686.position, result2676, op2686.kind, next2729);
                            $tmp2739 = $tmp2740;
                            $tmp2738 = $tmp2739;
                            result2676 = $tmp2738;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2737));
                        }
                    }
                    $tmp2728 = -1;
                    goto $l2726;
                    $l2726:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2729));
                    next2729 = NULL;
                    switch ($tmp2728) {
                        case -1: goto $l2742;
                        case 0: goto $l2734;
                    }
                    $l2742:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2686);
                    $tmp2743 = result2676;
                    $returnValue2680 = $tmp2743;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2743));
                    $tmp2675 = 2;
                    goto $l2673;
                    $l2744:;
                    return $returnValue2680;
                }
                }
            }
        }
        }
        $l2685:;
    }
    $tmp2675 = -1;
    goto $l2673;
    $l2673:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2676));
    result2676 = NULL;
    switch ($tmp2675) {
        case 1: goto $l2735;
        case 2: goto $l2744;
        case -1: goto $l2746;
        case 0: goto $l2682;
    }
    $l2746:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $tmp2752;
    org$pandalanguage$pandac$ASTNode* $returnValue2754;
    org$pandalanguage$pandac$ASTNode* $tmp2755;
    org$pandalanguage$pandac$parser$Token op2760;
    org$pandalanguage$pandac$parser$Token$Kind $match$1254_132762;
    panda$core$Int64 $tmp2764;
    panda$core$Int64 $tmp2767;
    org$pandalanguage$pandac$ASTNode* next2773 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2774;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    org$pandalanguage$pandac$ASTNode* $tmp2777;
    org$pandalanguage$pandac$ASTNode* $tmp2781;
    org$pandalanguage$pandac$ASTNode* $tmp2782;
    org$pandalanguage$pandac$ASTNode* $tmp2783;
    panda$core$Int64 $tmp2785;
    org$pandalanguage$pandac$ASTNode* $tmp2787;
    int $tmp2749;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2753 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2752 = $tmp2753;
        $tmp2751 = $tmp2752;
        result2750 = $tmp2751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2752));
        if (((panda$core$Bit) { result2750 == NULL }).value) {
        {
            $tmp2755 = NULL;
            $returnValue2754 = $tmp2755;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2755));
            $tmp2749 = 0;
            goto $l2747;
            $l2756:;
            return $returnValue2754;
        }
        }
        $l2758:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2761 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2760 = $tmp2761;
            {
                $match$1254_132762 = op2760.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2764, 67);
                panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1254_132762.$rawValue, $tmp2764);
                bool $tmp2763 = $tmp2765.value;
                if ($tmp2763) goto $l2766;
                panda$core$Int64$init$builtin_int64(&$tmp2767, 71);
                panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1254_132762.$rawValue, $tmp2767);
                $tmp2763 = $tmp2768.value;
                $l2766:;
                panda$core$Bit $tmp2769 = { $tmp2763 };
                if ($tmp2769.value) {
                {
                    int $tmp2772;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2776 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2775 = $tmp2776;
                        $tmp2774 = $tmp2775;
                        next2773 = $tmp2774;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2774));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2775));
                        if (((panda$core$Bit) { next2773 == NULL }).value) {
                        {
                            $tmp2777 = NULL;
                            $returnValue2754 = $tmp2777;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2777));
                            $tmp2772 = 0;
                            goto $l2770;
                            $l2778:;
                            $tmp2749 = 1;
                            goto $l2747;
                            $l2779:;
                            return $returnValue2754;
                        }
                        }
                        {
                            $tmp2781 = result2750;
                            org$pandalanguage$pandac$ASTNode* $tmp2784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2785, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2784, $tmp2785, op2760.position, result2750, op2760.kind, next2773);
                            $tmp2783 = $tmp2784;
                            $tmp2782 = $tmp2783;
                            result2750 = $tmp2782;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2782));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2781));
                        }
                    }
                    $tmp2772 = -1;
                    goto $l2770;
                    $l2770:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2773));
                    next2773 = NULL;
                    switch ($tmp2772) {
                        case -1: goto $l2786;
                        case 0: goto $l2778;
                    }
                    $l2786:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2760);
                    $tmp2787 = result2750;
                    $returnValue2754 = $tmp2787;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2787));
                    $tmp2749 = 2;
                    goto $l2747;
                    $l2788:;
                    return $returnValue2754;
                }
                }
            }
        }
        }
        $l2759:;
    }
    $tmp2749 = -1;
    goto $l2747;
    $l2747:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2750));
    result2750 = NULL;
    switch ($tmp2749) {
        case -1: goto $l2790;
        case 2: goto $l2788;
        case 0: goto $l2756;
        case 1: goto $l2779;
    }
    $l2790:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2794 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2795;
    org$pandalanguage$pandac$ASTNode* $tmp2796;
    org$pandalanguage$pandac$ASTNode* $returnValue2798;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    org$pandalanguage$pandac$parser$Token$nullable op2807;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2808;
    panda$core$Int64 $tmp2809;
    org$pandalanguage$pandac$ASTNode* next2812 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2813;
    org$pandalanguage$pandac$ASTNode* $tmp2814;
    org$pandalanguage$pandac$ASTNode* $tmp2816;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    org$pandalanguage$pandac$ASTNode* $tmp2821;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    panda$core$Int64 $tmp2824;
    org$pandalanguage$pandac$ASTNode* $tmp2826;
    int $tmp2793;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2797 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2796 = $tmp2797;
        $tmp2795 = $tmp2796;
        result2794 = $tmp2795;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2795));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2796));
        if (((panda$core$Bit) { result2794 == NULL }).value) {
        {
            $tmp2799 = NULL;
            $returnValue2798 = $tmp2799;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2799));
            $tmp2793 = 0;
            goto $l2791;
            $l2800:;
            return $returnValue2798;
        }
        }
        $l2802:;
        while (true) {
        {
            int $tmp2806;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2809, 69);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2808, $tmp2809);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2810 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2808);
                op2807 = $tmp2810;
                if (((panda$core$Bit) { !op2807.nonnull }).value) {
                {
                    $tmp2806 = 0;
                    goto $l2804;
                    $l2811:;
                    goto $l2803;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2815 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2814 = $tmp2815;
                $tmp2813 = $tmp2814;
                next2812 = $tmp2813;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2813));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2814));
                if (((panda$core$Bit) { next2812 == NULL }).value) {
                {
                    $tmp2816 = NULL;
                    $returnValue2798 = $tmp2816;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2816));
                    $tmp2806 = 1;
                    goto $l2804;
                    $l2817:;
                    $tmp2793 = 1;
                    goto $l2791;
                    $l2818:;
                    return $returnValue2798;
                }
                }
                {
                    $tmp2820 = result2794;
                    org$pandalanguage$pandac$ASTNode* $tmp2823 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2824, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2823, $tmp2824, ((org$pandalanguage$pandac$parser$Token) op2807.value).position, result2794, ((org$pandalanguage$pandac$parser$Token) op2807.value).kind, next2812);
                    $tmp2822 = $tmp2823;
                    $tmp2821 = $tmp2822;
                    result2794 = $tmp2821;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2821));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2822));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2820));
                }
            }
            $tmp2806 = -1;
            goto $l2804;
            $l2804:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2812));
            next2812 = NULL;
            switch ($tmp2806) {
                case 1: goto $l2817;
                case 0: goto $l2811;
                case -1: goto $l2825;
            }
            $l2825:;
        }
        }
        $l2803:;
        $tmp2826 = result2794;
        $returnValue2798 = $tmp2826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2826));
        $tmp2793 = 2;
        goto $l2791;
        $l2827:;
        return $returnValue2798;
    }
    $l2791:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2794));
    result2794 = NULL;
    switch ($tmp2793) {
        case 1: goto $l2818;
        case 2: goto $l2827;
        case 0: goto $l2800;
    }
    $l2829:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2833;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2834;
    panda$core$Int64 $tmp2835;
    org$pandalanguage$pandac$ASTNode* $returnValue2838;
    org$pandalanguage$pandac$ASTNode* $tmp2839;
    org$pandalanguage$pandac$ASTNode* test2842 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2843;
    org$pandalanguage$pandac$ASTNode* $tmp2844;
    org$pandalanguage$pandac$ASTNode* $tmp2846;
    panda$collections$ImmutableArray* ifTrue2849 = NULL;
    panda$collections$ImmutableArray* $tmp2850;
    panda$collections$ImmutableArray* $tmp2851;
    org$pandalanguage$pandac$ASTNode* $tmp2853;
    org$pandalanguage$pandac$ASTNode* ifFalse2856 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2857;
    panda$core$Int64 $tmp2858;
    panda$core$Int64 $tmp2861;
    org$pandalanguage$pandac$ASTNode* $tmp2863;
    org$pandalanguage$pandac$ASTNode* $tmp2864;
    org$pandalanguage$pandac$ASTNode* $tmp2865;
    org$pandalanguage$pandac$ASTNode* $tmp2867;
    org$pandalanguage$pandac$ASTNode* $tmp2870;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    org$pandalanguage$pandac$ASTNode* $tmp2872;
    org$pandalanguage$pandac$ASTNode* $tmp2874;
    org$pandalanguage$pandac$ASTNode* $tmp2877;
    org$pandalanguage$pandac$ASTNode* $tmp2878;
    org$pandalanguage$pandac$ASTNode* $tmp2879;
    org$pandalanguage$pandac$ASTNode* $tmp2880;
    panda$core$Int64 $tmp2882;
    int $tmp2832;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2835, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2834, $tmp2835);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2837 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2834, &$s2836);
        start2833 = $tmp2837;
        if (((panda$core$Bit) { !start2833.nonnull }).value) {
        {
            $tmp2839 = NULL;
            $returnValue2838 = $tmp2839;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2839));
            $tmp2832 = 0;
            goto $l2830;
            $l2840:;
            return $returnValue2838;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2845 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2844 = $tmp2845;
        $tmp2843 = $tmp2844;
        test2842 = $tmp2843;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2843));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2844));
        if (((panda$core$Bit) { test2842 == NULL }).value) {
        {
            $tmp2846 = NULL;
            $returnValue2838 = $tmp2846;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2846));
            $tmp2832 = 1;
            goto $l2830;
            $l2847:;
            return $returnValue2838;
        }
        }
        panda$collections$ImmutableArray* $tmp2852 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2851 = $tmp2852;
        $tmp2850 = $tmp2851;
        ifTrue2849 = $tmp2850;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2850));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2851));
        if (((panda$core$Bit) { ifTrue2849 == NULL }).value) {
        {
            $tmp2853 = NULL;
            $returnValue2838 = $tmp2853;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2853));
            $tmp2832 = 2;
            goto $l2830;
            $l2854:;
            return $returnValue2838;
        }
        }
        memset(&ifFalse2856, 0, sizeof(ifFalse2856));
        panda$core$Int64$init$builtin_int64(&$tmp2858, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2857, $tmp2858);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2859 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2857);
        if (((panda$core$Bit) { $tmp2859.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2860 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2861, 37);
            panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2860.kind.$rawValue, $tmp2861);
            if ($tmp2862.value) {
            {
                {
                    $tmp2863 = ifFalse2856;
                    org$pandalanguage$pandac$ASTNode* $tmp2866 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2865 = $tmp2866;
                    $tmp2864 = $tmp2865;
                    ifFalse2856 = $tmp2864;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2864));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
                }
                if (((panda$core$Bit) { ifFalse2856 == NULL }).value) {
                {
                    $tmp2867 = NULL;
                    $returnValue2838 = $tmp2867;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2867));
                    $tmp2832 = 3;
                    goto $l2830;
                    $l2868:;
                    return $returnValue2838;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2870 = ifFalse2856;
                    org$pandalanguage$pandac$ASTNode* $tmp2873 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2872 = $tmp2873;
                    $tmp2871 = $tmp2872;
                    ifFalse2856 = $tmp2871;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2871));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2872));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2870));
                }
                if (((panda$core$Bit) { ifFalse2856 == NULL }).value) {
                {
                    $tmp2874 = NULL;
                    $returnValue2838 = $tmp2874;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2874));
                    $tmp2832 = 4;
                    goto $l2830;
                    $l2875:;
                    return $returnValue2838;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2877 = ifFalse2856;
                $tmp2878 = NULL;
                ifFalse2856 = $tmp2878;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2877));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2881 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2882, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2881, $tmp2882, ((org$pandalanguage$pandac$parser$Token) start2833.value).position, test2842, ifTrue2849, ifFalse2856);
        $tmp2880 = $tmp2881;
        $tmp2879 = $tmp2880;
        $returnValue2838 = $tmp2879;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2879));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2880));
        $tmp2832 = 5;
        goto $l2830;
        $l2883:;
        return $returnValue2838;
    }
    $l2830:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2856));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2849));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2842));
    test2842 = NULL;
    ifTrue2849 = NULL;
    switch ($tmp2832) {
        case 2: goto $l2854;
        case 5: goto $l2883;
        case 3: goto $l2868;
        case 1: goto $l2847;
        case 0: goto $l2840;
        case 4: goto $l2875;
    }
    $l2885:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2886;
    panda$core$Int64 $tmp2887;
    org$pandalanguage$pandac$ASTNode* $returnValue2890;
    org$pandalanguage$pandac$ASTNode* $tmp2891;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$ASTNode* $tmp2894;
    panda$core$Bit $tmp2895;
    panda$core$Int64$init$builtin_int64(&$tmp2887, 96);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2886, $tmp2887);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2889 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2886, &$s2888);
    if (((panda$core$Bit) { !$tmp2889.nonnull }).value) {
    {
        $tmp2891 = NULL;
        $returnValue2890 = $tmp2891;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2891));
        return $returnValue2890;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2895, false);
    org$pandalanguage$pandac$ASTNode* $tmp2896 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2895);
    $tmp2894 = $tmp2896;
    $tmp2893 = $tmp2894;
    $returnValue2890 = $tmp2893;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2894));
    return $returnValue2890;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2898;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2899;
    panda$core$Int64 $tmp2900;
    org$pandalanguage$pandac$ASTNode* $returnValue2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    panda$core$Int64 $tmp2907;
    org$pandalanguage$pandac$ASTNode* type2912 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2913;
    org$pandalanguage$pandac$ASTNode* $tmp2914;
    org$pandalanguage$pandac$ASTNode* $tmp2916;
    org$pandalanguage$pandac$ASTNode* $tmp2919;
    org$pandalanguage$pandac$ASTNode* $tmp2920;
    panda$core$Int64 $tmp2922;
    panda$core$String* $tmp2923;
    org$pandalanguage$pandac$ASTNode* $tmp2928;
    org$pandalanguage$pandac$ASTNode* $tmp2929;
    panda$core$Int64 $tmp2931;
    panda$core$String* $tmp2932;
    panda$core$Int64$init$builtin_int64(&$tmp2900, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2899, $tmp2900);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2902 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2899, &$s2901);
    id2898 = $tmp2902;
    if (((panda$core$Bit) { !id2898.nonnull }).value) {
    {
        $tmp2904 = NULL;
        $returnValue2903 = $tmp2904;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
        return $returnValue2903;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2906 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2907, 96);
    panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2906.kind.$rawValue, $tmp2907);
    if ($tmp2908.value) {
    {
        int $tmp2911;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2915 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2914 = $tmp2915;
            $tmp2913 = $tmp2914;
            type2912 = $tmp2913;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2913));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2914));
            if (((panda$core$Bit) { type2912 == NULL }).value) {
            {
                $tmp2916 = NULL;
                $returnValue2903 = $tmp2916;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2916));
                $tmp2911 = 0;
                goto $l2909;
                $l2917:;
                return $returnValue2903;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2921 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2922, 44);
            panda$core$String* $tmp2924 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2898.value));
            $tmp2923 = $tmp2924;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2921, $tmp2922, ((org$pandalanguage$pandac$parser$Token) id2898.value).position, $tmp2923, type2912);
            $tmp2920 = $tmp2921;
            $tmp2919 = $tmp2920;
            $returnValue2903 = $tmp2919;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2923));
            $tmp2911 = 1;
            goto $l2909;
            $l2925:;
            return $returnValue2903;
        }
        $l2909:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2912));
        type2912 = NULL;
        switch ($tmp2911) {
            case 0: goto $l2917;
            case 1: goto $l2925;
        }
        $l2927:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2930 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2931, 20);
    panda$core$String* $tmp2933 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2898.value));
    $tmp2932 = $tmp2933;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2930, $tmp2931, ((org$pandalanguage$pandac$parser$Token) id2898.value).position, $tmp2932);
    $tmp2929 = $tmp2930;
    $tmp2928 = $tmp2929;
    $returnValue2903 = $tmp2928;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2928));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2929));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2932));
    return $returnValue2903;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2938;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2939;
    panda$core$Int64 $tmp2940;
    org$pandalanguage$pandac$ASTNode* $returnValue2943;
    org$pandalanguage$pandac$ASTNode* $tmp2944;
    org$pandalanguage$pandac$ASTNode* t2947 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2948;
    org$pandalanguage$pandac$ASTNode* $tmp2949;
    org$pandalanguage$pandac$ASTNode* $tmp2951;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2954;
    panda$core$Int64 $tmp2955;
    org$pandalanguage$pandac$ASTNode* $tmp2958;
    org$pandalanguage$pandac$ASTNode* list2961 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2962;
    org$pandalanguage$pandac$ASTNode* $tmp2963;
    org$pandalanguage$pandac$ASTNode* $tmp2965;
    panda$collections$ImmutableArray* block2968 = NULL;
    panda$collections$ImmutableArray* $tmp2969;
    panda$collections$ImmutableArray* $tmp2970;
    org$pandalanguage$pandac$ASTNode* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2975;
    org$pandalanguage$pandac$ASTNode* $tmp2976;
    panda$core$Int64 $tmp2978;
    int $tmp2937;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2940, 33);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2939, $tmp2940);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2942 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2939, &$s2941);
        start2938 = $tmp2942;
        if (((panda$core$Bit) { !start2938.nonnull }).value) {
        {
            $tmp2944 = NULL;
            $returnValue2943 = $tmp2944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2944));
            $tmp2937 = 0;
            goto $l2935;
            $l2945:;
            return $returnValue2943;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2950 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2949 = $tmp2950;
        $tmp2948 = $tmp2949;
        t2947 = $tmp2948;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2949));
        if (((panda$core$Bit) { t2947 == NULL }).value) {
        {
            $tmp2951 = NULL;
            $returnValue2943 = $tmp2951;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2951));
            $tmp2937 = 1;
            goto $l2935;
            $l2952:;
            return $returnValue2943;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2955, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2954, $tmp2955);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2957 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2954, &$s2956);
        if (((panda$core$Bit) { !$tmp2957.nonnull }).value) {
        {
            $tmp2958 = NULL;
            $returnValue2943 = $tmp2958;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2958));
            $tmp2937 = 2;
            goto $l2935;
            $l2959:;
            return $returnValue2943;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2964 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2963 = $tmp2964;
        $tmp2962 = $tmp2963;
        list2961 = $tmp2962;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2962));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2963));
        if (((panda$core$Bit) { list2961 == NULL }).value) {
        {
            $tmp2965 = NULL;
            $returnValue2943 = $tmp2965;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2965));
            $tmp2937 = 3;
            goto $l2935;
            $l2966:;
            return $returnValue2943;
        }
        }
        panda$collections$ImmutableArray* $tmp2971 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2970 = $tmp2971;
        $tmp2969 = $tmp2970;
        block2968 = $tmp2969;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2970));
        if (((panda$core$Bit) { block2968 == NULL }).value) {
        {
            $tmp2972 = NULL;
            $returnValue2943 = $tmp2972;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2972));
            $tmp2937 = 4;
            goto $l2935;
            $l2973:;
            return $returnValue2943;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2977 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2978, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2977, $tmp2978, ((org$pandalanguage$pandac$parser$Token) start2938.value).position, p_label, t2947, list2961, block2968);
        $tmp2976 = $tmp2977;
        $tmp2975 = $tmp2976;
        $returnValue2943 = $tmp2975;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2976));
        $tmp2937 = 5;
        goto $l2935;
        $l2979:;
        return $returnValue2943;
    }
    $l2935:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2968));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2961));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2947));
    t2947 = NULL;
    list2961 = NULL;
    block2968 = NULL;
    switch ($tmp2937) {
        case 3: goto $l2966;
        case 5: goto $l2979;
        case 4: goto $l2973;
        case 2: goto $l2959;
        case 0: goto $l2945;
        case 1: goto $l2952;
    }
    $l2981:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2985;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2986;
    panda$core$Int64 $tmp2987;
    org$pandalanguage$pandac$ASTNode* $returnValue2990;
    org$pandalanguage$pandac$ASTNode* $tmp2991;
    org$pandalanguage$pandac$ASTNode* test2994 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2995;
    org$pandalanguage$pandac$ASTNode* $tmp2996;
    org$pandalanguage$pandac$ASTNode* $tmp2998;
    panda$collections$ImmutableArray* body3001 = NULL;
    panda$collections$ImmutableArray* $tmp3002;
    panda$collections$ImmutableArray* $tmp3003;
    org$pandalanguage$pandac$ASTNode* $tmp3005;
    org$pandalanguage$pandac$ASTNode* $tmp3008;
    org$pandalanguage$pandac$ASTNode* $tmp3009;
    panda$core$Int64 $tmp3011;
    int $tmp2984;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2987, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2986, $tmp2987);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2989 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2986, &$s2988);
        start2985 = $tmp2989;
        if (((panda$core$Bit) { !start2985.nonnull }).value) {
        {
            $tmp2991 = NULL;
            $returnValue2990 = $tmp2991;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2991));
            $tmp2984 = 0;
            goto $l2982;
            $l2992:;
            return $returnValue2990;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2997 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2996 = $tmp2997;
        $tmp2995 = $tmp2996;
        test2994 = $tmp2995;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2995));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2996));
        if (((panda$core$Bit) { test2994 == NULL }).value) {
        {
            $tmp2998 = NULL;
            $returnValue2990 = $tmp2998;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2998));
            $tmp2984 = 1;
            goto $l2982;
            $l2999:;
            return $returnValue2990;
        }
        }
        panda$collections$ImmutableArray* $tmp3004 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3003 = $tmp3004;
        $tmp3002 = $tmp3003;
        body3001 = $tmp3002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3003));
        if (((panda$core$Bit) { body3001 == NULL }).value) {
        {
            $tmp3005 = NULL;
            $returnValue2990 = $tmp3005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3005));
            $tmp2984 = 2;
            goto $l2982;
            $l3006:;
            return $returnValue2990;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3010 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3011, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3010, $tmp3011, ((org$pandalanguage$pandac$parser$Token) start2985.value).position, p_label, test2994, body3001);
        $tmp3009 = $tmp3010;
        $tmp3008 = $tmp3009;
        $returnValue2990 = $tmp3008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3009));
        $tmp2984 = 3;
        goto $l2982;
        $l3012:;
        return $returnValue2990;
    }
    $l2982:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3001));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2994));
    test2994 = NULL;
    body3001 = NULL;
    switch ($tmp2984) {
        case 2: goto $l3006;
        case 1: goto $l2999;
        case 0: goto $l2992;
        case 3: goto $l3012;
    }
    $l3014:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3018;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3019;
    panda$core$Int64 $tmp3020;
    org$pandalanguage$pandac$ASTNode* $returnValue3023;
    org$pandalanguage$pandac$ASTNode* $tmp3024;
    panda$collections$ImmutableArray* body3027 = NULL;
    panda$collections$ImmutableArray* $tmp3028;
    panda$collections$ImmutableArray* $tmp3029;
    org$pandalanguage$pandac$ASTNode* $tmp3031;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3034;
    panda$core$Int64 $tmp3035;
    org$pandalanguage$pandac$ASTNode* $tmp3038;
    org$pandalanguage$pandac$ASTNode* test3041 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3042;
    org$pandalanguage$pandac$ASTNode* $tmp3043;
    org$pandalanguage$pandac$ASTNode* $tmp3045;
    org$pandalanguage$pandac$ASTNode* $tmp3048;
    org$pandalanguage$pandac$ASTNode* $tmp3049;
    panda$core$Int64 $tmp3051;
    int $tmp3017;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3020, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3019, $tmp3020);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3022 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3019, &$s3021);
        start3018 = $tmp3022;
        if (((panda$core$Bit) { !start3018.nonnull }).value) {
        {
            $tmp3024 = NULL;
            $returnValue3023 = $tmp3024;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3024));
            $tmp3017 = 0;
            goto $l3015;
            $l3025:;
            return $returnValue3023;
        }
        }
        panda$collections$ImmutableArray* $tmp3030 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3029 = $tmp3030;
        $tmp3028 = $tmp3029;
        body3027 = $tmp3028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3029));
        if (((panda$core$Bit) { body3027 == NULL }).value) {
        {
            $tmp3031 = NULL;
            $returnValue3023 = $tmp3031;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3031));
            $tmp3017 = 1;
            goto $l3015;
            $l3032:;
            return $returnValue3023;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3035, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3034, $tmp3035);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3037 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3034, &$s3036);
        if (((panda$core$Bit) { !$tmp3037.nonnull }).value) {
        {
            $tmp3038 = NULL;
            $returnValue3023 = $tmp3038;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3038));
            $tmp3017 = 2;
            goto $l3015;
            $l3039:;
            return $returnValue3023;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3044 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3043 = $tmp3044;
        $tmp3042 = $tmp3043;
        test3041 = $tmp3042;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3042));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3043));
        if (((panda$core$Bit) { test3041 == NULL }).value) {
        {
            $tmp3045 = NULL;
            $returnValue3023 = $tmp3045;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
            $tmp3017 = 3;
            goto $l3015;
            $l3046:;
            return $returnValue3023;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3050 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3051, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3050, $tmp3051, ((org$pandalanguage$pandac$parser$Token) start3018.value).position, p_label, body3027, test3041);
        $tmp3049 = $tmp3050;
        $tmp3048 = $tmp3049;
        $returnValue3023 = $tmp3048;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3049));
        $tmp3017 = 4;
        goto $l3015;
        $l3052:;
        return $returnValue3023;
    }
    $l3015:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3041));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3027));
    body3027 = NULL;
    test3041 = NULL;
    switch ($tmp3017) {
        case 3: goto $l3046;
        case 4: goto $l3052;
        case 2: goto $l3039;
        case 1: goto $l3032;
        case 0: goto $l3025;
    }
    $l3054:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3058;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3059;
    panda$core$Int64 $tmp3060;
    org$pandalanguage$pandac$ASTNode* $returnValue3063;
    org$pandalanguage$pandac$ASTNode* $tmp3064;
    panda$collections$ImmutableArray* body3067 = NULL;
    panda$collections$ImmutableArray* $tmp3068;
    panda$collections$ImmutableArray* $tmp3069;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3074;
    org$pandalanguage$pandac$ASTNode* $tmp3075;
    panda$core$Int64 $tmp3077;
    int $tmp3057;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3060, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3059, $tmp3060);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3062 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3059, &$s3061);
        start3058 = $tmp3062;
        if (((panda$core$Bit) { !start3058.nonnull }).value) {
        {
            $tmp3064 = NULL;
            $returnValue3063 = $tmp3064;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3064));
            $tmp3057 = 0;
            goto $l3055;
            $l3065:;
            return $returnValue3063;
        }
        }
        panda$collections$ImmutableArray* $tmp3070 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3069 = $tmp3070;
        $tmp3068 = $tmp3069;
        body3067 = $tmp3068;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
        if (((panda$core$Bit) { body3067 == NULL }).value) {
        {
            $tmp3071 = NULL;
            $returnValue3063 = $tmp3071;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
            $tmp3057 = 1;
            goto $l3055;
            $l3072:;
            return $returnValue3063;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3076 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3077, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3076, $tmp3077, ((org$pandalanguage$pandac$parser$Token) start3058.value).position, p_label, body3067);
        $tmp3075 = $tmp3076;
        $tmp3074 = $tmp3075;
        $returnValue3063 = $tmp3074;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3075));
        $tmp3057 = 2;
        goto $l3055;
        $l3078:;
        return $returnValue3063;
    }
    $l3055:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3067));
    body3067 = NULL;
    switch ($tmp3057) {
        case 2: goto $l3078;
        case 1: goto $l3072;
        case 0: goto $l3065;
    }
    $l3080:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3085;
    panda$core$Int64 $tmp3086;
    org$pandalanguage$pandac$ASTNode* $returnValue3089;
    org$pandalanguage$pandac$ASTNode* $tmp3090;
    org$pandalanguage$pandac$ASTNode* expr3093 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3094;
    org$pandalanguage$pandac$ASTNode* $tmp3095;
    org$pandalanguage$pandac$ASTNode* $tmp3097;
    org$pandalanguage$pandac$ASTNode* message3100 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3101;
    panda$core$Int64 $tmp3102;
    org$pandalanguage$pandac$ASTNode* $tmp3104;
    org$pandalanguage$pandac$ASTNode* $tmp3105;
    org$pandalanguage$pandac$ASTNode* $tmp3106;
    org$pandalanguage$pandac$ASTNode* $tmp3108;
    org$pandalanguage$pandac$ASTNode* $tmp3111;
    org$pandalanguage$pandac$ASTNode* $tmp3112;
    org$pandalanguage$pandac$ASTNode* $tmp3113;
    org$pandalanguage$pandac$ASTNode* $tmp3114;
    panda$core$Int64 $tmp3116;
    int $tmp3083;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3086, 45);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3085, $tmp3086);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3088 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3085, &$s3087);
        start3084 = $tmp3088;
        if (((panda$core$Bit) { !start3084.nonnull }).value) {
        {
            $tmp3090 = NULL;
            $returnValue3089 = $tmp3090;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
            $tmp3083 = 0;
            goto $l3081;
            $l3091:;
            return $returnValue3089;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3096 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3095 = $tmp3096;
        $tmp3094 = $tmp3095;
        expr3093 = $tmp3094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3095));
        if (((panda$core$Bit) { expr3093 == NULL }).value) {
        {
            $tmp3097 = NULL;
            $returnValue3089 = $tmp3097;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
            $tmp3083 = 1;
            goto $l3081;
            $l3098:;
            return $returnValue3089;
        }
        }
        memset(&message3100, 0, sizeof(message3100));
        panda$core$Int64$init$builtin_int64(&$tmp3102, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3101, $tmp3102);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3103 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3101);
        if (((panda$core$Bit) { $tmp3103.nonnull }).value) {
        {
            {
                $tmp3104 = message3100;
                org$pandalanguage$pandac$ASTNode* $tmp3107 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3106 = $tmp3107;
                $tmp3105 = $tmp3106;
                message3100 = $tmp3105;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
            }
            if (((panda$core$Bit) { message3100 == NULL }).value) {
            {
                $tmp3108 = NULL;
                $returnValue3089 = $tmp3108;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3108));
                $tmp3083 = 2;
                goto $l3081;
                $l3109:;
                return $returnValue3089;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3111 = message3100;
                $tmp3112 = NULL;
                message3100 = $tmp3112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3111));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3115 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3116, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3115, $tmp3116, ((org$pandalanguage$pandac$parser$Token) start3084.value).position, expr3093, message3100);
        $tmp3114 = $tmp3115;
        $tmp3113 = $tmp3114;
        $returnValue3089 = $tmp3113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3114));
        $tmp3083 = 3;
        goto $l3081;
        $l3117:;
        return $returnValue3089;
    }
    $l3081:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message3100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3093));
    expr3093 = NULL;
    switch ($tmp3083) {
        case 2: goto $l3109;
        case 3: goto $l3117;
        case 1: goto $l3098;
        case 0: goto $l3091;
    }
    $l3119:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3130;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3131;
    panda$core$Int64 $tmp3132;
    org$pandalanguage$pandac$ASTNode* $returnValue3135;
    org$pandalanguage$pandac$ASTNode* $tmp3136;
    panda$core$Bit $tmp3140;
    panda$collections$Array* expressions3141 = NULL;
    panda$collections$Array* $tmp3142;
    panda$collections$Array* $tmp3143;
    org$pandalanguage$pandac$ASTNode* expr3145 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3146;
    org$pandalanguage$pandac$ASTNode* $tmp3147;
    panda$core$Bit $tmp3149;
    org$pandalanguage$pandac$ASTNode* $tmp3150;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3157;
    panda$core$Int64 $tmp3158;
    org$pandalanguage$pandac$ASTNode* $tmp3160;
    org$pandalanguage$pandac$ASTNode* $tmp3161;
    org$pandalanguage$pandac$ASTNode* $tmp3162;
    panda$core$Bit $tmp3164;
    org$pandalanguage$pandac$ASTNode* $tmp3165;
    panda$core$Bit $tmp3169;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3170;
    panda$core$Int64 $tmp3171;
    org$pandalanguage$pandac$ASTNode* $tmp3174;
    panda$collections$Array* statements3178 = NULL;
    panda$collections$Array* $tmp3179;
    panda$collections$Array* $tmp3180;
    org$pandalanguage$pandac$parser$Token$Kind $match$1494_133184;
    panda$core$Int64 $tmp3188;
    panda$core$Int64 $tmp3191;
    panda$core$Int64 $tmp3195;
    panda$core$Int64 $tmp3200;
    panda$core$Int64 $tmp3203;
    panda$core$Int64 $tmp3207;
    org$pandalanguage$pandac$ASTNode* stmt3213 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3214;
    org$pandalanguage$pandac$ASTNode* $tmp3215;
    org$pandalanguage$pandac$ASTNode* $tmp3217;
    org$pandalanguage$pandac$ASTNode* stmt3227 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3228;
    org$pandalanguage$pandac$ASTNode* $tmp3229;
    org$pandalanguage$pandac$ASTNode* $tmp3231;
    org$pandalanguage$pandac$ASTNode* $tmp3237;
    org$pandalanguage$pandac$ASTNode* $tmp3238;
    panda$core$Int64 $tmp3240;
    panda$collections$ImmutableArray* $tmp3241;
    panda$collections$ImmutableArray* $tmp3243;
    int $tmp3122;
    {
        if (self->allowLambdas.value) goto $l3123; else goto $l3124;
        $l3124:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3125, (panda$core$Int64) { 1467 }, &$s3126);
        abort();
        $l3123:;
        int $tmp3129;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3132, 40);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3131, $tmp3132);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3134 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3131, &$s3133);
            start3130 = $tmp3134;
            if (((panda$core$Bit) { !start3130.nonnull }).value) {
            {
                $tmp3136 = NULL;
                $returnValue3135 = $tmp3136;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3136));
                $tmp3129 = 0;
                goto $l3127;
                $l3137:;
                $tmp3122 = 0;
                goto $l3120;
                $l3138:;
                return $returnValue3135;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3140, false);
            self->allowLambdas = $tmp3140;
            panda$collections$Array* $tmp3144 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3144);
            $tmp3143 = $tmp3144;
            $tmp3142 = $tmp3143;
            expressions3141 = $tmp3142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
            org$pandalanguage$pandac$ASTNode* $tmp3148 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3147 = $tmp3148;
            $tmp3146 = $tmp3147;
            expr3145 = $tmp3146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3147));
            if (((panda$core$Bit) { expr3145 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3149, true);
                self->allowLambdas = $tmp3149;
                $tmp3150 = NULL;
                $returnValue3135 = $tmp3150;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3150));
                $tmp3129 = 1;
                goto $l3127;
                $l3151:;
                $tmp3122 = 1;
                goto $l3120;
                $l3152:;
                return $returnValue3135;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3141, ((panda$core$Object*) expr3145));
            $l3154:;
            panda$core$Int64$init$builtin_int64(&$tmp3158, 106);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3157, $tmp3158);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3159 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3157);
            bool $tmp3156 = ((panda$core$Bit) { $tmp3159.nonnull }).value;
            if (!$tmp3156) goto $l3155;
            {
                {
                    $tmp3160 = expr3145;
                    org$pandalanguage$pandac$ASTNode* $tmp3163 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3162 = $tmp3163;
                    $tmp3161 = $tmp3162;
                    expr3145 = $tmp3161;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3162));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3160));
                }
                if (((panda$core$Bit) { expr3145 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3164, true);
                    self->allowLambdas = $tmp3164;
                    $tmp3165 = NULL;
                    $returnValue3135 = $tmp3165;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3165));
                    $tmp3129 = 2;
                    goto $l3127;
                    $l3166:;
                    $tmp3122 = 2;
                    goto $l3120;
                    $l3167:;
                    return $returnValue3135;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3141, ((panda$core$Object*) expr3145));
            }
            goto $l3154;
            $l3155:;
            panda$core$Bit$init$builtin_bit(&$tmp3169, true);
            self->allowLambdas = $tmp3169;
            panda$core$Int64$init$builtin_int64(&$tmp3171, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3170, $tmp3171);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3173 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3170, &$s3172);
            if (((panda$core$Bit) { !$tmp3173.nonnull }).value) {
            {
                $tmp3174 = NULL;
                $returnValue3135 = $tmp3174;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3174));
                $tmp3129 = 3;
                goto $l3127;
                $l3175:;
                $tmp3122 = 3;
                goto $l3120;
                $l3176:;
                return $returnValue3135;
            }
            }
            panda$collections$Array* $tmp3181 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3181);
            $tmp3180 = $tmp3181;
            $tmp3179 = $tmp3180;
            statements3178 = $tmp3179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3180));
            $l3182:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3185 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1494_133184 = $tmp3185.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3188, 40);
                    panda$core$Bit $tmp3189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1494_133184.$rawValue, $tmp3188);
                    bool $tmp3187 = $tmp3189.value;
                    if ($tmp3187) goto $l3190;
                    panda$core$Int64$init$builtin_int64(&$tmp3191, 41);
                    panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1494_133184.$rawValue, $tmp3191);
                    $tmp3187 = $tmp3192.value;
                    $l3190:;
                    panda$core$Bit $tmp3193 = { $tmp3187 };
                    bool $tmp3186 = $tmp3193.value;
                    if ($tmp3186) goto $l3194;
                    panda$core$Int64$init$builtin_int64(&$tmp3195, 101);
                    panda$core$Bit $tmp3196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1494_133184.$rawValue, $tmp3195);
                    $tmp3186 = $tmp3196.value;
                    $l3194:;
                    panda$core$Bit $tmp3197 = { $tmp3186 };
                    if ($tmp3197.value) {
                    {
                        goto $l3183;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3200, 29);
                    panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1494_133184.$rawValue, $tmp3200);
                    bool $tmp3199 = $tmp3201.value;
                    if ($tmp3199) goto $l3202;
                    panda$core$Int64$init$builtin_int64(&$tmp3203, 30);
                    panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1494_133184.$rawValue, $tmp3203);
                    $tmp3199 = $tmp3204.value;
                    $l3202:;
                    panda$core$Bit $tmp3205 = { $tmp3199 };
                    bool $tmp3198 = $tmp3205.value;
                    if ($tmp3198) goto $l3206;
                    panda$core$Int64$init$builtin_int64(&$tmp3207, 28);
                    panda$core$Bit $tmp3208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1494_133184.$rawValue, $tmp3207);
                    $tmp3198 = $tmp3208.value;
                    $l3206:;
                    panda$core$Bit $tmp3209 = { $tmp3198 };
                    if ($tmp3209.value) {
                    {
                        int $tmp3212;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3216 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3215 = $tmp3216;
                            $tmp3214 = $tmp3215;
                            stmt3213 = $tmp3214;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3215));
                            if (((panda$core$Bit) { stmt3213 == NULL }).value) {
                            {
                                $tmp3217 = NULL;
                                $returnValue3135 = $tmp3217;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3217));
                                $tmp3212 = 0;
                                goto $l3210;
                                $l3218:;
                                $tmp3129 = 4;
                                goto $l3127;
                                $l3219:;
                                $tmp3122 = 4;
                                goto $l3120;
                                $l3220:;
                                return $returnValue3135;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3178, ((panda$core$Object*) stmt3213));
                            $tmp3212 = 1;
                            goto $l3210;
                            $l3222:;
                            goto $l3183;
                        }
                        $l3210:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3213));
                        stmt3213 = NULL;
                        switch ($tmp3212) {
                            case 0: goto $l3218;
                            case 1: goto $l3222;
                        }
                        $l3223:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3226;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3230 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3229 = $tmp3230;
                                $tmp3228 = $tmp3229;
                                stmt3227 = $tmp3228;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3228));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
                                if (((panda$core$Bit) { stmt3227 == NULL }).value) {
                                {
                                    $tmp3231 = NULL;
                                    $returnValue3135 = $tmp3231;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3231));
                                    $tmp3226 = 0;
                                    goto $l3224;
                                    $l3232:;
                                    $tmp3129 = 5;
                                    goto $l3127;
                                    $l3233:;
                                    $tmp3122 = 5;
                                    goto $l3120;
                                    $l3234:;
                                    return $returnValue3135;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3178, ((panda$core$Object*) stmt3227));
                            }
                            $tmp3226 = -1;
                            goto $l3224;
                            $l3224:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3227));
                            stmt3227 = NULL;
                            switch ($tmp3226) {
                                case 0: goto $l3232;
                                case -1: goto $l3236;
                            }
                            $l3236:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3183:;
            org$pandalanguage$pandac$ASTNode* $tmp3239 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3240, 48);
            panda$collections$ImmutableArray* $tmp3242 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3141);
            $tmp3241 = $tmp3242;
            panda$collections$ImmutableArray* $tmp3244 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3178);
            $tmp3243 = $tmp3244;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3239, $tmp3240, ((org$pandalanguage$pandac$parser$Token) start3130.value).position, $tmp3241, $tmp3243);
            $tmp3238 = $tmp3239;
            $tmp3237 = $tmp3238;
            $returnValue3135 = $tmp3237;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3237));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3241));
            $tmp3129 = 6;
            goto $l3127;
            $l3245:;
            $tmp3122 = 6;
            goto $l3120;
            $l3246:;
            return $returnValue3135;
        }
        $l3127:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3141));
        expressions3141 = NULL;
        expr3145 = NULL;
        statements3178 = NULL;
        switch ($tmp3129) {
            case 3: goto $l3175;
            case 2: goto $l3166;
            case 0: goto $l3137;
            case 1: goto $l3151;
            case 6: goto $l3245;
            case 5: goto $l3233;
            case 4: goto $l3219;
        }
        $l3248:;
    }
    $tmp3122 = -1;
    goto $l3120;
    $l3120:;
    if (self->allowLambdas.value) goto $l3250; else goto $l3251;
    $l3251:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3252, (panda$core$Int64) { 1467 }, &$s3253);
    abort();
    $l3250:;
    switch ($tmp3122) {
        case 2: goto $l3167;
        case 3: goto $l3176;
        case 1: goto $l3152;
        case 0: goto $l3138;
        case 4: goto $l3220;
        case 6: goto $l3246;
        case -1: goto $l3249;
        case 5: goto $l3234;
    }
    $l3249:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3257;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3258;
    panda$core$Int64 $tmp3259;
    org$pandalanguage$pandac$ASTNode* $returnValue3262;
    org$pandalanguage$pandac$ASTNode* $tmp3263;
    org$pandalanguage$pandac$ASTNode* expr3266 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3267;
    org$pandalanguage$pandac$ASTNode* $tmp3268;
    org$pandalanguage$pandac$ASTNode* $tmp3270;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3273;
    panda$core$Int64 $tmp3274;
    org$pandalanguage$pandac$ASTNode* $tmp3277;
    panda$collections$Array* whens3280 = NULL;
    panda$collections$Array* $tmp3281;
    panda$collections$Array* $tmp3282;
    panda$collections$Array* other3284 = NULL;
    panda$collections$Array* $tmp3285;
    org$pandalanguage$pandac$parser$Token token3288;
    org$pandalanguage$pandac$parser$Token$Kind $match$1535_133290;
    panda$core$Int64 $tmp3291;
    panda$core$Int64 $tmp3293;
    org$pandalanguage$pandac$ASTNode* w3298 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    org$pandalanguage$pandac$ASTNode* $tmp3300;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    panda$core$Int64 $tmp3307;
    org$pandalanguage$pandac$parser$Token o3309;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3311;
    panda$core$Int64 $tmp3312;
    org$pandalanguage$pandac$ASTNode* $tmp3315;
    panda$collections$Array* $tmp3318;
    panda$collections$Array* $tmp3319;
    panda$collections$Array* $tmp3320;
    org$pandalanguage$pandac$parser$Token$Kind $match$1551_253324;
    panda$core$Int64 $tmp3326;
    panda$core$Int64 $tmp3330;
    panda$core$Int64 $tmp3333;
    panda$core$Int64 $tmp3337;
    org$pandalanguage$pandac$ASTNode* stmt3343 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3344;
    org$pandalanguage$pandac$ASTNode* $tmp3345;
    org$pandalanguage$pandac$ASTNode* $tmp3347;
    org$pandalanguage$pandac$ASTNode* stmt3356 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3357;
    org$pandalanguage$pandac$ASTNode* $tmp3358;
    org$pandalanguage$pandac$ASTNode* $tmp3360;
    panda$core$String* $tmp3365;
    panda$core$String* $tmp3367;
    panda$core$String* $tmp3368;
    panda$core$String* $tmp3370;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3376;
    panda$core$Int64 $tmp3377;
    org$pandalanguage$pandac$ASTNode* $tmp3380;
    org$pandalanguage$pandac$ASTNode* $tmp3383;
    org$pandalanguage$pandac$ASTNode* $tmp3384;
    panda$core$Int64 $tmp3386;
    panda$collections$ImmutableArray* $tmp3387;
    panda$collections$ImmutableArray* $tmp3389;
    org$pandalanguage$pandac$ASTNode* $tmp3393;
    org$pandalanguage$pandac$ASTNode* $tmp3394;
    panda$core$Int64 $tmp3396;
    panda$collections$ImmutableArray* $tmp3397;
    int $tmp3256;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3259, 39);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3258, $tmp3259);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3261 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3258, &$s3260);
        start3257 = $tmp3261;
        if (((panda$core$Bit) { !start3257.nonnull }).value) {
        {
            $tmp3263 = NULL;
            $returnValue3262 = $tmp3263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3263));
            $tmp3256 = 0;
            goto $l3254;
            $l3264:;
            return $returnValue3262;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3269 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3268 = $tmp3269;
        $tmp3267 = $tmp3268;
        expr3266 = $tmp3267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3268));
        if (((panda$core$Bit) { expr3266 == NULL }).value) {
        {
            $tmp3270 = NULL;
            $returnValue3262 = $tmp3270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3270));
            $tmp3256 = 1;
            goto $l3254;
            $l3271:;
            return $returnValue3262;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3274, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3273, $tmp3274);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3276 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3273, &$s3275);
        if (((panda$core$Bit) { !$tmp3276.nonnull }).value) {
        {
            $tmp3277 = NULL;
            $returnValue3262 = $tmp3277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3277));
            $tmp3256 = 2;
            goto $l3254;
            $l3278:;
            return $returnValue3262;
        }
        }
        panda$collections$Array* $tmp3283 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3283);
        $tmp3282 = $tmp3283;
        $tmp3281 = $tmp3282;
        whens3280 = $tmp3281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3282));
        $tmp3285 = NULL;
        other3284 = $tmp3285;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3285));
        $l3286:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3289 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3288 = $tmp3289;
            {
                $match$1535_133290 = token3288.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3291, 101);
                panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1535_133290.$rawValue, $tmp3291);
                if ($tmp3292.value) {
                {
                    goto $l3287;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3293, 40);
                panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1535_133290.$rawValue, $tmp3293);
                if ($tmp3294.value) {
                {
                    int $tmp3297;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3301 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3300 = $tmp3301;
                        $tmp3299 = $tmp3300;
                        w3298 = $tmp3299;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3299));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3300));
                        if (((panda$core$Bit) { w3298 == NULL }).value) {
                        {
                            $tmp3302 = NULL;
                            $returnValue3262 = $tmp3302;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3302));
                            $tmp3297 = 0;
                            goto $l3295;
                            $l3303:;
                            $tmp3256 = 3;
                            goto $l3254;
                            $l3304:;
                            return $returnValue3262;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3280, ((panda$core$Object*) w3298));
                    }
                    $tmp3297 = -1;
                    goto $l3295;
                    $l3295:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3298));
                    w3298 = NULL;
                    switch ($tmp3297) {
                        case 0: goto $l3303;
                        case -1: goto $l3306;
                    }
                    $l3306:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3307, 41);
                panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1535_133290.$rawValue, $tmp3307);
                if ($tmp3308.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3310 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3309 = $tmp3310;
                    panda$core$Int64$init$builtin_int64(&$tmp3312, 96);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3311, $tmp3312);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3314 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3311, &$s3313);
                    if (((panda$core$Bit) { !$tmp3314.nonnull }).value) {
                    {
                        $tmp3315 = NULL;
                        $returnValue3262 = $tmp3315;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
                        $tmp3256 = 4;
                        goto $l3254;
                        $l3316:;
                        return $returnValue3262;
                    }
                    }
                    {
                        $tmp3318 = other3284;
                        panda$collections$Array* $tmp3321 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3321);
                        $tmp3320 = $tmp3321;
                        $tmp3319 = $tmp3320;
                        other3284 = $tmp3319;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3319));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3318));
                    }
                    $l3322:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3325 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1551_253324 = $tmp3325.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3326, 101);
                            panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1551_253324.$rawValue, $tmp3326);
                            if ($tmp3327.value) {
                            {
                                goto $l3323;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3330, 29);
                            panda$core$Bit $tmp3331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1551_253324.$rawValue, $tmp3330);
                            bool $tmp3329 = $tmp3331.value;
                            if ($tmp3329) goto $l3332;
                            panda$core$Int64$init$builtin_int64(&$tmp3333, 30);
                            panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1551_253324.$rawValue, $tmp3333);
                            $tmp3329 = $tmp3334.value;
                            $l3332:;
                            panda$core$Bit $tmp3335 = { $tmp3329 };
                            bool $tmp3328 = $tmp3335.value;
                            if ($tmp3328) goto $l3336;
                            panda$core$Int64$init$builtin_int64(&$tmp3337, 28);
                            panda$core$Bit $tmp3338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1551_253324.$rawValue, $tmp3337);
                            $tmp3328 = $tmp3338.value;
                            $l3336:;
                            panda$core$Bit $tmp3339 = { $tmp3328 };
                            if ($tmp3339.value) {
                            {
                                int $tmp3342;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3346 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3345 = $tmp3346;
                                    $tmp3344 = $tmp3345;
                                    stmt3343 = $tmp3344;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3344));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3345));
                                    if (((panda$core$Bit) { stmt3343 == NULL }).value) {
                                    {
                                        $tmp3347 = NULL;
                                        $returnValue3262 = $tmp3347;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3347));
                                        $tmp3342 = 0;
                                        goto $l3340;
                                        $l3348:;
                                        $tmp3256 = 5;
                                        goto $l3254;
                                        $l3349:;
                                        return $returnValue3262;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3284, ((panda$core$Object*) stmt3343));
                                    $tmp3342 = 1;
                                    goto $l3340;
                                    $l3351:;
                                    goto $l3323;
                                }
                                $l3340:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3343));
                                stmt3343 = NULL;
                                switch ($tmp3342) {
                                    case 1: goto $l3351;
                                    case 0: goto $l3348;
                                }
                                $l3352:;
                            }
                            }
                            else {
                            {
                                int $tmp3355;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3359 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3358 = $tmp3359;
                                    $tmp3357 = $tmp3358;
                                    stmt3356 = $tmp3357;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3357));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3358));
                                    if (((panda$core$Bit) { stmt3356 == NULL }).value) {
                                    {
                                        $tmp3360 = NULL;
                                        $returnValue3262 = $tmp3360;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3360));
                                        $tmp3355 = 0;
                                        goto $l3353;
                                        $l3361:;
                                        $tmp3256 = 6;
                                        goto $l3254;
                                        $l3362:;
                                        return $returnValue3262;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3284, ((panda$core$Object*) stmt3356));
                                }
                                $tmp3355 = -1;
                                goto $l3353;
                                $l3353:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3356));
                                stmt3356 = NULL;
                                switch ($tmp3355) {
                                    case -1: goto $l3364;
                                    case 0: goto $l3361;
                                }
                                $l3364:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3323:;
                    goto $l3287;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3371 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3288);
                    $tmp3370 = $tmp3371;
                    panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3369, $tmp3370);
                    $tmp3368 = $tmp3372;
                    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, &$s3373);
                    $tmp3367 = $tmp3374;
                    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3366, $tmp3367);
                    $tmp3365 = $tmp3375;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3288, $tmp3365);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3365));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3368));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3370));
                    goto $l3287;
                }
                }
                }
                }
            }
        }
        }
        $l3287:;
        panda$core$Int64$init$builtin_int64(&$tmp3377, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3376, $tmp3377);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3379 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3376, &$s3378);
        if (((panda$core$Bit) { !$tmp3379.nonnull }).value) {
        {
            $tmp3380 = NULL;
            $returnValue3262 = $tmp3380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3380));
            $tmp3256 = 7;
            goto $l3254;
            $l3381:;
            return $returnValue3262;
        }
        }
        if (((panda$core$Bit) { other3284 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3385 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3386, 25);
            panda$collections$ImmutableArray* $tmp3388 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3280);
            $tmp3387 = $tmp3388;
            panda$collections$ImmutableArray* $tmp3390 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3284);
            $tmp3389 = $tmp3390;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3385, $tmp3386, ((org$pandalanguage$pandac$parser$Token) start3257.value).position, expr3266, $tmp3387, $tmp3389);
            $tmp3384 = $tmp3385;
            $tmp3383 = $tmp3384;
            $returnValue3262 = $tmp3383;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3384));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3387));
            $tmp3256 = 8;
            goto $l3254;
            $l3391:;
            return $returnValue3262;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3395 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3396, 25);
        panda$collections$ImmutableArray* $tmp3398 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3280);
        $tmp3397 = $tmp3398;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3395, $tmp3396, ((org$pandalanguage$pandac$parser$Token) start3257.value).position, expr3266, $tmp3397, NULL);
        $tmp3394 = $tmp3395;
        $tmp3393 = $tmp3394;
        $returnValue3262 = $tmp3393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3397));
        $tmp3256 = 9;
        goto $l3254;
        $l3399:;
        return $returnValue3262;
    }
    $l3254:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3284));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3266));
    expr3266 = NULL;
    whens3280 = NULL;
    switch ($tmp3256) {
        case 4: goto $l3316;
        case 2: goto $l3278;
        case 1: goto $l3271;
        case 6: goto $l3362;
        case 5: goto $l3349;
        case 8: goto $l3391;
        case 0: goto $l3264;
        case 9: goto $l3399;
        case 3: goto $l3304;
        case 7: goto $l3381;
    }
    $l3401:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3405;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3406;
    panda$core$Int64 $tmp3407;
    panda$collections$ImmutableArray* $returnValue3410;
    panda$collections$ImmutableArray* $tmp3411;
    panda$collections$Array* result3414 = NULL;
    panda$collections$Array* $tmp3415;
    panda$collections$Array* $tmp3416;
    org$pandalanguage$pandac$parser$Token$Kind $match$1596_133420;
    panda$core$Int64 $tmp3422;
    panda$core$Int64 $tmp3426;
    panda$core$Int64 $tmp3429;
    panda$core$Int64 $tmp3433;
    org$pandalanguage$pandac$ASTNode* stmt3439 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3440;
    org$pandalanguage$pandac$ASTNode* $tmp3441;
    panda$collections$ImmutableArray* $tmp3443;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3447;
    panda$core$Int64 $tmp3448;
    panda$collections$ImmutableArray* $tmp3451;
    org$pandalanguage$pandac$ASTNode* stmt3460 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3461;
    org$pandalanguage$pandac$ASTNode* $tmp3462;
    panda$collections$ImmutableArray* $tmp3464;
    panda$collections$ImmutableArray* $tmp3469;
    panda$collections$ImmutableArray* $tmp3470;
    int $tmp3404;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3407, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3406, $tmp3407);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3409 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3406, &$s3408);
        start3405 = $tmp3409;
        if (((panda$core$Bit) { !start3405.nonnull }).value) {
        {
            $tmp3411 = NULL;
            $returnValue3410 = $tmp3411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3411));
            $tmp3404 = 0;
            goto $l3402;
            $l3412:;
            return $returnValue3410;
        }
        }
        panda$collections$Array* $tmp3417 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3417);
        $tmp3416 = $tmp3417;
        $tmp3415 = $tmp3416;
        result3414 = $tmp3415;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3416));
        $l3418:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3421 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1596_133420 = $tmp3421.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3422, 101);
                panda$core$Bit $tmp3423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1596_133420.$rawValue, $tmp3422);
                if ($tmp3423.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3419;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3426, 29);
                panda$core$Bit $tmp3427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1596_133420.$rawValue, $tmp3426);
                bool $tmp3425 = $tmp3427.value;
                if ($tmp3425) goto $l3428;
                panda$core$Int64$init$builtin_int64(&$tmp3429, 30);
                panda$core$Bit $tmp3430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1596_133420.$rawValue, $tmp3429);
                $tmp3425 = $tmp3430.value;
                $l3428:;
                panda$core$Bit $tmp3431 = { $tmp3425 };
                bool $tmp3424 = $tmp3431.value;
                if ($tmp3424) goto $l3432;
                panda$core$Int64$init$builtin_int64(&$tmp3433, 28);
                panda$core$Bit $tmp3434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1596_133420.$rawValue, $tmp3433);
                $tmp3424 = $tmp3434.value;
                $l3432:;
                panda$core$Bit $tmp3435 = { $tmp3424 };
                if ($tmp3435.value) {
                {
                    int $tmp3438;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3442 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3441 = $tmp3442;
                        $tmp3440 = $tmp3441;
                        stmt3439 = $tmp3440;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3441));
                        if (((panda$core$Bit) { stmt3439 == NULL }).value) {
                        {
                            $tmp3443 = NULL;
                            $returnValue3410 = $tmp3443;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3443));
                            $tmp3438 = 0;
                            goto $l3436;
                            $l3444:;
                            $tmp3404 = 1;
                            goto $l3402;
                            $l3445:;
                            return $returnValue3410;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3448, 101);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3447, $tmp3448);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3450 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3447, &$s3449);
                        if (((panda$core$Bit) { !$tmp3450.nonnull }).value) {
                        {
                            $tmp3451 = NULL;
                            $returnValue3410 = $tmp3451;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3451));
                            $tmp3438 = 1;
                            goto $l3436;
                            $l3452:;
                            $tmp3404 = 2;
                            goto $l3402;
                            $l3453:;
                            return $returnValue3410;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3414, ((panda$core$Object*) stmt3439));
                        $tmp3438 = 2;
                        goto $l3436;
                        $l3455:;
                        goto $l3419;
                    }
                    $l3436:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3439));
                    stmt3439 = NULL;
                    switch ($tmp3438) {
                        case 1: goto $l3452;
                        case 2: goto $l3455;
                        case 0: goto $l3444;
                    }
                    $l3456:;
                }
                }
                else {
                {
                    int $tmp3459;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3463 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3462 = $tmp3463;
                        $tmp3461 = $tmp3462;
                        stmt3460 = $tmp3461;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3461));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
                        if (((panda$core$Bit) { stmt3460 == NULL }).value) {
                        {
                            $tmp3464 = NULL;
                            $returnValue3410 = $tmp3464;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3464));
                            $tmp3459 = 0;
                            goto $l3457;
                            $l3465:;
                            $tmp3404 = 3;
                            goto $l3402;
                            $l3466:;
                            return $returnValue3410;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3414, ((panda$core$Object*) stmt3460));
                    }
                    $tmp3459 = -1;
                    goto $l3457;
                    $l3457:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3460));
                    stmt3460 = NULL;
                    switch ($tmp3459) {
                        case -1: goto $l3468;
                        case 0: goto $l3465;
                    }
                    $l3468:;
                }
                }
                }
            }
        }
        }
        $l3419:;
        panda$collections$ImmutableArray* $tmp3471 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3414);
        $tmp3470 = $tmp3471;
        $tmp3469 = $tmp3470;
        $returnValue3410 = $tmp3469;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3470));
        $tmp3404 = 4;
        goto $l3402;
        $l3472:;
        return $returnValue3410;
    }
    $l3402:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3414));
    result3414 = NULL;
    switch ($tmp3404) {
        case 1: goto $l3445;
        case 4: goto $l3472;
        case 3: goto $l3466;
        case 2: goto $l3453;
        case 0: goto $l3412;
    }
    $l3474:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3478 = NULL;
    panda$collections$ImmutableArray* $tmp3479;
    panda$collections$ImmutableArray* $tmp3480;
    org$pandalanguage$pandac$ASTNode* $returnValue3482;
    org$pandalanguage$pandac$ASTNode* $tmp3483;
    org$pandalanguage$pandac$ASTNode* $tmp3486;
    org$pandalanguage$pandac$ASTNode* $tmp3487;
    panda$core$Int64 $tmp3489;
    org$pandalanguage$pandac$Position $tmp3490;
    int $tmp3477;
    {
        panda$collections$ImmutableArray* $tmp3481 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3480 = $tmp3481;
        $tmp3479 = $tmp3480;
        statements3478 = $tmp3479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3480));
        if (((panda$core$Bit) { statements3478 == NULL }).value) {
        {
            $tmp3483 = NULL;
            $returnValue3482 = $tmp3483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3483));
            $tmp3477 = 0;
            goto $l3475;
            $l3484:;
            return $returnValue3482;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3488 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3489, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3490);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3488, $tmp3489, $tmp3490, statements3478);
        $tmp3487 = $tmp3488;
        $tmp3486 = $tmp3487;
        $returnValue3482 = $tmp3486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3487));
        $tmp3477 = 1;
        goto $l3475;
        $l3491:;
        return $returnValue3482;
    }
    $l3475:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3478));
    statements3478 = NULL;
    switch ($tmp3477) {
        case 0: goto $l3484;
        case 1: goto $l3491;
    }
    $l3493:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3497 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3498;
    org$pandalanguage$pandac$ASTNode* $tmp3499;
    org$pandalanguage$pandac$ASTNode* $returnValue3501;
    org$pandalanguage$pandac$ASTNode* $tmp3502;
    org$pandalanguage$pandac$parser$Token$Kind $match$1640_93505;
    panda$core$Int64 $tmp3522;
    panda$core$Int64 $tmp3525;
    panda$core$Int64 $tmp3529;
    panda$core$Int64 $tmp3533;
    panda$core$Int64 $tmp3537;
    panda$core$Int64 $tmp3541;
    panda$core$Int64 $tmp3545;
    panda$core$Int64 $tmp3549;
    panda$core$Int64 $tmp3553;
    panda$core$Int64 $tmp3557;
    panda$core$Int64 $tmp3561;
    panda$core$Int64 $tmp3565;
    panda$core$Int64 $tmp3569;
    panda$core$Int64 $tmp3573;
    panda$core$Int64 $tmp3577;
    panda$core$Int64 $tmp3581;
    org$pandalanguage$pandac$parser$Token op3587;
    org$pandalanguage$pandac$ASTNode* rvalue3589 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3590;
    org$pandalanguage$pandac$ASTNode* $tmp3591;
    org$pandalanguage$pandac$ASTNode* $tmp3593;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$ASTNode* $tmp3598;
    panda$core$Int64 $tmp3600;
    panda$core$Int64 $tmp3607;
    org$pandalanguage$pandac$parser$Token op3614;
    org$pandalanguage$pandac$ASTNode* rvalue3616 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3617;
    org$pandalanguage$pandac$ASTNode* $tmp3618;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $tmp3624;
    org$pandalanguage$pandac$ASTNode* $tmp3625;
    panda$core$Int64 $tmp3627;
    org$pandalanguage$pandac$ASTNode* $tmp3634;
    int $tmp3496;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3500 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3499 = $tmp3500;
        $tmp3498 = $tmp3499;
        start3497 = $tmp3498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3499));
        if (((panda$core$Bit) { start3497 == NULL }).value) {
        {
            $tmp3502 = NULL;
            $returnValue3501 = $tmp3502;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3502));
            $tmp3496 = 0;
            goto $l3494;
            $l3503:;
            return $returnValue3501;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3506 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1640_93505 = $tmp3506.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3522, 74);
            panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3522);
            bool $tmp3521 = $tmp3523.value;
            if ($tmp3521) goto $l3524;
            panda$core$Int64$init$builtin_int64(&$tmp3525, 75);
            panda$core$Bit $tmp3526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3525);
            $tmp3521 = $tmp3526.value;
            $l3524:;
            panda$core$Bit $tmp3527 = { $tmp3521 };
            bool $tmp3520 = $tmp3527.value;
            if ($tmp3520) goto $l3528;
            panda$core$Int64$init$builtin_int64(&$tmp3529, 76);
            panda$core$Bit $tmp3530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3529);
            $tmp3520 = $tmp3530.value;
            $l3528:;
            panda$core$Bit $tmp3531 = { $tmp3520 };
            bool $tmp3519 = $tmp3531.value;
            if ($tmp3519) goto $l3532;
            panda$core$Int64$init$builtin_int64(&$tmp3533, 77);
            panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3533);
            $tmp3519 = $tmp3534.value;
            $l3532:;
            panda$core$Bit $tmp3535 = { $tmp3519 };
            bool $tmp3518 = $tmp3535.value;
            if ($tmp3518) goto $l3536;
            panda$core$Int64$init$builtin_int64(&$tmp3537, 78);
            panda$core$Bit $tmp3538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3537);
            $tmp3518 = $tmp3538.value;
            $l3536:;
            panda$core$Bit $tmp3539 = { $tmp3518 };
            bool $tmp3517 = $tmp3539.value;
            if ($tmp3517) goto $l3540;
            panda$core$Int64$init$builtin_int64(&$tmp3541, 79);
            panda$core$Bit $tmp3542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3541);
            $tmp3517 = $tmp3542.value;
            $l3540:;
            panda$core$Bit $tmp3543 = { $tmp3517 };
            bool $tmp3516 = $tmp3543.value;
            if ($tmp3516) goto $l3544;
            panda$core$Int64$init$builtin_int64(&$tmp3545, 80);
            panda$core$Bit $tmp3546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3545);
            $tmp3516 = $tmp3546.value;
            $l3544:;
            panda$core$Bit $tmp3547 = { $tmp3516 };
            bool $tmp3515 = $tmp3547.value;
            if ($tmp3515) goto $l3548;
            panda$core$Int64$init$builtin_int64(&$tmp3549, 81);
            panda$core$Bit $tmp3550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3549);
            $tmp3515 = $tmp3550.value;
            $l3548:;
            panda$core$Bit $tmp3551 = { $tmp3515 };
            bool $tmp3514 = $tmp3551.value;
            if ($tmp3514) goto $l3552;
            panda$core$Int64$init$builtin_int64(&$tmp3553, 82);
            panda$core$Bit $tmp3554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3553);
            $tmp3514 = $tmp3554.value;
            $l3552:;
            panda$core$Bit $tmp3555 = { $tmp3514 };
            bool $tmp3513 = $tmp3555.value;
            if ($tmp3513) goto $l3556;
            panda$core$Int64$init$builtin_int64(&$tmp3557, 83);
            panda$core$Bit $tmp3558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3557);
            $tmp3513 = $tmp3558.value;
            $l3556:;
            panda$core$Bit $tmp3559 = { $tmp3513 };
            bool $tmp3512 = $tmp3559.value;
            if ($tmp3512) goto $l3560;
            panda$core$Int64$init$builtin_int64(&$tmp3561, 84);
            panda$core$Bit $tmp3562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3561);
            $tmp3512 = $tmp3562.value;
            $l3560:;
            panda$core$Bit $tmp3563 = { $tmp3512 };
            bool $tmp3511 = $tmp3563.value;
            if ($tmp3511) goto $l3564;
            panda$core$Int64$init$builtin_int64(&$tmp3565, 85);
            panda$core$Bit $tmp3566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3565);
            $tmp3511 = $tmp3566.value;
            $l3564:;
            panda$core$Bit $tmp3567 = { $tmp3511 };
            bool $tmp3510 = $tmp3567.value;
            if ($tmp3510) goto $l3568;
            panda$core$Int64$init$builtin_int64(&$tmp3569, 86);
            panda$core$Bit $tmp3570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3569);
            $tmp3510 = $tmp3570.value;
            $l3568:;
            panda$core$Bit $tmp3571 = { $tmp3510 };
            bool $tmp3509 = $tmp3571.value;
            if ($tmp3509) goto $l3572;
            panda$core$Int64$init$builtin_int64(&$tmp3573, 87);
            panda$core$Bit $tmp3574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3573);
            $tmp3509 = $tmp3574.value;
            $l3572:;
            panda$core$Bit $tmp3575 = { $tmp3509 };
            bool $tmp3508 = $tmp3575.value;
            if ($tmp3508) goto $l3576;
            panda$core$Int64$init$builtin_int64(&$tmp3577, 88);
            panda$core$Bit $tmp3578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3577);
            $tmp3508 = $tmp3578.value;
            $l3576:;
            panda$core$Bit $tmp3579 = { $tmp3508 };
            bool $tmp3507 = $tmp3579.value;
            if ($tmp3507) goto $l3580;
            panda$core$Int64$init$builtin_int64(&$tmp3581, 89);
            panda$core$Bit $tmp3582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3581);
            $tmp3507 = $tmp3582.value;
            $l3580:;
            panda$core$Bit $tmp3583 = { $tmp3507 };
            if ($tmp3583.value) {
            {
                int $tmp3586;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3588 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3587 = $tmp3588;
                    org$pandalanguage$pandac$ASTNode* $tmp3592 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3591 = $tmp3592;
                    $tmp3590 = $tmp3591;
                    rvalue3589 = $tmp3590;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3590));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3591));
                    if (((panda$core$Bit) { rvalue3589 == NULL }).value) {
                    {
                        $tmp3593 = NULL;
                        $returnValue3501 = $tmp3593;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3593));
                        $tmp3586 = 0;
                        goto $l3584;
                        $l3594:;
                        $tmp3496 = 1;
                        goto $l3494;
                        $l3595:;
                        return $returnValue3501;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3599 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3600, 4);
                    org$pandalanguage$pandac$Position $tmp3602 = (($fn3601) start3497->$class->vtable[2])(start3497);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3599, $tmp3600, $tmp3602, start3497, op3587.kind, rvalue3589);
                    $tmp3598 = $tmp3599;
                    $tmp3597 = $tmp3598;
                    $returnValue3501 = $tmp3597;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3598));
                    $tmp3586 = 1;
                    goto $l3584;
                    $l3603:;
                    $tmp3496 = 2;
                    goto $l3494;
                    $l3604:;
                    return $returnValue3501;
                }
                $l3584:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3589));
                rvalue3589 = NULL;
                switch ($tmp3586) {
                    case 0: goto $l3594;
                    case 1: goto $l3603;
                }
                $l3606:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3607, 59);
            panda$core$Bit $tmp3608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1640_93505.$rawValue, $tmp3607);
            if ($tmp3608.value) {
            {
                int $tmp3611;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3612 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3612, &$s3613);
                    org$pandalanguage$pandac$parser$Token $tmp3615 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3614 = $tmp3615;
                    org$pandalanguage$pandac$ASTNode* $tmp3619 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3618 = $tmp3619;
                    $tmp3617 = $tmp3618;
                    rvalue3616 = $tmp3617;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3617));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3618));
                    if (((panda$core$Bit) { rvalue3616 == NULL }).value) {
                    {
                        $tmp3620 = NULL;
                        $returnValue3501 = $tmp3620;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3620));
                        $tmp3611 = 0;
                        goto $l3609;
                        $l3621:;
                        $tmp3496 = 3;
                        goto $l3494;
                        $l3622:;
                        return $returnValue3501;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3626 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3627, 4);
                    org$pandalanguage$pandac$Position $tmp3629 = (($fn3628) start3497->$class->vtable[2])(start3497);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3626, $tmp3627, $tmp3629, start3497, op3614.kind, rvalue3616);
                    $tmp3625 = $tmp3626;
                    $tmp3624 = $tmp3625;
                    $returnValue3501 = $tmp3624;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3624));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3625));
                    $tmp3611 = 1;
                    goto $l3609;
                    $l3630:;
                    $tmp3496 = 4;
                    goto $l3494;
                    $l3631:;
                    return $returnValue3501;
                }
                $l3609:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3616));
                rvalue3616 = NULL;
                switch ($tmp3611) {
                    case 1: goto $l3630;
                    case 0: goto $l3621;
                }
                $l3633:;
            }
            }
            else {
            {
                $tmp3634 = start3497;
                $returnValue3501 = $tmp3634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3634));
                $tmp3496 = 5;
                goto $l3494;
                $l3635:;
                return $returnValue3501;
            }
            }
            }
        }
    }
    $tmp3496 = -1;
    goto $l3494;
    $l3494:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3497));
    start3497 = NULL;
    switch ($tmp3496) {
        case -1: goto $l3637;
        case 5: goto $l3635;
        case 2: goto $l3604;
        case 1: goto $l3595;
        case 0: goto $l3503;
        case 4: goto $l3631;
        case 3: goto $l3622;
    }
    $l3637:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3641 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$ASTNode* $tmp3643;
    org$pandalanguage$pandac$ASTNode* $returnValue3645;
    org$pandalanguage$pandac$ASTNode* $tmp3646;
    org$pandalanguage$pandac$ASTNode* value3649 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3650;
    panda$core$Int64 $tmp3651;
    org$pandalanguage$pandac$ASTNode* $tmp3653;
    org$pandalanguage$pandac$ASTNode* $tmp3654;
    org$pandalanguage$pandac$ASTNode* $tmp3655;
    org$pandalanguage$pandac$ASTNode* $tmp3657;
    panda$core$Int64 $tmp3661;
    org$pandalanguage$pandac$ASTNode* $tmp3665;
    org$pandalanguage$pandac$ASTNode* $tmp3666;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    org$pandalanguage$pandac$ASTNode* $tmp3669;
    org$pandalanguage$pandac$ASTNode* $tmp3672;
    org$pandalanguage$pandac$ASTNode* $tmp3673;
    org$pandalanguage$pandac$ASTNode* $tmp3674;
    org$pandalanguage$pandac$ASTNode* $tmp3675;
    panda$core$Int64 $tmp3677;
    int $tmp3640;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3644 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3643 = $tmp3644;
        $tmp3642 = $tmp3643;
        t3641 = $tmp3642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3643));
        if (((panda$core$Bit) { t3641 == NULL }).value) {
        {
            $tmp3646 = NULL;
            $returnValue3645 = $tmp3646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3646));
            $tmp3640 = 0;
            goto $l3638;
            $l3647:;
            return $returnValue3645;
        }
        }
        memset(&value3649, 0, sizeof(value3649));
        panda$core$Int64$init$builtin_int64(&$tmp3651, 74);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3650, $tmp3651);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3650);
        if (((panda$core$Bit) { $tmp3652.nonnull }).value) {
        {
            {
                $tmp3653 = value3649;
                org$pandalanguage$pandac$ASTNode* $tmp3656 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3655 = $tmp3656;
                $tmp3654 = $tmp3655;
                value3649 = $tmp3654;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3653));
            }
            if (((panda$core$Bit) { value3649 == NULL }).value) {
            {
                $tmp3657 = NULL;
                $returnValue3645 = $tmp3657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3657));
                $tmp3640 = 1;
                goto $l3638;
                $l3658:;
                return $returnValue3645;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3660 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3661, 59);
        panda$core$Bit $tmp3662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3660.kind.$rawValue, $tmp3661);
        if ($tmp3662.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3663 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3663, &$s3664);
            {
                $tmp3665 = value3649;
                org$pandalanguage$pandac$ASTNode* $tmp3668 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3667 = $tmp3668;
                $tmp3666 = $tmp3667;
                value3649 = $tmp3666;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
            }
            if (((panda$core$Bit) { value3649 == NULL }).value) {
            {
                $tmp3669 = NULL;
                $returnValue3645 = $tmp3669;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3669));
                $tmp3640 = 2;
                goto $l3638;
                $l3670:;
                return $returnValue3645;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3672 = value3649;
                $tmp3673 = NULL;
                value3649 = $tmp3673;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3672));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3676 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3677, 13);
        org$pandalanguage$pandac$Position $tmp3679 = (($fn3678) t3641->$class->vtable[2])(t3641);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3676, $tmp3677, $tmp3679, t3641, value3649);
        $tmp3675 = $tmp3676;
        $tmp3674 = $tmp3675;
        $returnValue3645 = $tmp3674;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3675));
        $tmp3640 = 3;
        goto $l3638;
        $l3680:;
        return $returnValue3645;
    }
    $l3638:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3649));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3641));
    t3641 = NULL;
    switch ($tmp3640) {
        case 1: goto $l3658;
        case 3: goto $l3680;
        case 2: goto $l3670;
        case 0: goto $l3647;
    }
    $l3682:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3686;
    org$pandalanguage$pandac$Variable$Kind kind3688;
    org$pandalanguage$pandac$parser$Token$Kind $match$1699_93689;
    panda$core$Int64 $tmp3690;
    org$pandalanguage$pandac$Variable$Kind $tmp3692;
    panda$core$Int64 $tmp3693;
    panda$core$Int64 $tmp3694;
    org$pandalanguage$pandac$Variable$Kind $tmp3696;
    panda$core$Int64 $tmp3697;
    panda$core$Int64 $tmp3698;
    org$pandalanguage$pandac$Variable$Kind $tmp3700;
    panda$core$Int64 $tmp3701;
    panda$core$Int64 $tmp3702;
    org$pandalanguage$pandac$Variable$Kind $tmp3704;
    panda$core$Int64 $tmp3705;
    panda$collections$Array* declarations3707 = NULL;
    panda$collections$Array* $tmp3708;
    panda$collections$Array* $tmp3709;
    org$pandalanguage$pandac$ASTNode* decl3711 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3712;
    org$pandalanguage$pandac$ASTNode* $tmp3713;
    org$pandalanguage$pandac$ASTNode* $returnValue3715;
    org$pandalanguage$pandac$ASTNode* $tmp3716;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3722;
    panda$core$Int64 $tmp3723;
    org$pandalanguage$pandac$ASTNode* decl3728 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3729;
    org$pandalanguage$pandac$ASTNode* $tmp3730;
    org$pandalanguage$pandac$ASTNode* $tmp3732;
    org$pandalanguage$pandac$ASTNode* $tmp3737;
    org$pandalanguage$pandac$ASTNode* $tmp3738;
    panda$core$Int64 $tmp3740;
    panda$collections$ImmutableArray* $tmp3741;
    int $tmp3685;
    {
        org$pandalanguage$pandac$parser$Token $tmp3687 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3686 = $tmp3687;
        memset(&kind3688, 0, sizeof(kind3688));
        {
            $match$1699_93689 = start3686.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3690, 24);
            panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93689.$rawValue, $tmp3690);
            if ($tmp3691.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3693, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3692, $tmp3693);
                kind3688 = $tmp3692;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3694, 25);
            panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93689.$rawValue, $tmp3694);
            if ($tmp3695.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3697, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3696, $tmp3697);
                kind3688 = $tmp3696;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3698, 26);
            panda$core$Bit $tmp3699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93689.$rawValue, $tmp3698);
            if ($tmp3699.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3701, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3700, $tmp3701);
                kind3688 = $tmp3700;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3702, 27);
            panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1699_93689.$rawValue, $tmp3702);
            if ($tmp3703.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3705, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3704, $tmp3705);
                kind3688 = $tmp3704;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3686, &$s3706);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3710 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3710);
        $tmp3709 = $tmp3710;
        $tmp3708 = $tmp3709;
        declarations3707 = $tmp3708;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3708));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3709));
        org$pandalanguage$pandac$ASTNode* $tmp3714 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3713 = $tmp3714;
        $tmp3712 = $tmp3713;
        decl3711 = $tmp3712;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3713));
        if (((panda$core$Bit) { decl3711 == NULL }).value) {
        {
            $tmp3716 = NULL;
            $returnValue3715 = $tmp3716;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3716));
            $tmp3685 = 0;
            goto $l3683;
            $l3717:;
            return $returnValue3715;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3707, ((panda$core$Object*) decl3711));
        $l3719:;
        panda$core$Int64$init$builtin_int64(&$tmp3723, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3722, $tmp3723);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3724 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3722);
        bool $tmp3721 = ((panda$core$Bit) { $tmp3724.nonnull }).value;
        if (!$tmp3721) goto $l3720;
        {
            int $tmp3727;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3731 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3730 = $tmp3731;
                $tmp3729 = $tmp3730;
                decl3728 = $tmp3729;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3730));
                if (((panda$core$Bit) { decl3728 == NULL }).value) {
                {
                    $tmp3732 = NULL;
                    $returnValue3715 = $tmp3732;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3732));
                    $tmp3727 = 0;
                    goto $l3725;
                    $l3733:;
                    $tmp3685 = 1;
                    goto $l3683;
                    $l3734:;
                    return $returnValue3715;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3707, ((panda$core$Object*) decl3728));
            }
            $tmp3727 = -1;
            goto $l3725;
            $l3725:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3728));
            decl3728 = NULL;
            switch ($tmp3727) {
                case -1: goto $l3736;
                case 0: goto $l3733;
            }
            $l3736:;
        }
        goto $l3719;
        $l3720:;
        org$pandalanguage$pandac$ASTNode* $tmp3739 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3740, 47);
        panda$collections$ImmutableArray* $tmp3742 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3707);
        $tmp3741 = $tmp3742;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3739, $tmp3740, start3686.position, kind3688, $tmp3741);
        $tmp3738 = $tmp3739;
        $tmp3737 = $tmp3738;
        $returnValue3715 = $tmp3737;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3737));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3741));
        $tmp3685 = 2;
        goto $l3683;
        $l3743:;
        return $returnValue3715;
    }
    $l3683:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3711));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3707));
    declarations3707 = NULL;
    decl3711 = NULL;
    switch ($tmp3685) {
        case 2: goto $l3743;
        case 1: goto $l3734;
        case 0: goto $l3717;
    }
    $l3745:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3749;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3750;
    panda$core$Int64 $tmp3751;
    org$pandalanguage$pandac$ASTNode* $returnValue3754;
    org$pandalanguage$pandac$ASTNode* $tmp3755;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3758;
    panda$core$Int64 $tmp3759;
    org$pandalanguage$pandac$ASTNode* $tmp3762;
    panda$core$Object* $tmp3765;
    panda$core$Bit $tmp3766;
    org$pandalanguage$pandac$ASTNode* target3768 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3769;
    org$pandalanguage$pandac$ASTNode* $tmp3770;
    panda$core$Int64 $tmp3772;
    panda$core$String* $tmp3773;
    panda$collections$Array* args3775 = NULL;
    panda$collections$Array* $tmp3776;
    panda$collections$Array* $tmp3777;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3779;
    panda$core$Int64 $tmp3780;
    org$pandalanguage$pandac$ASTNode* expr3785 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3786;
    org$pandalanguage$pandac$ASTNode* $tmp3787;
    panda$core$Object* $tmp3789;
    org$pandalanguage$pandac$ASTNode* $tmp3791;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3798;
    panda$core$Int64 $tmp3799;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    org$pandalanguage$pandac$ASTNode* $tmp3802;
    org$pandalanguage$pandac$ASTNode* $tmp3803;
    panda$core$Object* $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3811;
    panda$core$Int64 $tmp3812;
    panda$core$Object* $tmp3815;
    org$pandalanguage$pandac$ASTNode* $tmp3817;
    panda$core$Object* $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3824;
    org$pandalanguage$pandac$ASTNode* $tmp3825;
    panda$core$Int64 $tmp3827;
    panda$collections$ImmutableArray* $tmp3828;
    int $tmp3748;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3751, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3750, $tmp3751);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3753 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3750, &$s3752);
        start3749 = $tmp3753;
        if (((panda$core$Bit) { !start3749.nonnull }).value) {
        {
            $tmp3755 = NULL;
            $returnValue3754 = $tmp3755;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3755));
            $tmp3748 = 0;
            goto $l3746;
            $l3756:;
            return $returnValue3754;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3759, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3758, $tmp3759);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3761 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3758, &$s3760);
        if (((panda$core$Bit) { !$tmp3761.nonnull }).value) {
        {
            $tmp3762 = NULL;
            $returnValue3754 = $tmp3762;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3762));
            $tmp3748 = 1;
            goto $l3746;
            $l3763:;
            return $returnValue3754;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3766, true);
        panda$core$Bit$wrapper* $tmp3767;
        $tmp3767 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3767->value = $tmp3766;
        $tmp3765 = ((panda$core$Object*) $tmp3767);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3765);
        panda$core$Panda$unref$panda$core$Object($tmp3765);
        org$pandalanguage$pandac$ASTNode* $tmp3771 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3772, 20);
        panda$core$String* $tmp3774 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3749.value));
        $tmp3773 = $tmp3774;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3771, $tmp3772, ((org$pandalanguage$pandac$parser$Token) start3749.value).position, $tmp3773);
        $tmp3770 = $tmp3771;
        $tmp3769 = $tmp3770;
        target3768 = $tmp3769;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3769));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3773));
        panda$collections$Array* $tmp3778 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3778);
        $tmp3777 = $tmp3778;
        $tmp3776 = $tmp3777;
        args3775 = $tmp3776;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3776));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3777));
        panda$core$Int64$init$builtin_int64(&$tmp3780, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3779, $tmp3780);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3781 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3779);
        if (((panda$core$Bit) { !$tmp3781.nonnull }).value) {
        {
            int $tmp3784;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3788 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3787 = $tmp3788;
                $tmp3786 = $tmp3787;
                expr3785 = $tmp3786;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3787));
                if (((panda$core$Bit) { expr3785 == NULL }).value) {
                {
                    panda$core$Object* $tmp3790 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3789 = $tmp3790;
                    panda$core$Panda$unref$panda$core$Object($tmp3789);
                    $tmp3791 = NULL;
                    $returnValue3754 = $tmp3791;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3791));
                    $tmp3784 = 0;
                    goto $l3782;
                    $l3792:;
                    $tmp3748 = 2;
                    goto $l3746;
                    $l3793:;
                    return $returnValue3754;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3775, ((panda$core$Object*) expr3785));
                $l3795:;
                panda$core$Int64$init$builtin_int64(&$tmp3799, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3798, $tmp3799);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3800 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3798);
                bool $tmp3797 = ((panda$core$Bit) { $tmp3800.nonnull }).value;
                if (!$tmp3797) goto $l3796;
                {
                    {
                        $tmp3801 = expr3785;
                        org$pandalanguage$pandac$ASTNode* $tmp3804 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3803 = $tmp3804;
                        $tmp3802 = $tmp3803;
                        expr3785 = $tmp3802;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3802));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3803));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3801));
                    }
                    if (((panda$core$Bit) { expr3785 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3806 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3805 = $tmp3806;
                        panda$core$Panda$unref$panda$core$Object($tmp3805);
                        $tmp3807 = NULL;
                        $returnValue3754 = $tmp3807;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3807));
                        $tmp3784 = 1;
                        goto $l3782;
                        $l3808:;
                        $tmp3748 = 3;
                        goto $l3746;
                        $l3809:;
                        return $returnValue3754;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3775, ((panda$core$Object*) expr3785));
                }
                goto $l3795;
                $l3796:;
                panda$core$Int64$init$builtin_int64(&$tmp3812, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3811, $tmp3812);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3814 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3811, &$s3813);
                if (((panda$core$Bit) { !$tmp3814.nonnull }).value) {
                {
                    panda$core$Object* $tmp3816 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3815 = $tmp3816;
                    panda$core$Panda$unref$panda$core$Object($tmp3815);
                    $tmp3817 = NULL;
                    $returnValue3754 = $tmp3817;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3817));
                    $tmp3784 = 2;
                    goto $l3782;
                    $l3818:;
                    $tmp3748 = 4;
                    goto $l3746;
                    $l3819:;
                    return $returnValue3754;
                }
                }
            }
            $tmp3784 = -1;
            goto $l3782;
            $l3782:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3785));
            expr3785 = NULL;
            switch ($tmp3784) {
                case 2: goto $l3818;
                case 1: goto $l3808;
                case 0: goto $l3792;
                case -1: goto $l3821;
            }
            $l3821:;
        }
        }
        panda$core$Object* $tmp3823 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3822 = $tmp3823;
        panda$core$Panda$unref$panda$core$Object($tmp3822);
        org$pandalanguage$pandac$ASTNode* $tmp3826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3827, 8);
        panda$collections$ImmutableArray* $tmp3829 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3775);
        $tmp3828 = $tmp3829;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3826, $tmp3827, ((org$pandalanguage$pandac$parser$Token) start3749.value).position, target3768, $tmp3828);
        $tmp3825 = $tmp3826;
        $tmp3824 = $tmp3825;
        $returnValue3754 = $tmp3824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3824));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3825));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3828));
        $tmp3748 = 5;
        goto $l3746;
        $l3830:;
        return $returnValue3754;
    }
    $l3746:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3775));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3768));
    target3768 = NULL;
    args3775 = NULL;
    switch ($tmp3748) {
        case 5: goto $l3830;
        case 3: goto $l3809;
        case 2: goto $l3793;
        case 1: goto $l3763;
        case 4: goto $l3819;
        case 0: goto $l3756;
    }
    $l3832:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3833;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3834;
    panda$core$Int64 $tmp3835;
    org$pandalanguage$pandac$ASTNode* $returnValue3838;
    org$pandalanguage$pandac$ASTNode* $tmp3839;
    org$pandalanguage$pandac$parser$Token$nullable label3841;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3842;
    panda$core$Int64 $tmp3843;
    org$pandalanguage$pandac$ASTNode* $tmp3845;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    panda$core$Int64 $tmp3848;
    panda$core$String* $tmp3849;
    org$pandalanguage$pandac$ASTNode* $tmp3852;
    org$pandalanguage$pandac$ASTNode* $tmp3853;
    panda$core$Int64 $tmp3855;
    panda$core$Int64$init$builtin_int64(&$tmp3835, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3834, $tmp3835);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3837 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3834, &$s3836);
    start3833 = $tmp3837;
    if (((panda$core$Bit) { !start3833.nonnull }).value) {
    {
        $tmp3839 = NULL;
        $returnValue3838 = $tmp3839;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3839));
        return $returnValue3838;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3843, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3842, $tmp3843);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3844 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3842);
    label3841 = $tmp3844;
    if (((panda$core$Bit) { label3841.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3847 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3848, 7);
        panda$core$String* $tmp3850 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3841.value));
        $tmp3849 = $tmp3850;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3847, $tmp3848, ((org$pandalanguage$pandac$parser$Token) start3833.value).position, $tmp3849);
        $tmp3846 = $tmp3847;
        $tmp3845 = $tmp3846;
        $returnValue3838 = $tmp3845;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3845));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3849));
        return $returnValue3838;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3854 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3855, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3854, $tmp3855, ((org$pandalanguage$pandac$parser$Token) start3833.value).position, NULL);
    $tmp3853 = $tmp3854;
    $tmp3852 = $tmp3853;
    $returnValue3838 = $tmp3852;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3852));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3853));
    return $returnValue3838;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3857;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3858;
    panda$core$Int64 $tmp3859;
    org$pandalanguage$pandac$ASTNode* $returnValue3862;
    org$pandalanguage$pandac$ASTNode* $tmp3863;
    org$pandalanguage$pandac$parser$Token$nullable label3865;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3866;
    panda$core$Int64 $tmp3867;
    org$pandalanguage$pandac$ASTNode* $tmp3869;
    org$pandalanguage$pandac$ASTNode* $tmp3870;
    panda$core$Int64 $tmp3872;
    panda$core$String* $tmp3873;
    org$pandalanguage$pandac$ASTNode* $tmp3876;
    org$pandalanguage$pandac$ASTNode* $tmp3877;
    panda$core$Int64 $tmp3879;
    panda$core$Int64$init$builtin_int64(&$tmp3859, 30);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3858, $tmp3859);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3861 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3858, &$s3860);
    start3857 = $tmp3861;
    if (((panda$core$Bit) { !start3857.nonnull }).value) {
    {
        $tmp3863 = NULL;
        $returnValue3862 = $tmp3863;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3863));
        return $returnValue3862;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3867, 49);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3866, $tmp3867);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3868 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3866);
    label3865 = $tmp3868;
    if (((panda$core$Bit) { label3865.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3871 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3872, 12);
        panda$core$String* $tmp3874 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3865.value));
        $tmp3873 = $tmp3874;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3871, $tmp3872, ((org$pandalanguage$pandac$parser$Token) start3857.value).position, $tmp3873);
        $tmp3870 = $tmp3871;
        $tmp3869 = $tmp3870;
        $returnValue3862 = $tmp3869;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3869));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3873));
        return $returnValue3862;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3878 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3879, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3878, $tmp3879, ((org$pandalanguage$pandac$parser$Token) start3857.value).position, NULL);
    $tmp3877 = $tmp3878;
    $tmp3876 = $tmp3877;
    $returnValue3862 = $tmp3876;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3876));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3877));
    return $returnValue3862;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3881;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3882;
    panda$core$Int64 $tmp3883;
    org$pandalanguage$pandac$ASTNode* $returnValue3886;
    org$pandalanguage$pandac$ASTNode* $tmp3887;
    org$pandalanguage$pandac$parser$Token$Kind $match$1803_93889;
    panda$core$Int64 $tmp3893;
    panda$core$Int64 $tmp3896;
    panda$core$Int64 $tmp3900;
    org$pandalanguage$pandac$ASTNode* $tmp3903;
    org$pandalanguage$pandac$ASTNode* $tmp3904;
    panda$core$Int64 $tmp3906;
    panda$collections$Array* children3911 = NULL;
    panda$collections$Array* $tmp3912;
    panda$collections$Array* $tmp3913;
    org$pandalanguage$pandac$ASTNode* expr3915 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3916;
    org$pandalanguage$pandac$ASTNode* $tmp3917;
    org$pandalanguage$pandac$ASTNode* $tmp3919;
    org$pandalanguage$pandac$ASTNode* $tmp3922;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    panda$core$Int64 $tmp3925;
    panda$core$Int64$init$builtin_int64(&$tmp3883, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3882, $tmp3883);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3885 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3882, &$s3884);
    start3881 = $tmp3885;
    if (((panda$core$Bit) { !start3881.nonnull }).value) {
    {
        $tmp3887 = NULL;
        $returnValue3886 = $tmp3887;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3887));
        return $returnValue3886;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3890 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1803_93889 = $tmp3890.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3893, 101);
        panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1803_93889.$rawValue, $tmp3893);
        bool $tmp3892 = $tmp3894.value;
        if ($tmp3892) goto $l3895;
        panda$core$Int64$init$builtin_int64(&$tmp3896, 40);
        panda$core$Bit $tmp3897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1803_93889.$rawValue, $tmp3896);
        $tmp3892 = $tmp3897.value;
        $l3895:;
        panda$core$Bit $tmp3898 = { $tmp3892 };
        bool $tmp3891 = $tmp3898.value;
        if ($tmp3891) goto $l3899;
        panda$core$Int64$init$builtin_int64(&$tmp3900, 41);
        panda$core$Bit $tmp3901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1803_93889.$rawValue, $tmp3900);
        $tmp3891 = $tmp3901.value;
        $l3899:;
        panda$core$Bit $tmp3902 = { $tmp3891 };
        if ($tmp3902.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3905 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3906, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3905, $tmp3906, ((org$pandalanguage$pandac$parser$Token) start3881.value).position, NULL);
            $tmp3904 = $tmp3905;
            $tmp3903 = $tmp3904;
            $returnValue3886 = $tmp3903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3904));
            return $returnValue3886;
        }
        }
        else {
        {
            int $tmp3910;
            {
                panda$collections$Array* $tmp3914 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3914);
                $tmp3913 = $tmp3914;
                $tmp3912 = $tmp3913;
                children3911 = $tmp3912;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3913));
                org$pandalanguage$pandac$ASTNode* $tmp3918 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3917 = $tmp3918;
                $tmp3916 = $tmp3917;
                expr3915 = $tmp3916;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3917));
                if (((panda$core$Bit) { expr3915 == NULL }).value) {
                {
                    $tmp3919 = NULL;
                    $returnValue3886 = $tmp3919;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3919));
                    $tmp3910 = 0;
                    goto $l3908;
                    $l3920:;
                    return $returnValue3886;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3911, ((panda$core$Object*) expr3915));
                org$pandalanguage$pandac$ASTNode* $tmp3924 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3925, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3924, $tmp3925, ((org$pandalanguage$pandac$parser$Token) start3881.value).position, expr3915);
                $tmp3923 = $tmp3924;
                $tmp3922 = $tmp3923;
                $returnValue3886 = $tmp3922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3923));
                $tmp3910 = 1;
                goto $l3908;
                $l3926:;
                return $returnValue3886;
            }
            $l3908:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3911));
            children3911 = NULL;
            expr3915 = NULL;
            switch ($tmp3910) {
                case 1: goto $l3926;
                case 0: goto $l3920;
            }
            $l3928:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1821_93929;
    panda$core$Int64 $tmp3931;
    org$pandalanguage$pandac$ASTNode* $returnValue3933;
    org$pandalanguage$pandac$ASTNode* $tmp3934;
    org$pandalanguage$pandac$ASTNode* $tmp3935;
    panda$core$Int64 $tmp3938;
    org$pandalanguage$pandac$ASTNode* $tmp3940;
    org$pandalanguage$pandac$ASTNode* $tmp3941;
    panda$core$Int64 $tmp3944;
    org$pandalanguage$pandac$ASTNode* $tmp3946;
    org$pandalanguage$pandac$ASTNode* $tmp3947;
    panda$core$Bit $tmp3950;
    {
        org$pandalanguage$pandac$parser$Token $tmp3930 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1821_93929 = $tmp3930.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3931, 29);
        panda$core$Bit $tmp3932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93929.$rawValue, $tmp3931);
        if ($tmp3932.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3936 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3935 = $tmp3936;
            $tmp3934 = $tmp3935;
            $returnValue3933 = $tmp3934;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3935));
            return $returnValue3933;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3938, 30);
        panda$core$Bit $tmp3939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93929.$rawValue, $tmp3938);
        if ($tmp3939.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3942 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3941 = $tmp3942;
            $tmp3940 = $tmp3941;
            $returnValue3933 = $tmp3940;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3940));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3941));
            return $returnValue3933;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3944, 28);
        panda$core$Bit $tmp3945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93929.$rawValue, $tmp3944);
        if ($tmp3945.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3948 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3947 = $tmp3948;
            $tmp3946 = $tmp3947;
            $returnValue3933 = $tmp3946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3947));
            return $returnValue3933;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3950, false);
            if ($tmp3950.value) goto $l3951; else goto $l3952;
            $l3952:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3953, (panda$core$Int64) { 1825 });
            abort();
            $l3951:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1833_93954;
    panda$core$Int64 $tmp3956;
    org$pandalanguage$pandac$ASTNode* $returnValue3958;
    org$pandalanguage$pandac$ASTNode* $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3960;
    panda$core$Int64 $tmp3963;
    org$pandalanguage$pandac$ASTNode* $tmp3965;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    panda$core$Int64 $tmp3969;
    org$pandalanguage$pandac$ASTNode* $tmp3971;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    panda$core$Int64 $tmp3975;
    org$pandalanguage$pandac$ASTNode* $tmp3977;
    org$pandalanguage$pandac$ASTNode* $tmp3978;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3981;
    panda$core$Int64 $tmp3982;
    org$pandalanguage$pandac$ASTNode* $tmp3984;
    {
        org$pandalanguage$pandac$parser$Token $tmp3955 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1833_93954 = $tmp3955.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3956, 31);
        panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1833_93954.$rawValue, $tmp3956);
        if ($tmp3957.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3961 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3960 = $tmp3961;
            $tmp3959 = $tmp3960;
            $returnValue3958 = $tmp3959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3960));
            return $returnValue3958;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3963, 33);
        panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1833_93954.$rawValue, $tmp3963);
        if ($tmp3964.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3967 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3966 = $tmp3967;
            $tmp3965 = $tmp3966;
            $returnValue3958 = $tmp3965;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3965));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3966));
            return $returnValue3958;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3969, 36);
        panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1833_93954.$rawValue, $tmp3969);
        if ($tmp3970.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3973 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3972 = $tmp3973;
            $tmp3971 = $tmp3972;
            $returnValue3958 = $tmp3971;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3972));
            return $returnValue3958;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3975, 32);
        panda$core$Bit $tmp3976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1833_93954.$rawValue, $tmp3975);
        if ($tmp3976.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3979 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3978 = $tmp3979;
            $tmp3977 = $tmp3978;
            $returnValue3958 = $tmp3977;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3977));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3978));
            return $returnValue3958;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3982, 31);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3981, $tmp3982);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3981, &$s3983);
            $tmp3984 = NULL;
            $returnValue3958 = $tmp3984;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3984));
            return $returnValue3958;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3989;
    org$pandalanguage$pandac$parser$Token$nullable start3990;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3991;
    panda$core$Int64 $tmp3992;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3994;
    panda$core$Int64 $tmp3995;
    org$pandalanguage$pandac$ASTNode* $returnValue3998;
    org$pandalanguage$pandac$ASTNode* $tmp3999;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4002;
    panda$core$Int64 $tmp4003;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4004;
    panda$core$Int64 $tmp4005;
    org$pandalanguage$pandac$parser$Token$nullable name4006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4007;
    panda$core$Int64 $tmp4008;
    org$pandalanguage$pandac$ASTNode* $tmp4011;
    panda$collections$ImmutableArray* params4014 = NULL;
    panda$collections$ImmutableArray* $tmp4015;
    panda$collections$ImmutableArray* $tmp4016;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    org$pandalanguage$pandac$ASTNode* returnType4021 = NULL;
    panda$core$Int64 $tmp4023;
    org$pandalanguage$pandac$ASTNode* $tmp4025;
    org$pandalanguage$pandac$ASTNode* $tmp4026;
    org$pandalanguage$pandac$ASTNode* $tmp4027;
    org$pandalanguage$pandac$ASTNode* $tmp4029;
    org$pandalanguage$pandac$ASTNode* $tmp4032;
    org$pandalanguage$pandac$ASTNode* $tmp4033;
    panda$collections$ImmutableArray* body4034 = NULL;
    panda$collections$ImmutableArray* $tmp4035;
    panda$collections$ImmutableArray* $tmp4036;
    org$pandalanguage$pandac$ASTNode* $tmp4038;
    org$pandalanguage$pandac$ASTNode* $tmp4041;
    org$pandalanguage$pandac$ASTNode* $tmp4042;
    panda$core$Int64 $tmp4044;
    panda$collections$ImmutableArray* $tmp4045;
    panda$core$String* $tmp4047;
    int $tmp3988;
    {
        memset(&kind3989, 0, sizeof(kind3989));
        panda$core$Int64$init$builtin_int64(&$tmp3992, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3991, $tmp3992);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3993 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3991);
        start3990 = $tmp3993;
        if (((panda$core$Bit) { !start3990.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3995, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3994, $tmp3995);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3997 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3994, &$s3996);
            start3990 = $tmp3997;
            if (((panda$core$Bit) { !start3990.nonnull }).value) {
            {
                $tmp3999 = NULL;
                $returnValue3998 = $tmp3999;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3999));
                $tmp3988 = 0;
                goto $l3986;
                $l4000:;
                return $returnValue3998;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4003, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4002, $tmp4003);
            kind3989 = $tmp4002;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4005, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4004, $tmp4005);
            kind3989 = $tmp4004;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4008, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4007, $tmp4008);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4010 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4007, &$s4009);
        name4006 = $tmp4010;
        if (((panda$core$Bit) { !name4006.nonnull }).value) {
        {
            $tmp4011 = NULL;
            $returnValue3998 = $tmp4011;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4011));
            $tmp3988 = 1;
            goto $l3986;
            $l4012:;
            return $returnValue3998;
        }
        }
        panda$collections$ImmutableArray* $tmp4017 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4016 = $tmp4017;
        $tmp4015 = $tmp4016;
        params4014 = $tmp4015;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4016));
        if (((panda$core$Bit) { params4014 == NULL }).value) {
        {
            $tmp4018 = NULL;
            $returnValue3998 = $tmp4018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4018));
            $tmp3988 = 2;
            goto $l3986;
            $l4019:;
            return $returnValue3998;
        }
        }
        memset(&returnType4021, 0, sizeof(returnType4021));
        org$pandalanguage$pandac$parser$Token $tmp4022 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4023, 96);
        panda$core$Bit $tmp4024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4022.kind.$rawValue, $tmp4023);
        if ($tmp4024.value) {
        {
            {
                $tmp4025 = returnType4021;
                org$pandalanguage$pandac$ASTNode* $tmp4028 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4027 = $tmp4028;
                $tmp4026 = $tmp4027;
                returnType4021 = $tmp4026;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4026));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4025));
            }
            if (((panda$core$Bit) { returnType4021 == NULL }).value) {
            {
                $tmp4029 = NULL;
                $returnValue3998 = $tmp4029;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4029));
                $tmp3988 = 3;
                goto $l3986;
                $l4030:;
                return $returnValue3998;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4032 = returnType4021;
                $tmp4033 = NULL;
                returnType4021 = $tmp4033;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4032));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4037 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4036 = $tmp4037;
        $tmp4035 = $tmp4036;
        body4034 = $tmp4035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4036));
        if (((panda$core$Bit) { body4034 == NULL }).value) {
        {
            $tmp4038 = NULL;
            $returnValue3998 = $tmp4038;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4038));
            $tmp3988 = 4;
            goto $l3986;
            $l4039:;
            return $returnValue3998;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4043 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4044, 26);
        panda$collections$ImmutableArray* $tmp4046 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4046);
        $tmp4045 = $tmp4046;
        panda$core$String* $tmp4048 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4006.value));
        $tmp4047 = $tmp4048;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4043, $tmp4044, ((org$pandalanguage$pandac$parser$Token) start3990.value).position, NULL, $tmp4045, kind3989, $tmp4047, NULL, params4014, returnType4021, body4034);
        $tmp4042 = $tmp4043;
        $tmp4041 = $tmp4042;
        $returnValue3998 = $tmp4041;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4041));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4042));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4045));
        $tmp3988 = 5;
        goto $l3986;
        $l4049:;
        return $returnValue3998;
    }
    $l3986:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4034));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4021));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4014));
    params4014 = NULL;
    body4034 = NULL;
    switch ($tmp3988) {
        case 3: goto $l4030;
        case 5: goto $l4049;
        case 1: goto $l4012;
        case 2: goto $l4019;
        case 0: goto $l4000;
        case 4: goto $l4039;
    }
    $l4051:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1892_94052;
    panda$core$Int64 $tmp4054;
    org$pandalanguage$pandac$ASTNode* $returnValue4056;
    org$pandalanguage$pandac$ASTNode* $tmp4057;
    org$pandalanguage$pandac$ASTNode* $tmp4058;
    panda$core$Int64 $tmp4061;
    org$pandalanguage$pandac$ASTNode* $tmp4063;
    org$pandalanguage$pandac$ASTNode* $tmp4064;
    panda$core$Int64 $tmp4067;
    org$pandalanguage$pandac$ASTNode* $tmp4069;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    panda$core$Int64 $tmp4073;
    org$pandalanguage$pandac$ASTNode* $tmp4075;
    org$pandalanguage$pandac$ASTNode* $tmp4076;
    panda$core$Int64 $tmp4079;
    org$pandalanguage$pandac$ASTNode* $tmp4081;
    org$pandalanguage$pandac$ASTNode* $tmp4082;
    panda$core$Int64 $tmp4085;
    org$pandalanguage$pandac$ASTNode* $tmp4087;
    org$pandalanguage$pandac$ASTNode* $tmp4088;
    panda$core$Int64 $tmp4091;
    org$pandalanguage$pandac$ASTNode* $tmp4093;
    org$pandalanguage$pandac$ASTNode* $tmp4094;
    panda$core$Int64 $tmp4097;
    org$pandalanguage$pandac$ASTNode* $tmp4099;
    org$pandalanguage$pandac$ASTNode* $tmp4100;
    panda$core$Int64 $tmp4103;
    org$pandalanguage$pandac$parser$Token id4105;
    org$pandalanguage$pandac$parser$Token$nullable colon4107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4108;
    panda$core$Int64 $tmp4109;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4111;
    panda$core$Int64 $tmp4112;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4114;
    panda$core$Int64 $tmp4115;
    org$pandalanguage$pandac$ASTNode* $tmp4117;
    org$pandalanguage$pandac$ASTNode* $tmp4118;
    panda$core$String* $tmp4119;
    org$pandalanguage$pandac$ASTNode* $tmp4123;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    panda$core$Int64 $tmp4128;
    panda$core$Int64 $tmp4131;
    org$pandalanguage$pandac$ASTNode* $tmp4134;
    org$pandalanguage$pandac$ASTNode* $tmp4135;
    panda$core$Int64 $tmp4141;
    panda$core$Int64 $tmp4144;
    panda$core$Int64 $tmp4148;
    panda$core$Int64 $tmp4152;
    org$pandalanguage$pandac$ASTNode* $tmp4155;
    org$pandalanguage$pandac$ASTNode* $tmp4156;
    panda$core$Int64 $tmp4159;
    org$pandalanguage$pandac$ASTNode* $tmp4161;
    org$pandalanguage$pandac$ASTNode* $tmp4162;
    panda$core$Int64 $tmp4166;
    panda$core$Int64 $tmp4169;
    org$pandalanguage$pandac$ASTNode* $tmp4172;
    org$pandalanguage$pandac$ASTNode* $tmp4173;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4176;
    panda$core$Int64 $tmp4177;
    org$pandalanguage$pandac$ASTNode* $tmp4179;
    {
        org$pandalanguage$pandac$parser$Token $tmp4053 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1892_94052 = $tmp4053.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4054, 37);
        panda$core$Bit $tmp4055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4054);
        if ($tmp4055.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4059 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4058 = $tmp4059;
            $tmp4057 = $tmp4058;
            $returnValue4056 = $tmp4057;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4057));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4058));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4061, 33);
        panda$core$Bit $tmp4062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4061);
        if ($tmp4062.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4065 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4064 = $tmp4065;
            $tmp4063 = $tmp4064;
            $returnValue4056 = $tmp4063;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4063));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4064));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4067, 32);
        panda$core$Bit $tmp4068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4067);
        if ($tmp4068.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4071 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4070 = $tmp4071;
            $tmp4069 = $tmp4070;
            $returnValue4056 = $tmp4069;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4070));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4073, 31);
        panda$core$Bit $tmp4074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4073);
        if ($tmp4074.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4077 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4076 = $tmp4077;
            $tmp4075 = $tmp4076;
            $returnValue4056 = $tmp4075;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4076));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4079, 36);
        panda$core$Bit $tmp4080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4079);
        if ($tmp4080.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4083 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4082 = $tmp4083;
            $tmp4081 = $tmp4082;
            $returnValue4056 = $tmp4081;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4081));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4082));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4085, 45);
        panda$core$Bit $tmp4086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4085);
        if ($tmp4086.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4089 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4088 = $tmp4089;
            $tmp4087 = $tmp4088;
            $returnValue4056 = $tmp4087;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4087));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4088));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4091, 39);
        panda$core$Bit $tmp4092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4091);
        if ($tmp4092.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4095 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4094 = $tmp4095;
            $tmp4093 = $tmp4094;
            $returnValue4056 = $tmp4093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4094));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4097, 100);
        panda$core$Bit $tmp4098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4097);
        if ($tmp4098.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4101 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4100 = $tmp4101;
            $tmp4099 = $tmp4100;
            $returnValue4056 = $tmp4099;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4099));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4100));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4103, 49);
        panda$core$Bit $tmp4104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4103);
        if ($tmp4104.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4106 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4105 = $tmp4106;
            panda$core$Int64$init$builtin_int64(&$tmp4109, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4108, $tmp4109);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4110 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4108);
            colon4107 = $tmp4110;
            if (((panda$core$Bit) { colon4107.nonnull }).value) {
            {
                if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, ((org$pandalanguage$pandac$parser$Token) colon4107.value));
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4105);
                    panda$core$Int64$init$builtin_int64(&$tmp4112, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4111, $tmp4112);
                    (($fn4113) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp4111);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp4115, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4114, $tmp4115);
                    (($fn4116) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp4114);
                }
                }
                panda$core$String* $tmp4120 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4105);
                $tmp4119 = $tmp4120;
                org$pandalanguage$pandac$ASTNode* $tmp4121 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4119);
                $tmp4118 = $tmp4121;
                $tmp4117 = $tmp4118;
                $returnValue4056 = $tmp4117;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4119));
                return $returnValue4056;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4105);
            org$pandalanguage$pandac$ASTNode* $tmp4125 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4124 = $tmp4125;
            $tmp4123 = $tmp4124;
            $returnValue4056 = $tmp4123;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4123));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4124));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4128, 47);
        panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4128);
        bool $tmp4127 = $tmp4129.value;
        if ($tmp4127) goto $l4130;
        panda$core$Int64$init$builtin_int64(&$tmp4131, 48);
        panda$core$Bit $tmp4132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4131);
        $tmp4127 = $tmp4132.value;
        $l4130:;
        panda$core$Bit $tmp4133 = { $tmp4127 };
        if ($tmp4133.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4136 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4135 = $tmp4136;
            $tmp4134 = $tmp4135;
            $returnValue4056 = $tmp4134;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4135));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4141, 24);
        panda$core$Bit $tmp4142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4141);
        bool $tmp4140 = $tmp4142.value;
        if ($tmp4140) goto $l4143;
        panda$core$Int64$init$builtin_int64(&$tmp4144, 25);
        panda$core$Bit $tmp4145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4144);
        $tmp4140 = $tmp4145.value;
        $l4143:;
        panda$core$Bit $tmp4146 = { $tmp4140 };
        bool $tmp4139 = $tmp4146.value;
        if ($tmp4139) goto $l4147;
        panda$core$Int64$init$builtin_int64(&$tmp4148, 26);
        panda$core$Bit $tmp4149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4148);
        $tmp4139 = $tmp4149.value;
        $l4147:;
        panda$core$Bit $tmp4150 = { $tmp4139 };
        bool $tmp4138 = $tmp4150.value;
        if ($tmp4138) goto $l4151;
        panda$core$Int64$init$builtin_int64(&$tmp4152, 27);
        panda$core$Bit $tmp4153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4152);
        $tmp4138 = $tmp4153.value;
        $l4151:;
        panda$core$Bit $tmp4154 = { $tmp4138 };
        if ($tmp4154.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4157 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4156 = $tmp4157;
            $tmp4155 = $tmp4156;
            $returnValue4056 = $tmp4155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4156));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4159, 23);
        panda$core$Bit $tmp4160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4159);
        if ($tmp4160.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4163 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4162 = $tmp4163;
            $tmp4161 = $tmp4162;
            $returnValue4056 = $tmp4161;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4162));
            return $returnValue4056;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4166, 22);
        panda$core$Bit $tmp4167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4166);
        bool $tmp4165 = $tmp4167.value;
        if ($tmp4165) goto $l4168;
        panda$core$Int64$init$builtin_int64(&$tmp4169, 21);
        panda$core$Bit $tmp4170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1892_94052.$rawValue, $tmp4169);
        $tmp4165 = $tmp4170.value;
        $l4168:;
        panda$core$Bit $tmp4171 = { $tmp4165 };
        if ($tmp4171.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4174 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4173 = $tmp4174;
            $tmp4172 = $tmp4173;
            $returnValue4056 = $tmp4172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4172));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4173));
            return $returnValue4056;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4177, 37);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4176, $tmp4177);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4176, &$s4178);
            $tmp4179 = NULL;
            $returnValue4056 = $tmp4179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4179));
            return $returnValue4056;
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
    org$pandalanguage$pandac$parser$Token$nullable start4184;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4185;
    panda$core$Int64 $tmp4186;
    org$pandalanguage$pandac$ASTNode* $returnValue4189;
    org$pandalanguage$pandac$ASTNode* $tmp4190;
    org$pandalanguage$pandac$parser$Token$nullable next4193;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4194;
    panda$core$Int64 $tmp4195;
    org$pandalanguage$pandac$ASTNode* $tmp4198;
    panda$core$MutableString* name4201 = NULL;
    panda$core$MutableString* $tmp4202;
    panda$core$MutableString* $tmp4203;
    panda$core$String* $tmp4205;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4209;
    panda$core$Int64 $tmp4210;
    panda$core$Char8 $tmp4212;
    panda$core$UInt8 $tmp4213;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4214;
    panda$core$Int64 $tmp4215;
    org$pandalanguage$pandac$ASTNode* $tmp4218;
    panda$core$String* $tmp4221;
    org$pandalanguage$pandac$ASTNode* $tmp4223;
    org$pandalanguage$pandac$ASTNode* $tmp4224;
    panda$core$Int64 $tmp4226;
    panda$core$String* $tmp4227;
    int $tmp4183;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4186, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4185, $tmp4186);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4188 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4185, &$s4187);
        start4184 = $tmp4188;
        if (((panda$core$Bit) { !start4184.nonnull }).value) {
        {
            $tmp4190 = NULL;
            $returnValue4189 = $tmp4190;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4190));
            $tmp4183 = 0;
            goto $l4181;
            $l4191:;
            return $returnValue4189;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4195, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4194, $tmp4195);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4197 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4194, &$s4196);
        next4193 = $tmp4197;
        if (((panda$core$Bit) { !next4193.nonnull }).value) {
        {
            $tmp4198 = NULL;
            $returnValue4189 = $tmp4198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4198));
            $tmp4183 = 1;
            goto $l4181;
            $l4199:;
            return $returnValue4189;
        }
        }
        panda$core$MutableString* $tmp4204 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4206 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4193.value));
        $tmp4205 = $tmp4206;
        panda$core$MutableString$init$panda$core$String($tmp4204, $tmp4205);
        $tmp4203 = $tmp4204;
        $tmp4202 = $tmp4203;
        name4201 = $tmp4202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4205));
        $l4207:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4210, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4209, $tmp4210);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4211 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4209);
            next4193 = $tmp4211;
            if (((panda$core$Bit) { !next4193.nonnull }).value) {
            {
                goto $l4208;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4213, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4212, $tmp4213);
            panda$core$MutableString$append$panda$core$Char8(name4201, $tmp4212);
            panda$core$Int64$init$builtin_int64(&$tmp4215, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4214, $tmp4215);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4214, &$s4216);
            next4193 = $tmp4217;
            if (((panda$core$Bit) { !next4193.nonnull }).value) {
            {
                $tmp4218 = NULL;
                $returnValue4189 = $tmp4218;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4218));
                $tmp4183 = 2;
                goto $l4181;
                $l4219:;
                return $returnValue4189;
            }
            }
            panda$core$String* $tmp4222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4193.value));
            $tmp4221 = $tmp4222;
            panda$core$MutableString$append$panda$core$String(name4201, $tmp4221);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4221));
        }
        }
        $l4208:;
        org$pandalanguage$pandac$ASTNode* $tmp4225 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4226, 30);
        panda$core$String* $tmp4228 = panda$core$MutableString$finish$R$panda$core$String(name4201);
        $tmp4227 = $tmp4228;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4225, $tmp4226, ((org$pandalanguage$pandac$parser$Token) start4184.value).position, $tmp4227);
        $tmp4224 = $tmp4225;
        $tmp4223 = $tmp4224;
        $returnValue4189 = $tmp4223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4227));
        $tmp4183 = 3;
        goto $l4181;
        $l4229:;
        return $returnValue4189;
    }
    $l4181:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4201));
    name4201 = NULL;
    switch ($tmp4183) {
        case 1: goto $l4199;
        case 3: goto $l4229;
        case 2: goto $l4219;
        case 0: goto $l4191;
    }
    $l4231:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4235;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4236;
    panda$core$Int64 $tmp4237;
    org$pandalanguage$pandac$ASTNode* $returnValue4240;
    org$pandalanguage$pandac$ASTNode* $tmp4241;
    org$pandalanguage$pandac$parser$Token$nullable next4244;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4245;
    panda$core$Int64 $tmp4246;
    org$pandalanguage$pandac$ASTNode* $tmp4249;
    panda$core$MutableString* name4252 = NULL;
    panda$core$MutableString* $tmp4253;
    panda$core$MutableString* $tmp4254;
    panda$core$String* $tmp4256;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4260;
    panda$core$Int64 $tmp4261;
    panda$core$Char8 $tmp4263;
    panda$core$UInt8 $tmp4264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4265;
    panda$core$Int64 $tmp4266;
    org$pandalanguage$pandac$ASTNode* $tmp4269;
    panda$core$String* $tmp4272;
    org$pandalanguage$pandac$ASTNode* $tmp4274;
    org$pandalanguage$pandac$ASTNode* $tmp4275;
    panda$core$Int64 $tmp4277;
    panda$core$String* $tmp4278;
    int $tmp4234;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4237, 16);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4236, $tmp4237);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4239 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4236, &$s4238);
        start4235 = $tmp4239;
        if (((panda$core$Bit) { !start4235.nonnull }).value) {
        {
            $tmp4241 = NULL;
            $returnValue4240 = $tmp4241;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4241));
            $tmp4234 = 0;
            goto $l4232;
            $l4242:;
            return $returnValue4240;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4246, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4245, $tmp4246);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4248 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4245, &$s4247);
        next4244 = $tmp4248;
        if (((panda$core$Bit) { !next4244.nonnull }).value) {
        {
            $tmp4249 = NULL;
            $returnValue4240 = $tmp4249;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4249));
            $tmp4234 = 1;
            goto $l4232;
            $l4250:;
            return $returnValue4240;
        }
        }
        panda$core$MutableString* $tmp4255 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4257 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4244.value));
        $tmp4256 = $tmp4257;
        panda$core$MutableString$init$panda$core$String($tmp4255, $tmp4256);
        $tmp4254 = $tmp4255;
        $tmp4253 = $tmp4254;
        name4252 = $tmp4253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4256));
        $l4258:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4261, 99);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4260, $tmp4261);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4262 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4260);
            next4244 = $tmp4262;
            if (((panda$core$Bit) { !next4244.nonnull }).value) {
            {
                goto $l4259;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4264, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4263, $tmp4264);
            panda$core$MutableString$append$panda$core$Char8(name4252, $tmp4263);
            panda$core$Int64$init$builtin_int64(&$tmp4266, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4265, $tmp4266);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4265, &$s4267);
            next4244 = $tmp4268;
            if (((panda$core$Bit) { !next4244.nonnull }).value) {
            {
                $tmp4269 = NULL;
                $returnValue4240 = $tmp4269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4269));
                $tmp4234 = 2;
                goto $l4232;
                $l4270:;
                return $returnValue4240;
            }
            }
            panda$core$String* $tmp4273 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4244.value));
            $tmp4272 = $tmp4273;
            panda$core$MutableString$append$panda$core$String(name4252, $tmp4272);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4272));
        }
        }
        $l4259:;
        org$pandalanguage$pandac$ASTNode* $tmp4276 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4277, 46);
        panda$core$String* $tmp4279 = panda$core$MutableString$finish$R$panda$core$String(name4252);
        $tmp4278 = $tmp4279;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4276, $tmp4277, ((org$pandalanguage$pandac$parser$Token) start4235.value).position, $tmp4278);
        $tmp4275 = $tmp4276;
        $tmp4274 = $tmp4275;
        $returnValue4240 = $tmp4274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4278));
        $tmp4234 = 3;
        goto $l4232;
        $l4280:;
        return $returnValue4240;
    }
    $l4232:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4252));
    name4252 = NULL;
    switch ($tmp4234) {
        case 1: goto $l4250;
        case 3: goto $l4280;
        case 2: goto $l4270;
        case 0: goto $l4242;
    }
    $l4282:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4287;
    panda$core$Int64 $tmp4288;
    panda$collections$ImmutableArray* $returnValue4291;
    panda$collections$ImmutableArray* $tmp4292;
    org$pandalanguage$pandac$parser$Token$nullable id4295;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4296;
    panda$core$Int64 $tmp4297;
    panda$collections$ImmutableArray* $tmp4300;
    panda$collections$Array* parameters4303 = NULL;
    panda$collections$Array* $tmp4304;
    panda$collections$Array* $tmp4305;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4307;
    panda$core$Int64 $tmp4308;
    org$pandalanguage$pandac$ASTNode* t4313 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4314;
    org$pandalanguage$pandac$ASTNode* $tmp4315;
    panda$collections$ImmutableArray* $tmp4317;
    org$pandalanguage$pandac$ASTNode* $tmp4321;
    panda$core$Int64 $tmp4323;
    panda$core$String* $tmp4324;
    org$pandalanguage$pandac$ASTNode* $tmp4327;
    panda$core$Int64 $tmp4329;
    panda$core$String* $tmp4330;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4335;
    panda$core$Int64 $tmp4336;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4338;
    panda$core$Int64 $tmp4339;
    panda$collections$ImmutableArray* $tmp4342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4345;
    panda$core$Int64 $tmp4346;
    org$pandalanguage$pandac$ASTNode* t4351 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4352;
    org$pandalanguage$pandac$ASTNode* $tmp4353;
    panda$collections$ImmutableArray* $tmp4355;
    org$pandalanguage$pandac$ASTNode* $tmp4359;
    panda$core$Int64 $tmp4361;
    panda$core$String* $tmp4362;
    org$pandalanguage$pandac$ASTNode* $tmp4365;
    panda$core$Int64 $tmp4367;
    panda$core$String* $tmp4368;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4370;
    panda$core$Int64 $tmp4371;
    panda$collections$ImmutableArray* $tmp4374;
    panda$collections$ImmutableArray* $tmp4377;
    panda$collections$ImmutableArray* $tmp4378;
    int $tmp4285;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4288, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4287, $tmp4288);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4290 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4287, &$s4289);
        start4286 = $tmp4290;
        if (((panda$core$Bit) { !start4286.nonnull }).value) {
        {
            $tmp4292 = NULL;
            $returnValue4291 = $tmp4292;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4292));
            $tmp4285 = 0;
            goto $l4283;
            $l4293:;
            return $returnValue4291;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4297, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4296, $tmp4297);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4299 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4296, &$s4298);
        id4295 = $tmp4299;
        if (((panda$core$Bit) { !id4295.nonnull }).value) {
        {
            $tmp4300 = NULL;
            $returnValue4291 = $tmp4300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4300));
            $tmp4285 = 1;
            goto $l4283;
            $l4301:;
            return $returnValue4291;
        }
        }
        panda$collections$Array* $tmp4306 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4306);
        $tmp4305 = $tmp4306;
        $tmp4304 = $tmp4305;
        parameters4303 = $tmp4304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4305));
        panda$core$Int64$init$builtin_int64(&$tmp4308, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4307, $tmp4308);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4309 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4307);
        if (((panda$core$Bit) { $tmp4309.nonnull }).value) {
        {
            int $tmp4312;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4316 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4315 = $tmp4316;
                $tmp4314 = $tmp4315;
                t4313 = $tmp4314;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4315));
                if (((panda$core$Bit) { t4313 == NULL }).value) {
                {
                    $tmp4317 = NULL;
                    $returnValue4291 = $tmp4317;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4317));
                    $tmp4312 = 0;
                    goto $l4310;
                    $l4318:;
                    $tmp4285 = 2;
                    goto $l4283;
                    $l4319:;
                    return $returnValue4291;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4322 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4323, 44);
                panda$core$String* $tmp4325 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4295.value));
                $tmp4324 = $tmp4325;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4322, $tmp4323, ((org$pandalanguage$pandac$parser$Token) id4295.value).position, $tmp4324, t4313);
                $tmp4321 = $tmp4322;
                panda$collections$Array$add$panda$collections$Array$T(parameters4303, ((panda$core$Object*) $tmp4321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4324));
            }
            $tmp4312 = -1;
            goto $l4310;
            $l4310:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4313));
            t4313 = NULL;
            switch ($tmp4312) {
                case 0: goto $l4318;
                case -1: goto $l4326;
            }
            $l4326:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4328 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4329, 20);
            panda$core$String* $tmp4331 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4295.value));
            $tmp4330 = $tmp4331;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4328, $tmp4329, ((org$pandalanguage$pandac$parser$Token) id4295.value).position, $tmp4330);
            $tmp4327 = $tmp4328;
            panda$collections$Array$add$panda$collections$Array$T(parameters4303, ((panda$core$Object*) $tmp4327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4330));
        }
        }
        $l4332:;
        panda$core$Int64$init$builtin_int64(&$tmp4336, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4335, $tmp4336);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4337 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4335);
        bool $tmp4334 = ((panda$core$Bit) { $tmp4337.nonnull }).value;
        if (!$tmp4334) goto $l4333;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4339, 49);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4338, $tmp4339);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4341 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4338, &$s4340);
            id4295 = $tmp4341;
            if (((panda$core$Bit) { !id4295.nonnull }).value) {
            {
                $tmp4342 = NULL;
                $returnValue4291 = $tmp4342;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4342));
                $tmp4285 = 3;
                goto $l4283;
                $l4343:;
                return $returnValue4291;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4346, 96);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4345, $tmp4346);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4347 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4345);
            if (((panda$core$Bit) { $tmp4347.nonnull }).value) {
            {
                int $tmp4350;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4354 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4353 = $tmp4354;
                    $tmp4352 = $tmp4353;
                    t4351 = $tmp4352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4353));
                    if (((panda$core$Bit) { t4351 == NULL }).value) {
                    {
                        $tmp4355 = NULL;
                        $returnValue4291 = $tmp4355;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4355));
                        $tmp4350 = 0;
                        goto $l4348;
                        $l4356:;
                        $tmp4285 = 4;
                        goto $l4283;
                        $l4357:;
                        return $returnValue4291;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4360 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4361, 44);
                    panda$core$String* $tmp4363 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4295.value));
                    $tmp4362 = $tmp4363;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4360, $tmp4361, ((org$pandalanguage$pandac$parser$Token) id4295.value).position, $tmp4362, t4351);
                    $tmp4359 = $tmp4360;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4303, ((panda$core$Object*) $tmp4359));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4359));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4362));
                }
                $tmp4350 = -1;
                goto $l4348;
                $l4348:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4351));
                t4351 = NULL;
                switch ($tmp4350) {
                    case -1: goto $l4364;
                    case 0: goto $l4356;
                }
                $l4364:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4366 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4367, 20);
                panda$core$String* $tmp4369 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4295.value));
                $tmp4368 = $tmp4369;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4366, $tmp4367, ((org$pandalanguage$pandac$parser$Token) id4295.value).position, $tmp4368);
                $tmp4365 = $tmp4366;
                panda$collections$Array$add$panda$collections$Array$T(parameters4303, ((panda$core$Object*) $tmp4365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4368));
            }
            }
        }
        goto $l4332;
        $l4333:;
        panda$core$Int64$init$builtin_int64(&$tmp4371, 64);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4370, $tmp4371);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4373 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4370, &$s4372);
        if (((panda$core$Bit) { !$tmp4373.nonnull }).value) {
        {
            $tmp4374 = NULL;
            $returnValue4291 = $tmp4374;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4374));
            $tmp4285 = 5;
            goto $l4283;
            $l4375:;
            return $returnValue4291;
        }
        }
        panda$collections$ImmutableArray* $tmp4379 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4303);
        $tmp4378 = $tmp4379;
        $tmp4377 = $tmp4378;
        $returnValue4291 = $tmp4377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4378));
        $tmp4285 = 6;
        goto $l4283;
        $l4380:;
        return $returnValue4291;
    }
    $l4283:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4303));
    parameters4303 = NULL;
    switch ($tmp4285) {
        case 6: goto $l4380;
        case 3: goto $l4343;
        case 5: goto $l4375;
        case 2: goto $l4319;
        case 4: goto $l4357;
        case 1: goto $l4301;
        case 0: goto $l4293;
    }
    $l4382:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4386;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4387;
    panda$core$Int64 $tmp4388;
    panda$collections$ImmutableArray* $returnValue4391;
    panda$collections$ImmutableArray* $tmp4392;
    panda$collections$Array* result4395 = NULL;
    panda$collections$Array* $tmp4396;
    panda$collections$Array* $tmp4397;
    org$pandalanguage$pandac$ASTNode* t4399 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4400;
    org$pandalanguage$pandac$ASTNode* $tmp4401;
    panda$collections$ImmutableArray* $tmp4403;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4409;
    panda$core$Int64 $tmp4410;
    org$pandalanguage$pandac$ASTNode* $tmp4412;
    org$pandalanguage$pandac$ASTNode* $tmp4413;
    org$pandalanguage$pandac$ASTNode* $tmp4414;
    panda$collections$ImmutableArray* $tmp4416;
    panda$collections$ImmutableArray* $tmp4419;
    panda$collections$ImmutableArray* $tmp4420;
    int $tmp4385;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4388, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4387, $tmp4388);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4390 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4387, &$s4389);
        start4386 = $tmp4390;
        if (((panda$core$Bit) { !start4386.nonnull }).value) {
        {
            $tmp4392 = NULL;
            $returnValue4391 = $tmp4392;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4392));
            $tmp4385 = 0;
            goto $l4383;
            $l4393:;
            return $returnValue4391;
        }
        }
        panda$collections$Array* $tmp4398 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4398);
        $tmp4397 = $tmp4398;
        $tmp4396 = $tmp4397;
        result4395 = $tmp4396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4397));
        org$pandalanguage$pandac$ASTNode* $tmp4402 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4401 = $tmp4402;
        $tmp4400 = $tmp4401;
        t4399 = $tmp4400;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4401));
        if (((panda$core$Bit) { t4399 == NULL }).value) {
        {
            $tmp4403 = NULL;
            $returnValue4391 = $tmp4403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4403));
            $tmp4385 = 1;
            goto $l4383;
            $l4404:;
            return $returnValue4391;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4395, ((panda$core$Object*) t4399));
        $l4406:;
        panda$core$Int64$init$builtin_int64(&$tmp4410, 106);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4409, $tmp4410);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4411 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4409);
        bool $tmp4408 = ((panda$core$Bit) { $tmp4411.nonnull }).value;
        if (!$tmp4408) goto $l4407;
        {
            {
                $tmp4412 = t4399;
                org$pandalanguage$pandac$ASTNode* $tmp4415 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4414 = $tmp4415;
                $tmp4413 = $tmp4414;
                t4399 = $tmp4413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4412));
            }
            if (((panda$core$Bit) { t4399 == NULL }).value) {
            {
                $tmp4416 = NULL;
                $returnValue4391 = $tmp4416;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4416));
                $tmp4385 = 2;
                goto $l4383;
                $l4417:;
                return $returnValue4391;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4395, ((panda$core$Object*) t4399));
        }
        goto $l4406;
        $l4407:;
        panda$collections$ImmutableArray* $tmp4421 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4395);
        $tmp4420 = $tmp4421;
        $tmp4419 = $tmp4420;
        $returnValue4391 = $tmp4419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4420));
        $tmp4385 = 3;
        goto $l4383;
        $l4422:;
        return $returnValue4391;
    }
    $l4383:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4395));
    result4395 = NULL;
    t4399 = NULL;
    switch ($tmp4385) {
        case 2: goto $l4417;
        case 0: goto $l4393;
        case 1: goto $l4404;
        case 3: goto $l4422;
    }
    $l4424:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4428;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4429;
    panda$core$Int64 $tmp4430;
    org$pandalanguage$pandac$ASTNode* expr4433 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4434;
    panda$core$Int64 $tmp4435;
    org$pandalanguage$pandac$ASTNode* $tmp4437;
    org$pandalanguage$pandac$ASTNode* $tmp4438;
    org$pandalanguage$pandac$ASTNode* $tmp4439;
    org$pandalanguage$pandac$ASTNode* $returnValue4441;
    org$pandalanguage$pandac$ASTNode* $tmp4442;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4445;
    panda$core$Int64 $tmp4446;
    org$pandalanguage$pandac$ASTNode* $tmp4448;
    org$pandalanguage$pandac$ASTNode* $tmp4449;
    panda$core$Int64 $tmp4451;
    panda$core$String* $tmp4452;
    int $tmp4427;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4430, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4429, $tmp4430);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4432 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4429, &$s4431);
        a4428 = $tmp4432;
        memset(&expr4433, 0, sizeof(expr4433));
        panda$core$Int64$init$builtin_int64(&$tmp4435, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4434, $tmp4435);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4436 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4434);
        if (((panda$core$Bit) { $tmp4436.nonnull }).value) {
        {
            {
                $tmp4437 = expr4433;
                org$pandalanguage$pandac$ASTNode* $tmp4440 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4439 = $tmp4440;
                $tmp4438 = $tmp4439;
                expr4433 = $tmp4438;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4437));
            }
            if (((panda$core$Bit) { expr4433 == NULL }).value) {
            {
                $tmp4442 = NULL;
                $returnValue4441 = $tmp4442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4442));
                $tmp4427 = 0;
                goto $l4425;
                $l4443:;
                return $returnValue4441;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4446, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4445, $tmp4446);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4445, &$s4447);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4450 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4451, 0);
        panda$core$String* $tmp4453 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4428.value));
        $tmp4452 = $tmp4453;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4450, $tmp4451, ((org$pandalanguage$pandac$parser$Token) a4428.value).position, $tmp4452, expr4433);
        $tmp4449 = $tmp4450;
        $tmp4448 = $tmp4449;
        $returnValue4441 = $tmp4448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4452));
        $tmp4427 = 1;
        goto $l4425;
        $l4454:;
        return $returnValue4441;
    }
    $l4425:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4433));
    switch ($tmp4427) {
        case 1: goto $l4454;
        case 0: goto $l4443;
    }
    $l4456:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4460 = NULL;
    panda$collections$Array* $tmp4461;
    panda$collections$Array* $tmp4462;
    panda$core$Int64 $tmp4468;
    org$pandalanguage$pandac$ASTNode* a4473 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4474;
    org$pandalanguage$pandac$ASTNode* $tmp4475;
    panda$collections$ImmutableArray* $returnValue4479;
    panda$collections$ImmutableArray* $tmp4480;
    panda$collections$ImmutableArray* $tmp4481;
    int $tmp4459;
    {
        panda$collections$Array* $tmp4463 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4463);
        $tmp4462 = $tmp4463;
        $tmp4461 = $tmp4462;
        result4460 = $tmp4461;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4461));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4462));
        $l4464:;
        org$pandalanguage$pandac$parser$Token $tmp4467 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4468, 14);
        panda$core$Bit $tmp4469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4467.kind.$rawValue, $tmp4468);
        bool $tmp4466 = $tmp4469.value;
        if (!$tmp4466) goto $l4465;
        {
            int $tmp4472;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4476 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4475 = $tmp4476;
                $tmp4474 = $tmp4475;
                a4473 = $tmp4474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4475));
                if (((panda$core$Bit) { a4473 == NULL }).value) {
                {
                    $tmp4472 = 0;
                    goto $l4470;
                    $l4477:;
                    goto $l4465;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4460, ((panda$core$Object*) a4473));
            }
            $tmp4472 = -1;
            goto $l4470;
            $l4470:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4473));
            a4473 = NULL;
            switch ($tmp4472) {
                case -1: goto $l4478;
                case 0: goto $l4477;
            }
            $l4478:;
        }
        goto $l4464;
        $l4465:;
        panda$collections$ImmutableArray* $tmp4482 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4460);
        $tmp4481 = $tmp4482;
        $tmp4480 = $tmp4481;
        $returnValue4479 = $tmp4480;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4481));
        $tmp4459 = 0;
        goto $l4457;
        $l4483:;
        return $returnValue4479;
    }
    $l4457:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4460));
    result4460 = NULL;
    switch ($tmp4459) {
        case 0: goto $l4483;
    }
    $l4485:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4489;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4490;
    panda$core$Int64 $tmp4491;
    org$pandalanguage$pandac$ASTNode* $returnValue4494;
    org$pandalanguage$pandac$ASTNode* $tmp4495;
    panda$core$MutableString* result4498 = NULL;
    panda$core$MutableString* $tmp4499;
    panda$core$MutableString* $tmp4500;
    org$pandalanguage$pandac$parser$Token next4504;
    panda$core$Int64 $tmp4506;
    panda$core$Int64 $tmp4508;
    org$pandalanguage$pandac$ASTNode* $tmp4511;
    panda$core$String* $tmp4514;
    org$pandalanguage$pandac$ASTNode* $tmp4516;
    org$pandalanguage$pandac$ASTNode* $tmp4517;
    panda$core$Int64 $tmp4519;
    panda$core$String* $tmp4520;
    int $tmp4488;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4491, 12);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4490, $tmp4491);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4493 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4490, &$s4492);
        start4489 = $tmp4493;
        if (((panda$core$Bit) { !start4489.nonnull }).value) {
        {
            $tmp4495 = NULL;
            $returnValue4494 = $tmp4495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4495));
            $tmp4488 = 0;
            goto $l4486;
            $l4496:;
            return $returnValue4494;
        }
        }
        panda$core$MutableString* $tmp4501 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4501);
        $tmp4500 = $tmp4501;
        $tmp4499 = $tmp4500;
        result4498 = $tmp4499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
        $l4502:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4505 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4504 = $tmp4505;
            panda$core$Int64$init$builtin_int64(&$tmp4506, 12);
            panda$core$Bit $tmp4507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4504.kind.$rawValue, $tmp4506);
            if ($tmp4507.value) {
            {
                goto $l4503;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4508, 0);
            panda$core$Bit $tmp4509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4504.kind.$rawValue, $tmp4508);
            if ($tmp4509.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4489.value), &$s4510);
                $tmp4511 = NULL;
                $returnValue4494 = $tmp4511;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4511));
                $tmp4488 = 1;
                goto $l4486;
                $l4512:;
                return $returnValue4494;
            }
            }
            panda$core$String* $tmp4515 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4504);
            $tmp4514 = $tmp4515;
            panda$core$MutableString$append$panda$core$String(result4498, $tmp4514);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4514));
        }
        }
        $l4503:;
        org$pandalanguage$pandac$ASTNode* $tmp4518 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4519, 38);
        panda$core$String* $tmp4521 = panda$core$MutableString$finish$R$panda$core$String(result4498);
        $tmp4520 = $tmp4521;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4518, $tmp4519, ((org$pandalanguage$pandac$parser$Token) start4489.value).position, $tmp4520);
        $tmp4517 = $tmp4518;
        $tmp4516 = $tmp4517;
        $returnValue4494 = $tmp4516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4520));
        $tmp4488 = 2;
        goto $l4486;
        $l4522:;
        return $returnValue4494;
    }
    $l4486:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4498));
    result4498 = NULL;
    switch ($tmp4488) {
        case 0: goto $l4496;
        case 2: goto $l4522;
        case 1: goto $l4512;
    }
    $l4524:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4528;
    panda$core$Int64 $tmp4529;
    org$pandalanguage$pandac$parser$Token$nullable id4530;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4531;
    panda$core$Int64 $tmp4532;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4535;
    panda$core$Int64 $tmp4536;
    org$pandalanguage$pandac$ASTNode* $returnValue4537;
    org$pandalanguage$pandac$ASTNode* $tmp4538;
    org$pandalanguage$pandac$ASTNode* t4541 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4542;
    org$pandalanguage$pandac$ASTNode* $tmp4543;
    org$pandalanguage$pandac$ASTNode* $tmp4545;
    org$pandalanguage$pandac$ASTNode* $tmp4548;
    org$pandalanguage$pandac$ASTNode* $tmp4549;
    panda$core$Int64 $tmp4551;
    panda$core$String* $tmp4552;
    int $tmp4527;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4529, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4528, $tmp4529);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4528);
        panda$core$Int64$init$builtin_int64(&$tmp4532, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4531, $tmp4532);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4534 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4531, &$s4533);
        id4530 = $tmp4534;
        panda$core$Int64$init$builtin_int64(&$tmp4536, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4535, $tmp4536);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4535);
        if (((panda$core$Bit) { !id4530.nonnull }).value) {
        {
            $tmp4538 = NULL;
            $returnValue4537 = $tmp4538;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4538));
            $tmp4527 = 0;
            goto $l4525;
            $l4539:;
            return $returnValue4537;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4544 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4543 = $tmp4544;
        $tmp4542 = $tmp4543;
        t4541 = $tmp4542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4543));
        if (((panda$core$Bit) { t4541 == NULL }).value) {
        {
            $tmp4545 = NULL;
            $returnValue4537 = $tmp4545;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4545));
            $tmp4527 = 1;
            goto $l4525;
            $l4546:;
            return $returnValue4537;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4550 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4551, 31);
        panda$core$String* $tmp4553 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4530.value));
        $tmp4552 = $tmp4553;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4550, $tmp4551, ((org$pandalanguage$pandac$parser$Token) id4530.value).position, $tmp4552, t4541);
        $tmp4549 = $tmp4550;
        $tmp4548 = $tmp4549;
        $returnValue4537 = $tmp4548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4552));
        $tmp4527 = 2;
        goto $l4525;
        $l4554:;
        return $returnValue4537;
    }
    $l4525:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4541));
    t4541 = NULL;
    switch ($tmp4527) {
        case 2: goto $l4554;
        case 1: goto $l4546;
        case 0: goto $l4539;
    }
    $l4556:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4560;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4561;
    panda$core$Int64 $tmp4562;
    panda$collections$ImmutableArray* $returnValue4565;
    panda$collections$ImmutableArray* $tmp4566;
    panda$collections$Array* result4569 = NULL;
    panda$collections$Array* $tmp4570;
    panda$collections$Array* $tmp4571;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4573;
    panda$core$Int64 $tmp4574;
    org$pandalanguage$pandac$ASTNode* param4579 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4580;
    org$pandalanguage$pandac$ASTNode* $tmp4581;
    panda$collections$ImmutableArray* $tmp4583;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4590;
    panda$core$Int64 $tmp4591;
    org$pandalanguage$pandac$ASTNode* $tmp4593;
    org$pandalanguage$pandac$ASTNode* $tmp4594;
    org$pandalanguage$pandac$ASTNode* $tmp4595;
    panda$collections$ImmutableArray* $tmp4597;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4601;
    panda$core$Int64 $tmp4602;
    panda$collections$ImmutableArray* $tmp4605;
    panda$collections$ImmutableArray* $tmp4610;
    panda$collections$ImmutableArray* $tmp4611;
    int $tmp4559;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4562, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4561, $tmp4562);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4564 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4561, &$s4563);
        start4560 = $tmp4564;
        if (((panda$core$Bit) { !start4560.nonnull }).value) {
        {
            $tmp4566 = NULL;
            $returnValue4565 = $tmp4566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4566));
            $tmp4559 = 0;
            goto $l4557;
            $l4567:;
            return $returnValue4565;
        }
        }
        panda$collections$Array* $tmp4572 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4572);
        $tmp4571 = $tmp4572;
        $tmp4570 = $tmp4571;
        result4569 = $tmp4570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4571));
        panda$core$Int64$init$builtin_int64(&$tmp4574, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4573, $tmp4574);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4575 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4573);
        if (((panda$core$Bit) { !$tmp4575.nonnull }).value) {
        {
            int $tmp4578;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4582 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4581 = $tmp4582;
                $tmp4580 = $tmp4581;
                param4579 = $tmp4580;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4581));
                if (((panda$core$Bit) { param4579 == NULL }).value) {
                {
                    $tmp4583 = NULL;
                    $returnValue4565 = $tmp4583;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4583));
                    $tmp4578 = 0;
                    goto $l4576;
                    $l4584:;
                    $tmp4559 = 1;
                    goto $l4557;
                    $l4585:;
                    return $returnValue4565;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4569, ((panda$core$Object*) param4579));
                $l4587:;
                panda$core$Int64$init$builtin_int64(&$tmp4591, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4590, $tmp4591);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4592 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4590);
                bool $tmp4589 = ((panda$core$Bit) { $tmp4592.nonnull }).value;
                if (!$tmp4589) goto $l4588;
                {
                    {
                        $tmp4593 = param4579;
                        org$pandalanguage$pandac$ASTNode* $tmp4596 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4595 = $tmp4596;
                        $tmp4594 = $tmp4595;
                        param4579 = $tmp4594;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4594));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4595));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4593));
                    }
                    if (((panda$core$Bit) { param4579 == NULL }).value) {
                    {
                        $tmp4597 = NULL;
                        $returnValue4565 = $tmp4597;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4597));
                        $tmp4578 = 1;
                        goto $l4576;
                        $l4598:;
                        $tmp4559 = 2;
                        goto $l4557;
                        $l4599:;
                        return $returnValue4565;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4569, ((panda$core$Object*) param4579));
                }
                goto $l4587;
                $l4588:;
                panda$core$Int64$init$builtin_int64(&$tmp4602, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4601, $tmp4602);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4604 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4601, &$s4603);
                if (((panda$core$Bit) { !$tmp4604.nonnull }).value) {
                {
                    $tmp4605 = NULL;
                    $returnValue4565 = $tmp4605;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4605));
                    $tmp4578 = 2;
                    goto $l4576;
                    $l4606:;
                    $tmp4559 = 3;
                    goto $l4557;
                    $l4607:;
                    return $returnValue4565;
                }
                }
            }
            $tmp4578 = -1;
            goto $l4576;
            $l4576:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4579));
            param4579 = NULL;
            switch ($tmp4578) {
                case 0: goto $l4584;
                case -1: goto $l4609;
                case 2: goto $l4606;
                case 1: goto $l4598;
            }
            $l4609:;
        }
        }
        panda$collections$ImmutableArray* $tmp4612 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4569);
        $tmp4611 = $tmp4612;
        $tmp4610 = $tmp4611;
        $returnValue4565 = $tmp4610;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4610));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4611));
        $tmp4559 = 4;
        goto $l4557;
        $l4613:;
        return $returnValue4565;
    }
    $l4557:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4569));
    result4569 = NULL;
    switch ($tmp4559) {
        case 1: goto $l4585;
        case 4: goto $l4613;
        case 0: goto $l4567;
        case 3: goto $l4607;
        case 2: goto $l4599;
    }
    $l4615:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4619;
    org$pandalanguage$pandac$parser$Token$nullable start4620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4621;
    panda$core$Int64 $tmp4622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4624;
    panda$core$Int64 $tmp4625;
    org$pandalanguage$pandac$ASTNode* $returnValue4628;
    org$pandalanguage$pandac$ASTNode* $tmp4629;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4632;
    panda$core$Int64 $tmp4633;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4634;
    panda$core$Int64 $tmp4635;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4636;
    panda$core$Int64 $tmp4637;
    panda$core$String* name4638 = NULL;
    panda$core$String* $tmp4639;
    panda$core$String* $tmp4640;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4642;
    panda$core$Int64 $tmp4643;
    org$pandalanguage$pandac$ASTNode* $tmp4644;
    panda$collections$ImmutableArray* generics4647 = NULL;
    panda$core$Int64 $tmp4649;
    panda$collections$ImmutableArray* $tmp4651;
    panda$collections$ImmutableArray* $tmp4652;
    panda$collections$ImmutableArray* $tmp4653;
    panda$collections$ImmutableArray* $tmp4655;
    panda$collections$ImmutableArray* $tmp4656;
    panda$collections$ImmutableArray* params4657 = NULL;
    panda$collections$ImmutableArray* $tmp4658;
    panda$collections$ImmutableArray* $tmp4659;
    org$pandalanguage$pandac$ASTNode* $tmp4661;
    org$pandalanguage$pandac$ASTNode* returnType4664 = NULL;
    panda$core$Int64 $tmp4666;
    org$pandalanguage$pandac$ASTNode* $tmp4668;
    org$pandalanguage$pandac$ASTNode* $tmp4669;
    org$pandalanguage$pandac$ASTNode* $tmp4670;
    org$pandalanguage$pandac$ASTNode* $tmp4672;
    org$pandalanguage$pandac$ASTNode* $tmp4675;
    org$pandalanguage$pandac$ASTNode* $tmp4676;
    panda$collections$ImmutableArray* body4677 = NULL;
    panda$core$Int64 $tmp4679;
    panda$collections$ImmutableArray* $tmp4681;
    panda$collections$ImmutableArray* $tmp4682;
    panda$collections$ImmutableArray* $tmp4683;
    org$pandalanguage$pandac$ASTNode* $tmp4685;
    panda$collections$ImmutableArray* $tmp4688;
    panda$collections$ImmutableArray* $tmp4689;
    org$pandalanguage$pandac$ASTNode* $tmp4690;
    org$pandalanguage$pandac$ASTNode* $tmp4691;
    panda$core$Int64 $tmp4693;
    int $tmp4618;
    {
        memset(&kind4619, 0, sizeof(kind4619));
        panda$core$Int64$init$builtin_int64(&$tmp4622, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4621, $tmp4622);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4623 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4621);
        start4620 = $tmp4623;
        if (((panda$core$Bit) { !start4620.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4625, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4624, $tmp4625);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4627 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4624, &$s4626);
            start4620 = $tmp4627;
            if (((panda$core$Bit) { !start4620.nonnull }).value) {
            {
                $tmp4629 = NULL;
                $returnValue4628 = $tmp4629;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4629));
                $tmp4618 = 0;
                goto $l4616;
                $l4630:;
                return $returnValue4628;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4633, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4632, $tmp4633);
            kind4619 = $tmp4632;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4635, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4634, $tmp4635);
            kind4619 = $tmp4634;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4637, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4636, $tmp4637);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4636);
        panda$core$String* $tmp4641 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4640 = $tmp4641;
        $tmp4639 = $tmp4640;
        name4638 = $tmp4639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4640));
        panda$core$Int64$init$builtin_int64(&$tmp4643, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4642, $tmp4643);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4642);
        if (((panda$core$Bit) { name4638 == NULL }).value) {
        {
            $tmp4644 = NULL;
            $returnValue4628 = $tmp4644;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4644));
            $tmp4618 = 1;
            goto $l4616;
            $l4645:;
            return $returnValue4628;
        }
        }
        memset(&generics4647, 0, sizeof(generics4647));
        org$pandalanguage$pandac$parser$Token $tmp4648 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4649, 63);
        panda$core$Bit $tmp4650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4648.kind.$rawValue, $tmp4649);
        if ($tmp4650.value) {
        {
            {
                $tmp4651 = generics4647;
                panda$collections$ImmutableArray* $tmp4654 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4653 = $tmp4654;
                $tmp4652 = $tmp4653;
                generics4647 = $tmp4652;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4651));
            }
        }
        }
        else {
        {
            {
                $tmp4655 = generics4647;
                $tmp4656 = NULL;
                generics4647 = $tmp4656;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4655));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4660 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4659 = $tmp4660;
        $tmp4658 = $tmp4659;
        params4657 = $tmp4658;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4658));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4659));
        if (((panda$core$Bit) { params4657 == NULL }).value) {
        {
            $tmp4661 = NULL;
            $returnValue4628 = $tmp4661;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4661));
            $tmp4618 = 2;
            goto $l4616;
            $l4662:;
            return $returnValue4628;
        }
        }
        memset(&returnType4664, 0, sizeof(returnType4664));
        org$pandalanguage$pandac$parser$Token $tmp4665 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4666, 96);
        panda$core$Bit $tmp4667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4665.kind.$rawValue, $tmp4666);
        if ($tmp4667.value) {
        {
            {
                $tmp4668 = returnType4664;
                org$pandalanguage$pandac$ASTNode* $tmp4671 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4670 = $tmp4671;
                $tmp4669 = $tmp4670;
                returnType4664 = $tmp4669;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4668));
            }
            if (((panda$core$Bit) { returnType4664 == NULL }).value) {
            {
                $tmp4672 = NULL;
                $returnValue4628 = $tmp4672;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4672));
                $tmp4618 = 3;
                goto $l4616;
                $l4673:;
                return $returnValue4628;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4675 = returnType4664;
                $tmp4676 = NULL;
                returnType4664 = $tmp4676;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4675));
            }
        }
        }
        memset(&body4677, 0, sizeof(body4677));
        org$pandalanguage$pandac$parser$Token $tmp4678 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4679, 100);
        panda$core$Bit $tmp4680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4678.kind.$rawValue, $tmp4679);
        if ($tmp4680.value) {
        {
            {
                $tmp4681 = body4677;
                panda$collections$ImmutableArray* $tmp4684 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4683 = $tmp4684;
                $tmp4682 = $tmp4683;
                body4677 = $tmp4682;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4681));
            }
            if (((panda$core$Bit) { body4677 == NULL }).value) {
            {
                $tmp4685 = NULL;
                $returnValue4628 = $tmp4685;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4685));
                $tmp4618 = 4;
                goto $l4616;
                $l4686:;
                return $returnValue4628;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4688 = body4677;
                $tmp4689 = NULL;
                body4677 = $tmp4689;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4688));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4692 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4693, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4692, $tmp4693, ((org$pandalanguage$pandac$parser$Token) start4620.value).position, p_doccomment, p_annotations, kind4619, name4638, generics4647, params4657, returnType4664, body4677);
        $tmp4691 = $tmp4692;
        $tmp4690 = $tmp4691;
        $returnValue4628 = $tmp4690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4691));
        $tmp4618 = 5;
        goto $l4616;
        $l4694:;
        return $returnValue4628;
    }
    $l4616:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4677));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4664));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4657));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4647));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4638));
    name4638 = NULL;
    params4657 = NULL;
    switch ($tmp4618) {
        case 3: goto $l4673;
        case 5: goto $l4694;
        case 4: goto $l4686;
        case 2: goto $l4662;
        case 0: goto $l4630;
        case 1: goto $l4645;
    }
    $l4696:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4700;
    org$pandalanguage$pandac$parser$Token$nullable start4701;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4702;
    panda$core$Int64 $tmp4703;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4705;
    panda$core$Int64 $tmp4706;
    org$pandalanguage$pandac$ASTNode* $returnValue4709;
    org$pandalanguage$pandac$ASTNode* $tmp4710;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4713;
    panda$core$Int64 $tmp4714;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4715;
    panda$core$Int64 $tmp4716;
    panda$collections$ImmutableArray* params4717 = NULL;
    panda$collections$ImmutableArray* $tmp4718;
    panda$collections$ImmutableArray* $tmp4719;
    org$pandalanguage$pandac$ASTNode* $tmp4721;
    org$pandalanguage$pandac$ASTNode* returnType4724 = NULL;
    panda$core$Int64 $tmp4726;
    org$pandalanguage$pandac$ASTNode* $tmp4728;
    org$pandalanguage$pandac$ASTNode* $tmp4729;
    org$pandalanguage$pandac$ASTNode* $tmp4730;
    org$pandalanguage$pandac$ASTNode* $tmp4732;
    org$pandalanguage$pandac$ASTNode* $tmp4735;
    org$pandalanguage$pandac$ASTNode* $tmp4736;
    panda$collections$ImmutableArray* body4737 = NULL;
    panda$collections$ImmutableArray* $tmp4738;
    panda$collections$ImmutableArray* $tmp4739;
    org$pandalanguage$pandac$ASTNode* $tmp4741;
    org$pandalanguage$pandac$ASTNode* $tmp4744;
    org$pandalanguage$pandac$ASTNode* $tmp4745;
    panda$core$Int64 $tmp4747;
    panda$collections$ImmutableArray* $tmp4748;
    int $tmp4699;
    {
        memset(&kind4700, 0, sizeof(kind4700));
        panda$core$Int64$init$builtin_int64(&$tmp4703, 21);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4702, $tmp4703);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4704 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4702);
        start4701 = $tmp4704;
        if (((panda$core$Bit) { !start4701.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4706, 22);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4705, $tmp4706);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4705, &$s4707);
            start4701 = $tmp4708;
            if (((panda$core$Bit) { !start4701.nonnull }).value) {
            {
                $tmp4710 = NULL;
                $returnValue4709 = $tmp4710;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4710));
                $tmp4699 = 0;
                goto $l4697;
                $l4711:;
                return $returnValue4709;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4714, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4713, $tmp4714);
            kind4700 = $tmp4713;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4716, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4715, $tmp4716);
            kind4700 = $tmp4715;
        }
        }
        panda$collections$ImmutableArray* $tmp4720 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4719 = $tmp4720;
        $tmp4718 = $tmp4719;
        params4717 = $tmp4718;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4718));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4719));
        if (((panda$core$Bit) { params4717 == NULL }).value) {
        {
            $tmp4721 = NULL;
            $returnValue4709 = $tmp4721;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4721));
            $tmp4699 = 1;
            goto $l4697;
            $l4722:;
            return $returnValue4709;
        }
        }
        memset(&returnType4724, 0, sizeof(returnType4724));
        org$pandalanguage$pandac$parser$Token $tmp4725 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4726, 96);
        panda$core$Bit $tmp4727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4725.kind.$rawValue, $tmp4726);
        if ($tmp4727.value) {
        {
            {
                $tmp4728 = returnType4724;
                org$pandalanguage$pandac$ASTNode* $tmp4731 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4730 = $tmp4731;
                $tmp4729 = $tmp4730;
                returnType4724 = $tmp4729;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4728));
            }
            if (((panda$core$Bit) { returnType4724 == NULL }).value) {
            {
                $tmp4732 = NULL;
                $returnValue4709 = $tmp4732;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4732));
                $tmp4699 = 2;
                goto $l4697;
                $l4733:;
                return $returnValue4709;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4735 = returnType4724;
                $tmp4736 = NULL;
                returnType4724 = $tmp4736;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4735));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4740 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4739 = $tmp4740;
        $tmp4738 = $tmp4739;
        body4737 = $tmp4738;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4739));
        if (((panda$core$Bit) { body4737 == NULL }).value) {
        {
            $tmp4741 = NULL;
            $returnValue4709 = $tmp4741;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4741));
            $tmp4699 = 3;
            goto $l4697;
            $l4742:;
            return $returnValue4709;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4746 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4747, 26);
        panda$collections$ImmutableArray* $tmp4749 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4749);
        $tmp4748 = $tmp4749;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4746, $tmp4747, ((org$pandalanguage$pandac$parser$Token) start4701.value).position, NULL, $tmp4748, kind4700, &$s4750, NULL, params4717, returnType4724, body4737);
        $tmp4745 = $tmp4746;
        $tmp4744 = $tmp4745;
        $returnValue4709 = $tmp4744;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4745));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4748));
        $tmp4699 = 4;
        goto $l4697;
        $l4751:;
        return $returnValue4709;
    }
    $l4697:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4737));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4724));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4717));
    params4717 = NULL;
    body4737 = NULL;
    switch ($tmp4699) {
        case 2: goto $l4733;
        case 3: goto $l4742;
        case 0: goto $l4711;
        case 4: goto $l4751;
        case 1: goto $l4722;
    }
    $l4753:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4757;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4758;
    panda$core$Int64 $tmp4759;
    org$pandalanguage$pandac$ASTNode* $returnValue4762;
    org$pandalanguage$pandac$ASTNode* $tmp4763;
    panda$collections$ImmutableArray* params4766 = NULL;
    panda$collections$ImmutableArray* $tmp4767;
    panda$collections$ImmutableArray* $tmp4768;
    org$pandalanguage$pandac$ASTNode* $tmp4770;
    panda$collections$ImmutableArray* b4773 = NULL;
    panda$collections$ImmutableArray* $tmp4774;
    panda$collections$ImmutableArray* $tmp4775;
    org$pandalanguage$pandac$ASTNode* $tmp4777;
    org$pandalanguage$pandac$ASTNode* $tmp4780;
    org$pandalanguage$pandac$ASTNode* $tmp4781;
    panda$core$Int64 $tmp4783;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4784;
    panda$core$Int64 $tmp4785;
    int $tmp4756;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4759, 23);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4758, $tmp4759);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4761 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4758, &$s4760);
        start4757 = $tmp4761;
        if (((panda$core$Bit) { !start4757.nonnull }).value) {
        {
            $tmp4763 = NULL;
            $returnValue4762 = $tmp4763;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4763));
            $tmp4756 = 0;
            goto $l4754;
            $l4764:;
            return $returnValue4762;
        }
        }
        panda$collections$ImmutableArray* $tmp4769 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4768 = $tmp4769;
        $tmp4767 = $tmp4768;
        params4766 = $tmp4767;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4767));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4768));
        if (((panda$core$Bit) { params4766 == NULL }).value) {
        {
            $tmp4770 = NULL;
            $returnValue4762 = $tmp4770;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4770));
            $tmp4756 = 1;
            goto $l4754;
            $l4771:;
            return $returnValue4762;
        }
        }
        panda$collections$ImmutableArray* $tmp4776 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4775 = $tmp4776;
        $tmp4774 = $tmp4775;
        b4773 = $tmp4774;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4774));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4775));
        if (((panda$core$Bit) { b4773 == NULL }).value) {
        {
            $tmp4777 = NULL;
            $returnValue4762 = $tmp4777;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4777));
            $tmp4756 = 2;
            goto $l4754;
            $l4778:;
            return $returnValue4762;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4782 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4783, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4785, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4784, $tmp4785);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4782, $tmp4783, ((org$pandalanguage$pandac$parser$Token) start4757.value).position, p_doccomment, p_annotations, $tmp4784, &$s4786, NULL, params4766, NULL, b4773);
        $tmp4781 = $tmp4782;
        $tmp4780 = $tmp4781;
        $returnValue4762 = $tmp4780;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4781));
        $tmp4756 = 3;
        goto $l4754;
        $l4787:;
        return $returnValue4762;
    }
    $l4754:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4773));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4766));
    params4766 = NULL;
    b4773 = NULL;
    switch ($tmp4756) {
        case 3: goto $l4787;
        case 2: goto $l4778;
        case 0: goto $l4764;
        case 1: goto $l4771;
    }
    $l4789:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4793 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4794;
    org$pandalanguage$pandac$ASTNode* $tmp4795;
    org$pandalanguage$pandac$ASTNode* $returnValue4797;
    org$pandalanguage$pandac$ASTNode* $tmp4798;
    org$pandalanguage$pandac$ASTNode* $tmp4801;
    org$pandalanguage$pandac$ASTNode* $tmp4802;
    panda$core$Int64 $tmp4804;
    int $tmp4792;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4796 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4795 = $tmp4796;
        $tmp4794 = $tmp4795;
        decl4793 = $tmp4794;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4794));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4795));
        if (((panda$core$Bit) { decl4793 == NULL }).value) {
        {
            $tmp4798 = NULL;
            $returnValue4797 = $tmp4798;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4798));
            $tmp4792 = 0;
            goto $l4790;
            $l4799:;
            return $returnValue4797;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4803 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4804, 16);
        org$pandalanguage$pandac$Position $tmp4806 = (($fn4805) decl4793->$class->vtable[2])(decl4793);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4803, $tmp4804, $tmp4806, p_doccomment, p_annotations, decl4793);
        $tmp4802 = $tmp4803;
        $tmp4801 = $tmp4802;
        $returnValue4797 = $tmp4801;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4801));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4802));
        $tmp4792 = 1;
        goto $l4790;
        $l4807:;
        return $returnValue4797;
    }
    $l4790:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4793));
    decl4793 = NULL;
    switch ($tmp4792) {
        case 1: goto $l4807;
        case 0: goto $l4799;
    }
    $l4809:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4813;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4814;
    panda$core$Int64 $tmp4815;
    org$pandalanguage$pandac$ASTNode* $returnValue4818;
    org$pandalanguage$pandac$ASTNode* $tmp4819;
    panda$collections$Array* fields4822 = NULL;
    panda$collections$Array* $tmp4823;
    panda$collections$Array* $tmp4824;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4826;
    panda$core$Int64 $tmp4827;
    panda$core$Int64 $tmp4830;
    org$pandalanguage$pandac$ASTNode* field4835 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4836;
    org$pandalanguage$pandac$ASTNode* $tmp4837;
    org$pandalanguage$pandac$ASTNode* $tmp4839;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4846;
    panda$core$Int64 $tmp4847;
    org$pandalanguage$pandac$ASTNode* $tmp4849;
    org$pandalanguage$pandac$ASTNode* $tmp4850;
    org$pandalanguage$pandac$ASTNode* $tmp4851;
    org$pandalanguage$pandac$ASTNode* $tmp4853;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4858;
    panda$core$Int64 $tmp4859;
    org$pandalanguage$pandac$ASTNode* $tmp4862;
    org$pandalanguage$pandac$ASTNode* $tmp4865;
    org$pandalanguage$pandac$ASTNode* $tmp4866;
    panda$core$Int64 $tmp4868;
    panda$core$String* $tmp4869;
    panda$collections$ImmutableArray* $tmp4871;
    int $tmp4812;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4815, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4814, $tmp4815);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4817 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4814, &$s4816);
        name4813 = $tmp4817;
        if (((panda$core$Bit) { !name4813.nonnull }).value) {
        {
            $tmp4819 = NULL;
            $returnValue4818 = $tmp4819;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4819));
            $tmp4812 = 0;
            goto $l4810;
            $l4820:;
            return $returnValue4818;
        }
        }
        panda$collections$Array* $tmp4825 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4825);
        $tmp4824 = $tmp4825;
        $tmp4823 = $tmp4824;
        fields4822 = $tmp4823;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4823));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4824));
        panda$core$Int64$init$builtin_int64(&$tmp4827, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4826, $tmp4827);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4828 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4826);
        if (((panda$core$Bit) { $tmp4828.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4829 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4830, 105);
            panda$core$Bit $tmp4831 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4829.kind.$rawValue, $tmp4830);
            if ($tmp4831.value) {
            {
                int $tmp4834;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4838 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4837 = $tmp4838;
                    $tmp4836 = $tmp4837;
                    field4835 = $tmp4836;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4836));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4837));
                    if (((panda$core$Bit) { field4835 == NULL }).value) {
                    {
                        $tmp4839 = NULL;
                        $returnValue4818 = $tmp4839;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4839));
                        $tmp4834 = 0;
                        goto $l4832;
                        $l4840:;
                        $tmp4812 = 1;
                        goto $l4810;
                        $l4841:;
                        return $returnValue4818;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4822, ((panda$core$Object*) field4835));
                    $l4843:;
                    panda$core$Int64$init$builtin_int64(&$tmp4847, 106);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4846, $tmp4847);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4848 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4846);
                    bool $tmp4845 = ((panda$core$Bit) { $tmp4848.nonnull }).value;
                    if (!$tmp4845) goto $l4844;
                    {
                        {
                            $tmp4849 = field4835;
                            org$pandalanguage$pandac$ASTNode* $tmp4852 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4851 = $tmp4852;
                            $tmp4850 = $tmp4851;
                            field4835 = $tmp4850;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4850));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4851));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4849));
                        }
                        if (((panda$core$Bit) { field4835 == NULL }).value) {
                        {
                            $tmp4853 = NULL;
                            $returnValue4818 = $tmp4853;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4853));
                            $tmp4834 = 1;
                            goto $l4832;
                            $l4854:;
                            $tmp4812 = 2;
                            goto $l4810;
                            $l4855:;
                            return $returnValue4818;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4822, ((panda$core$Object*) field4835));
                    }
                    goto $l4843;
                    $l4844:;
                }
                $tmp4834 = -1;
                goto $l4832;
                $l4832:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4835));
                field4835 = NULL;
                switch ($tmp4834) {
                    case 0: goto $l4840;
                    case -1: goto $l4857;
                    case 1: goto $l4854;
                }
                $l4857:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4859, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4858, $tmp4859);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4861 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4858, &$s4860);
            if (((panda$core$Bit) { !$tmp4861.nonnull }).value) {
            {
                $tmp4862 = NULL;
                $returnValue4818 = $tmp4862;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4862));
                $tmp4812 = 3;
                goto $l4810;
                $l4863:;
                return $returnValue4818;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4867 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4868, 9);
        panda$core$String* $tmp4870 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4813.value));
        $tmp4869 = $tmp4870;
        panda$collections$ImmutableArray* $tmp4872 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4822);
        $tmp4871 = $tmp4872;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4867, $tmp4868, ((org$pandalanguage$pandac$parser$Token) name4813.value).position, p_doccomment, $tmp4869, $tmp4871);
        $tmp4866 = $tmp4867;
        $tmp4865 = $tmp4866;
        $returnValue4818 = $tmp4865;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4865));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4866));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4869));
        $tmp4812 = 4;
        goto $l4810;
        $l4873:;
        return $returnValue4818;
    }
    $l4810:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4822));
    fields4822 = NULL;
    switch ($tmp4812) {
        case 4: goto $l4873;
        case 3: goto $l4863;
        case 0: goto $l4820;
        case 1: goto $l4841;
        case 2: goto $l4855;
    }
    $l4875:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4879;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4880;
    panda$core$Int64 $tmp4881;
    org$pandalanguage$pandac$ASTNode* $returnValue4884;
    org$pandalanguage$pandac$ASTNode* $tmp4885;
    org$pandalanguage$pandac$parser$Token$nullable name4888;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4889;
    panda$core$Int64 $tmp4890;
    org$pandalanguage$pandac$ASTNode* $tmp4893;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4896;
    panda$core$Int64 $tmp4897;
    org$pandalanguage$pandac$ASTNode* $tmp4900;
    panda$collections$Array* members4903 = NULL;
    panda$collections$Array* $tmp4904;
    panda$collections$Array* $tmp4905;
    org$pandalanguage$pandac$ASTNode* dc4907 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4908;
    org$pandalanguage$pandac$parser$Token next4911;
    org$pandalanguage$pandac$parser$Token$Kind $match$2332_134913;
    panda$core$Int64 $tmp4923;
    panda$core$Int64 $tmp4926;
    panda$core$Int64 $tmp4930;
    panda$core$Int64 $tmp4934;
    panda$core$Int64 $tmp4938;
    panda$core$Int64 $tmp4942;
    panda$core$Int64 $tmp4946;
    panda$core$Int64 $tmp4950;
    panda$core$Int64 $tmp4954;
    panda$core$Int64 $tmp4958;
    panda$core$Int64 $tmp4961;
    panda$core$String* $tmp4963;
    panda$core$String* $tmp4964;
    panda$core$String* $tmp4966;
    org$pandalanguage$pandac$ASTNode* $tmp4971;
    org$pandalanguage$pandac$ASTNode* $tmp4972;
    org$pandalanguage$pandac$ASTNode* $tmp4973;
    panda$core$Int64 $tmp4975;
    org$pandalanguage$pandac$ASTNode* c4980 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4981;
    org$pandalanguage$pandac$ASTNode* $tmp4982;
    org$pandalanguage$pandac$ASTNode* $tmp4984;
    org$pandalanguage$pandac$ASTNode* $tmp4988;
    org$pandalanguage$pandac$ASTNode* $tmp4989;
    panda$collections$ImmutableArray* a4991 = NULL;
    panda$collections$ImmutableArray* $tmp4992;
    panda$collections$ImmutableArray* $tmp4993;
    org$pandalanguage$pandac$parser$Token next4997;
    org$pandalanguage$pandac$parser$Token$Kind $match$2356_134999;
    panda$core$Int64 $tmp5000;
    panda$core$Int64 $tmp5003;
    panda$core$String* $tmp5005;
    panda$core$String* $tmp5006;
    panda$core$String* $tmp5008;
    org$pandalanguage$pandac$ASTNode* $tmp5013;
    panda$collections$ImmutableArray* $tmp5016;
    panda$collections$ImmutableArray* $tmp5017;
    panda$collections$ImmutableArray* $tmp5018;
    panda$core$Int64 $tmp5020;
    panda$core$Int64 $tmp5025;
    panda$core$String* $tmp5028;
    panda$core$String* $tmp5029;
    panda$core$String* $tmp5031;
    org$pandalanguage$pandac$ASTNode* $tmp5036;
    org$pandalanguage$pandac$ASTNode* $tmp5039;
    org$pandalanguage$pandac$ASTNode* $tmp5040;
    org$pandalanguage$pandac$ASTNode* $tmp5041;
    panda$core$Int64 $tmp5043;
    org$pandalanguage$pandac$ASTNode* decl5048 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5049;
    org$pandalanguage$pandac$ASTNode* $tmp5050;
    org$pandalanguage$pandac$ASTNode* $tmp5052;
    org$pandalanguage$pandac$ASTNode* $tmp5056;
    org$pandalanguage$pandac$ASTNode* $tmp5057;
    panda$collections$ImmutableArray* $tmp5058;
    panda$collections$ImmutableArray* $tmp5059;
    panda$collections$ImmutableArray* $tmp5060;
    panda$core$Int64 $tmp5063;
    org$pandalanguage$pandac$ASTNode* decl5068 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5069;
    org$pandalanguage$pandac$ASTNode* $tmp5070;
    org$pandalanguage$pandac$ASTNode* $tmp5072;
    org$pandalanguage$pandac$ASTNode* $tmp5076;
    org$pandalanguage$pandac$ASTNode* $tmp5077;
    panda$collections$ImmutableArray* $tmp5078;
    panda$collections$ImmutableArray* $tmp5079;
    panda$collections$ImmutableArray* $tmp5080;
    panda$core$Int64 $tmp5083;
    org$pandalanguage$pandac$ASTNode* decl5088 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5089;
    org$pandalanguage$pandac$ASTNode* $tmp5090;
    org$pandalanguage$pandac$ASTNode* $tmp5092;
    org$pandalanguage$pandac$ASTNode* $tmp5096;
    org$pandalanguage$pandac$ASTNode* $tmp5097;
    panda$collections$ImmutableArray* $tmp5098;
    panda$collections$ImmutableArray* $tmp5099;
    panda$collections$ImmutableArray* $tmp5100;
    panda$core$Int64 $tmp5104;
    panda$core$Int64 $tmp5107;
    org$pandalanguage$pandac$ASTNode* decl5113 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5114;
    org$pandalanguage$pandac$ASTNode* $tmp5115;
    org$pandalanguage$pandac$ASTNode* $tmp5117;
    org$pandalanguage$pandac$ASTNode* $tmp5121;
    org$pandalanguage$pandac$ASTNode* $tmp5122;
    panda$collections$ImmutableArray* $tmp5123;
    panda$collections$ImmutableArray* $tmp5124;
    panda$collections$ImmutableArray* $tmp5125;
    panda$core$Int64 $tmp5131;
    panda$core$Int64 $tmp5134;
    panda$core$Int64 $tmp5138;
    panda$core$Int64 $tmp5142;
    org$pandalanguage$pandac$ASTNode* decl5148 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5149;
    org$pandalanguage$pandac$ASTNode* $tmp5150;
    org$pandalanguage$pandac$ASTNode* $tmp5152;
    org$pandalanguage$pandac$ASTNode* $tmp5156;
    org$pandalanguage$pandac$ASTNode* $tmp5157;
    panda$collections$ImmutableArray* $tmp5158;
    panda$collections$ImmutableArray* $tmp5159;
    panda$collections$ImmutableArray* $tmp5160;
    panda$core$Int64 $tmp5163;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5165;
    panda$core$Int64 $tmp5166;
    panda$core$String* $tmp5168;
    panda$core$String* $tmp5169;
    panda$core$String* $tmp5171;
    org$pandalanguage$pandac$ASTNode* $tmp5176;
    org$pandalanguage$pandac$ASTNode* $tmp5179;
    org$pandalanguage$pandac$ASTNode* $tmp5180;
    panda$core$Int64 $tmp5182;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5183;
    panda$core$Int64 $tmp5184;
    panda$core$String* $tmp5185;
    panda$collections$ImmutableArray* $tmp5187;
    int $tmp4878;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4881, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4880, $tmp4881);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4883 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4880, &$s4882);
        start4879 = $tmp4883;
        if (((panda$core$Bit) { !start4879.nonnull }).value) {
        {
            $tmp4885 = NULL;
            $returnValue4884 = $tmp4885;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4885));
            $tmp4878 = 0;
            goto $l4876;
            $l4886:;
            return $returnValue4884;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4890, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4889, $tmp4890);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4892 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4889, &$s4891);
        name4888 = $tmp4892;
        if (((panda$core$Bit) { !name4888.nonnull }).value) {
        {
            $tmp4893 = NULL;
            $returnValue4884 = $tmp4893;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4893));
            $tmp4878 = 1;
            goto $l4876;
            $l4894:;
            return $returnValue4884;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4897, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4896, $tmp4897);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4899 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4896, &$s4898);
        if (((panda$core$Bit) { !$tmp4899.nonnull }).value) {
        {
            $tmp4900 = NULL;
            $returnValue4884 = $tmp4900;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4900));
            $tmp4878 = 2;
            goto $l4876;
            $l4901:;
            return $returnValue4884;
        }
        }
        panda$collections$Array* $tmp4906 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4906);
        $tmp4905 = $tmp4906;
        $tmp4904 = $tmp4905;
        members4903 = $tmp4904;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4904));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4905));
        $tmp4908 = NULL;
        dc4907 = $tmp4908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4908));
        $l4909:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4912 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4911 = $tmp4912;
            {
                $match$2332_134913 = next4911.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4923, 18);
                panda$core$Bit $tmp4924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4923);
                bool $tmp4922 = $tmp4924.value;
                if ($tmp4922) goto $l4925;
                panda$core$Int64$init$builtin_int64(&$tmp4926, 19);
                panda$core$Bit $tmp4927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4926);
                $tmp4922 = $tmp4927.value;
                $l4925:;
                panda$core$Bit $tmp4928 = { $tmp4922 };
                bool $tmp4921 = $tmp4928.value;
                if ($tmp4921) goto $l4929;
                panda$core$Int64$init$builtin_int64(&$tmp4930, 20);
                panda$core$Bit $tmp4931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4930);
                $tmp4921 = $tmp4931.value;
                $l4929:;
                panda$core$Bit $tmp4932 = { $tmp4921 };
                bool $tmp4920 = $tmp4932.value;
                if ($tmp4920) goto $l4933;
                panda$core$Int64$init$builtin_int64(&$tmp4934, 22);
                panda$core$Bit $tmp4935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4934);
                $tmp4920 = $tmp4935.value;
                $l4933:;
                panda$core$Bit $tmp4936 = { $tmp4920 };
                bool $tmp4919 = $tmp4936.value;
                if ($tmp4919) goto $l4937;
                panda$core$Int64$init$builtin_int64(&$tmp4938, 21);
                panda$core$Bit $tmp4939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4938);
                $tmp4919 = $tmp4939.value;
                $l4937:;
                panda$core$Bit $tmp4940 = { $tmp4919 };
                bool $tmp4918 = $tmp4940.value;
                if ($tmp4918) goto $l4941;
                panda$core$Int64$init$builtin_int64(&$tmp4942, 14);
                panda$core$Bit $tmp4943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4942);
                $tmp4918 = $tmp4943.value;
                $l4941:;
                panda$core$Bit $tmp4944 = { $tmp4918 };
                bool $tmp4917 = $tmp4944.value;
                if ($tmp4917) goto $l4945;
                panda$core$Int64$init$builtin_int64(&$tmp4946, 24);
                panda$core$Bit $tmp4947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4946);
                $tmp4917 = $tmp4947.value;
                $l4945:;
                panda$core$Bit $tmp4948 = { $tmp4917 };
                bool $tmp4916 = $tmp4948.value;
                if ($tmp4916) goto $l4949;
                panda$core$Int64$init$builtin_int64(&$tmp4950, 25);
                panda$core$Bit $tmp4951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4950);
                $tmp4916 = $tmp4951.value;
                $l4949:;
                panda$core$Bit $tmp4952 = { $tmp4916 };
                bool $tmp4915 = $tmp4952.value;
                if ($tmp4915) goto $l4953;
                panda$core$Int64$init$builtin_int64(&$tmp4954, 26);
                panda$core$Bit $tmp4955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4954);
                $tmp4915 = $tmp4955.value;
                $l4953:;
                panda$core$Bit $tmp4956 = { $tmp4915 };
                bool $tmp4914 = $tmp4956.value;
                if ($tmp4914) goto $l4957;
                panda$core$Int64$init$builtin_int64(&$tmp4958, 27);
                panda$core$Bit $tmp4959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4958);
                $tmp4914 = $tmp4959.value;
                $l4957:;
                panda$core$Bit $tmp4960 = { $tmp4914 };
                if ($tmp4960.value) {
                {
                    goto $l4910;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4961, 12);
                panda$core$Bit $tmp4962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4961);
                if ($tmp4962.value) {
                {
                    if (((panda$core$Bit) { dc4907 != NULL }).value) {
                    {
                        panda$core$String* $tmp4967 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4911);
                        $tmp4966 = $tmp4967;
                        panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4965, $tmp4966);
                        $tmp4964 = $tmp4968;
                        panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, &$s4969);
                        $tmp4963 = $tmp4970;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4911, $tmp4963);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4963));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4964));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4966));
                    }
                    }
                    {
                        $tmp4971 = dc4907;
                        org$pandalanguage$pandac$ASTNode* $tmp4974 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4973 = $tmp4974;
                        $tmp4972 = $tmp4973;
                        dc4907 = $tmp4972;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4972));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4973));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4971));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4975, 49);
                panda$core$Bit $tmp4976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2332_134913.$rawValue, $tmp4975);
                if ($tmp4976.value) {
                {
                    int $tmp4979;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4983 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4907);
                        $tmp4982 = $tmp4983;
                        $tmp4981 = $tmp4982;
                        c4980 = $tmp4981;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4981));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4982));
                        if (((panda$core$Bit) { c4980 == NULL }).value) {
                        {
                            $tmp4984 = NULL;
                            $returnValue4884 = $tmp4984;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4984));
                            $tmp4979 = 0;
                            goto $l4977;
                            $l4985:;
                            $tmp4878 = 3;
                            goto $l4876;
                            $l4986:;
                            return $returnValue4884;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4903, ((panda$core$Object*) c4980));
                        {
                            $tmp4988 = dc4907;
                            $tmp4989 = NULL;
                            dc4907 = $tmp4989;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4989));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4988));
                        }
                    }
                    $tmp4979 = -1;
                    goto $l4977;
                    $l4977:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4980));
                    c4980 = NULL;
                    switch ($tmp4979) {
                        case 0: goto $l4985;
                        case -1: goto $l4990;
                    }
                    $l4990:;
                }
                }
                else {
                {
                    goto $l4910;
                }
                }
                }
                }
            }
        }
        }
        $l4910:;
        panda$collections$ImmutableArray* $tmp4994 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4994);
        $tmp4993 = $tmp4994;
        $tmp4992 = $tmp4993;
        a4991 = $tmp4992;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4992));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4993));
        $l4995:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4998 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4997 = $tmp4998;
            {
                $match$2356_134999 = next4997.kind;
                panda$core$Int64$init$builtin_int64(&$tmp5000, 14);
                panda$core$Bit $tmp5001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5000);
                if ($tmp5001.value) {
                {
                    panda$core$Int64 $tmp5002 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4991);
                    panda$core$Int64$init$builtin_int64(&$tmp5003, 0);
                    panda$core$Bit $tmp5004 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5002, $tmp5003);
                    if ($tmp5004.value) {
                    {
                        panda$core$String* $tmp5009 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4997);
                        $tmp5008 = $tmp5009;
                        panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5007, $tmp5008);
                        $tmp5006 = $tmp5010;
                        panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, &$s5011);
                        $tmp5005 = $tmp5012;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4997, $tmp5005);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5005));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5006));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5008));
                        $tmp5013 = NULL;
                        $returnValue4884 = $tmp5013;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5013));
                        $tmp4878 = 4;
                        goto $l4876;
                        $l5014:;
                        return $returnValue4884;
                    }
                    }
                    {
                        $tmp5016 = a4991;
                        panda$collections$ImmutableArray* $tmp5019 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp5018 = $tmp5019;
                        $tmp5017 = $tmp5018;
                        a4991 = $tmp5017;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5017));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5018));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5016));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5020, 12);
                panda$core$Bit $tmp5021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5020);
                if ($tmp5021.value) {
                {
                    bool $tmp5022 = ((panda$core$Bit) { dc4907 != NULL }).value;
                    if ($tmp5022) goto $l5023;
                    panda$core$Int64 $tmp5024 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4991);
                    panda$core$Int64$init$builtin_int64(&$tmp5025, 0);
                    panda$core$Bit $tmp5026 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5024, $tmp5025);
                    $tmp5022 = $tmp5026.value;
                    $l5023:;
                    panda$core$Bit $tmp5027 = { $tmp5022 };
                    if ($tmp5027.value) {
                    {
                        panda$core$String* $tmp5032 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4997);
                        $tmp5031 = $tmp5032;
                        panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5030, $tmp5031);
                        $tmp5029 = $tmp5033;
                        panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, &$s5034);
                        $tmp5028 = $tmp5035;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4997, $tmp5028);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5028));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5029));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5031));
                        $tmp5036 = NULL;
                        $returnValue4884 = $tmp5036;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5036));
                        $tmp4878 = 5;
                        goto $l4876;
                        $l5037:;
                        return $returnValue4884;
                    }
                    }
                    {
                        $tmp5039 = dc4907;
                        org$pandalanguage$pandac$ASTNode* $tmp5042 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5041 = $tmp5042;
                        $tmp5040 = $tmp5041;
                        dc4907 = $tmp5040;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5040));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5041));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5039));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5043, 18);
                panda$core$Bit $tmp5044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5043);
                if ($tmp5044.value) {
                {
                    int $tmp5047;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5051 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4907, a4991);
                        $tmp5050 = $tmp5051;
                        $tmp5049 = $tmp5050;
                        decl5048 = $tmp5049;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5049));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5050));
                        if (((panda$core$Bit) { decl5048 == NULL }).value) {
                        {
                            $tmp5052 = NULL;
                            $returnValue4884 = $tmp5052;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5052));
                            $tmp5047 = 0;
                            goto $l5045;
                            $l5053:;
                            $tmp4878 = 6;
                            goto $l4876;
                            $l5054:;
                            return $returnValue4884;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4903, ((panda$core$Object*) decl5048));
                        {
                            $tmp5056 = dc4907;
                            $tmp5057 = NULL;
                            dc4907 = $tmp5057;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5057));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5056));
                        }
                        {
                            $tmp5058 = a4991;
                            panda$collections$ImmutableArray* $tmp5061 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5061);
                            $tmp5060 = $tmp5061;
                            $tmp5059 = $tmp5060;
                            a4991 = $tmp5059;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5059));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5060));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5058));
                        }
                    }
                    $tmp5047 = -1;
                    goto $l5045;
                    $l5045:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5048));
                    decl5048 = NULL;
                    switch ($tmp5047) {
                        case 0: goto $l5053;
                        case -1: goto $l5062;
                    }
                    $l5062:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5063, 19);
                panda$core$Bit $tmp5064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5063);
                if ($tmp5064.value) {
                {
                    int $tmp5067;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5071 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4907, a4991);
                        $tmp5070 = $tmp5071;
                        $tmp5069 = $tmp5070;
                        decl5068 = $tmp5069;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5069));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5070));
                        if (((panda$core$Bit) { decl5068 == NULL }).value) {
                        {
                            $tmp5072 = NULL;
                            $returnValue4884 = $tmp5072;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5072));
                            $tmp5067 = 0;
                            goto $l5065;
                            $l5073:;
                            $tmp4878 = 7;
                            goto $l4876;
                            $l5074:;
                            return $returnValue4884;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4903, ((panda$core$Object*) decl5068));
                        {
                            $tmp5076 = dc4907;
                            $tmp5077 = NULL;
                            dc4907 = $tmp5077;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5077));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5076));
                        }
                        {
                            $tmp5078 = a4991;
                            panda$collections$ImmutableArray* $tmp5081 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5081);
                            $tmp5080 = $tmp5081;
                            $tmp5079 = $tmp5080;
                            a4991 = $tmp5079;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5079));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5080));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5078));
                        }
                    }
                    $tmp5067 = -1;
                    goto $l5065;
                    $l5065:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5068));
                    decl5068 = NULL;
                    switch ($tmp5067) {
                        case 0: goto $l5073;
                        case -1: goto $l5082;
                    }
                    $l5082:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5083, 20);
                panda$core$Bit $tmp5084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5083);
                if ($tmp5084.value) {
                {
                    int $tmp5087;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5091 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4907, a4991);
                        $tmp5090 = $tmp5091;
                        $tmp5089 = $tmp5090;
                        decl5088 = $tmp5089;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5089));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5090));
                        if (((panda$core$Bit) { decl5088 == NULL }).value) {
                        {
                            $tmp5092 = NULL;
                            $returnValue4884 = $tmp5092;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5092));
                            $tmp5087 = 0;
                            goto $l5085;
                            $l5093:;
                            $tmp4878 = 8;
                            goto $l4876;
                            $l5094:;
                            return $returnValue4884;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4903, ((panda$core$Object*) decl5088));
                        {
                            $tmp5096 = dc4907;
                            $tmp5097 = NULL;
                            dc4907 = $tmp5097;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5097));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5096));
                        }
                        {
                            $tmp5098 = a4991;
                            panda$collections$ImmutableArray* $tmp5101 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5101);
                            $tmp5100 = $tmp5101;
                            $tmp5099 = $tmp5100;
                            a4991 = $tmp5099;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5099));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5100));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5098));
                        }
                    }
                    $tmp5087 = -1;
                    goto $l5085;
                    $l5085:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5088));
                    decl5088 = NULL;
                    switch ($tmp5087) {
                        case -1: goto $l5102;
                        case 0: goto $l5093;
                    }
                    $l5102:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5104, 22);
                panda$core$Bit $tmp5105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5104);
                bool $tmp5103 = $tmp5105.value;
                if ($tmp5103) goto $l5106;
                panda$core$Int64$init$builtin_int64(&$tmp5107, 21);
                panda$core$Bit $tmp5108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5107);
                $tmp5103 = $tmp5108.value;
                $l5106:;
                panda$core$Bit $tmp5109 = { $tmp5103 };
                if ($tmp5109.value) {
                {
                    int $tmp5112;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5116 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4907, a4991);
                        $tmp5115 = $tmp5116;
                        $tmp5114 = $tmp5115;
                        decl5113 = $tmp5114;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5114));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5115));
                        if (((panda$core$Bit) { decl5113 == NULL }).value) {
                        {
                            $tmp5117 = NULL;
                            $returnValue4884 = $tmp5117;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5117));
                            $tmp5112 = 0;
                            goto $l5110;
                            $l5118:;
                            $tmp4878 = 9;
                            goto $l4876;
                            $l5119:;
                            return $returnValue4884;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4903, ((panda$core$Object*) decl5113));
                        {
                            $tmp5121 = dc4907;
                            $tmp5122 = NULL;
                            dc4907 = $tmp5122;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5122));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5121));
                        }
                        {
                            $tmp5123 = a4991;
                            panda$collections$ImmutableArray* $tmp5126 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5126);
                            $tmp5125 = $tmp5126;
                            $tmp5124 = $tmp5125;
                            a4991 = $tmp5124;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5124));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5125));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5123));
                        }
                    }
                    $tmp5112 = -1;
                    goto $l5110;
                    $l5110:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5113));
                    decl5113 = NULL;
                    switch ($tmp5112) {
                        case -1: goto $l5127;
                        case 0: goto $l5118;
                    }
                    $l5127:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5131, 24);
                panda$core$Bit $tmp5132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5131);
                bool $tmp5130 = $tmp5132.value;
                if ($tmp5130) goto $l5133;
                panda$core$Int64$init$builtin_int64(&$tmp5134, 25);
                panda$core$Bit $tmp5135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5134);
                $tmp5130 = $tmp5135.value;
                $l5133:;
                panda$core$Bit $tmp5136 = { $tmp5130 };
                bool $tmp5129 = $tmp5136.value;
                if ($tmp5129) goto $l5137;
                panda$core$Int64$init$builtin_int64(&$tmp5138, 26);
                panda$core$Bit $tmp5139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5138);
                $tmp5129 = $tmp5139.value;
                $l5137:;
                panda$core$Bit $tmp5140 = { $tmp5129 };
                bool $tmp5128 = $tmp5140.value;
                if ($tmp5128) goto $l5141;
                panda$core$Int64$init$builtin_int64(&$tmp5142, 27);
                panda$core$Bit $tmp5143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5142);
                $tmp5128 = $tmp5143.value;
                $l5141:;
                panda$core$Bit $tmp5144 = { $tmp5128 };
                if ($tmp5144.value) {
                {
                    int $tmp5147;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5151 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4907, a4991);
                        $tmp5150 = $tmp5151;
                        $tmp5149 = $tmp5150;
                        decl5148 = $tmp5149;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5149));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5150));
                        if (((panda$core$Bit) { decl5148 == NULL }).value) {
                        {
                            $tmp5152 = NULL;
                            $returnValue4884 = $tmp5152;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5152));
                            $tmp5147 = 0;
                            goto $l5145;
                            $l5153:;
                            $tmp4878 = 10;
                            goto $l4876;
                            $l5154:;
                            return $returnValue4884;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4903, ((panda$core$Object*) decl5148));
                        {
                            $tmp5156 = dc4907;
                            $tmp5157 = NULL;
                            dc4907 = $tmp5157;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5157));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5156));
                        }
                        {
                            $tmp5158 = a4991;
                            panda$collections$ImmutableArray* $tmp5161 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5161);
                            $tmp5160 = $tmp5161;
                            $tmp5159 = $tmp5160;
                            a4991 = $tmp5159;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5159));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5160));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5158));
                        }
                    }
                    $tmp5147 = -1;
                    goto $l5145;
                    $l5145:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5148));
                    decl5148 = NULL;
                    switch ($tmp5147) {
                        case -1: goto $l5162;
                        case 0: goto $l5153;
                    }
                    $l5162:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5163, 101);
                panda$core$Bit $tmp5164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2356_134999.$rawValue, $tmp5163);
                if ($tmp5164.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5166, 101);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5165, $tmp5166);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5165, &$s5167);
                    goto $l4996;
                }
                }
                else {
                {
                    panda$core$String* $tmp5172 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4997);
                    $tmp5171 = $tmp5172;
                    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5170, $tmp5171);
                    $tmp5169 = $tmp5173;
                    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, &$s5174);
                    $tmp5168 = $tmp5175;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4997, $tmp5168);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5168));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5169));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5171));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5176 = NULL;
                    $returnValue4884 = $tmp5176;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5176));
                    $tmp4878 = 11;
                    goto $l4876;
                    $l5177:;
                    return $returnValue4884;
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
        $l4996:;
        org$pandalanguage$pandac$ASTNode* $tmp5181 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5182, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5184, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5183, $tmp5184);
        panda$core$String* $tmp5186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4888.value));
        $tmp5185 = $tmp5186;
        panda$collections$ImmutableArray* $tmp5188 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4903);
        $tmp5187 = $tmp5188;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5181, $tmp5182, ((org$pandalanguage$pandac$parser$Token) start4879.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5183, $tmp5185, NULL, NULL, $tmp5187);
        $tmp5180 = $tmp5181;
        $tmp5179 = $tmp5180;
        $returnValue4884 = $tmp5179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5185));
        $tmp4878 = 12;
        goto $l4876;
        $l5189:;
        return $returnValue4884;
    }
    $l4876:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4991));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4907));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4903));
    members4903 = NULL;
    a4991 = NULL;
    switch ($tmp4878) {
        case 3: goto $l4986;
        case 2: goto $l4901;
        case 1: goto $l4894;
        case 5: goto $l5037;
        case 6: goto $l5054;
        case 10: goto $l5154;
        case 8: goto $l5094;
        case 9: goto $l5119;
        case 7: goto $l5074;
        case 12: goto $l5189;
        case 11: goto $l5177;
        case 4: goto $l5014;
        case 0: goto $l4886;
    }
    $l5191:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5195;
    org$pandalanguage$pandac$ASTNode* dc5197 = NULL;
    panda$core$Int64 $tmp5198;
    org$pandalanguage$pandac$ASTNode* $tmp5200;
    org$pandalanguage$pandac$ASTNode* $tmp5201;
    org$pandalanguage$pandac$ASTNode* $tmp5202;
    org$pandalanguage$pandac$ASTNode* $returnValue5204;
    org$pandalanguage$pandac$ASTNode* $tmp5205;
    org$pandalanguage$pandac$ASTNode* $tmp5208;
    org$pandalanguage$pandac$ASTNode* $tmp5209;
    panda$collections$ImmutableArray* a5210 = NULL;
    panda$collections$ImmutableArray* $tmp5211;
    panda$collections$ImmutableArray* $tmp5212;
    org$pandalanguage$pandac$ASTNode* $tmp5214;
    org$pandalanguage$pandac$parser$Token$Kind $match$2442_95217;
    panda$core$Int64 $tmp5219;
    org$pandalanguage$pandac$ASTNode* $tmp5221;
    org$pandalanguage$pandac$ASTNode* $tmp5222;
    panda$core$Int64 $tmp5226;
    org$pandalanguage$pandac$ASTNode* $tmp5228;
    org$pandalanguage$pandac$ASTNode* $tmp5229;
    panda$core$Int64 $tmp5233;
    org$pandalanguage$pandac$ASTNode* $tmp5235;
    org$pandalanguage$pandac$ASTNode* $tmp5236;
    panda$core$Int64 $tmp5241;
    panda$core$Int64 $tmp5244;
    org$pandalanguage$pandac$ASTNode* $tmp5247;
    org$pandalanguage$pandac$ASTNode* $tmp5248;
    panda$core$Int64 $tmp5252;
    org$pandalanguage$pandac$ASTNode* $tmp5254;
    org$pandalanguage$pandac$ASTNode* $tmp5255;
    panda$core$Int64 $tmp5262;
    panda$core$Int64 $tmp5265;
    panda$core$Int64 $tmp5269;
    panda$core$Int64 $tmp5273;
    org$pandalanguage$pandac$ASTNode* $tmp5276;
    org$pandalanguage$pandac$ASTNode* $tmp5277;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5281;
    panda$core$Int64 $tmp5282;
    org$pandalanguage$pandac$ASTNode* $tmp5284;
    int $tmp5194;
    {
        org$pandalanguage$pandac$parser$Token $tmp5196 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5195 = $tmp5196;
        memset(&dc5197, 0, sizeof(dc5197));
        panda$core$Int64$init$builtin_int64(&$tmp5198, 12);
        panda$core$Bit $tmp5199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5195.kind.$rawValue, $tmp5198);
        if ($tmp5199.value) {
        {
            {
                $tmp5200 = dc5197;
                org$pandalanguage$pandac$ASTNode* $tmp5203 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5202 = $tmp5203;
                $tmp5201 = $tmp5202;
                dc5197 = $tmp5201;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5201));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5200));
            }
            if (((panda$core$Bit) { dc5197 == NULL }).value) {
            {
                $tmp5205 = NULL;
                $returnValue5204 = $tmp5205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5205));
                $tmp5194 = 0;
                goto $l5192;
                $l5206:;
                return $returnValue5204;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5208 = dc5197;
                $tmp5209 = NULL;
                dc5197 = $tmp5209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5208));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5213 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5212 = $tmp5213;
        $tmp5211 = $tmp5212;
        a5210 = $tmp5211;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5212));
        if (((panda$core$Bit) { a5210 == NULL }).value) {
        {
            $tmp5214 = NULL;
            $returnValue5204 = $tmp5214;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5214));
            $tmp5194 = 1;
            goto $l5192;
            $l5215:;
            return $returnValue5204;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5218 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2442_95217 = $tmp5218.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5219, 18);
            panda$core$Bit $tmp5220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5219);
            if ($tmp5220.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5223 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5197, a5210);
                $tmp5222 = $tmp5223;
                $tmp5221 = $tmp5222;
                $returnValue5204 = $tmp5221;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5221));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5222));
                $tmp5194 = 2;
                goto $l5192;
                $l5224:;
                return $returnValue5204;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5226, 19);
            panda$core$Bit $tmp5227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5226);
            if ($tmp5227.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5230 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5197, a5210);
                $tmp5229 = $tmp5230;
                $tmp5228 = $tmp5229;
                $returnValue5204 = $tmp5228;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5229));
                $tmp5194 = 3;
                goto $l5192;
                $l5231:;
                return $returnValue5204;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5233, 20);
            panda$core$Bit $tmp5234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5233);
            if ($tmp5234.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5237 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5197, a5210);
                $tmp5236 = $tmp5237;
                $tmp5235 = $tmp5236;
                $returnValue5204 = $tmp5235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5236));
                $tmp5194 = 4;
                goto $l5192;
                $l5238:;
                return $returnValue5204;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5241, 22);
            panda$core$Bit $tmp5242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5241);
            bool $tmp5240 = $tmp5242.value;
            if ($tmp5240) goto $l5243;
            panda$core$Int64$init$builtin_int64(&$tmp5244, 21);
            panda$core$Bit $tmp5245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5244);
            $tmp5240 = $tmp5245.value;
            $l5243:;
            panda$core$Bit $tmp5246 = { $tmp5240 };
            if ($tmp5246.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5249 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5197, a5210);
                $tmp5248 = $tmp5249;
                $tmp5247 = $tmp5248;
                $returnValue5204 = $tmp5247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5248));
                $tmp5194 = 5;
                goto $l5192;
                $l5250:;
                return $returnValue5204;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5252, 23);
            panda$core$Bit $tmp5253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5252);
            if ($tmp5253.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5256 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5197, a5210);
                $tmp5255 = $tmp5256;
                $tmp5254 = $tmp5255;
                $returnValue5204 = $tmp5254;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5254));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5255));
                $tmp5194 = 6;
                goto $l5192;
                $l5257:;
                return $returnValue5204;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5262, 24);
            panda$core$Bit $tmp5263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5262);
            bool $tmp5261 = $tmp5263.value;
            if ($tmp5261) goto $l5264;
            panda$core$Int64$init$builtin_int64(&$tmp5265, 25);
            panda$core$Bit $tmp5266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5265);
            $tmp5261 = $tmp5266.value;
            $l5264:;
            panda$core$Bit $tmp5267 = { $tmp5261 };
            bool $tmp5260 = $tmp5267.value;
            if ($tmp5260) goto $l5268;
            panda$core$Int64$init$builtin_int64(&$tmp5269, 26);
            panda$core$Bit $tmp5270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5269);
            $tmp5260 = $tmp5270.value;
            $l5268:;
            panda$core$Bit $tmp5271 = { $tmp5260 };
            bool $tmp5259 = $tmp5271.value;
            if ($tmp5259) goto $l5272;
            panda$core$Int64$init$builtin_int64(&$tmp5273, 27);
            panda$core$Bit $tmp5274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2442_95217.$rawValue, $tmp5273);
            $tmp5259 = $tmp5274.value;
            $l5272:;
            panda$core$Bit $tmp5275 = { $tmp5259 };
            if ($tmp5275.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5278 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5197, a5210);
                $tmp5277 = $tmp5278;
                $tmp5276 = $tmp5277;
                $returnValue5204 = $tmp5276;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5277));
                $tmp5194 = 7;
                goto $l5192;
                $l5279:;
                return $returnValue5204;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5282, 18);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5281, $tmp5282);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5281, &$s5283);
                $tmp5284 = NULL;
                $returnValue5204 = $tmp5284;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5284));
                $tmp5194 = 8;
                goto $l5192;
                $l5285:;
                return $returnValue5204;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5194 = -1;
    goto $l5192;
    $l5192:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5210));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5197));
    a5210 = NULL;
    switch ($tmp5194) {
        case 6: goto $l5257;
        case 5: goto $l5250;
        case 1: goto $l5215;
        case 7: goto $l5279;
        case 4: goto $l5238;
        case 8: goto $l5285;
        case 3: goto $l5231;
        case 0: goto $l5206;
        case -1: goto $l5287;
        case 2: goto $l5224;
    }
    $l5287:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5291;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5292;
    panda$core$Int64 $tmp5293;
    org$pandalanguage$pandac$ASTNode* $returnValue5296;
    org$pandalanguage$pandac$ASTNode* $tmp5297;
    org$pandalanguage$pandac$parser$Token$nullable name5300;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5301;
    panda$core$Int64 $tmp5302;
    org$pandalanguage$pandac$ASTNode* $tmp5305;
    panda$collections$ImmutableArray* generics5308 = NULL;
    panda$core$Int64 $tmp5310;
    panda$collections$ImmutableArray* $tmp5312;
    panda$collections$ImmutableArray* $tmp5313;
    panda$collections$ImmutableArray* $tmp5314;
    org$pandalanguage$pandac$ASTNode* $tmp5316;
    panda$collections$ImmutableArray* $tmp5319;
    panda$collections$ImmutableArray* $tmp5320;
    panda$collections$ImmutableArray* stypes5321 = NULL;
    panda$core$Int64 $tmp5323;
    panda$collections$ImmutableArray* $tmp5325;
    panda$collections$ImmutableArray* $tmp5326;
    panda$collections$ImmutableArray* $tmp5327;
    org$pandalanguage$pandac$ASTNode* $tmp5329;
    panda$collections$ImmutableArray* $tmp5332;
    panda$collections$ImmutableArray* $tmp5333;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5334;
    panda$core$Int64 $tmp5335;
    org$pandalanguage$pandac$ASTNode* $tmp5338;
    panda$collections$Array* members5341 = NULL;
    panda$collections$Array* $tmp5342;
    panda$collections$Array* $tmp5343;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5348;
    panda$core$Int64 $tmp5349;
    org$pandalanguage$pandac$ASTNode* member5354 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5355;
    org$pandalanguage$pandac$ASTNode* $tmp5356;
    org$pandalanguage$pandac$ASTNode* $tmp5358;
    org$pandalanguage$pandac$ASTNode* $tmp5363;
    org$pandalanguage$pandac$ASTNode* $tmp5364;
    panda$core$Int64 $tmp5366;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5367;
    panda$core$Int64 $tmp5368;
    panda$core$String* $tmp5369;
    panda$collections$ImmutableArray* $tmp5371;
    int $tmp5290;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5293, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5292, $tmp5293);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5295 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5292, &$s5294);
        start5291 = $tmp5295;
        if (((panda$core$Bit) { !start5291.nonnull }).value) {
        {
            $tmp5297 = NULL;
            $returnValue5296 = $tmp5297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5297));
            $tmp5290 = 0;
            goto $l5288;
            $l5298:;
            return $returnValue5296;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5302, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5301, $tmp5302);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5304 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5301, &$s5303);
        name5300 = $tmp5304;
        if (((panda$core$Bit) { !name5300.nonnull }).value) {
        {
            $tmp5305 = NULL;
            $returnValue5296 = $tmp5305;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5305));
            $tmp5290 = 1;
            goto $l5288;
            $l5306:;
            return $returnValue5296;
        }
        }
        memset(&generics5308, 0, sizeof(generics5308));
        org$pandalanguage$pandac$parser$Token $tmp5309 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5310, 63);
        panda$core$Bit $tmp5311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5309.kind.$rawValue, $tmp5310);
        if ($tmp5311.value) {
        {
            {
                $tmp5312 = generics5308;
                panda$collections$ImmutableArray* $tmp5315 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5314 = $tmp5315;
                $tmp5313 = $tmp5314;
                generics5308 = $tmp5313;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5312));
            }
            if (((panda$core$Bit) { generics5308 == NULL }).value) {
            {
                $tmp5316 = NULL;
                $returnValue5296 = $tmp5316;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5316));
                $tmp5290 = 2;
                goto $l5288;
                $l5317:;
                return $returnValue5296;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5319 = generics5308;
                $tmp5320 = NULL;
                generics5308 = $tmp5320;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5320));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5319));
            }
        }
        }
        memset(&stypes5321, 0, sizeof(stypes5321));
        org$pandalanguage$pandac$parser$Token $tmp5322 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5323, 96);
        panda$core$Bit $tmp5324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5322.kind.$rawValue, $tmp5323);
        if ($tmp5324.value) {
        {
            {
                $tmp5325 = stypes5321;
                panda$collections$ImmutableArray* $tmp5328 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5327 = $tmp5328;
                $tmp5326 = $tmp5327;
                stypes5321 = $tmp5326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5325));
            }
            if (((panda$core$Bit) { stypes5321 == NULL }).value) {
            {
                $tmp5329 = NULL;
                $returnValue5296 = $tmp5329;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5329));
                $tmp5290 = 3;
                goto $l5288;
                $l5330:;
                return $returnValue5296;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5332 = stypes5321;
                $tmp5333 = NULL;
                stypes5321 = $tmp5333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5332));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5335, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5334, $tmp5335);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5337 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5334, &$s5336);
        if (((panda$core$Bit) { !$tmp5337.nonnull }).value) {
        {
            $tmp5338 = NULL;
            $returnValue5296 = $tmp5338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5338));
            $tmp5290 = 4;
            goto $l5288;
            $l5339:;
            return $returnValue5296;
        }
        }
        panda$collections$Array* $tmp5344 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5344);
        $tmp5343 = $tmp5344;
        $tmp5342 = $tmp5343;
        members5341 = $tmp5342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5343));
        $l5345:;
        panda$core$Int64$init$builtin_int64(&$tmp5349, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5348, $tmp5349);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5350 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5348);
        bool $tmp5347 = ((panda$core$Bit) { !$tmp5350.nonnull }).value;
        if (!$tmp5347) goto $l5346;
        {
            int $tmp5353;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5357 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5356 = $tmp5357;
                $tmp5355 = $tmp5356;
                member5354 = $tmp5355;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5356));
                if (((panda$core$Bit) { member5354 == NULL }).value) {
                {
                    $tmp5358 = NULL;
                    $returnValue5296 = $tmp5358;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5358));
                    $tmp5353 = 0;
                    goto $l5351;
                    $l5359:;
                    $tmp5290 = 5;
                    goto $l5288;
                    $l5360:;
                    return $returnValue5296;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5341, ((panda$core$Object*) member5354));
            }
            $tmp5353 = -1;
            goto $l5351;
            $l5351:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5354));
            member5354 = NULL;
            switch ($tmp5353) {
                case 0: goto $l5359;
                case -1: goto $l5362;
            }
            $l5362:;
        }
        goto $l5345;
        $l5346:;
        org$pandalanguage$pandac$ASTNode* $tmp5365 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5366, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5368, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5367, $tmp5368);
        panda$core$String* $tmp5370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5300.value));
        $tmp5369 = $tmp5370;
        panda$collections$ImmutableArray* $tmp5372 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5341);
        $tmp5371 = $tmp5372;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5365, $tmp5366, ((org$pandalanguage$pandac$parser$Token) start5291.value).position, p_doccomment, p_annotations, $tmp5367, $tmp5369, generics5308, stypes5321, $tmp5371);
        $tmp5364 = $tmp5365;
        $tmp5363 = $tmp5364;
        $returnValue5296 = $tmp5363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5369));
        $tmp5290 = 6;
        goto $l5288;
        $l5373:;
        return $returnValue5296;
    }
    $l5288:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5341));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5321));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5308));
    members5341 = NULL;
    switch ($tmp5290) {
        case 6: goto $l5373;
        case 5: goto $l5360;
        case 4: goto $l5339;
        case 2: goto $l5317;
        case 3: goto $l5330;
        case 0: goto $l5298;
        case 1: goto $l5306;
    }
    $l5375:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5379;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5380;
    panda$core$Int64 $tmp5381;
    org$pandalanguage$pandac$ASTNode* $returnValue5384;
    org$pandalanguage$pandac$ASTNode* $tmp5385;
    org$pandalanguage$pandac$parser$Token$nullable name5388;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5389;
    panda$core$Int64 $tmp5390;
    org$pandalanguage$pandac$ASTNode* $tmp5393;
    panda$collections$ImmutableArray* generics5396 = NULL;
    panda$core$Int64 $tmp5398;
    panda$collections$ImmutableArray* $tmp5400;
    panda$collections$ImmutableArray* $tmp5401;
    panda$collections$ImmutableArray* $tmp5402;
    org$pandalanguage$pandac$ASTNode* $tmp5404;
    panda$collections$ImmutableArray* $tmp5407;
    panda$collections$ImmutableArray* $tmp5408;
    panda$collections$ImmutableArray* $tmp5409;
    panda$collections$Array* intfs5411 = NULL;
    panda$collections$Array* $tmp5412;
    panda$collections$Array* $tmp5413;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5415;
    panda$core$Int64 $tmp5416;
    org$pandalanguage$pandac$ASTNode* t5421 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5422;
    org$pandalanguage$pandac$ASTNode* $tmp5423;
    org$pandalanguage$pandac$ASTNode* $tmp5425;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5432;
    panda$core$Int64 $tmp5433;
    org$pandalanguage$pandac$ASTNode* $tmp5435;
    org$pandalanguage$pandac$ASTNode* $tmp5436;
    org$pandalanguage$pandac$ASTNode* $tmp5437;
    org$pandalanguage$pandac$ASTNode* $tmp5439;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5444;
    panda$core$Int64 $tmp5445;
    org$pandalanguage$pandac$ASTNode* $tmp5448;
    panda$collections$Array* members5451 = NULL;
    panda$collections$Array* $tmp5452;
    panda$collections$Array* $tmp5453;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5458;
    panda$core$Int64 $tmp5459;
    org$pandalanguage$pandac$ASTNode* member5464 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5465;
    org$pandalanguage$pandac$ASTNode* $tmp5466;
    org$pandalanguage$pandac$ASTNode* $tmp5468;
    org$pandalanguage$pandac$ASTNode* $tmp5473;
    org$pandalanguage$pandac$ASTNode* $tmp5474;
    panda$core$Int64 $tmp5476;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5477;
    panda$core$Int64 $tmp5478;
    panda$core$String* $tmp5479;
    panda$collections$ImmutableArray* $tmp5481;
    panda$collections$ImmutableArray* $tmp5483;
    int $tmp5378;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5381, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5380, $tmp5381);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5383 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5380, &$s5382);
        start5379 = $tmp5383;
        if (((panda$core$Bit) { !start5379.nonnull }).value) {
        {
            $tmp5385 = NULL;
            $returnValue5384 = $tmp5385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5385));
            $tmp5378 = 0;
            goto $l5376;
            $l5386:;
            return $returnValue5384;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5390, 49);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5389, $tmp5390);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5392 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5389, &$s5391);
        name5388 = $tmp5392;
        if (((panda$core$Bit) { !name5388.nonnull }).value) {
        {
            $tmp5393 = NULL;
            $returnValue5384 = $tmp5393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5393));
            $tmp5378 = 1;
            goto $l5376;
            $l5394:;
            return $returnValue5384;
        }
        }
        memset(&generics5396, 0, sizeof(generics5396));
        org$pandalanguage$pandac$parser$Token $tmp5397 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5398, 63);
        panda$core$Bit $tmp5399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5397.kind.$rawValue, $tmp5398);
        if ($tmp5399.value) {
        {
            {
                $tmp5400 = generics5396;
                panda$collections$ImmutableArray* $tmp5403 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5402 = $tmp5403;
                $tmp5401 = $tmp5402;
                generics5396 = $tmp5401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5400));
            }
            if (((panda$core$Bit) { generics5396 == NULL }).value) {
            {
                $tmp5404 = NULL;
                $returnValue5384 = $tmp5404;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5404));
                $tmp5378 = 2;
                goto $l5376;
                $l5405:;
                return $returnValue5384;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5407 = generics5396;
                panda$collections$ImmutableArray* $tmp5410 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5410);
                $tmp5409 = $tmp5410;
                $tmp5408 = $tmp5409;
                generics5396 = $tmp5408;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5407));
            }
        }
        }
        panda$collections$Array* $tmp5414 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5414);
        $tmp5413 = $tmp5414;
        $tmp5412 = $tmp5413;
        intfs5411 = $tmp5412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5413));
        panda$core$Int64$init$builtin_int64(&$tmp5416, 96);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5415, $tmp5416);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5417 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5415);
        if (((panda$core$Bit) { $tmp5417.nonnull }).value) {
        {
            int $tmp5420;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5424 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5423 = $tmp5424;
                $tmp5422 = $tmp5423;
                t5421 = $tmp5422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5423));
                if (((panda$core$Bit) { t5421 == NULL }).value) {
                {
                    $tmp5425 = NULL;
                    $returnValue5384 = $tmp5425;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5425));
                    $tmp5420 = 0;
                    goto $l5418;
                    $l5426:;
                    $tmp5378 = 3;
                    goto $l5376;
                    $l5427:;
                    return $returnValue5384;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5411, ((panda$core$Object*) t5421));
                $l5429:;
                panda$core$Int64$init$builtin_int64(&$tmp5433, 106);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5432, $tmp5433);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5434 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5432);
                bool $tmp5431 = ((panda$core$Bit) { $tmp5434.nonnull }).value;
                if (!$tmp5431) goto $l5430;
                {
                    {
                        $tmp5435 = t5421;
                        org$pandalanguage$pandac$ASTNode* $tmp5438 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5437 = $tmp5438;
                        $tmp5436 = $tmp5437;
                        t5421 = $tmp5436;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5436));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5437));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5435));
                    }
                    if (((panda$core$Bit) { t5421 == NULL }).value) {
                    {
                        $tmp5439 = NULL;
                        $returnValue5384 = $tmp5439;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5439));
                        $tmp5420 = 1;
                        goto $l5418;
                        $l5440:;
                        $tmp5378 = 4;
                        goto $l5376;
                        $l5441:;
                        return $returnValue5384;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5411, ((panda$core$Object*) t5421));
                }
                goto $l5429;
                $l5430:;
            }
            $tmp5420 = -1;
            goto $l5418;
            $l5418:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5421));
            t5421 = NULL;
            switch ($tmp5420) {
                case 0: goto $l5426;
                case -1: goto $l5443;
                case 1: goto $l5440;
            }
            $l5443:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5445, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5444, $tmp5445);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5447 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5444, &$s5446);
        if (((panda$core$Bit) { !$tmp5447.nonnull }).value) {
        {
            $tmp5448 = NULL;
            $returnValue5384 = $tmp5448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5448));
            $tmp5378 = 5;
            goto $l5376;
            $l5449:;
            return $returnValue5384;
        }
        }
        panda$collections$Array* $tmp5454 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5454);
        $tmp5453 = $tmp5454;
        $tmp5452 = $tmp5453;
        members5451 = $tmp5452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5453));
        $l5455:;
        panda$core$Int64$init$builtin_int64(&$tmp5459, 101);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5458, $tmp5459);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5460 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5458);
        bool $tmp5457 = ((panda$core$Bit) { !$tmp5460.nonnull }).value;
        if (!$tmp5457) goto $l5456;
        {
            int $tmp5463;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5467 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5466 = $tmp5467;
                $tmp5465 = $tmp5466;
                member5464 = $tmp5465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5466));
                if (((panda$core$Bit) { member5464 == NULL }).value) {
                {
                    $tmp5468 = NULL;
                    $returnValue5384 = $tmp5468;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5468));
                    $tmp5463 = 0;
                    goto $l5461;
                    $l5469:;
                    $tmp5378 = 6;
                    goto $l5376;
                    $l5470:;
                    return $returnValue5384;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5451, ((panda$core$Object*) member5464));
            }
            $tmp5463 = -1;
            goto $l5461;
            $l5461:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5464));
            member5464 = NULL;
            switch ($tmp5463) {
                case -1: goto $l5472;
                case 0: goto $l5469;
            }
            $l5472:;
        }
        goto $l5455;
        $l5456:;
        org$pandalanguage$pandac$ASTNode* $tmp5475 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5476, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5478, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5477, $tmp5478);
        panda$core$String* $tmp5480 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5388.value));
        $tmp5479 = $tmp5480;
        panda$collections$ImmutableArray* $tmp5482 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5411);
        $tmp5481 = $tmp5482;
        panda$collections$ImmutableArray* $tmp5484 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5451);
        $tmp5483 = $tmp5484;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5475, $tmp5476, ((org$pandalanguage$pandac$parser$Token) start5379.value).position, p_doccomment, p_annotations, $tmp5477, $tmp5479, generics5396, $tmp5481, $tmp5483);
        $tmp5474 = $tmp5475;
        $tmp5473 = $tmp5474;
        $returnValue5384 = $tmp5473;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5479));
        $tmp5378 = 7;
        goto $l5376;
        $l5485:;
        return $returnValue5384;
    }
    $l5376:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5411));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5396));
    intfs5411 = NULL;
    members5451 = NULL;
    switch ($tmp5378) {
        case 3: goto $l5427;
        case 2: goto $l5405;
        case 1: goto $l5394;
        case 6: goto $l5470;
        case 5: goto $l5449;
        case 7: goto $l5485;
        case 0: goto $l5386;
        case 4: goto $l5441;
    }
    $l5487:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2566_95488;
    panda$core$Int64 $tmp5490;
    org$pandalanguage$pandac$ASTNode* $returnValue5492;
    org$pandalanguage$pandac$ASTNode* $tmp5493;
    org$pandalanguage$pandac$ASTNode* $tmp5494;
    panda$core$Int64 $tmp5497;
    org$pandalanguage$pandac$ASTNode* $tmp5499;
    org$pandalanguage$pandac$ASTNode* $tmp5500;
    org$pandalanguage$pandac$ASTNode* $tmp5503;
    org$pandalanguage$pandac$ASTNode* $tmp5504;
    {
        org$pandalanguage$pandac$parser$Token $tmp5489 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2566_95488 = $tmp5489.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5490, 16);
        panda$core$Bit $tmp5491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2566_95488.$rawValue, $tmp5490);
        if ($tmp5491.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5495 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5494 = $tmp5495;
            $tmp5493 = $tmp5494;
            $returnValue5492 = $tmp5493;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5493));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5494));
            return $returnValue5492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5497, 15);
        panda$core$Bit $tmp5498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2566_95488.$rawValue, $tmp5497);
        if ($tmp5498.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5501 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5500 = $tmp5501;
            $tmp5499 = $tmp5500;
            $returnValue5492 = $tmp5499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5500));
            return $returnValue5492;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5505 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5504 = $tmp5505;
            $tmp5503 = $tmp5504;
            $returnValue5492 = $tmp5503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5503));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5504));
            return $returnValue5492;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5510 = NULL;
    panda$collections$Array* $tmp5511;
    panda$collections$Array* $tmp5512;
    panda$core$Int64 $tmp5518;
    org$pandalanguage$pandac$ASTNode* entry5523 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5524;
    org$pandalanguage$pandac$ASTNode* $tmp5525;
    org$pandalanguage$pandac$ASTNode* $returnValue5527;
    org$pandalanguage$pandac$ASTNode* $tmp5528;
    org$pandalanguage$pandac$ASTNode* $tmp5537;
    org$pandalanguage$pandac$ASTNode* $tmp5538;
    panda$core$Int64 $tmp5540;
    panda$collections$ImmutableArray* $tmp5541;
    int $tmp5509;
    {
        panda$collections$Array* $tmp5513 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5513);
        $tmp5512 = $tmp5513;
        $tmp5511 = $tmp5512;
        entries5510 = $tmp5511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5512));
        $l5514:;
        org$pandalanguage$pandac$parser$Token $tmp5517 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5518, 0);
        panda$core$Bit $tmp5519 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5517.kind.$rawValue, $tmp5518);
        bool $tmp5516 = $tmp5519.value;
        if (!$tmp5516) goto $l5515;
        {
            int $tmp5522;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5526 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5525 = $tmp5526;
                $tmp5524 = $tmp5525;
                entry5523 = $tmp5524;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5525));
                if (((panda$core$Bit) { entry5523 == NULL }).value) {
                {
                    $tmp5528 = NULL;
                    $returnValue5527 = $tmp5528;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5528));
                    $tmp5522 = 0;
                    goto $l5520;
                    $l5529:;
                    $tmp5509 = 0;
                    goto $l5507;
                    $l5530:;
                    return $returnValue5527;
                }
                }
                panda$core$Bit $tmp5532 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5532.value) goto $l5533; else goto $l5534;
                $l5534:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5535, (panda$core$Int64) { 2586 });
                abort();
                $l5533:;
                panda$collections$Array$add$panda$collections$Array$T(entries5510, ((panda$core$Object*) entry5523));
            }
            $tmp5522 = -1;
            goto $l5520;
            $l5520:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5523));
            entry5523 = NULL;
            switch ($tmp5522) {
                case -1: goto $l5536;
                case 0: goto $l5529;
            }
            $l5536:;
        }
        goto $l5514;
        $l5515:;
        org$pandalanguage$pandac$ASTNode* $tmp5539 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5540, 17);
        panda$collections$ImmutableArray* $tmp5542 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5510);
        $tmp5541 = $tmp5542;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5539, $tmp5540, $tmp5541);
        $tmp5538 = $tmp5539;
        $tmp5537 = $tmp5538;
        $returnValue5527 = $tmp5537;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5538));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5541));
        $tmp5509 = 1;
        goto $l5507;
        $l5543:;
        return $returnValue5527;
    }
    $l5507:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5510));
    entries5510 = NULL;
    switch ($tmp5509) {
        case 1: goto $l5543;
        case 0: goto $l5530;
    }
    $l5545:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5548;
    {
    }
    $tmp5548 = -1;
    goto $l5546;
    $l5546:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5548) {
        case -1: goto $l5549;
    }
    $l5549:;
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

