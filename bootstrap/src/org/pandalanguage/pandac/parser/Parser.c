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
#include "org/pandalanguage/regex/RegexLexer.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
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
typedef void (*$fn147)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn148)(org$pandalanguage$pandac$parser$SyntaxHighlighter*);
typedef void (*$fn190)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn191)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn289)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn356)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn478)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn558)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn566)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn575)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn583)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn689)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn773)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn781)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn790)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn805)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn832)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn840)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn855)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2064)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2318)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3578)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3605)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3655)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn4090)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn4093)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef org$pandalanguage$pandac$Position (*$fn4782)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 89, 8342421721155502002, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x61\x72\x74\x53\x70\x65\x63\x75\x6c\x61\x74\x69\x76\x65\x28\x29", 90, -624330123025066935, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 79, 6524007178185078219, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x61\x63\x63\x65\x70\x74\x28\x29", 80, 2210282510982608538, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 79, 6525832141939989144, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x72\x65\x77\x69\x6e\x64\x28\x29", 80, 2212107474737519463, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x73\x74\x72\x69\x6e\x67\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 114, 5686317415756372741, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 28, -4919797478563540237, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2f\x27", 3, 1432926, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x75\x70\x6c\x65\x20\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x79\x65\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64", 33, 7252824084450094913, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 117, 6413461821348540774, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x77\x68\x65\x6e\x43\x6c\x61\x75\x73\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f", 118, 5129537752972831981, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };
static panda$core$String $s3960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s4224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s4424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s4487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s4580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s5147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s5260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 12, 7165916832589637872, NULL };

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
        panda$core$Int64$init$builtin_int64(&$tmp46, 11);
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
            panda$core$Int64$init$builtin_int64(&$tmp72, 12);
            panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_1371.$rawValue, $tmp72);
            if ($tmp73.value) {
            {
                goto $l67;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp74, 8);
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
                            panda$core$Int64$init$builtin_int64(&$tmp90, 12);
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
            panda$core$Int64$init$builtin_int64(&$tmp103, 9);
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
                            panda$core$Int64$init$builtin_int64(&$tmp119, 10);
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
    panda$core$Object* $tmp142;
    panda$core$Int64 $tmp144;
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
        panda$core$Bit $tmp141 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp132, $tmp139);
        bool $tmp131 = $tmp141.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
        panda$core$Panda$unref$panda$core$Object($tmp133);
        if (!$tmp131) goto $l130;
        {
            panda$core$Int64 $tmp143 = panda$collections$Array$get_count$R$panda$core$Int64(self->syntaxHighlighter->tokens);
            panda$core$Int64$init$builtin_int64(&$tmp144, 1);
            panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp143, $tmp144);
            panda$core$Object* $tmp146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->syntaxHighlighter->tokens, $tmp145);
            $tmp142 = $tmp146;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, ((org$pandalanguage$pandac$parser$Token$wrapper*) ((org$pandalanguage$pandac$Pair*) $tmp142)->first)->value);
            panda$core$Panda$unref$panda$core$Object($tmp142);
            (($fn147) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
        }
        goto $l129;
        $l130:;
        (($fn148) self->syntaxHighlighter->$class->vtable[7])(self->syntaxHighlighter);
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp150;
    org$pandalanguage$pandac$parser$Token $returnValue153;
    panda$core$Int64 $tmp155;
    panda$core$Int64 $tmp149 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp150, 0);
    panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, $tmp150);
    if ($tmp151.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp152 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp152);
    }
    }
    panda$core$Int64 $tmp154 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp155, 1);
    panda$core$Int64 $tmp156 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp154, $tmp155);
    org$pandalanguage$pandac$parser$Token $tmp157 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp156);
    $returnValue153 = $tmp157;
    return $returnValue153;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result159;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue162;
    org$pandalanguage$pandac$parser$Token $tmp160 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result159 = $tmp160;
    panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result159.kind.$rawValue, p_kind.$rawValue);
    if ($tmp161.value) {
    {
        $returnValue162 = ((org$pandalanguage$pandac$parser$Token$nullable) { result159, true });
        return $returnValue162;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result159);
    $returnValue162 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue162;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result165;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue168;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$String* $tmp178;
    org$pandalanguage$pandac$parser$Token $tmp166 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result165 = $tmp166;
    panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result165.kind.$rawValue, p_kind.$rawValue);
    if ($tmp167.value) {
    {
        $returnValue168 = ((org$pandalanguage$pandac$parser$Token$nullable) { result165, true });
        return $returnValue168;
    }
    }
    panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s174, p_expected);
    $tmp173 = $tmp175;
    panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s176);
    $tmp172 = $tmp177;
    panda$core$String* $tmp179 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result165);
    $tmp178 = $tmp179;
    panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, $tmp178);
    $tmp171 = $tmp180;
    panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s181);
    $tmp170 = $tmp182;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result165, $tmp170);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    $returnValue168 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue168;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp188;
    panda$core$Bit $tmp185 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    bool $tmp184 = $tmp185.value;
    if (!$tmp184) goto $l186;
    $tmp184 = self->reportErrors.value;
    $l186:;
    panda$core$Bit $tmp187 = { $tmp184 };
    if ($tmp187.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp189 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp189, self->path, p_token.position, p_msg);
        $tmp188 = $tmp189;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn190) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
    {
        (($fn191) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp204;
    int $tmp194;
    {
        panda$core$Bit $tmp195 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp195.value) goto $l196; else goto $l197;
        $l197:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s198, (panda$core$Int64) { 201 }, &$s199);
        abort();
        $l196:;
        panda$core$Bit $tmp200 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        if ($tmp200.value) goto $l201; else goto $l202;
        $l202:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s203, (panda$core$Int64) { 202 });
        abort();
        $l201:;
        panda$core$Bit$init$builtin_bit(&$tmp204, true);
        self->inSpeculative = $tmp204;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
    }
    $tmp194 = -1;
    goto $l192;
    $l192:;
    if (self->inSpeculative.value) goto $l206; else goto $l207;
    $l207:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s208, (panda$core$Int64) { 201 }, &$s209);
    abort();
    $l206:;
    switch ($tmp194) {
        case -1: goto $l205;
    }
    $l205:;
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp217;
    int $tmp212;
    {
        if (self->inSpeculative.value) goto $l213; else goto $l214;
        $l214:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s215, (panda$core$Int64) { 210 }, &$s216);
        abort();
        $l213:;
        panda$core$Bit$init$builtin_bit(&$tmp217, false);
        self->inSpeculative = $tmp217;
    }
    $tmp212 = -1;
    goto $l210;
    $l210:;
    panda$core$Bit $tmp219 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp219.value) goto $l220; else goto $l221;
    $l221:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s222, (panda$core$Int64) { 210 }, &$s223);
    abort();
    $l220:;
    switch ($tmp212) {
        case -1: goto $l218;
    }
    $l218:;
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp231;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp232;
    panda$core$Int64 $tmp234;
    panda$core$Int64 $tmp236;
    panda$core$Int64 $tmp237;
    panda$core$Bit $tmp238;
    int $tmp226;
    {
        if (self->inSpeculative.value) goto $l227; else goto $l228;
        $l228:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s229, (panda$core$Int64) { 216 }, &$s230);
        abort();
        $l227:;
        panda$core$Bit$init$builtin_bit(&$tmp231, false);
        self->inSpeculative = $tmp231;
        panda$core$Int64 $tmp233 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp234, 1);
        panda$core$Int64 $tmp235 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp233, $tmp234);
        panda$core$Int64$init$builtin_int64(&$tmp236, 0);
        panda$core$Int64$init$builtin_int64(&$tmp237, -1);
        panda$core$Bit$init$builtin_bit(&$tmp238, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp232, $tmp235, $tmp236, $tmp237, $tmp238);
        int64_t $tmp240 = $tmp232.start.value;
        panda$core$Int64 i239 = { $tmp240 };
        int64_t $tmp242 = $tmp232.end.value;
        int64_t $tmp243 = $tmp232.step.value;
        bool $tmp244 = $tmp232.inclusive.value;
        bool $tmp251 = $tmp243 > 0;
        if ($tmp251) goto $l249; else goto $l250;
        $l249:;
        if ($tmp244) goto $l252; else goto $l253;
        $l252:;
        if ($tmp240 <= $tmp242) goto $l245; else goto $l247;
        $l253:;
        if ($tmp240 < $tmp242) goto $l245; else goto $l247;
        $l250:;
        if ($tmp244) goto $l254; else goto $l255;
        $l254:;
        if ($tmp240 >= $tmp242) goto $l245; else goto $l247;
        $l255:;
        if ($tmp240 > $tmp242) goto $l245; else goto $l247;
        $l245:;
        {
            org$pandalanguage$pandac$parser$Token $tmp257 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i239);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp257);
        }
        $l248:;
        if ($tmp251) goto $l259; else goto $l260;
        $l259:;
        int64_t $tmp261 = $tmp242 - i239.value;
        if ($tmp244) goto $l262; else goto $l263;
        $l262:;
        if ((uint64_t) $tmp261 >= $tmp243) goto $l258; else goto $l247;
        $l263:;
        if ((uint64_t) $tmp261 > $tmp243) goto $l258; else goto $l247;
        $l260:;
        int64_t $tmp265 = i239.value - $tmp242;
        if ($tmp244) goto $l266; else goto $l267;
        $l266:;
        if ((uint64_t) $tmp265 >= -$tmp243) goto $l258; else goto $l247;
        $l267:;
        if ((uint64_t) $tmp265 > -$tmp243) goto $l258; else goto $l247;
        $l258:;
        i239.value += $tmp243;
        goto $l245;
        $l247:;
    }
    $tmp226 = -1;
    goto $l224;
    $l224:;
    panda$core$Bit $tmp270 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp270.value) goto $l271; else goto $l272;
    $l272:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s273, (panda$core$Int64) { 216 }, &$s274);
    abort();
    $l271:;
    switch ($tmp226) {
        case -1: goto $l269;
    }
    $l269:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue275;
    panda$core$String* $tmp276;
    panda$core$String* $tmp277;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp278;
    panda$core$Bit $tmp279;
    panda$core$Bit$init$builtin_bit(&$tmp279, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp278, p_token.start, p_token.end, $tmp279);
    panda$core$String* $tmp280 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp278);
    $tmp277 = $tmp280;
    $tmp276 = $tmp277;
    $returnValue275 = $tmp276;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
    return $returnValue275;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue282;
    org$pandalanguage$pandac$ASTNode* $tmp283;
    org$pandalanguage$pandac$ASTNode* $tmp285;
    org$pandalanguage$pandac$ASTNode* $tmp286;
    panda$core$Int64 $tmp288;
    org$pandalanguage$pandac$parser$Token$Kind $tmp291;
    panda$core$Int64 $tmp292;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp283 = p_chunk;
        $returnValue282 = $tmp283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
        return $returnValue282;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp287 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp288, 4);
    org$pandalanguage$pandac$Position $tmp290 = (($fn289) p_string->$class->vtable[2])(p_string);
    panda$core$Int64$init$builtin_int64(&$tmp292, 51);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp291, $tmp292);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp287, $tmp288, $tmp290, p_string, $tmp291, p_chunk);
    $tmp286 = $tmp287;
    $tmp285 = $tmp286;
    $returnValue282 = $tmp285;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp285));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
    return $returnValue282;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result297 = NULL;
    panda$core$MutableString* $tmp298;
    panda$core$MutableString* $tmp299;
    org$pandalanguage$pandac$parser$Token token303;
    org$pandalanguage$pandac$parser$Token$Kind $match$238_13305;
    panda$core$Int64 $tmp306;
    panda$core$String* str311 = NULL;
    panda$core$String* $tmp312;
    panda$core$String* $tmp313;
    panda$core$Char8 $tmp315;
    panda$core$UInt8 $tmp316;
    panda$core$String* $returnValue319;
    panda$core$String* $tmp320;
    panda$core$Int64 $tmp325;
    panda$core$String* $tmp328;
    panda$core$Int64 $tmp331;
    org$pandalanguage$pandac$parser$Token escape336;
    panda$core$Int64 $tmp338;
    panda$core$String* $tmp341;
    panda$core$String* escapeText345 = NULL;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$Char8 c349;
    panda$core$Object* $tmp350;
    panda$collections$ListView* $tmp351;
    panda$core$Int64 $tmp353;
    panda$core$Char8 $match$257_21358;
    panda$core$Char8 $tmp359;
    panda$core$UInt8 $tmp360;
    panda$core$Char8 $tmp362;
    panda$core$UInt8 $tmp363;
    panda$core$Char8 $tmp364;
    panda$core$UInt8 $tmp365;
    panda$core$Char8 $tmp367;
    panda$core$UInt8 $tmp368;
    panda$core$Char8 $tmp369;
    panda$core$UInt8 $tmp370;
    panda$core$Char8 $tmp372;
    panda$core$UInt8 $tmp373;
    panda$core$Char8 $tmp374;
    panda$core$UInt8 $tmp375;
    panda$core$Char8 $tmp377;
    panda$core$UInt8 $tmp378;
    panda$core$Char8 $tmp379;
    panda$core$UInt8 $tmp380;
    panda$core$Char8 $tmp382;
    panda$core$UInt8 $tmp383;
    panda$core$Char8 $tmp384;
    panda$core$UInt8 $tmp385;
    panda$core$Char8 $tmp387;
    panda$core$UInt8 $tmp388;
    panda$core$Char8 $tmp389;
    panda$core$UInt8 $tmp390;
    panda$core$Char8 $tmp392;
    panda$core$UInt8 $tmp393;
    panda$core$String* $tmp395;
    panda$core$String* $tmp399;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp400;
    panda$core$Bit $tmp403;
    panda$core$Int64 $tmp406;
    panda$core$String* $tmp408;
    panda$core$String* $tmp409;
    panda$core$String* $tmp413;
    int $tmp296;
    {
        panda$core$MutableString* $tmp300 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp300);
        $tmp299 = $tmp300;
        $tmp298 = $tmp299;
        result297 = $tmp298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
        $l301:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp304 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token303 = $tmp304;
            {
                $match$238_13305 = token303.kind;
                panda$core$Int64$init$builtin_int64(&$tmp306, 12);
                panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13305.$rawValue, $tmp306);
                if ($tmp307.value) {
                {
                    int $tmp310;
                    {
                        panda$core$String* $tmp314 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token303);
                        $tmp313 = $tmp314;
                        $tmp312 = $tmp313;
                        str311 = $tmp312;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                        panda$core$UInt8$init$builtin_uint8(&$tmp316, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp315, $tmp316);
                        panda$core$Bit $tmp317 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str311, $tmp315);
                        if ($tmp317.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token303, &$s318);
                            $tmp320 = NULL;
                            $returnValue319 = $tmp320;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                            $tmp310 = 0;
                            goto $l308;
                            $l321:;
                            $tmp296 = 0;
                            goto $l294;
                            $l322:;
                            return $returnValue319;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result297, str311);
                    }
                    $tmp310 = -1;
                    goto $l308;
                    $l308:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str311));
                    str311 = NULL;
                    switch ($tmp310) {
                        case -1: goto $l324;
                        case 0: goto $l321;
                    }
                    $l324:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp325, 0);
                panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13305.$rawValue, $tmp325);
                if ($tmp326.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token303, &$s327);
                    $tmp328 = NULL;
                    $returnValue319 = $tmp328;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
                    $tmp296 = 1;
                    goto $l294;
                    $l329:;
                    return $returnValue319;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp331, 106);
                panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13305.$rawValue, $tmp331);
                if ($tmp332.value) {
                {
                    int $tmp335;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp337 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape336 = $tmp337;
                        panda$core$Int64$init$builtin_int64(&$tmp338, 0);
                        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape336.kind.$rawValue, $tmp338);
                        if ($tmp339.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token303, &$s340);
                            $tmp341 = NULL;
                            $returnValue319 = $tmp341;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
                            $tmp335 = 0;
                            goto $l333;
                            $l342:;
                            $tmp296 = 2;
                            goto $l294;
                            $l343:;
                            return $returnValue319;
                        }
                        }
                        panda$core$String* $tmp348 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape336);
                        $tmp347 = $tmp348;
                        $tmp346 = $tmp347;
                        escapeText345 = $tmp346;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                        panda$collections$ListView* $tmp352 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText345);
                        $tmp351 = $tmp352;
                        panda$core$Int64$init$builtin_int64(&$tmp353, 0);
                        ITable* $tmp354 = $tmp351->$class->itable;
                        while ($tmp354->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp354 = $tmp354->next;
                        }
                        $fn356 $tmp355 = $tmp354->methods[0];
                        panda$core$Object* $tmp357 = $tmp355($tmp351, $tmp353);
                        $tmp350 = $tmp357;
                        c349 = ((panda$core$Char8$wrapper*) $tmp350)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp350);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
                        {
                            $match$257_21358 = c349;
                            panda$core$UInt8$init$builtin_uint8(&$tmp360, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp359, $tmp360);
                            panda$core$Bit $tmp361 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp359);
                            if ($tmp361.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp363, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp362, $tmp363);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp362);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp365, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp364, $tmp365);
                            panda$core$Bit $tmp366 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp364);
                            if ($tmp366.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp368, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp367, $tmp368);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp367);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp370, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp369, $tmp370);
                            panda$core$Bit $tmp371 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp369);
                            if ($tmp371.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp373, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp372, $tmp373);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp372);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp375, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp374, $tmp375);
                            panda$core$Bit $tmp376 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp374);
                            if ($tmp376.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp378, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp377, $tmp378);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp377);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp380, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp379, $tmp380);
                            panda$core$Bit $tmp381 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp379);
                            if ($tmp381.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp383, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp382, $tmp383);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp382);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp385, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp384, $tmp385);
                            panda$core$Bit $tmp386 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp384);
                            if ($tmp386.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp388, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp387, $tmp388);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp387);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp390, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp389, $tmp390);
                            panda$core$Bit $tmp391 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$257_21358, $tmp389);
                            if ($tmp391.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp393, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp392, $tmp393);
                                panda$core$MutableString$append$panda$core$Char8(result297, $tmp392);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token303, &$s394);
                                $tmp395 = NULL;
                                $returnValue319 = $tmp395;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
                                $tmp335 = 1;
                                goto $l333;
                                $l396:;
                                $tmp296 = 3;
                                goto $l294;
                                $l397:;
                                return $returnValue319;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp401 = panda$core$String$start$R$panda$core$String$Index(escapeText345);
                        panda$core$String$Index $tmp402 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText345, $tmp401);
                        panda$core$Bit$init$builtin_bit(&$tmp403, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp400, ((panda$core$String$Index$nullable) { $tmp402, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp403);
                        panda$core$String* $tmp404 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText345, $tmp400);
                        $tmp399 = $tmp404;
                        panda$core$MutableString$append$panda$core$String(result297, $tmp399);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
                    }
                    $tmp335 = -1;
                    goto $l333;
                    $l333:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText345));
                    escapeText345 = NULL;
                    switch ($tmp335) {
                        case -1: goto $l405;
                        case 0: goto $l342;
                        case 1: goto $l396;
                    }
                    $l405:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp406, 100);
                panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_13305.$rawValue, $tmp406);
                if ($tmp407.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token303);
                    panda$core$String* $tmp410 = panda$core$MutableString$finish$R$panda$core$String(result297);
                    $tmp409 = $tmp410;
                    $tmp408 = $tmp409;
                    $returnValue319 = $tmp408;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                    $tmp296 = 4;
                    goto $l294;
                    $l411:;
                    return $returnValue319;
                }
                }
                else {
                {
                    panda$core$String* $tmp414 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token303);
                    $tmp413 = $tmp414;
                    panda$core$MutableString$append$panda$core$String(result297, $tmp413);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                }
                }
                }
                }
                }
            }
        }
        }
        $l302:;
    }
    $tmp296 = -1;
    goto $l294;
    $l294:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result297));
    result297 = NULL;
    switch ($tmp296) {
        case 4: goto $l411;
        case 1: goto $l329;
        case 0: goto $l322;
        case -1: goto $l415;
        case 2: goto $l343;
        case 3: goto $l397;
    }
    $l415:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result419 = NULL;
    panda$core$MutableString* $tmp420;
    panda$core$MutableString* $tmp421;
    org$pandalanguage$pandac$parser$Token token425;
    org$pandalanguage$pandac$parser$Token$Kind $match$283_13427;
    panda$core$Int64 $tmp428;
    panda$core$String* str433 = NULL;
    panda$core$String* $tmp434;
    panda$core$String* $tmp435;
    panda$core$Char8 $tmp437;
    panda$core$UInt8 $tmp438;
    panda$core$String* $returnValue441;
    panda$core$String* $tmp442;
    panda$core$Int64 $tmp447;
    panda$core$String* $tmp450;
    panda$core$Int64 $tmp453;
    org$pandalanguage$pandac$parser$Token escape458;
    panda$core$Int64 $tmp460;
    panda$core$String* $tmp463;
    panda$core$String* escapeText467 = NULL;
    panda$core$String* $tmp468;
    panda$core$String* $tmp469;
    panda$core$Char8 c471;
    panda$core$Object* $tmp472;
    panda$collections$ListView* $tmp473;
    panda$core$Int64 $tmp475;
    panda$core$Char8 $match$302_21480;
    panda$core$Char8 $tmp481;
    panda$core$UInt8 $tmp482;
    panda$core$Char8 $tmp484;
    panda$core$UInt8 $tmp485;
    panda$core$Char8 $tmp486;
    panda$core$UInt8 $tmp487;
    panda$core$Char8 $tmp489;
    panda$core$UInt8 $tmp490;
    panda$core$Char8 $tmp491;
    panda$core$UInt8 $tmp492;
    panda$core$Char8 $tmp494;
    panda$core$UInt8 $tmp495;
    panda$core$Char8 $tmp496;
    panda$core$UInt8 $tmp497;
    panda$core$Char8 $tmp499;
    panda$core$UInt8 $tmp500;
    panda$core$Char8 $tmp501;
    panda$core$UInt8 $tmp502;
    panda$core$Char8 $tmp504;
    panda$core$UInt8 $tmp505;
    panda$core$Char8 $tmp506;
    panda$core$UInt8 $tmp507;
    panda$core$Char8 $tmp509;
    panda$core$UInt8 $tmp510;
    panda$core$Char8 $tmp511;
    panda$core$UInt8 $tmp512;
    panda$core$Char8 $tmp514;
    panda$core$UInt8 $tmp515;
    panda$core$Char8 $tmp516;
    panda$core$UInt8 $tmp517;
    panda$core$Char8 $tmp519;
    panda$core$UInt8 $tmp520;
    panda$core$String* $tmp522;
    panda$core$String* $tmp526;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp527;
    panda$core$Bit $tmp530;
    panda$core$Int64 $tmp533;
    panda$core$String* $tmp535;
    panda$core$String* $tmp536;
    panda$core$Int64 $tmp540;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$String* $tmp547;
    int $tmp418;
    {
        panda$core$MutableString* $tmp422 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp422);
        $tmp421 = $tmp422;
        $tmp420 = $tmp421;
        result419 = $tmp420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
        $l423:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp426 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token425 = $tmp426;
            {
                $match$283_13427 = token425.kind;
                panda$core$Int64$init$builtin_int64(&$tmp428, 12);
                panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13427.$rawValue, $tmp428);
                if ($tmp429.value) {
                {
                    int $tmp432;
                    {
                        panda$core$String* $tmp436 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token425);
                        $tmp435 = $tmp436;
                        $tmp434 = $tmp435;
                        str433 = $tmp434;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                        panda$core$UInt8$init$builtin_uint8(&$tmp438, 10);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp437, $tmp438);
                        panda$core$Bit $tmp439 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str433, $tmp437);
                        if ($tmp439.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token425, &$s440);
                            $tmp442 = NULL;
                            $returnValue441 = $tmp442;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
                            $tmp432 = 0;
                            goto $l430;
                            $l443:;
                            $tmp418 = 0;
                            goto $l416;
                            $l444:;
                            return $returnValue441;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result419, str433);
                    }
                    $tmp432 = -1;
                    goto $l430;
                    $l430:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str433));
                    str433 = NULL;
                    switch ($tmp432) {
                        case 0: goto $l443;
                        case -1: goto $l446;
                    }
                    $l446:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp447, 0);
                panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13427.$rawValue, $tmp447);
                if ($tmp448.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token425, &$s449);
                    $tmp450 = NULL;
                    $returnValue441 = $tmp450;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
                    $tmp418 = 1;
                    goto $l416;
                    $l451:;
                    return $returnValue441;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp453, 106);
                panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13427.$rawValue, $tmp453);
                if ($tmp454.value) {
                {
                    int $tmp457;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp459 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape458 = $tmp459;
                        panda$core$Int64$init$builtin_int64(&$tmp460, 0);
                        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape458.kind.$rawValue, $tmp460);
                        if ($tmp461.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token425, &$s462);
                            $tmp463 = NULL;
                            $returnValue441 = $tmp463;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
                            $tmp457 = 0;
                            goto $l455;
                            $l464:;
                            $tmp418 = 2;
                            goto $l416;
                            $l465:;
                            return $returnValue441;
                        }
                        }
                        panda$core$String* $tmp470 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape458);
                        $tmp469 = $tmp470;
                        $tmp468 = $tmp469;
                        escapeText467 = $tmp468;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                        panda$collections$ListView* $tmp474 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText467);
                        $tmp473 = $tmp474;
                        panda$core$Int64$init$builtin_int64(&$tmp475, 0);
                        ITable* $tmp476 = $tmp473->$class->itable;
                        while ($tmp476->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp476 = $tmp476->next;
                        }
                        $fn478 $tmp477 = $tmp476->methods[0];
                        panda$core$Object* $tmp479 = $tmp477($tmp473, $tmp475);
                        $tmp472 = $tmp479;
                        c471 = ((panda$core$Char8$wrapper*) $tmp472)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp472);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                        {
                            $match$302_21480 = c471;
                            panda$core$UInt8$init$builtin_uint8(&$tmp482, 110);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp481, $tmp482);
                            panda$core$Bit $tmp483 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp481);
                            if ($tmp483.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp485, 10);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp484, $tmp485);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp484);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp487, 114);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp486, $tmp487);
                            panda$core$Bit $tmp488 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp486);
                            if ($tmp488.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp490, 13);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp489, $tmp490);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp489);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp492, 116);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp491, $tmp492);
                            panda$core$Bit $tmp493 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp491);
                            if ($tmp493.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp495, 9);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp494, $tmp495);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp494);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp497, 39);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp496, $tmp497);
                            panda$core$Bit $tmp498 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp496);
                            if ($tmp498.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp500, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp499, $tmp500);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp499);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp502, 34);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp501, $tmp502);
                            panda$core$Bit $tmp503 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp501);
                            if ($tmp503.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp505, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp504, $tmp505);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp504);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp507, 92);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp506, $tmp507);
                            panda$core$Bit $tmp508 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp506);
                            if ($tmp508.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp510, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp509, $tmp510);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp509);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp512, 58);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp511, $tmp512);
                            panda$core$Bit $tmp513 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp511);
                            if ($tmp513.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp515, 58);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp514, $tmp515);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp514);
                            }
                            }
                            else {
                            panda$core$UInt8$init$builtin_uint8(&$tmp517, 125);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp516, $tmp517);
                            panda$core$Bit $tmp518 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$302_21480, $tmp516);
                            if ($tmp518.value) {
                            {
                                panda$core$UInt8$init$builtin_uint8(&$tmp520, 125);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp519, $tmp520);
                                panda$core$MutableString$append$panda$core$Char8(result419, $tmp519);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token425, &$s521);
                                $tmp522 = NULL;
                                $returnValue441 = $tmp522;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
                                $tmp457 = 1;
                                goto $l455;
                                $l523:;
                                $tmp418 = 3;
                                goto $l416;
                                $l524:;
                                return $returnValue441;
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
                        panda$core$String$Index $tmp528 = panda$core$String$start$R$panda$core$String$Index(escapeText467);
                        panda$core$String$Index $tmp529 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText467, $tmp528);
                        panda$core$Bit$init$builtin_bit(&$tmp530, false);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp527, ((panda$core$String$Index$nullable) { $tmp529, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp530);
                        panda$core$String* $tmp531 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText467, $tmp527);
                        $tmp526 = $tmp531;
                        panda$core$MutableString$append$panda$core$String(result419, $tmp526);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
                    }
                    $tmp457 = -1;
                    goto $l455;
                    $l455:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText467));
                    escapeText467 = NULL;
                    switch ($tmp457) {
                        case 0: goto $l464;
                        case -1: goto $l532;
                        case 1: goto $l523;
                    }
                    $l532:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp533, 95);
                panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13427.$rawValue, $tmp533);
                if ($tmp534.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token425);
                    panda$core$String* $tmp537 = panda$core$MutableString$finish$R$panda$core$String(result419);
                    $tmp536 = $tmp537;
                    $tmp535 = $tmp536;
                    $returnValue441 = $tmp535;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                    $tmp418 = 4;
                    goto $l416;
                    $l538:;
                    return $returnValue441;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp540, 100);
                panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13427.$rawValue, $tmp540);
                if ($tmp541.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token425);
                    panda$core$String* $tmp544 = panda$core$MutableString$finish$R$panda$core$String(result419);
                    $tmp543 = $tmp544;
                    $tmp542 = $tmp543;
                    $returnValue441 = $tmp542;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                    $tmp418 = 5;
                    goto $l416;
                    $l545:;
                    return $returnValue441;
                }
                }
                else {
                {
                    panda$core$String* $tmp548 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token425);
                    $tmp547 = $tmp548;
                    panda$core$MutableString$append$panda$core$String(result419, $tmp547);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l424:;
    }
    $tmp418 = -1;
    goto $l416;
    $l416:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result419));
    result419 = NULL;
    switch ($tmp418) {
        case 4: goto $l538;
        case -1: goto $l549;
        case 2: goto $l465;
        case 0: goto $l444;
        case 1: goto $l451;
        case 3: goto $l524;
        case 5: goto $l545;
    }
    $l549:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp554;
    org$pandalanguage$pandac$ASTNode* $tmp555;
    panda$core$Int64 $tmp557;
    org$pandalanguage$pandac$ASTNode* call561 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp562;
    org$pandalanguage$pandac$ASTNode* $tmp563;
    panda$core$Int64 $tmp565;
    panda$collections$ImmutableArray* $tmp568;
    org$pandalanguage$pandac$ASTNode* stringType570 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp571;
    org$pandalanguage$pandac$ASTNode* $tmp572;
    panda$core$Int64 $tmp574;
    org$pandalanguage$pandac$ASTNode* $returnValue578;
    org$pandalanguage$pandac$ASTNode* $tmp579;
    org$pandalanguage$pandac$ASTNode* $tmp580;
    panda$core$Int64 $tmp582;
    org$pandalanguage$pandac$parser$Token$Kind $tmp585;
    panda$core$Int64 $tmp586;
    int $tmp552;
    {
        org$pandalanguage$pandac$ASTNode* $tmp556 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp557, 15);
        org$pandalanguage$pandac$Position $tmp559 = (($fn558) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp556, $tmp557, $tmp559, p_expr, &$s560);
        $tmp555 = $tmp556;
        $tmp554 = $tmp555;
        dot553 = $tmp554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
        org$pandalanguage$pandac$ASTNode* $tmp564 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp565, 8);
        org$pandalanguage$pandac$Position $tmp567 = (($fn566) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp569 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp569);
        $tmp568 = $tmp569;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp564, $tmp565, $tmp567, dot553, $tmp568);
        $tmp563 = $tmp564;
        $tmp562 = $tmp563;
        call561 = $tmp562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
        org$pandalanguage$pandac$ASTNode* $tmp573 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp574, 42);
        org$pandalanguage$pandac$Position $tmp576 = (($fn575) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp573, $tmp574, $tmp576, &$s577);
        $tmp572 = $tmp573;
        $tmp571 = $tmp572;
        stringType570 = $tmp571;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
        org$pandalanguage$pandac$ASTNode* $tmp581 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp582, 4);
        org$pandalanguage$pandac$Position $tmp584 = (($fn583) p_expr->$class->vtable[2])(p_expr);
        panda$core$Int64$init$builtin_int64(&$tmp586, 89);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp585, $tmp586);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp581, $tmp582, $tmp584, call561, $tmp585, stringType570);
        $tmp580 = $tmp581;
        $tmp579 = $tmp580;
        $returnValue578 = $tmp579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
        $tmp552 = 0;
        goto $l550;
        $l587:;
        return $returnValue578;
    }
    $l550:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call561));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot553));
    dot553 = NULL;
    call561 = NULL;
    stringType570 = NULL;
    switch ($tmp552) {
        case 0: goto $l587;
    }
    $l589:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1593;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* auto597 = NULL;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp598;
    org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp599;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp601;
    panda$core$Int64 $tmp602;
    org$pandalanguage$pandac$parser$Token start603;
    panda$core$Int64 $tmp606;
    panda$core$Int64 $tmp609;
    panda$core$String* $tmp612;
    panda$core$String* $tmp613;
    panda$core$String* $tmp615;
    org$pandalanguage$pandac$ASTNode* $returnValue620;
    org$pandalanguage$pandac$ASTNode* $tmp621;
    org$pandalanguage$pandac$ASTNode* result625 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp626;
    panda$core$MutableString* chunk627 = NULL;
    panda$core$MutableString* $tmp628;
    panda$core$MutableString* $tmp629;
    org$pandalanguage$pandac$parser$Token token633;
    org$pandalanguage$pandac$parser$Token$Kind $match$351_13636;
    panda$core$Int64 $tmp637;
    panda$core$String* str642 = NULL;
    panda$core$String* $tmp643;
    panda$core$String* $tmp644;
    panda$core$Char8 $tmp646;
    panda$core$UInt8 $tmp647;
    org$pandalanguage$pandac$ASTNode* $tmp650;
    panda$core$Int64 $tmp656;
    org$pandalanguage$pandac$ASTNode* $tmp659;
    panda$core$Int64 $tmp663;
    org$pandalanguage$pandac$parser$Token escape668;
    panda$core$Int64 $tmp670;
    org$pandalanguage$pandac$ASTNode* $tmp673;
    panda$core$String* escapeText678 = NULL;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$Char8 c682;
    panda$core$Object* $tmp683;
    panda$collections$ListView* $tmp684;
    panda$core$Int64 $tmp686;
    panda$core$Char8 $match$370_21691;
    panda$core$Char8 $tmp692;
    panda$core$UInt8 $tmp693;
    panda$core$Char8 $tmp695;
    panda$core$UInt8 $tmp696;
    panda$core$Char8 $tmp697;
    panda$core$UInt8 $tmp698;
    panda$core$Char8 $tmp700;
    panda$core$UInt8 $tmp701;
    panda$core$Char8 $tmp702;
    panda$core$UInt8 $tmp703;
    panda$core$Char8 $tmp705;
    panda$core$UInt8 $tmp706;
    panda$core$Char8 $tmp707;
    panda$core$UInt8 $tmp708;
    panda$core$Char8 $tmp710;
    panda$core$UInt8 $tmp711;
    panda$core$Char8 $tmp712;
    panda$core$UInt8 $tmp713;
    panda$core$Char8 $tmp715;
    panda$core$UInt8 $tmp716;
    panda$core$Char8 $tmp717;
    panda$core$UInt8 $tmp718;
    panda$core$Char8 $tmp720;
    panda$core$UInt8 $tmp721;
    panda$core$Char8 $tmp722;
    panda$core$UInt8 $tmp723;
    panda$core$Bit oldAllow728;
    panda$core$Bit $tmp729;
    org$pandalanguage$pandac$ASTNode* expr730 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp731;
    org$pandalanguage$pandac$ASTNode* $tmp732;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    panda$core$String* align740 = NULL;
    panda$core$String* $tmp741;
    panda$core$String* format742 = NULL;
    panda$core$String* $tmp743;
    org$pandalanguage$pandac$parser$Token$Kind $tmp744;
    panda$core$Int64 $tmp745;
    panda$core$String* $tmp747;
    panda$core$String* $tmp748;
    panda$core$String* $tmp749;
    org$pandalanguage$pandac$parser$Token$Kind $tmp751;
    panda$core$Int64 $tmp752;
    panda$core$String* $tmp757;
    panda$core$String* $tmp758;
    panda$core$String* $tmp759;
    org$pandalanguage$pandac$ASTNode* $tmp761;
    org$pandalanguage$pandac$ASTNode* formattable768 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp769;
    org$pandalanguage$pandac$ASTNode* $tmp770;
    panda$core$Int64 $tmp772;
    org$pandalanguage$pandac$ASTNode* cast776 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp777;
    org$pandalanguage$pandac$ASTNode* $tmp778;
    panda$core$Int64 $tmp780;
    org$pandalanguage$pandac$parser$Token$Kind $tmp783;
    panda$core$Int64 $tmp784;
    org$pandalanguage$pandac$ASTNode* dot785 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp786;
    org$pandalanguage$pandac$ASTNode* $tmp787;
    panda$core$Int64 $tmp789;
    panda$collections$Array* callArgs793 = NULL;
    panda$collections$Array* $tmp794;
    panda$collections$Array* $tmp795;
    org$pandalanguage$pandac$ASTNode* $tmp797;
    panda$core$Int64 $tmp799;
    org$pandalanguage$pandac$ASTNode* $tmp800;
    org$pandalanguage$pandac$ASTNode* $tmp801;
    org$pandalanguage$pandac$ASTNode* $tmp802;
    panda$core$Int64 $tmp804;
    panda$collections$ImmutableArray* $tmp807;
    org$pandalanguage$pandac$parser$Token$Kind $tmp810;
    panda$core$Int64 $tmp811;
    org$pandalanguage$pandac$ASTNode* $tmp814;
    org$pandalanguage$pandac$ASTNode* $tmp823;
    org$pandalanguage$pandac$ASTNode* $tmp824;
    org$pandalanguage$pandac$ASTNode* $tmp825;
    org$pandalanguage$pandac$ASTNode* pandaType827 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    panda$core$Int64 $tmp831;
    org$pandalanguage$pandac$ASTNode* callTarget835 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp836;
    org$pandalanguage$pandac$ASTNode* $tmp837;
    panda$core$Int64 $tmp839;
    panda$collections$Array* callArgs843 = NULL;
    panda$collections$Array* $tmp844;
    panda$collections$Array* $tmp845;
    org$pandalanguage$pandac$ASTNode* $tmp847;
    panda$core$Int64 $tmp849;
    org$pandalanguage$pandac$ASTNode* $tmp850;
    org$pandalanguage$pandac$ASTNode* $tmp851;
    org$pandalanguage$pandac$ASTNode* $tmp852;
    panda$core$Int64 $tmp854;
    panda$collections$ImmutableArray* $tmp857;
    panda$core$String* text860 = NULL;
    panda$core$String* $tmp861;
    panda$core$String* $tmp862;
    panda$core$MutableString* $tmp864;
    panda$core$MutableString* $tmp865;
    panda$core$MutableString* $tmp866;
    org$pandalanguage$pandac$ASTNode* $tmp873;
    org$pandalanguage$pandac$ASTNode* $tmp874;
    org$pandalanguage$pandac$ASTNode* $tmp875;
    org$pandalanguage$pandac$ASTNode* $tmp876;
    panda$core$Int64 $tmp878;
    org$pandalanguage$pandac$ASTNode* $tmp880;
    org$pandalanguage$pandac$ASTNode* $tmp881;
    org$pandalanguage$pandac$ASTNode* $tmp882;
    org$pandalanguage$pandac$ASTNode* $tmp884;
    org$pandalanguage$pandac$ASTNode* $tmp885;
    org$pandalanguage$pandac$ASTNode* $tmp886;
    org$pandalanguage$pandac$ASTNode* $tmp890;
    panda$core$String* $tmp895;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp896;
    panda$core$Bit $tmp899;
    panda$core$String* $tmp902;
    org$pandalanguage$pandac$ASTNode* $tmp904;
    org$pandalanguage$pandac$ASTNode* $tmp905;
    org$pandalanguage$pandac$ASTNode* $tmp906;
    panda$core$Int64 $tmp908;
    panda$core$String* $tmp909;
    int $tmp592;
    {
        $atPre1593 = self->allowLambdas;
        int $tmp596;
        {
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* $tmp600 = (org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class);
            panda$core$Int64$init$builtin_int64(&$tmp602, 10);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp601, $tmp602);
            org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind($tmp600, self, $tmp601);
            $tmp599 = $tmp600;
            $tmp598 = $tmp599;
            auto597 = $tmp598;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
            org$pandalanguage$pandac$parser$Token $tmp604 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start603 = $tmp604;
            panda$core$Int64$init$builtin_int64(&$tmp606, 7);
            panda$core$Bit $tmp607 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start603.kind.$rawValue, $tmp606);
            bool $tmp605 = $tmp607.value;
            if (!$tmp605) goto $l608;
            panda$core$Int64$init$builtin_int64(&$tmp609, 6);
            panda$core$Bit $tmp610 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start603.kind.$rawValue, $tmp609);
            $tmp605 = $tmp610.value;
            $l608:;
            panda$core$Bit $tmp611 = { $tmp605 };
            if ($tmp611.value) {
            {
                panda$core$String* $tmp616 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start603);
                $tmp615 = $tmp616;
                panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s614, $tmp615);
                $tmp613 = $tmp617;
                panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s618);
                $tmp612 = $tmp619;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start603, $tmp612);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp612));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                $tmp621 = NULL;
                $returnValue620 = $tmp621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
                $tmp596 = 0;
                goto $l594;
                $l622:;
                $tmp592 = 0;
                goto $l590;
                $l623:;
                return $returnValue620;
            }
            }
            $tmp626 = NULL;
            result625 = $tmp626;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
            panda$core$MutableString* $tmp630 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp630);
            $tmp629 = $tmp630;
            $tmp628 = $tmp629;
            chunk627 = $tmp628;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
            $l631:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp634 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token633 = $tmp634;
                panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token633.kind.$rawValue, start603.kind.$rawValue);
                if ($tmp635.value) {
                {
                    goto $l632;
                }
                }
                {
                    $match$351_13636 = token633.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp637, 12);
                    panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_13636.$rawValue, $tmp637);
                    if ($tmp638.value) {
                    {
                        int $tmp641;
                        {
                            panda$core$String* $tmp645 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token633);
                            $tmp644 = $tmp645;
                            $tmp643 = $tmp644;
                            str642 = $tmp643;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp643));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                            panda$core$UInt8$init$builtin_uint8(&$tmp647, 10);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp646, $tmp647);
                            panda$core$Bit $tmp648 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str642, $tmp646);
                            if ($tmp648.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start603, &$s649);
                                $tmp650 = NULL;
                                $returnValue620 = $tmp650;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
                                $tmp641 = 0;
                                goto $l639;
                                $l651:;
                                $tmp596 = 1;
                                goto $l594;
                                $l652:;
                                $tmp592 = 1;
                                goto $l590;
                                $l653:;
                                return $returnValue620;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk627, str642);
                        }
                        $tmp641 = -1;
                        goto $l639;
                        $l639:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str642));
                        str642 = NULL;
                        switch ($tmp641) {
                            case -1: goto $l655;
                            case 0: goto $l651;
                        }
                        $l655:;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp656, 0);
                    panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_13636.$rawValue, $tmp656);
                    if ($tmp657.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start603, &$s658);
                        $tmp659 = NULL;
                        $returnValue620 = $tmp659;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
                        $tmp596 = 2;
                        goto $l594;
                        $l660:;
                        $tmp592 = 2;
                        goto $l590;
                        $l661:;
                        return $returnValue620;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp663, 106);
                    panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_13636.$rawValue, $tmp663);
                    if ($tmp664.value) {
                    {
                        int $tmp667;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp669 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape668 = $tmp669;
                            panda$core$Int64$init$builtin_int64(&$tmp670, 0);
                            panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape668.kind.$rawValue, $tmp670);
                            if ($tmp671.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start603, &$s672);
                                $tmp673 = NULL;
                                $returnValue620 = $tmp673;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp673));
                                $tmp667 = 0;
                                goto $l665;
                                $l674:;
                                $tmp596 = 3;
                                goto $l594;
                                $l675:;
                                $tmp592 = 3;
                                goto $l590;
                                $l676:;
                                return $returnValue620;
                            }
                            }
                            panda$core$String* $tmp681 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape668);
                            $tmp680 = $tmp681;
                            $tmp679 = $tmp680;
                            escapeText678 = $tmp679;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                            panda$collections$ListView* $tmp685 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText678);
                            $tmp684 = $tmp685;
                            panda$core$Int64$init$builtin_int64(&$tmp686, 0);
                            ITable* $tmp687 = $tmp684->$class->itable;
                            while ($tmp687->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp687 = $tmp687->next;
                            }
                            $fn689 $tmp688 = $tmp687->methods[0];
                            panda$core$Object* $tmp690 = $tmp688($tmp684, $tmp686);
                            $tmp683 = $tmp690;
                            c682 = ((panda$core$Char8$wrapper*) $tmp683)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp683);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                            {
                                $match$370_21691 = c682;
                                panda$core$UInt8$init$builtin_uint8(&$tmp693, 110);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp692, $tmp693);
                                panda$core$Bit $tmp694 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp692);
                                if ($tmp694.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp696, 10);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp695, $tmp696);
                                    panda$core$MutableString$append$panda$core$Char8(chunk627, $tmp695);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp698, 114);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp697, $tmp698);
                                panda$core$Bit $tmp699 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp697);
                                if ($tmp699.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp701, 13);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp700, $tmp701);
                                    panda$core$MutableString$append$panda$core$Char8(chunk627, $tmp700);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp703, 116);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp702, $tmp703);
                                panda$core$Bit $tmp704 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp702);
                                if ($tmp704.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp706, 9);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp705, $tmp706);
                                    panda$core$MutableString$append$panda$core$Char8(chunk627, $tmp705);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp708, 39);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp707, $tmp708);
                                panda$core$Bit $tmp709 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp707);
                                if ($tmp709.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp711, 39);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp710, $tmp711);
                                    panda$core$MutableString$append$panda$core$Char8(chunk627, $tmp710);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp713, 34);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp712, $tmp713);
                                panda$core$Bit $tmp714 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp712);
                                if ($tmp714.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp716, 34);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp715, $tmp716);
                                    panda$core$MutableString$append$panda$core$Char8(chunk627, $tmp715);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp718, 92);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp717, $tmp718);
                                panda$core$Bit $tmp719 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp717);
                                if ($tmp719.value) {
                                {
                                    panda$core$UInt8$init$builtin_uint8(&$tmp721, 92);
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp720, $tmp721);
                                    panda$core$MutableString$append$panda$core$Char8(chunk627, $tmp720);
                                }
                                }
                                else {
                                panda$core$UInt8$init$builtin_uint8(&$tmp723, 123);
                                panda$core$Char8$init$panda$core$UInt8(&$tmp722, $tmp723);
                                panda$core$Bit $tmp724 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$370_21691, $tmp722);
                                if ($tmp724.value) {
                                {
                                    {
                                        int $tmp727;
                                        {
                                            oldAllow728 = self->allowLambdas;
                                            panda$core$Bit$init$builtin_bit(&$tmp729, false);
                                            self->allowLambdas = $tmp729;
                                            org$pandalanguage$pandac$ASTNode* $tmp733 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp732 = $tmp733;
                                            $tmp731 = $tmp732;
                                            expr730 = $tmp731;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                                            self->allowLambdas = oldAllow728;
                                            if (((panda$core$Bit) { expr730 == NULL }).value) {
                                            {
                                                $tmp734 = NULL;
                                                $returnValue620 = $tmp734;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                                                $tmp727 = 0;
                                                goto $l725;
                                                $l735:;
                                                $tmp667 = 1;
                                                goto $l665;
                                                $l736:;
                                                $tmp596 = 4;
                                                goto $l594;
                                                $l737:;
                                                $tmp592 = 4;
                                                goto $l590;
                                                $l738:;
                                                return $returnValue620;
                                            }
                                            }
                                            $tmp741 = NULL;
                                            align740 = $tmp741;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp741));
                                            $tmp743 = NULL;
                                            format742 = $tmp743;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
                                            panda$core$Int64$init$builtin_int64(&$tmp745, 105);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp744, $tmp745);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp746 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp744);
                                            if (((panda$core$Bit) { $tmp746.nonnull }).value) {
                                            {
                                                {
                                                    $tmp747 = align740;
                                                    panda$core$String* $tmp750 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start603);
                                                    $tmp749 = $tmp750;
                                                    $tmp748 = $tmp749;
                                                    align740 = $tmp748;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
                                                }
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp752, 95);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp751, $tmp752);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp753 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp751);
                                            if (((panda$core$Bit) { $tmp753.nonnull }).value) {
                                            {
                                                int $tmp756;
                                                {
                                                    {
                                                        $tmp757 = format742;
                                                        panda$core$String* $tmp760 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start603);
                                                        $tmp759 = $tmp760;
                                                        $tmp758 = $tmp759;
                                                        format742 = $tmp758;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp758));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                                                    }
                                                    if (((panda$core$Bit) { format742 == NULL }).value) {
                                                    {
                                                        $tmp761 = NULL;
                                                        $returnValue620 = $tmp761;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                                                        $tmp756 = 0;
                                                        goto $l754;
                                                        $l762:;
                                                        $tmp727 = 1;
                                                        goto $l725;
                                                        $l763:;
                                                        $tmp667 = 2;
                                                        goto $l665;
                                                        $l764:;
                                                        $tmp596 = 5;
                                                        goto $l594;
                                                        $l765:;
                                                        $tmp592 = 5;
                                                        goto $l590;
                                                        $l766:;
                                                        return $returnValue620;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp771 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp772, 42);
                                                    org$pandalanguage$pandac$Position $tmp774 = (($fn773) expr730->$class->vtable[2])(expr730);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp771, $tmp772, $tmp774, &$s775);
                                                    $tmp770 = $tmp771;
                                                    $tmp769 = $tmp770;
                                                    formattable768 = $tmp769;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp769));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                                                    org$pandalanguage$pandac$ASTNode* $tmp779 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp780, 4);
                                                    org$pandalanguage$pandac$Position $tmp782 = (($fn781) expr730->$class->vtable[2])(expr730);
                                                    panda$core$Int64$init$builtin_int64(&$tmp784, 89);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp783, $tmp784);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp779, $tmp780, $tmp782, expr730, $tmp783, formattable768);
                                                    $tmp778 = $tmp779;
                                                    $tmp777 = $tmp778;
                                                    cast776 = $tmp777;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                                                    org$pandalanguage$pandac$ASTNode* $tmp788 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp789, 15);
                                                    org$pandalanguage$pandac$Position $tmp791 = (($fn790) expr730->$class->vtable[2])(expr730);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp788, $tmp789, $tmp791, cast776, &$s792);
                                                    $tmp787 = $tmp788;
                                                    $tmp786 = $tmp787;
                                                    dot785 = $tmp786;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp786));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
                                                    panda$collections$Array* $tmp796 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp796);
                                                    $tmp795 = $tmp796;
                                                    $tmp794 = $tmp795;
                                                    callArgs793 = $tmp794;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp794));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
                                                    org$pandalanguage$pandac$ASTNode* $tmp798 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp799, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp798, $tmp799, start603.position, format742);
                                                    $tmp797 = $tmp798;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs793, ((panda$core$Object*) $tmp797));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
                                                    {
                                                        $tmp800 = expr730;
                                                        org$pandalanguage$pandac$ASTNode* $tmp803 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp804, 8);
                                                        org$pandalanguage$pandac$Position $tmp806 = (($fn805) expr730->$class->vtable[2])(expr730);
                                                        panda$collections$ImmutableArray* $tmp808 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs793);
                                                        $tmp807 = $tmp808;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp803, $tmp804, $tmp806, dot785, $tmp807);
                                                        $tmp802 = $tmp803;
                                                        $tmp801 = $tmp802;
                                                        expr730 = $tmp801;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp801));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                                                    }
                                                }
                                                $tmp756 = -1;
                                                goto $l754;
                                                $l754:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs793));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot785));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast776));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable768));
                                                formattable768 = NULL;
                                                cast776 = NULL;
                                                dot785 = NULL;
                                                callArgs793 = NULL;
                                                switch ($tmp756) {
                                                    case -1: goto $l809;
                                                    case 0: goto $l762;
                                                }
                                                $l809:;
                                            }
                                            }
                                            panda$core$Int64$init$builtin_int64(&$tmp811, 100);
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp810, $tmp811);
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp813 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp810, &$s812);
                                            if (((panda$core$Bit) { !$tmp813.nonnull }).value) {
                                            {
                                                $tmp814 = NULL;
                                                $returnValue620 = $tmp814;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp814));
                                                $tmp727 = 2;
                                                goto $l725;
                                                $l815:;
                                                $tmp667 = 3;
                                                goto $l665;
                                                $l816:;
                                                $tmp596 = 6;
                                                goto $l594;
                                                $l817:;
                                                $tmp592 = 6;
                                                goto $l590;
                                                $l818:;
                                                return $returnValue620;
                                            }
                                            }
                                            if (((panda$core$Bit) { align740 != NULL }).value) {
                                            {
                                                int $tmp822;
                                                {
                                                    if (((panda$core$Bit) { format742 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp823 = expr730;
                                                            org$pandalanguage$pandac$ASTNode* $tmp826 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr730);
                                                            $tmp825 = $tmp826;
                                                            $tmp824 = $tmp825;
                                                            expr730 = $tmp824;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp831, 42);
                                                    org$pandalanguage$pandac$Position $tmp833 = (($fn832) expr730->$class->vtable[2])(expr730);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp830, $tmp831, $tmp833, &$s834);
                                                    $tmp829 = $tmp830;
                                                    $tmp828 = $tmp829;
                                                    pandaType827 = $tmp828;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
                                                    org$pandalanguage$pandac$ASTNode* $tmp838 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp839, 15);
                                                    org$pandalanguage$pandac$Position $tmp841 = (($fn840) expr730->$class->vtable[2])(expr730);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp838, $tmp839, $tmp841, pandaType827, &$s842);
                                                    $tmp837 = $tmp838;
                                                    $tmp836 = $tmp837;
                                                    callTarget835 = $tmp836;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp836));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
                                                    panda$collections$Array* $tmp846 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp846);
                                                    $tmp845 = $tmp846;
                                                    $tmp844 = $tmp845;
                                                    callArgs843 = $tmp844;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs843, ((panda$core$Object*) expr730));
                                                    org$pandalanguage$pandac$ASTNode* $tmp848 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp849, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp848, $tmp849, start603.position, align740);
                                                    $tmp847 = $tmp848;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs843, ((panda$core$Object*) $tmp847));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
                                                    {
                                                        $tmp850 = expr730;
                                                        org$pandalanguage$pandac$ASTNode* $tmp853 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        panda$core$Int64$init$builtin_int64(&$tmp854, 8);
                                                        org$pandalanguage$pandac$Position $tmp856 = (($fn855) expr730->$class->vtable[2])(expr730);
                                                        panda$collections$ImmutableArray* $tmp858 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs843);
                                                        $tmp857 = $tmp858;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp853, $tmp854, $tmp856, callTarget835, $tmp857);
                                                        $tmp852 = $tmp853;
                                                        $tmp851 = $tmp852;
                                                        expr730 = $tmp851;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                                                    }
                                                }
                                                $tmp822 = -1;
                                                goto $l820;
                                                $l820:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs843));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget835));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType827));
                                                pandaType827 = NULL;
                                                callTarget835 = NULL;
                                                callArgs843 = NULL;
                                                switch ($tmp822) {
                                                    case -1: goto $l859;
                                                }
                                                $l859:;
                                            }
                                            }
                                            panda$core$String* $tmp863 = panda$core$MutableString$finish$R$panda$core$String(chunk627);
                                            $tmp862 = $tmp863;
                                            $tmp861 = $tmp862;
                                            text860 = $tmp861;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp861));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                                            {
                                                $tmp864 = chunk627;
                                                panda$core$MutableString* $tmp867 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp867);
                                                $tmp866 = $tmp867;
                                                $tmp865 = $tmp866;
                                                chunk627 = $tmp865;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp865));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp864));
                                            }
                                            panda$core$Bit $tmp870 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text860, &$s869);
                                            bool $tmp868 = $tmp870.value;
                                            if ($tmp868) goto $l871;
                                            $tmp868 = ((panda$core$Bit) { result625 != NULL }).value;
                                            $l871:;
                                            panda$core$Bit $tmp872 = { $tmp868 };
                                            if ($tmp872.value) {
                                            {
                                                {
                                                    $tmp873 = result625;
                                                    org$pandalanguage$pandac$ASTNode* $tmp877 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    panda$core$Int64$init$builtin_int64(&$tmp878, 38);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp877, $tmp878, start603.position, text860);
                                                    $tmp876 = $tmp877;
                                                    org$pandalanguage$pandac$ASTNode* $tmp879 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result625, $tmp876);
                                                    $tmp875 = $tmp879;
                                                    $tmp874 = $tmp875;
                                                    result625 = $tmp874;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp874));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
                                                }
                                                {
                                                    $tmp880 = result625;
                                                    org$pandalanguage$pandac$ASTNode* $tmp883 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result625, expr730);
                                                    $tmp882 = $tmp883;
                                                    $tmp881 = $tmp882;
                                                    result625 = $tmp881;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp884 = result625;
                                                    org$pandalanguage$pandac$ASTNode* $tmp887 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr730);
                                                    $tmp886 = $tmp887;
                                                    $tmp885 = $tmp886;
                                                    result625 = $tmp885;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
                                                }
                                            }
                                            }
                                        }
                                        $tmp727 = -1;
                                        goto $l725;
                                        $l725:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text860));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format742));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align740));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr730));
                                        expr730 = NULL;
                                        text860 = NULL;
                                        switch ($tmp727) {
                                            case -1: goto $l888;
                                            case 2: goto $l815;
                                            case 0: goto $l735;
                                            case 1: goto $l763;
                                        }
                                        $l888:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token633, &$s889);
                                    $tmp890 = NULL;
                                    $returnValue620 = $tmp890;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
                                    $tmp667 = 4;
                                    goto $l665;
                                    $l891:;
                                    $tmp596 = 7;
                                    goto $l594;
                                    $l892:;
                                    $tmp592 = 7;
                                    goto $l590;
                                    $l893:;
                                    return $returnValue620;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp897 = panda$core$String$start$R$panda$core$String$Index(escapeText678);
                            panda$core$String$Index $tmp898 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText678, $tmp897);
                            panda$core$Bit$init$builtin_bit(&$tmp899, false);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp896, ((panda$core$String$Index$nullable) { $tmp898, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp899);
                            panda$core$String* $tmp900 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText678, $tmp896);
                            $tmp895 = $tmp900;
                            panda$core$MutableString$append$panda$core$String(chunk627, $tmp895);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
                        }
                        $tmp667 = -1;
                        goto $l665;
                        $l665:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText678));
                        escapeText678 = NULL;
                        switch ($tmp667) {
                            case -1: goto $l901;
                            case 1: goto $l736;
                            case 3: goto $l816;
                            case 2: goto $l764;
                            case 0: goto $l674;
                            case 4: goto $l891;
                        }
                        $l901:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp903 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token633);
                        $tmp902 = $tmp903;
                        panda$core$MutableString$append$panda$core$String(chunk627, $tmp902);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l632:;
            org$pandalanguage$pandac$ASTNode* $tmp907 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp908, 38);
            panda$core$String* $tmp910 = panda$core$MutableString$finish$R$panda$core$String(chunk627);
            $tmp909 = $tmp910;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp907, $tmp908, start603.position, $tmp909);
            $tmp906 = $tmp907;
            org$pandalanguage$pandac$ASTNode* $tmp911 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result625, $tmp906);
            $tmp905 = $tmp911;
            $tmp904 = $tmp905;
            $returnValue620 = $tmp904;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp904));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
            $tmp596 = 8;
            goto $l594;
            $l912:;
            $tmp592 = 8;
            goto $l590;
            $l913:;
            return $returnValue620;
        }
        $l594:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) auto597));
        auto597 = NULL;
        chunk627 = NULL;
        switch ($tmp596) {
            case 4: goto $l737;
            case 1: goto $l652;
            case 7: goto $l892;
            case 6: goto $l817;
            case 2: goto $l660;
            case 8: goto $l912;
            case 3: goto $l675;
            case 0: goto $l622;
            case 5: goto $l765;
        }
        $l915:;
    }
    $tmp592 = -1;
    goto $l590;
    $l590:;
    panda$core$Bit $tmp917 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1593);
    if ($tmp917.value) goto $l918; else goto $l919;
    $l919:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s920, (panda$core$Int64) { 337 }, &$s921);
    abort();
    $l918:;
    switch ($tmp592) {
        case 7: goto $l893;
        case -1: goto $l916;
        case 0: goto $l623;
        case 4: goto $l738;
        case 1: goto $l653;
        case 8: goto $l913;
        case 6: goto $l818;
        case 3: goto $l676;
        case 5: goto $l766;
        case 2: goto $l661;
    }
    $l916:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start925;
    org$pandalanguage$pandac$parser$Token$Kind $tmp926;
    panda$core$Int64 $tmp927;
    org$pandalanguage$pandac$ASTNode* $returnValue930;
    org$pandalanguage$pandac$ASTNode* $tmp931;
    org$pandalanguage$pandac$ASTNode* expr934 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp935;
    org$pandalanguage$pandac$ASTNode* $tmp936;
    org$pandalanguage$pandac$ASTNode* $tmp938;
    org$pandalanguage$pandac$ASTNode* $match$456_9944 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp945;
    panda$core$Int64 $tmp946;
    org$pandalanguage$pandac$Position firstPosition948;
    panda$core$String* firstName950 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp952;
    panda$core$Int64 $tmp953;
    panda$collections$Array* parameters958 = NULL;
    panda$collections$Array* $tmp959;
    panda$collections$Array* $tmp960;
    org$pandalanguage$pandac$ASTNode* firstType962 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp963;
    org$pandalanguage$pandac$ASTNode* $tmp964;
    org$pandalanguage$pandac$ASTNode* $tmp966;
    org$pandalanguage$pandac$ASTNode* $tmp971;
    panda$core$Int64 $tmp973;
    org$pandalanguage$pandac$parser$Token$Kind $tmp977;
    panda$core$Int64 $tmp978;
    org$pandalanguage$pandac$parser$Token$nullable nextName983;
    org$pandalanguage$pandac$parser$Token$Kind $tmp984;
    panda$core$Int64 $tmp985;
    org$pandalanguage$pandac$parser$Token$Kind $tmp988;
    panda$core$Int64 $tmp989;
    org$pandalanguage$pandac$ASTNode* $tmp992;
    org$pandalanguage$pandac$ASTNode* nextType998 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp999;
    org$pandalanguage$pandac$ASTNode* $tmp1000;
    org$pandalanguage$pandac$ASTNode* $tmp1002;
    org$pandalanguage$pandac$ASTNode* $tmp1008;
    panda$core$Int64 $tmp1010;
    panda$core$String* $tmp1011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1014;
    panda$core$Int64 $tmp1015;
    org$pandalanguage$pandac$ASTNode* $tmp1018;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1023;
    panda$core$Int64 $tmp1024;
    org$pandalanguage$pandac$ASTNode* $tmp1027;
    org$pandalanguage$pandac$ASTNode* body1032 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$ASTNode* $tmp1034;
    org$pandalanguage$pandac$ASTNode* $tmp1036;
    org$pandalanguage$pandac$ASTNode* $tmp1041;
    org$pandalanguage$pandac$ASTNode* $tmp1042;
    panda$core$Int64 $tmp1044;
    panda$collections$ImmutableArray* $tmp1045;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1052;
    panda$core$Int64 $tmp1053;
    panda$collections$Array* parameters1058 = NULL;
    panda$collections$Array* $tmp1059;
    panda$collections$Array* $tmp1060;
    panda$core$Bit validLambda1062;
    panda$core$Bit $tmp1063;
    org$pandalanguage$pandac$ASTNode* nextExpr1069 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1070;
    org$pandalanguage$pandac$ASTNode* $tmp1071;
    org$pandalanguage$pandac$ASTNode* $tmp1073;
    org$pandalanguage$pandac$ASTNode* $tmp1081;
    panda$core$Int64 $tmp1086;
    panda$core$Bit $tmp1088;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1092;
    panda$core$Int64 $tmp1093;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1095;
    panda$core$Int64 $tmp1096;
    org$pandalanguage$pandac$ASTNode* $tmp1099;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1106;
    panda$core$Int64 $tmp1107;
    org$pandalanguage$pandac$ASTNode* body1113 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1114;
    org$pandalanguage$pandac$ASTNode* $tmp1115;
    org$pandalanguage$pandac$ASTNode* $tmp1117;
    org$pandalanguage$pandac$ASTNode* $tmp1123;
    org$pandalanguage$pandac$ASTNode* $tmp1124;
    panda$core$Int64 $tmp1126;
    panda$collections$ImmutableArray* $tmp1127;
    org$pandalanguage$pandac$ASTNode* $tmp1136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1142;
    panda$core$Int64 $tmp1143;
    org$pandalanguage$pandac$ASTNode* $tmp1146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1150;
    panda$core$Int64 $tmp1151;
    panda$collections$Array* parameters1156 = NULL;
    panda$collections$Array* $tmp1157;
    panda$collections$Array* $tmp1158;
    org$pandalanguage$pandac$ASTNode* body1160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1161;
    org$pandalanguage$pandac$ASTNode* $tmp1162;
    org$pandalanguage$pandac$ASTNode* $tmp1164;
    org$pandalanguage$pandac$ASTNode* $tmp1169;
    org$pandalanguage$pandac$ASTNode* $tmp1170;
    panda$core$Int64 $tmp1172;
    panda$collections$ImmutableArray* $tmp1173;
    org$pandalanguage$pandac$ASTNode* $tmp1180;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1187;
    panda$core$Int64 $tmp1188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1190;
    panda$core$Int64 $tmp1191;
    org$pandalanguage$pandac$ASTNode* $tmp1193;
    panda$collections$Array* arguments1198 = NULL;
    panda$collections$Array* $tmp1199;
    panda$collections$Array* $tmp1200;
    org$pandalanguage$pandac$ASTNode* nextExpr1207 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1208;
    org$pandalanguage$pandac$ASTNode* $tmp1209;
    org$pandalanguage$pandac$ASTNode* $tmp1211;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1219;
    panda$core$Int64 $tmp1220;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1222;
    panda$core$Int64 $tmp1223;
    org$pandalanguage$pandac$ASTNode* $tmp1226;
    int $tmp924;
    {
        panda$core$Int64$init$builtin_int64(&$tmp927, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp926, $tmp927);
        org$pandalanguage$pandac$parser$Token$nullable $tmp929 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp926, &$s928);
        start925 = $tmp929;
        if (((panda$core$Bit) { !start925.nonnull }).value) {
        {
            $tmp931 = NULL;
            $returnValue930 = $tmp931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
            $tmp924 = 0;
            goto $l922;
            $l932:;
            return $returnValue930;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp937 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp936 = $tmp937;
        $tmp935 = $tmp936;
        expr934 = $tmp935;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
        if (((panda$core$Bit) { expr934 == NULL }).value) {
        {
            $tmp938 = NULL;
            $returnValue930 = $tmp938;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
            $tmp924 = 1;
            goto $l922;
            $l939:;
            return $returnValue930;
        }
        }
        int $tmp943;
        {
            $tmp945 = expr934;
            $match$456_9944 = $tmp945;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp945));
            panda$core$Int64$init$builtin_int64(&$tmp946, 20);
            panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9944->$rawValue, $tmp946);
            if ($tmp947.value) {
            {
                org$pandalanguage$pandac$Position* $tmp949 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_9944->$data + 0));
                firstPosition948 = *$tmp949;
                panda$core$String** $tmp951 = ((panda$core$String**) ((char*) $match$456_9944->$data + 16));
                firstName950 = *$tmp951;
                panda$core$Int64$init$builtin_int64(&$tmp953, 95);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp952, $tmp953);
                org$pandalanguage$pandac$parser$Token$nullable $tmp954 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp952);
                if (((panda$core$Bit) { $tmp954.nonnull }).value) {
                {
                    int $tmp957;
                    {
                        panda$collections$Array* $tmp961 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp961);
                        $tmp960 = $tmp961;
                        $tmp959 = $tmp960;
                        parameters958 = $tmp959;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp959));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp960));
                        org$pandalanguage$pandac$ASTNode* $tmp965 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp964 = $tmp965;
                        $tmp963 = $tmp964;
                        firstType962 = $tmp963;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp963));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
                        if (((panda$core$Bit) { firstType962 == NULL }).value) {
                        {
                            $tmp966 = NULL;
                            $returnValue930 = $tmp966;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp966));
                            $tmp957 = 0;
                            goto $l955;
                            $l967:;
                            $tmp943 = 0;
                            goto $l941;
                            $l968:;
                            $tmp924 = 2;
                            goto $l922;
                            $l969:;
                            return $returnValue930;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp972 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp973, 31);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp972, $tmp973, firstPosition948, firstName950, firstType962);
                        $tmp971 = $tmp972;
                        panda$collections$Array$add$panda$collections$Array$T(parameters958, ((panda$core$Object*) $tmp971));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
                        $l974:;
                        panda$core$Int64$init$builtin_int64(&$tmp978, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp977, $tmp978);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp979 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp977);
                        bool $tmp976 = ((panda$core$Bit) { $tmp979.nonnull }).value;
                        if (!$tmp976) goto $l975;
                        {
                            int $tmp982;
                            {
                                panda$core$Int64$init$builtin_int64(&$tmp985, 48);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp984, $tmp985);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp987 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp984, &$s986);
                                nextName983 = $tmp987;
                                panda$core$Int64$init$builtin_int64(&$tmp989, 95);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp988, $tmp989);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp991 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp988, &$s990);
                                if (((panda$core$Bit) { !$tmp991.nonnull }).value) {
                                {
                                    $tmp992 = NULL;
                                    $returnValue930 = $tmp992;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                                    $tmp982 = 0;
                                    goto $l980;
                                    $l993:;
                                    $tmp957 = 1;
                                    goto $l955;
                                    $l994:;
                                    $tmp943 = 1;
                                    goto $l941;
                                    $l995:;
                                    $tmp924 = 3;
                                    goto $l922;
                                    $l996:;
                                    return $returnValue930;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1001 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1000 = $tmp1001;
                                $tmp999 = $tmp1000;
                                nextType998 = $tmp999;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp999));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
                                if (((panda$core$Bit) { nextType998 == NULL }).value) {
                                {
                                    $tmp1002 = NULL;
                                    $returnValue930 = $tmp1002;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1002));
                                    $tmp982 = 1;
                                    goto $l980;
                                    $l1003:;
                                    $tmp957 = 2;
                                    goto $l955;
                                    $l1004:;
                                    $tmp943 = 2;
                                    goto $l941;
                                    $l1005:;
                                    $tmp924 = 4;
                                    goto $l922;
                                    $l1006:;
                                    return $returnValue930;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1009 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1010, 31);
                                panda$core$String* $tmp1012 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName983.value));
                                $tmp1011 = $tmp1012;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1009, $tmp1010, ((org$pandalanguage$pandac$parser$Token) nextName983.value).position, $tmp1011, nextType998);
                                $tmp1008 = $tmp1009;
                                panda$collections$Array$add$panda$collections$Array$T(parameters958, ((panda$core$Object*) $tmp1008));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                            }
                            $tmp982 = -1;
                            goto $l980;
                            $l980:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType998));
                            nextType998 = NULL;
                            switch ($tmp982) {
                                case 0: goto $l993;
                                case 1: goto $l1003;
                                case -1: goto $l1013;
                            }
                            $l1013:;
                        }
                        goto $l974;
                        $l975:;
                        panda$core$Int64$init$builtin_int64(&$tmp1015, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1014, $tmp1015);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1017 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1014, &$s1016);
                        if (((panda$core$Bit) { !$tmp1017.nonnull }).value) {
                        {
                            $tmp1018 = NULL;
                            $returnValue930 = $tmp1018;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
                            $tmp957 = 3;
                            goto $l955;
                            $l1019:;
                            $tmp943 = 3;
                            goto $l941;
                            $l1020:;
                            $tmp924 = 5;
                            goto $l922;
                            $l1021:;
                            return $returnValue930;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1024, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1023, $tmp1024);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1026 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1023, &$s1025);
                        if (((panda$core$Bit) { !$tmp1026.nonnull }).value) {
                        {
                            $tmp1027 = NULL;
                            $returnValue930 = $tmp1027;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
                            $tmp957 = 4;
                            goto $l955;
                            $l1028:;
                            $tmp943 = 4;
                            goto $l941;
                            $l1029:;
                            $tmp924 = 6;
                            goto $l922;
                            $l1030:;
                            return $returnValue930;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1035 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1034 = $tmp1035;
                        $tmp1033 = $tmp1034;
                        body1032 = $tmp1033;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                        if (((panda$core$Bit) { body1032 == NULL }).value) {
                        {
                            $tmp1036 = NULL;
                            $returnValue930 = $tmp1036;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1036));
                            $tmp957 = 5;
                            goto $l955;
                            $l1037:;
                            $tmp943 = 5;
                            goto $l941;
                            $l1038:;
                            $tmp924 = 7;
                            goto $l922;
                            $l1039:;
                            return $returnValue930;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1043 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1044, 43);
                        panda$collections$ImmutableArray* $tmp1046 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters958);
                        $tmp1045 = $tmp1046;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1043, $tmp1044, ((org$pandalanguage$pandac$parser$Token) start925.value).position, $tmp1045, body1032);
                        $tmp1042 = $tmp1043;
                        $tmp1041 = $tmp1042;
                        $returnValue930 = $tmp1041;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1041));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1042));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
                        $tmp957 = 6;
                        goto $l955;
                        $l1047:;
                        $tmp943 = 6;
                        goto $l941;
                        $l1048:;
                        $tmp924 = 8;
                        goto $l922;
                        $l1049:;
                        return $returnValue930;
                    }
                    $l955:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1032));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType962));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters958));
                    parameters958 = NULL;
                    firstType962 = NULL;
                    body1032 = NULL;
                    switch ($tmp957) {
                        case 4: goto $l1028;
                        case 3: goto $l1019;
                        case 5: goto $l1037;
                        case 0: goto $l967;
                        case 6: goto $l1047;
                        case 1: goto $l994;
                        case 2: goto $l1004;
                    }
                    $l1051:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1053, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1052, $tmp1053);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1054 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1052);
                if (((panda$core$Bit) { $tmp1054.nonnull }).value) {
                {
                    int $tmp1057;
                    {
                        panda$collections$Array* $tmp1061 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1061);
                        $tmp1060 = $tmp1061;
                        $tmp1059 = $tmp1060;
                        parameters1058 = $tmp1059;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1059));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1058, ((panda$core$Object*) expr934));
                        panda$core$Bit$init$builtin_bit(&$tmp1063, true);
                        validLambda1062 = $tmp1063;
                        $l1064:;
                        {
                            int $tmp1068;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1072 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1071 = $tmp1072;
                                $tmp1070 = $tmp1071;
                                nextExpr1069 = $tmp1070;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
                                if (((panda$core$Bit) { nextExpr1069 == NULL }).value) {
                                {
                                    $tmp1073 = NULL;
                                    $returnValue930 = $tmp1073;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1073));
                                    $tmp1068 = 0;
                                    goto $l1066;
                                    $l1074:;
                                    $tmp1057 = 0;
                                    goto $l1055;
                                    $l1075:;
                                    $tmp943 = 7;
                                    goto $l941;
                                    $l1076:;
                                    $tmp924 = 9;
                                    goto $l922;
                                    $l1077:;
                                    return $returnValue930;
                                }
                                }
                                bool $tmp1079 = validLambda1062.value;
                                if (!$tmp1079) goto $l1080;
                                $tmp1081 = nextExpr1069;
                                panda$core$Bit $tmp1085;
                                if (((panda$core$Bit) { $tmp1081 != NULL }).value) goto $l1082; else goto $l1083;
                                $l1082:;
                                panda$core$Int64$init$builtin_int64(&$tmp1086, 20);
                                panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1081->$rawValue, $tmp1086);
                                $tmp1085 = $tmp1087;
                                goto $l1084;
                                $l1083:;
                                panda$core$Bit$init$builtin_bit(&$tmp1088, false);
                                $tmp1085 = $tmp1088;
                                goto $l1084;
                                $l1084:;
                                $tmp1079 = $tmp1085.value;
                                $l1080:;
                                panda$core$Bit $tmp1089 = { $tmp1079 };
                                validLambda1062 = $tmp1089;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1058, ((panda$core$Object*) nextExpr1069));
                            }
                            $tmp1068 = -1;
                            goto $l1066;
                            $l1066:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1069));
                            nextExpr1069 = NULL;
                            switch ($tmp1068) {
                                case -1: goto $l1090;
                                case 0: goto $l1074;
                            }
                            $l1090:;
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1093, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1092, $tmp1093);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1094 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1092);
                        bool $tmp1091 = ((panda$core$Bit) { $tmp1094.nonnull }).value;
                        if ($tmp1091) goto $l1064;
                        $l1065:;
                        panda$core$Int64$init$builtin_int64(&$tmp1096, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1095, $tmp1096);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1098 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1095, &$s1097);
                        if (((panda$core$Bit) { !$tmp1098.nonnull }).value) {
                        {
                            $tmp1099 = NULL;
                            $returnValue930 = $tmp1099;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1099));
                            $tmp1057 = 1;
                            goto $l1055;
                            $l1100:;
                            $tmp943 = 8;
                            goto $l941;
                            $l1101:;
                            $tmp924 = 10;
                            goto $l922;
                            $l1102:;
                            return $returnValue930;
                        }
                        }
                        bool $tmp1104 = validLambda1062.value;
                        if (!$tmp1104) goto $l1105;
                        panda$core$Int64$init$builtin_int64(&$tmp1107, 90);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1106, $tmp1107);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1108 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1106);
                        $tmp1104 = ((panda$core$Bit) { $tmp1108.nonnull }).value;
                        $l1105:;
                        panda$core$Bit $tmp1109 = { $tmp1104 };
                        if ($tmp1109.value) {
                        {
                            int $tmp1112;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1116 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1115 = $tmp1116;
                                $tmp1114 = $tmp1115;
                                body1113 = $tmp1114;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1114));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
                                if (((panda$core$Bit) { body1113 == NULL }).value) {
                                {
                                    $tmp1117 = NULL;
                                    $returnValue930 = $tmp1117;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1117));
                                    $tmp1112 = 0;
                                    goto $l1110;
                                    $l1118:;
                                    $tmp1057 = 2;
                                    goto $l1055;
                                    $l1119:;
                                    $tmp943 = 9;
                                    goto $l941;
                                    $l1120:;
                                    $tmp924 = 11;
                                    goto $l922;
                                    $l1121:;
                                    return $returnValue930;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp1125 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp1126, 45);
                                panda$collections$ImmutableArray* $tmp1128 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1058);
                                $tmp1127 = $tmp1128;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1125, $tmp1126, ((org$pandalanguage$pandac$parser$Token) start925.value).position, $tmp1127, body1113);
                                $tmp1124 = $tmp1125;
                                $tmp1123 = $tmp1124;
                                $returnValue930 = $tmp1123;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                                $tmp1112 = 1;
                                goto $l1110;
                                $l1129:;
                                $tmp1057 = 3;
                                goto $l1055;
                                $l1130:;
                                $tmp943 = 10;
                                goto $l941;
                                $l1131:;
                                $tmp924 = 12;
                                goto $l922;
                                $l1132:;
                                return $returnValue930;
                            }
                            $l1110:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1113));
                            body1113 = NULL;
                            switch ($tmp1112) {
                                case 0: goto $l1118;
                                case 1: goto $l1129;
                            }
                            $l1134:;
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start925.value), &$s1135);
                        $tmp1136 = NULL;
                        $returnValue930 = $tmp1136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1136));
                        $tmp1057 = 4;
                        goto $l1055;
                        $l1137:;
                        $tmp943 = 11;
                        goto $l941;
                        $l1138:;
                        $tmp924 = 13;
                        goto $l922;
                        $l1139:;
                        return $returnValue930;
                    }
                    $l1055:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1058));
                    parameters1058 = NULL;
                    switch ($tmp1057) {
                        case 0: goto $l1075;
                        case 4: goto $l1137;
                        case 2: goto $l1119;
                        case 3: goto $l1130;
                        case 1: goto $l1100;
                    }
                    $l1141:;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1143, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1142, $tmp1143);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1142, &$s1144);
                if (((panda$core$Bit) { !$tmp1145.nonnull }).value) {
                {
                    $tmp1146 = NULL;
                    $returnValue930 = $tmp1146;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
                    $tmp943 = 12;
                    goto $l941;
                    $l1147:;
                    $tmp924 = 14;
                    goto $l922;
                    $l1148:;
                    return $returnValue930;
                }
                }
                panda$core$Int64$init$builtin_int64(&$tmp1151, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1150, $tmp1151);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1152 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1150);
                if (((panda$core$Bit) { $tmp1152.nonnull }).value) {
                {
                    int $tmp1155;
                    {
                        panda$collections$Array* $tmp1159 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1159);
                        $tmp1158 = $tmp1159;
                        $tmp1157 = $tmp1158;
                        parameters1156 = $tmp1157;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1157));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1158));
                        panda$collections$Array$add$panda$collections$Array$T(parameters1156, ((panda$core$Object*) expr934));
                        org$pandalanguage$pandac$ASTNode* $tmp1163 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1162 = $tmp1163;
                        $tmp1161 = $tmp1162;
                        body1160 = $tmp1161;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
                        if (((panda$core$Bit) { body1160 == NULL }).value) {
                        {
                            $tmp1164 = NULL;
                            $returnValue930 = $tmp1164;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                            $tmp1155 = 0;
                            goto $l1153;
                            $l1165:;
                            $tmp943 = 13;
                            goto $l941;
                            $l1166:;
                            $tmp924 = 15;
                            goto $l922;
                            $l1167:;
                            return $returnValue930;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp1171 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1172, 45);
                        panda$collections$ImmutableArray* $tmp1174 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1156);
                        $tmp1173 = $tmp1174;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1171, $tmp1172, ((org$pandalanguage$pandac$parser$Token) start925.value).position, $tmp1173, body1160);
                        $tmp1170 = $tmp1171;
                        $tmp1169 = $tmp1170;
                        $returnValue930 = $tmp1169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1173));
                        $tmp1155 = 1;
                        goto $l1153;
                        $l1175:;
                        $tmp943 = 14;
                        goto $l941;
                        $l1176:;
                        $tmp924 = 16;
                        goto $l922;
                        $l1177:;
                        return $returnValue930;
                    }
                    $l1153:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1156));
                    parameters1156 = NULL;
                    body1160 = NULL;
                    switch ($tmp1155) {
                        case 0: goto $l1165;
                        case 1: goto $l1175;
                    }
                    $l1179:;
                }
                }
                $tmp1180 = expr934;
                $returnValue930 = $tmp1180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
                $tmp943 = 15;
                goto $l941;
                $l1181:;
                $tmp924 = 17;
                goto $l922;
                $l1182:;
                return $returnValue930;
            }
            }
            else {
            {
                int $tmp1186;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1188, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1187, $tmp1188);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1189 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1187);
                    if (((panda$core$Bit) { !$tmp1189.nonnull }).value) {
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1191, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1190, $tmp1191);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1190, &$s1192);
                        $tmp1193 = expr934;
                        $returnValue930 = $tmp1193;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
                        $tmp1186 = 0;
                        goto $l1184;
                        $l1194:;
                        $tmp943 = 16;
                        goto $l941;
                        $l1195:;
                        $tmp924 = 18;
                        goto $l922;
                        $l1196:;
                        return $returnValue930;
                    }
                    }
                    panda$collections$Array* $tmp1201 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1201);
                    $tmp1200 = $tmp1201;
                    $tmp1199 = $tmp1200;
                    arguments1198 = $tmp1199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
                    panda$collections$Array$add$panda$collections$Array$T(arguments1198, ((panda$core$Object*) expr934));
                    $l1202:;
                    {
                        int $tmp1206;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1210 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1209 = $tmp1210;
                            $tmp1208 = $tmp1209;
                            nextExpr1207 = $tmp1208;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                            if (((panda$core$Bit) { nextExpr1207 == NULL }).value) {
                            {
                                $tmp1211 = NULL;
                                $returnValue930 = $tmp1211;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1211));
                                $tmp1206 = 0;
                                goto $l1204;
                                $l1212:;
                                $tmp1186 = 1;
                                goto $l1184;
                                $l1213:;
                                $tmp943 = 17;
                                goto $l941;
                                $l1214:;
                                $tmp924 = 19;
                                goto $l922;
                                $l1215:;
                                return $returnValue930;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments1198, ((panda$core$Object*) nextExpr1207));
                        }
                        $tmp1206 = -1;
                        goto $l1204;
                        $l1204:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr1207));
                        nextExpr1207 = NULL;
                        switch ($tmp1206) {
                            case -1: goto $l1217;
                            case 0: goto $l1212;
                        }
                        $l1217:;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp1220, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1219, $tmp1220);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1221 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1219);
                    bool $tmp1218 = ((panda$core$Bit) { $tmp1221.nonnull }).value;
                    if ($tmp1218) goto $l1202;
                    $l1203:;
                    panda$core$Int64$init$builtin_int64(&$tmp1223, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1222, $tmp1223);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1222, &$s1224);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start925.value), &$s1225);
                    $tmp1226 = NULL;
                    $returnValue930 = $tmp1226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                    $tmp1186 = 2;
                    goto $l1184;
                    $l1227:;
                    $tmp943 = 18;
                    goto $l941;
                    $l1228:;
                    $tmp924 = 20;
                    goto $l922;
                    $l1229:;
                    return $returnValue930;
                }
                $l1184:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments1198));
                arguments1198 = NULL;
                switch ($tmp1186) {
                    case 1: goto $l1213;
                    case 2: goto $l1227;
                    case 0: goto $l1194;
                }
                $l1231:;
            }
            }
        }
        $tmp943 = -1;
        goto $l941;
        $l941:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
        switch ($tmp943) {
            case 7: goto $l1076;
            case -1: goto $l1232;
            case 15: goto $l1181;
            case 9: goto $l1120;
            case 10: goto $l1131;
            case 14: goto $l1176;
            case 4: goto $l1029;
            case 13: goto $l1166;
            case 18: goto $l1228;
            case 5: goto $l1038;
            case 2: goto $l1005;
            case 16: goto $l1195;
            case 12: goto $l1147;
            case 3: goto $l1020;
            case 8: goto $l1101;
            case 6: goto $l1048;
            case 0: goto $l968;
            case 11: goto $l1138;
            case 17: goto $l1214;
            case 1: goto $l995;
        }
        $l1232:;
    }
    $tmp924 = -1;
    goto $l922;
    $l922:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr934));
    expr934 = NULL;
    switch ($tmp924) {
        case 5: goto $l1021;
        case 14: goto $l1148;
        case 9: goto $l1077;
        case -1: goto $l1233;
        case 11: goto $l1121;
        case 16: goto $l1177;
        case 20: goto $l1229;
        case 6: goto $l1030;
        case 12: goto $l1132;
        case 7: goto $l1039;
        case 15: goto $l1167;
        case 18: goto $l1196;
        case 17: goto $l1182;
        case 4: goto $l1006;
        case 1: goto $l939;
        case 13: goto $l1139;
        case 10: goto $l1102;
        case 8: goto $l1049;
        case 3: goto $l996;
        case 2: goto $l969;
        case 19: goto $l1215;
        case 0: goto $l932;
    }
    $l1233:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1237;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1238;
    panda$core$Int64 $tmp1239;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1242;
    panda$core$Int64 $tmp1243;
    org$pandalanguage$pandac$ASTNode* t1248 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1249;
    org$pandalanguage$pandac$ASTNode* $tmp1250;
    org$pandalanguage$pandac$ASTNode* $returnValue1252;
    org$pandalanguage$pandac$ASTNode* $tmp1253;
    panda$collections$Array* parameters1257 = NULL;
    panda$collections$Array* $tmp1258;
    panda$collections$Array* $tmp1259;
    org$pandalanguage$pandac$ASTNode* $tmp1261;
    panda$core$Int64 $tmp1263;
    panda$core$String* $tmp1264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1266;
    panda$core$Int64 $tmp1267;
    org$pandalanguage$pandac$ASTNode* $tmp1270;
    org$pandalanguage$pandac$ASTNode* expr1274 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1275;
    org$pandalanguage$pandac$ASTNode* $tmp1276;
    org$pandalanguage$pandac$ASTNode* $tmp1278;
    org$pandalanguage$pandac$ASTNode* $tmp1282;
    org$pandalanguage$pandac$ASTNode* $tmp1283;
    panda$core$Int64 $tmp1285;
    panda$collections$ImmutableArray* $tmp1286;
    panda$collections$Array* parameters1292 = NULL;
    panda$collections$Array* $tmp1293;
    panda$collections$Array* $tmp1294;
    org$pandalanguage$pandac$ASTNode* $tmp1296;
    panda$core$Int64 $tmp1298;
    panda$core$String* $tmp1299;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1301;
    panda$core$Int64 $tmp1302;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    org$pandalanguage$pandac$ASTNode* expr1308 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1309;
    org$pandalanguage$pandac$ASTNode* $tmp1310;
    org$pandalanguage$pandac$ASTNode* $tmp1312;
    org$pandalanguage$pandac$ASTNode* $tmp1315;
    org$pandalanguage$pandac$ASTNode* $tmp1316;
    panda$core$Int64 $tmp1318;
    panda$collections$ImmutableArray* $tmp1319;
    int $tmp1236;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1239, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1238, $tmp1239);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1241 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1238, &$s1240);
        start1237 = $tmp1241;
        panda$core$Int64$init$builtin_int64(&$tmp1243, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1242, $tmp1243);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1244 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1242);
        if (((panda$core$Bit) { $tmp1244.nonnull }).value) {
        {
            int $tmp1247;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1251 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1250 = $tmp1251;
                $tmp1249 = $tmp1250;
                t1248 = $tmp1249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
                if (((panda$core$Bit) { t1248 == NULL }).value) {
                {
                    $tmp1253 = NULL;
                    $returnValue1252 = $tmp1253;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
                    $tmp1247 = 0;
                    goto $l1245;
                    $l1254:;
                    $tmp1236 = 0;
                    goto $l1234;
                    $l1255:;
                    return $returnValue1252;
                }
                }
                panda$collections$Array* $tmp1260 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1260);
                $tmp1259 = $tmp1260;
                $tmp1258 = $tmp1259;
                parameters1257 = $tmp1258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                org$pandalanguage$pandac$ASTNode* $tmp1262 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1263, 31);
                panda$core$String* $tmp1265 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1237.value));
                $tmp1264 = $tmp1265;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1262, $tmp1263, ((org$pandalanguage$pandac$parser$Token) start1237.value).position, $tmp1264, t1248);
                $tmp1261 = $tmp1262;
                panda$collections$Array$add$panda$collections$Array$T(parameters1257, ((panda$core$Object*) $tmp1261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1264));
                panda$core$Int64$init$builtin_int64(&$tmp1267, 90);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1266, $tmp1267);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1269 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1266, &$s1268);
                if (((panda$core$Bit) { !$tmp1269.nonnull }).value) {
                {
                    $tmp1270 = NULL;
                    $returnValue1252 = $tmp1270;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1270));
                    $tmp1247 = 1;
                    goto $l1245;
                    $l1271:;
                    $tmp1236 = 1;
                    goto $l1234;
                    $l1272:;
                    return $returnValue1252;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1277 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1276 = $tmp1277;
                $tmp1275 = $tmp1276;
                expr1274 = $tmp1275;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1276));
                if (((panda$core$Bit) { expr1274 == NULL }).value) {
                {
                    $tmp1278 = NULL;
                    $returnValue1252 = $tmp1278;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                    $tmp1247 = 2;
                    goto $l1245;
                    $l1279:;
                    $tmp1236 = 2;
                    goto $l1234;
                    $l1280:;
                    return $returnValue1252;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1284 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp1285, 43);
                panda$collections$ImmutableArray* $tmp1287 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1257);
                $tmp1286 = $tmp1287;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1284, $tmp1285, ((org$pandalanguage$pandac$parser$Token) start1237.value).position, $tmp1286, expr1274);
                $tmp1283 = $tmp1284;
                $tmp1282 = $tmp1283;
                $returnValue1252 = $tmp1282;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1282));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
                $tmp1247 = 3;
                goto $l1245;
                $l1288:;
                $tmp1236 = 3;
                goto $l1234;
                $l1289:;
                return $returnValue1252;
            }
            $l1245:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1257));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1248));
            t1248 = NULL;
            parameters1257 = NULL;
            expr1274 = NULL;
            switch ($tmp1247) {
                case 3: goto $l1288;
                case 2: goto $l1279;
                case 1: goto $l1271;
                case 0: goto $l1254;
            }
            $l1291:;
        }
        }
        panda$collections$Array* $tmp1295 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1295);
        $tmp1294 = $tmp1295;
        $tmp1293 = $tmp1294;
        parameters1292 = $tmp1293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
        org$pandalanguage$pandac$ASTNode* $tmp1297 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1298, 20);
        panda$core$String* $tmp1300 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1237.value));
        $tmp1299 = $tmp1300;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1297, $tmp1298, ((org$pandalanguage$pandac$parser$Token) start1237.value).position, $tmp1299);
        $tmp1296 = $tmp1297;
        panda$collections$Array$add$panda$collections$Array$T(parameters1292, ((panda$core$Object*) $tmp1296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
        panda$core$Int64$init$builtin_int64(&$tmp1302, 90);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1301, $tmp1302);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1304 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1301, &$s1303);
        if (((panda$core$Bit) { !$tmp1304.nonnull }).value) {
        {
            $tmp1305 = NULL;
            $returnValue1252 = $tmp1305;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
            $tmp1236 = 4;
            goto $l1234;
            $l1306:;
            return $returnValue1252;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1311 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1310 = $tmp1311;
        $tmp1309 = $tmp1310;
        expr1308 = $tmp1309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
        if (((panda$core$Bit) { expr1308 == NULL }).value) {
        {
            $tmp1312 = NULL;
            $returnValue1252 = $tmp1312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
            $tmp1236 = 5;
            goto $l1234;
            $l1313:;
            return $returnValue1252;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1317 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp1318, 45);
        panda$collections$ImmutableArray* $tmp1320 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1292);
        $tmp1319 = $tmp1320;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1317, $tmp1318, ((org$pandalanguage$pandac$parser$Token) start1237.value).position, $tmp1319, expr1308);
        $tmp1316 = $tmp1317;
        $tmp1315 = $tmp1316;
        $returnValue1252 = $tmp1315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
        $tmp1236 = 6;
        goto $l1234;
        $l1321:;
        return $returnValue1252;
    }
    $l1234:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1308));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1292));
    parameters1292 = NULL;
    expr1308 = NULL;
    switch ($tmp1236) {
        case 5: goto $l1313;
        case 6: goto $l1321;
        case 1: goto $l1272;
        case 3: goto $l1289;
        case 4: goto $l1306;
        case 2: goto $l1280;
        case 0: goto $l1255;
    }
    $l1323:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1327;
    panda$core$Int64 $tmp1328;
    org$pandalanguage$pandac$ASTNode* $returnValue1331;
    org$pandalanguage$pandac$ASTNode* $tmp1332;
    org$pandalanguage$pandac$ASTNode* regex1335 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1336;
    org$pandalanguage$pandac$ASTNode* $tmp1337;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1342;
    panda$core$Int64 $tmp1343;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    int $tmp1326;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1328, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1327, $tmp1328);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1330 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1327, &$s1329);
        if (((panda$core$Bit) { !$tmp1330.nonnull }).value) {
        {
            $tmp1332 = NULL;
            $returnValue1331 = $tmp1332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1332));
            $tmp1326 = 0;
            goto $l1324;
            $l1333:;
            return $returnValue1331;
        }
        }
        self->regexParser->lexer->dfa->offset = self->lexer->dfa->offset;
        self->regexParser->lexer->dfa->line = self->lexer->dfa->line;
        self->regexParser->lexer->dfa->column = self->lexer->dfa->column;
        org$pandalanguage$pandac$ASTNode* $tmp1338 = org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self->regexParser);
        $tmp1337 = $tmp1338;
        $tmp1336 = $tmp1337;
        regex1335 = $tmp1336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1337));
        self->lexer->dfa->offset = self->regexParser->lexer->dfa->offset;
        self->lexer->dfa->line = self->regexParser->lexer->dfa->line;
        self->lexer->dfa->column = self->regexParser->lexer->dfa->column;
        if (((panda$core$Bit) { regex1335 == NULL }).value) {
        {
            $tmp1339 = NULL;
            $returnValue1331 = $tmp1339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
            $tmp1326 = 1;
            goto $l1324;
            $l1340:;
            return $returnValue1331;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp1343, 54);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1342, $tmp1343);
        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1342, &$s1344);
        $tmp1345 = regex1335;
        $returnValue1331 = $tmp1345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
        $tmp1326 = 2;
        goto $l1324;
        $l1346:;
        return $returnValue1331;
    }
    $l1324:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex1335));
    regex1335 = NULL;
    switch ($tmp1326) {
        case 2: goto $l1346;
        case 1: goto $l1340;
        case 0: goto $l1333;
    }
    $l1348:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1349;
    org$pandalanguage$pandac$parser$Token$Kind $match$616_91351;
    panda$core$Int64 $tmp1352;
    org$pandalanguage$pandac$parser$Token$Kind check1354;
    panda$core$Int64 $tmp1359;
    panda$core$Int64 $tmp1363;
    org$pandalanguage$pandac$ASTNode* $returnValue1366;
    org$pandalanguage$pandac$ASTNode* $tmp1367;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    org$pandalanguage$pandac$ASTNode* $tmp1371;
    org$pandalanguage$pandac$ASTNode* $tmp1372;
    panda$core$Int64 $tmp1374;
    panda$core$String* $tmp1375;
    panda$core$Int64 $tmp1378;
    org$pandalanguage$pandac$ASTNode* $tmp1380;
    org$pandalanguage$pandac$ASTNode* $tmp1381;
    panda$core$Int64 $tmp1383;
    panda$core$String* $tmp1384;
    panda$core$Int64 $tmp1388;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    org$pandalanguage$pandac$ASTNode* $tmp1391;
    panda$core$Int64 $tmp1393;
    panda$core$String* $tmp1394;
    panda$core$String* $tmp1395;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1397;
    panda$core$Int64 $tmp1398;
    panda$core$Bit $tmp1399;
    panda$core$Int64 $tmp1401;
    panda$core$Int64 $tmp1404;
    org$pandalanguage$pandac$ASTNode* $tmp1406;
    org$pandalanguage$pandac$ASTNode* $tmp1407;
    panda$core$Int64 $tmp1409;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1411;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1413;
    panda$core$Int64 $tmp1414;
    panda$core$Bit $tmp1415;
    panda$core$Int64 $tmp1417;
    panda$core$Int64 $tmp1420;
    org$pandalanguage$pandac$ASTNode* $tmp1422;
    org$pandalanguage$pandac$ASTNode* $tmp1423;
    panda$core$Int64 $tmp1425;
    panda$core$String* $tmp1426;
    panda$core$Int64 $tmp1430;
    org$pandalanguage$pandac$ASTNode* $tmp1432;
    org$pandalanguage$pandac$ASTNode* $tmp1433;
    panda$core$Int64 $tmp1435;
    panda$core$Int64 $tmp1437;
    org$pandalanguage$pandac$ASTNode* $tmp1439;
    org$pandalanguage$pandac$ASTNode* $tmp1440;
    panda$core$Int64 $tmp1442;
    panda$core$Int64 $tmp1444;
    org$pandalanguage$pandac$ASTNode* $tmp1446;
    org$pandalanguage$pandac$ASTNode* $tmp1447;
    panda$core$Int64 $tmp1449;
    panda$core$Int64 $tmp1451;
    org$pandalanguage$pandac$ASTNode* $tmp1453;
    org$pandalanguage$pandac$ASTNode* $tmp1454;
    panda$core$Int64 $tmp1456;
    panda$core$Bit $tmp1457;
    panda$core$Int64 $tmp1459;
    org$pandalanguage$pandac$ASTNode* $tmp1461;
    org$pandalanguage$pandac$ASTNode* $tmp1462;
    panda$core$Int64 $tmp1464;
    panda$core$Bit $tmp1465;
    panda$core$Int64 $tmp1468;
    panda$core$Int64 $tmp1471;
    org$pandalanguage$pandac$ASTNode* $tmp1474;
    org$pandalanguage$pandac$ASTNode* $tmp1475;
    panda$core$Int64 $tmp1478;
    org$pandalanguage$pandac$ASTNode* $tmp1480;
    org$pandalanguage$pandac$ASTNode* $tmp1481;
    panda$core$Int64 $tmp1484;
    panda$core$String* name1489 = NULL;
    panda$core$String* $tmp1490;
    panda$core$String* $tmp1491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1498;
    panda$core$Int64 $tmp1499;
    org$pandalanguage$pandac$ASTNode* expr1501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1502;
    org$pandalanguage$pandac$ASTNode* $tmp1503;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1505;
    panda$core$Int64 $tmp1506;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    org$pandalanguage$pandac$ASTNode* $tmp1509;
    panda$core$Int64 $tmp1511;
    org$pandalanguage$pandac$ASTNode* $tmp1518;
    org$pandalanguage$pandac$ASTNode* $tmp1519;
    panda$core$Int64 $tmp1521;
    panda$core$String* $tmp1524;
    panda$core$String* $tmp1525;
    org$pandalanguage$pandac$ASTNode* $tmp1530;
    panda$core$Int64 $tmp1535;
    panda$core$Int64 $tmp1538;
    org$pandalanguage$pandac$ASTNode* $tmp1541;
    org$pandalanguage$pandac$ASTNode* $tmp1542;
    panda$core$Int64 $tmp1545;
    org$pandalanguage$pandac$ASTNode* $tmp1547;
    org$pandalanguage$pandac$ASTNode* $tmp1548;
    panda$core$String* $tmp1551;
    panda$core$String* $tmp1552;
    panda$core$String* $tmp1554;
    org$pandalanguage$pandac$ASTNode* $tmp1559;
    org$pandalanguage$pandac$parser$Token $tmp1350 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1349 = $tmp1350;
    {
        $match$616_91351 = t1349.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1352, 48);
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1352);
        if ($tmp1353.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1355 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1354 = $tmp1355.kind;
            bool $tmp1357 = self->allowLambdas.value;
            if (!$tmp1357) goto $l1358;
            panda$core$Int64$init$builtin_int64(&$tmp1359, 95);
            panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1354.$rawValue, $tmp1359);
            $tmp1357 = $tmp1360.value;
            $l1358:;
            panda$core$Bit $tmp1361 = { $tmp1357 };
            bool $tmp1356 = $tmp1361.value;
            if ($tmp1356) goto $l1362;
            panda$core$Int64$init$builtin_int64(&$tmp1363, 90);
            panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1354.$rawValue, $tmp1363);
            $tmp1356 = $tmp1364.value;
            $l1362:;
            panda$core$Bit $tmp1365 = { $tmp1356 };
            if ($tmp1365.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1349);
                org$pandalanguage$pandac$ASTNode* $tmp1369 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1368 = $tmp1369;
                $tmp1367 = $tmp1368;
                $returnValue1366 = $tmp1367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
                return $returnValue1366;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1373 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1374, 20);
            panda$core$String* $tmp1376 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
            $tmp1375 = $tmp1376;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1373, $tmp1374, t1349.position, $tmp1375);
            $tmp1372 = $tmp1373;
            $tmp1371 = $tmp1372;
            $returnValue1366 = $tmp1371;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1378, 2);
        panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1378);
        if ($tmp1379.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1382 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1383, 22);
            panda$core$String* $tmp1385 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
            $tmp1384 = $tmp1385;
            panda$core$UInt64$nullable $tmp1386 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1384);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1382, $tmp1383, t1349.position, ((panda$core$UInt64) $tmp1386.value));
            $tmp1381 = $tmp1382;
            $tmp1380 = $tmp1381;
            $returnValue1366 = $tmp1380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1388, 3);
        panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1388);
        if ($tmp1389.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1392 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1393, 22);
            panda$core$String* $tmp1396 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
            $tmp1395 = $tmp1396;
            panda$core$Int64$init$builtin_int64(&$tmp1398, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1399, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1397, ((panda$core$Int64$nullable) { $tmp1398, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1399);
            panda$core$String* $tmp1400 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1395, $tmp1397);
            $tmp1394 = $tmp1400;
            panda$core$Int64$init$builtin_int64(&$tmp1401, 2);
            panda$core$UInt64$nullable $tmp1402 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1394, $tmp1401);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1392, $tmp1393, t1349.position, ((panda$core$UInt64) $tmp1402.value));
            $tmp1391 = $tmp1392;
            $tmp1390 = $tmp1391;
            $returnValue1366 = $tmp1390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1404, 4);
        panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1404);
        if ($tmp1405.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1408 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1409, 22);
            panda$core$String* $tmp1412 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
            $tmp1411 = $tmp1412;
            panda$core$Int64$init$builtin_int64(&$tmp1414, 2);
            panda$core$Bit$init$builtin_bit(&$tmp1415, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1413, ((panda$core$Int64$nullable) { $tmp1414, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1415);
            panda$core$String* $tmp1416 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1411, $tmp1413);
            $tmp1410 = $tmp1416;
            panda$core$Int64$init$builtin_int64(&$tmp1417, 16);
            panda$core$UInt64$nullable $tmp1418 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1410, $tmp1417);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1408, $tmp1409, t1349.position, ((panda$core$UInt64) $tmp1418.value));
            $tmp1407 = $tmp1408;
            $tmp1406 = $tmp1407;
            $returnValue1366 = $tmp1406;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1420, 5);
        panda$core$Bit $tmp1421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1420);
        if ($tmp1421.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1424 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1425, 34);
            panda$core$String* $tmp1427 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
            $tmp1426 = $tmp1427;
            panda$core$Real64$nullable $tmp1428 = panda$core$String$convert$R$panda$core$Real64$Q($tmp1426);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1424, $tmp1425, t1349.position, ((panda$core$Real64) $tmp1428.value));
            $tmp1423 = $tmp1424;
            $tmp1422 = $tmp1423;
            $returnValue1366 = $tmp1422;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1430, 46);
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1430);
        if ($tmp1431.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1434 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1435, 37);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1434, $tmp1435, t1349.position);
            $tmp1433 = $tmp1434;
            $tmp1432 = $tmp1433;
            $returnValue1366 = $tmp1432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1437, 47);
        panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1437);
        if ($tmp1438.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1441 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1442, 39);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1441, $tmp1442, t1349.position);
            $tmp1440 = $tmp1441;
            $tmp1439 = $tmp1440;
            $returnValue1366 = $tmp1439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1444, 43);
        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1444);
        if ($tmp1445.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1448 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1449, 28);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1448, $tmp1449, t1349.position);
            $tmp1447 = $tmp1448;
            $tmp1446 = $tmp1447;
            $returnValue1366 = $tmp1446;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1446));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1447));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1451, 41);
        panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1451);
        if ($tmp1452.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1455 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1456, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1457, true);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1455, $tmp1456, t1349.position, $tmp1457);
            $tmp1454 = $tmp1455;
            $tmp1453 = $tmp1454;
            $returnValue1366 = $tmp1453;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1459, 42);
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1459);
        if ($tmp1460.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1463 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp1464, 5);
            panda$core$Bit$init$builtin_bit(&$tmp1465, false);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1463, $tmp1464, t1349.position, $tmp1465);
            $tmp1462 = $tmp1463;
            $tmp1461 = $tmp1462;
            $returnValue1366 = $tmp1461;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1461));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1468, 7);
        panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1468);
        bool $tmp1467 = $tmp1469.value;
        if ($tmp1467) goto $l1470;
        panda$core$Int64$init$builtin_int64(&$tmp1471, 6);
        panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1471);
        $tmp1467 = $tmp1472.value;
        $l1470:;
        panda$core$Bit $tmp1473 = { $tmp1467 };
        if ($tmp1473.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1349);
            org$pandalanguage$pandac$ASTNode* $tmp1476 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1475 = $tmp1476;
            $tmp1474 = $tmp1475;
            $returnValue1366 = $tmp1474;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1478, 103);
        panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1478);
        if ($tmp1479.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1349);
            org$pandalanguage$pandac$ASTNode* $tmp1482 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1481 = $tmp1482;
            $tmp1480 = $tmp1481;
            $returnValue1366 = $tmp1480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1484, 13);
        panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1484);
        if ($tmp1485.value) {
        {
            int $tmp1488;
            {
                panda$core$String* $tmp1492 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
                $tmp1491 = $tmp1492;
                $tmp1490 = $tmp1491;
                name1489 = $tmp1490;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Bit $tmp1494 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1489, &$s1493);
                if ($tmp1494.value) {
                {
                    int $tmp1497;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp1499, 103);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1498, $tmp1499);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1498, &$s1500);
                        org$pandalanguage$pandac$ASTNode* $tmp1504 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1503 = $tmp1504;
                        $tmp1502 = $tmp1503;
                        expr1501 = $tmp1502;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                        panda$core$Int64$init$builtin_int64(&$tmp1506, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1505, $tmp1506);
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1505, &$s1507);
                        org$pandalanguage$pandac$ASTNode* $tmp1510 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1511, 2);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1510, $tmp1511, t1349.position, expr1501);
                        $tmp1509 = $tmp1510;
                        $tmp1508 = $tmp1509;
                        $returnValue1366 = $tmp1508;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
                        $tmp1497 = 0;
                        goto $l1495;
                        $l1512:;
                        $tmp1488 = 0;
                        goto $l1486;
                        $l1513:;
                        return $returnValue1366;
                    }
                    $l1495:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1501));
                    expr1501 = NULL;
                    switch ($tmp1497) {
                        case 0: goto $l1512;
                    }
                    $l1515:;
                }
                }
                else {
                panda$core$Bit $tmp1517 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1489, &$s1516);
                if ($tmp1517.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1520 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1521, 3);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1520, $tmp1521, t1349.position);
                    $tmp1519 = $tmp1520;
                    $tmp1518 = $tmp1519;
                    $returnValue1366 = $tmp1518;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1518));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                    $tmp1488 = 1;
                    goto $l1486;
                    $l1522:;
                    return $returnValue1366;
                }
                }
                }
                panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1526, name1489);
                $tmp1525 = $tmp1527;
                panda$core$String* $tmp1529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1528);
                $tmp1524 = $tmp1529;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1349, $tmp1524);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
                $tmp1530 = NULL;
                $returnValue1366 = $tmp1530;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
                $tmp1488 = 2;
                goto $l1486;
                $l1531:;
                return $returnValue1366;
            }
            $l1486:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1489));
            name1489 = NULL;
            switch ($tmp1488) {
                case 0: goto $l1513;
                case 1: goto $l1522;
                case 2: goto $l1531;
            }
            $l1533:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1535, 20);
        panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1535);
        bool $tmp1534 = $tmp1536.value;
        if ($tmp1534) goto $l1537;
        panda$core$Int64$init$builtin_int64(&$tmp1538, 21);
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1538);
        $tmp1534 = $tmp1539.value;
        $l1537:;
        panda$core$Bit $tmp1540 = { $tmp1534 };
        if ($tmp1540.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1349);
            org$pandalanguage$pandac$ASTNode* $tmp1543 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1542 = $tmp1543;
            $tmp1541 = $tmp1542;
            $returnValue1366 = $tmp1541;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1541));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
            return $returnValue1366;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1545, 54);
        panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$616_91351.$rawValue, $tmp1545);
        if ($tmp1546.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1349);
            org$pandalanguage$pandac$ASTNode* $tmp1549 = org$pandalanguage$pandac$parser$Parser$regex$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1548 = $tmp1549;
            $tmp1547 = $tmp1548;
            $returnValue1366 = $tmp1547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
            return $returnValue1366;
        }
        }
        else {
        {
            panda$core$String* $tmp1555 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1349);
            $tmp1554 = $tmp1555;
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1553, $tmp1554);
            $tmp1552 = $tmp1556;
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, &$s1557);
            $tmp1551 = $tmp1558;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1349, $tmp1551);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
            $tmp1559 = NULL;
            $returnValue1366 = $tmp1559;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1559));
            return $returnValue1366;
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
    org$pandalanguage$pandac$ASTNode* $match$675_91564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$Int64 $tmp1566;
    panda$core$String* text1568 = NULL;
    panda$core$String* $returnValue1570;
    panda$core$String* $tmp1571;
    panda$core$Int64 $tmp1574;
    org$pandalanguage$pandac$ASTNode* base1576 = NULL;
    panda$core$String* field1578 = NULL;
    panda$core$String* result1583 = NULL;
    panda$core$String* $tmp1584;
    panda$core$String* $tmp1585;
    panda$core$String* $tmp1587;
    panda$core$String* $tmp1588;
    panda$core$String* $tmp1589;
    panda$core$String* $tmp1590;
    panda$core$String* $tmp1591;
    panda$core$String* $tmp1595;
    panda$core$String* $tmp1600;
    int $tmp1563;
    {
        $tmp1565 = p_expr;
        $match$675_91564 = $tmp1565;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
        panda$core$Int64$init$builtin_int64(&$tmp1566, 20);
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_91564->$rawValue, $tmp1566);
        if ($tmp1567.value) {
        {
            panda$core$String** $tmp1569 = ((panda$core$String**) ((char*) $match$675_91564->$data + 16));
            text1568 = *$tmp1569;
            $tmp1571 = text1568;
            $returnValue1570 = $tmp1571;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1571));
            $tmp1563 = 0;
            goto $l1561;
            $l1572:;
            return $returnValue1570;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1574, 15);
        panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$675_91564->$rawValue, $tmp1574);
        if ($tmp1575.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1577 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$675_91564->$data + 16));
            base1576 = *$tmp1577;
            panda$core$String** $tmp1579 = ((panda$core$String**) ((char*) $match$675_91564->$data + 24));
            field1578 = *$tmp1579;
            int $tmp1582;
            {
                panda$core$String* $tmp1586 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1576);
                $tmp1585 = $tmp1586;
                $tmp1584 = $tmp1585;
                result1583 = $tmp1584;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
                if (((panda$core$Bit) { result1583 != NULL }).value) {
                {
                    {
                        $tmp1588 = result1583;
                        $tmp1587 = $tmp1588;
                        panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1592, field1578);
                        $tmp1591 = $tmp1593;
                        panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1583, $tmp1591);
                        $tmp1590 = $tmp1594;
                        $tmp1589 = $tmp1590;
                        result1583 = $tmp1589;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1591));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
                    }
                }
                }
                $tmp1595 = result1583;
                $returnValue1570 = $tmp1595;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1595));
                $tmp1582 = 0;
                goto $l1580;
                $l1596:;
                $tmp1563 = 1;
                goto $l1561;
                $l1597:;
                return $returnValue1570;
            }
            $l1580:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1583));
            result1583 = NULL;
            switch ($tmp1582) {
                case 0: goto $l1596;
            }
            $l1599:;
        }
        }
        else {
        {
            $tmp1600 = NULL;
            $returnValue1570 = $tmp1600;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1600));
            $tmp1563 = 2;
            goto $l1561;
            $l1601:;
            return $returnValue1570;
        }
        }
        }
    }
    $tmp1563 = -1;
    goto $l1561;
    $l1561:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
    switch ($tmp1563) {
        case 2: goto $l1601;
        case 1: goto $l1597;
        case -1: goto $l1603;
        case 0: goto $l1572;
    }
    $l1603:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1604;
    org$pandalanguage$pandac$parser$Token$Kind $match$695_91606;
    panda$core$Int64 $tmp1628;
    panda$core$Int64 $tmp1631;
    panda$core$Int64 $tmp1635;
    panda$core$Int64 $tmp1639;
    panda$core$Int64 $tmp1643;
    panda$core$Int64 $tmp1647;
    panda$core$Int64 $tmp1651;
    panda$core$Int64 $tmp1655;
    panda$core$Int64 $tmp1659;
    panda$core$Int64 $tmp1663;
    panda$core$Int64 $tmp1667;
    panda$core$Int64 $tmp1671;
    panda$core$Int64 $tmp1675;
    panda$core$Int64 $tmp1679;
    panda$core$Int64 $tmp1683;
    panda$core$Int64 $tmp1687;
    panda$core$Int64 $tmp1691;
    panda$core$Int64 $tmp1695;
    panda$core$Int64 $tmp1699;
    panda$core$Int64 $tmp1703;
    panda$core$Int64 $tmp1707;
    panda$core$Int64 $tmp1711;
    panda$core$String* $returnValue1714;
    panda$core$String* $tmp1715;
    panda$core$String* $tmp1716;
    panda$core$Int64 $tmp1719;
    org$pandalanguage$pandac$parser$Token token1721;
    panda$core$Int64 $tmp1723;
    panda$core$String* $tmp1725;
    panda$core$String* $tmp1728;
    panda$core$Int64 $tmp1731;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1733;
    panda$core$Int64 $tmp1734;
    panda$core$String* $tmp1737;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1739;
    panda$core$Int64 $tmp1740;
    panda$core$String* $tmp1742;
    panda$core$String* $tmp1745;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1756;
    org$pandalanguage$pandac$parser$Token $tmp1605 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1604 = $tmp1605;
    {
        $match$695_91606 = name1604.kind;
        panda$core$Int64$init$builtin_int64(&$tmp1628, 48);
        panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1628);
        bool $tmp1627 = $tmp1629.value;
        if ($tmp1627) goto $l1630;
        panda$core$Int64$init$builtin_int64(&$tmp1631, 51);
        panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1631);
        $tmp1627 = $tmp1632.value;
        $l1630:;
        panda$core$Bit $tmp1633 = { $tmp1627 };
        bool $tmp1626 = $tmp1633.value;
        if ($tmp1626) goto $l1634;
        panda$core$Int64$init$builtin_int64(&$tmp1635, 52);
        panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1635);
        $tmp1626 = $tmp1636.value;
        $l1634:;
        panda$core$Bit $tmp1637 = { $tmp1626 };
        bool $tmp1625 = $tmp1637.value;
        if ($tmp1625) goto $l1638;
        panda$core$Int64$init$builtin_int64(&$tmp1639, 53);
        panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1639);
        $tmp1625 = $tmp1640.value;
        $l1638:;
        panda$core$Bit $tmp1641 = { $tmp1625 };
        bool $tmp1624 = $tmp1641.value;
        if ($tmp1624) goto $l1642;
        panda$core$Int64$init$builtin_int64(&$tmp1643, 54);
        panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1643);
        $tmp1624 = $tmp1644.value;
        $l1642:;
        panda$core$Bit $tmp1645 = { $tmp1624 };
        bool $tmp1623 = $tmp1645.value;
        if ($tmp1623) goto $l1646;
        panda$core$Int64$init$builtin_int64(&$tmp1647, 55);
        panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1647);
        $tmp1623 = $tmp1648.value;
        $l1646:;
        panda$core$Bit $tmp1649 = { $tmp1623 };
        bool $tmp1622 = $tmp1649.value;
        if ($tmp1622) goto $l1650;
        panda$core$Int64$init$builtin_int64(&$tmp1651, 57);
        panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1651);
        $tmp1622 = $tmp1652.value;
        $l1650:;
        panda$core$Bit $tmp1653 = { $tmp1622 };
        bool $tmp1621 = $tmp1653.value;
        if ($tmp1621) goto $l1654;
        panda$core$Int64$init$builtin_int64(&$tmp1655, 58);
        panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1655);
        $tmp1621 = $tmp1656.value;
        $l1654:;
        panda$core$Bit $tmp1657 = { $tmp1621 };
        bool $tmp1620 = $tmp1657.value;
        if ($tmp1620) goto $l1658;
        panda$core$Int64$init$builtin_int64(&$tmp1659, 59);
        panda$core$Bit $tmp1660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1659);
        $tmp1620 = $tmp1660.value;
        $l1658:;
        panda$core$Bit $tmp1661 = { $tmp1620 };
        bool $tmp1619 = $tmp1661.value;
        if ($tmp1619) goto $l1662;
        panda$core$Int64$init$builtin_int64(&$tmp1663, 62);
        panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1663);
        $tmp1619 = $tmp1664.value;
        $l1662:;
        panda$core$Bit $tmp1665 = { $tmp1619 };
        bool $tmp1618 = $tmp1665.value;
        if ($tmp1618) goto $l1666;
        panda$core$Int64$init$builtin_int64(&$tmp1667, 65);
        panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1667);
        $tmp1618 = $tmp1668.value;
        $l1666:;
        panda$core$Bit $tmp1669 = { $tmp1618 };
        bool $tmp1617 = $tmp1669.value;
        if ($tmp1617) goto $l1670;
        panda$core$Int64$init$builtin_int64(&$tmp1671, 64);
        panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1671);
        $tmp1617 = $tmp1672.value;
        $l1670:;
        panda$core$Bit $tmp1673 = { $tmp1617 };
        bool $tmp1616 = $tmp1673.value;
        if ($tmp1616) goto $l1674;
        panda$core$Int64$init$builtin_int64(&$tmp1675, 56);
        panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1675);
        $tmp1616 = $tmp1676.value;
        $l1674:;
        panda$core$Bit $tmp1677 = { $tmp1616 };
        bool $tmp1615 = $tmp1677.value;
        if ($tmp1615) goto $l1678;
        panda$core$Int64$init$builtin_int64(&$tmp1679, 66);
        panda$core$Bit $tmp1680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1679);
        $tmp1615 = $tmp1680.value;
        $l1678:;
        panda$core$Bit $tmp1681 = { $tmp1615 };
        bool $tmp1614 = $tmp1681.value;
        if ($tmp1614) goto $l1682;
        panda$core$Int64$init$builtin_int64(&$tmp1683, 67);
        panda$core$Bit $tmp1684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1683);
        $tmp1614 = $tmp1684.value;
        $l1682:;
        panda$core$Bit $tmp1685 = { $tmp1614 };
        bool $tmp1613 = $tmp1685.value;
        if ($tmp1613) goto $l1686;
        panda$core$Int64$init$builtin_int64(&$tmp1687, 68);
        panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1687);
        $tmp1613 = $tmp1688.value;
        $l1686:;
        panda$core$Bit $tmp1689 = { $tmp1613 };
        bool $tmp1612 = $tmp1689.value;
        if ($tmp1612) goto $l1690;
        panda$core$Int64$init$builtin_int64(&$tmp1691, 69);
        panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1691);
        $tmp1612 = $tmp1692.value;
        $l1690:;
        panda$core$Bit $tmp1693 = { $tmp1612 };
        bool $tmp1611 = $tmp1693.value;
        if ($tmp1611) goto $l1694;
        panda$core$Int64$init$builtin_int64(&$tmp1695, 70);
        panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1695);
        $tmp1611 = $tmp1696.value;
        $l1694:;
        panda$core$Bit $tmp1697 = { $tmp1611 };
        bool $tmp1610 = $tmp1697.value;
        if ($tmp1610) goto $l1698;
        panda$core$Int64$init$builtin_int64(&$tmp1699, 71);
        panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1699);
        $tmp1610 = $tmp1700.value;
        $l1698:;
        panda$core$Bit $tmp1701 = { $tmp1610 };
        bool $tmp1609 = $tmp1701.value;
        if ($tmp1609) goto $l1702;
        panda$core$Int64$init$builtin_int64(&$tmp1703, 49);
        panda$core$Bit $tmp1704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1703);
        $tmp1609 = $tmp1704.value;
        $l1702:;
        panda$core$Bit $tmp1705 = { $tmp1609 };
        bool $tmp1608 = $tmp1705.value;
        if ($tmp1608) goto $l1706;
        panda$core$Int64$init$builtin_int64(&$tmp1707, 50);
        panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1707);
        $tmp1608 = $tmp1708.value;
        $l1706:;
        panda$core$Bit $tmp1709 = { $tmp1608 };
        bool $tmp1607 = $tmp1709.value;
        if ($tmp1607) goto $l1710;
        panda$core$Int64$init$builtin_int64(&$tmp1711, 72);
        panda$core$Bit $tmp1712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1711);
        $tmp1607 = $tmp1712.value;
        $l1710:;
        panda$core$Bit $tmp1713 = { $tmp1607 };
        if ($tmp1713.value) {
        {
            panda$core$String* $tmp1717 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1604);
            $tmp1716 = $tmp1717;
            $tmp1715 = $tmp1716;
            $returnValue1714 = $tmp1715;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
            return $returnValue1714;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1719, 63);
        panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1719);
        if ($tmp1720.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1722 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1721 = $tmp1722;
            panda$core$Int64$init$builtin_int64(&$tmp1723, 63);
            panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1721.kind.$rawValue, $tmp1723);
            if ($tmp1724.value) {
            {
                $tmp1725 = &$s1726;
                $returnValue1714 = $tmp1725;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1725));
                return $returnValue1714;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1721);
                $tmp1728 = &$s1729;
                $returnValue1714 = $tmp1728;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
                return $returnValue1714;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1731, 101);
        panda$core$Bit $tmp1732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$695_91606.$rawValue, $tmp1731);
        if ($tmp1732.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1734, 102);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1733, $tmp1734);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1736 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1733, &$s1735);
            if (((panda$core$Bit) { !$tmp1736.nonnull }).value) {
            {
                $tmp1737 = NULL;
                $returnValue1714 = $tmp1737;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
                return $returnValue1714;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp1740, 73);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1739, $tmp1740);
            org$pandalanguage$pandac$parser$Token$nullable $tmp1741 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1739);
            if (((panda$core$Bit) { $tmp1741.nonnull }).value) {
            {
                $tmp1742 = &$s1743;
                $returnValue1714 = $tmp1742;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
                return $returnValue1714;
            }
            }
            $tmp1745 = &$s1746;
            $returnValue1714 = $tmp1745;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
            return $returnValue1714;
        }
        }
        else {
        {
            panda$core$String* $tmp1752 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1604);
            $tmp1751 = $tmp1752;
            panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1750, $tmp1751);
            $tmp1749 = $tmp1753;
            panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, &$s1754);
            $tmp1748 = $tmp1755;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1604, $tmp1748);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
            $tmp1756 = NULL;
            $returnValue1714 = $tmp1756;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
            return $returnValue1714;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1758;
    org$pandalanguage$pandac$ASTNode* $tmp1759;
    org$pandalanguage$pandac$ASTNode* $tmp1760;
    panda$core$Bit $tmp1761;
    panda$core$Bit$init$builtin_bit(&$tmp1761, true);
    org$pandalanguage$pandac$ASTNode* $tmp1762 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1761);
    $tmp1760 = $tmp1762;
    $tmp1759 = $tmp1760;
    $returnValue1758 = $tmp1759;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1759));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
    return $returnValue1758;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1767;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1768;
    panda$core$Int64 $tmp1769;
    org$pandalanguage$pandac$ASTNode* $returnValue1772;
    org$pandalanguage$pandac$ASTNode* $tmp1773;
    panda$collections$Array* subtypes1776 = NULL;
    panda$collections$Array* $tmp1777;
    panda$collections$Array* $tmp1778;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1780;
    panda$core$Int64 $tmp1781;
    org$pandalanguage$pandac$ASTNode* t1786 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1787;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    org$pandalanguage$pandac$ASTNode* $tmp1790;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1797;
    panda$core$Int64 $tmp1798;
    org$pandalanguage$pandac$ASTNode* $tmp1800;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    org$pandalanguage$pandac$ASTNode* $tmp1802;
    org$pandalanguage$pandac$ASTNode* $tmp1804;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1808;
    panda$core$Int64 $tmp1809;
    org$pandalanguage$pandac$ASTNode* $tmp1812;
    org$pandalanguage$pandac$parser$Token yields1817;
    org$pandalanguage$pandac$parser$Token$Kind $match$759_91819;
    panda$core$Int64 $tmp1823;
    panda$core$Int64 $tmp1826;
    panda$core$Int64 $tmp1830;
    panda$core$Int64 $tmp1834;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1840;
    panda$core$Int64 $tmp1841;
    org$pandalanguage$pandac$ASTNode* $tmp1844;
    panda$collections$Array* returnTypes1848 = NULL;
    panda$collections$Array* $tmp1849;
    panda$collections$Array* $tmp1850;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1852;
    panda$core$Int64 $tmp1853;
    org$pandalanguage$pandac$ASTNode* t1858 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1859;
    org$pandalanguage$pandac$ASTNode* $tmp1860;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1870;
    panda$core$Int64 $tmp1871;
    org$pandalanguage$pandac$ASTNode* $tmp1873;
    org$pandalanguage$pandac$ASTNode* $tmp1874;
    org$pandalanguage$pandac$ASTNode* $tmp1875;
    org$pandalanguage$pandac$ASTNode* $tmp1877;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1882;
    panda$core$Int64 $tmp1883;
    org$pandalanguage$pandac$ASTNode* $tmp1886;
    org$pandalanguage$pandac$ASTNode* returnType1892 = NULL;
    panda$core$Int64 $tmp1894;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$ASTNode* $tmp1897;
    panda$core$Int64 $tmp1899;
    org$pandalanguage$pandac$ASTNode* $tmp1901;
    org$pandalanguage$pandac$ASTNode* $tmp1902;
    panda$core$Object* $tmp1903;
    panda$core$Int64 $tmp1904;
    org$pandalanguage$pandac$ASTNode* $tmp1907;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    org$pandalanguage$pandac$ASTNode* $tmp1912;
    panda$core$Int64 $tmp1914;
    panda$collections$ImmutableArray* $tmp1915;
    org$pandalanguage$pandac$ASTNode* $tmp1922;
    int $tmp1766;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1769, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1768, $tmp1769);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1768, &$s1770);
        start1767 = $tmp1771;
        if (((panda$core$Bit) { !start1767.nonnull }).value) {
        {
            $tmp1773 = NULL;
            $returnValue1772 = $tmp1773;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1773));
            $tmp1766 = 0;
            goto $l1764;
            $l1774:;
            return $returnValue1772;
        }
        }
        panda$collections$Array* $tmp1779 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1779);
        $tmp1778 = $tmp1779;
        $tmp1777 = $tmp1778;
        subtypes1776 = $tmp1777;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
        panda$core$Int64$init$builtin_int64(&$tmp1781, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1780, $tmp1781);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1782 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1780);
        if (((panda$core$Bit) { !$tmp1782.nonnull }).value) {
        {
            int $tmp1785;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1789 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1788 = $tmp1789;
                $tmp1787 = $tmp1788;
                t1786 = $tmp1787;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                if (((panda$core$Bit) { t1786 == NULL }).value) {
                {
                    $tmp1790 = NULL;
                    $returnValue1772 = $tmp1790;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                    $tmp1785 = 0;
                    goto $l1783;
                    $l1791:;
                    $tmp1766 = 1;
                    goto $l1764;
                    $l1792:;
                    return $returnValue1772;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1776, ((panda$core$Object*) t1786));
                $l1794:;
                panda$core$Int64$init$builtin_int64(&$tmp1798, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1797, $tmp1798);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1799 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1797);
                bool $tmp1796 = ((panda$core$Bit) { $tmp1799.nonnull }).value;
                if (!$tmp1796) goto $l1795;
                {
                    {
                        $tmp1800 = t1786;
                        org$pandalanguage$pandac$ASTNode* $tmp1803 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1802 = $tmp1803;
                        $tmp1801 = $tmp1802;
                        t1786 = $tmp1801;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1801));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1802));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
                    }
                    if (((panda$core$Bit) { t1786 == NULL }).value) {
                    {
                        $tmp1804 = NULL;
                        $returnValue1772 = $tmp1804;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1804));
                        $tmp1785 = 1;
                        goto $l1783;
                        $l1805:;
                        $tmp1766 = 2;
                        goto $l1764;
                        $l1806:;
                        return $returnValue1772;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1776, ((panda$core$Object*) t1786));
                }
                goto $l1794;
                $l1795:;
                panda$core$Int64$init$builtin_int64(&$tmp1809, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1808, $tmp1809);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1811 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1808, &$s1810);
                if (((panda$core$Bit) { !$tmp1811.nonnull }).value) {
                {
                    $tmp1812 = NULL;
                    $returnValue1772 = $tmp1812;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1812));
                    $tmp1785 = 2;
                    goto $l1783;
                    $l1813:;
                    $tmp1766 = 3;
                    goto $l1764;
                    $l1814:;
                    return $returnValue1772;
                }
                }
            }
            $tmp1785 = -1;
            goto $l1783;
            $l1783:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1786));
            t1786 = NULL;
            switch ($tmp1785) {
                case 2: goto $l1813;
                case 1: goto $l1805;
                case -1: goto $l1816;
                case 0: goto $l1791;
            }
            $l1816:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1818 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1817 = $tmp1818;
        {
            $match$759_91819 = yields1817.kind;
            panda$core$Int64$init$builtin_int64(&$tmp1823, 90);
            panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$759_91819.$rawValue, $tmp1823);
            bool $tmp1822 = $tmp1824.value;
            if ($tmp1822) goto $l1825;
            panda$core$Int64$init$builtin_int64(&$tmp1826, 91);
            panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$759_91819.$rawValue, $tmp1826);
            $tmp1822 = $tmp1827.value;
            $l1825:;
            panda$core$Bit $tmp1828 = { $tmp1822 };
            bool $tmp1821 = $tmp1828.value;
            if ($tmp1821) goto $l1829;
            panda$core$Int64$init$builtin_int64(&$tmp1830, 92);
            panda$core$Bit $tmp1831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$759_91819.$rawValue, $tmp1830);
            $tmp1821 = $tmp1831.value;
            $l1829:;
            panda$core$Bit $tmp1832 = { $tmp1821 };
            bool $tmp1820 = $tmp1832.value;
            if ($tmp1820) goto $l1833;
            panda$core$Int64$init$builtin_int64(&$tmp1834, 93);
            panda$core$Bit $tmp1835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$759_91819.$rawValue, $tmp1834);
            $tmp1820 = $tmp1835.value;
            $l1833:;
            panda$core$Bit $tmp1836 = { $tmp1820 };
            if ($tmp1836.value) {
            {
                int $tmp1839;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp1841, 103);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1840, $tmp1841);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1843 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1840, &$s1842);
                    if (((panda$core$Bit) { !$tmp1843.nonnull }).value) {
                    {
                        $tmp1844 = NULL;
                        $returnValue1772 = $tmp1844;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1844));
                        $tmp1839 = 0;
                        goto $l1837;
                        $l1845:;
                        $tmp1766 = 4;
                        goto $l1764;
                        $l1846:;
                        return $returnValue1772;
                    }
                    }
                    panda$collections$Array* $tmp1851 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1851);
                    $tmp1850 = $tmp1851;
                    $tmp1849 = $tmp1850;
                    returnTypes1848 = $tmp1849;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
                    panda$core$Int64$init$builtin_int64(&$tmp1853, 104);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1852, $tmp1853);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1854 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1852);
                    if (((panda$core$Bit) { !$tmp1854.nonnull }).value) {
                    {
                        int $tmp1857;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1861 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1860 = $tmp1861;
                            $tmp1859 = $tmp1860;
                            t1858 = $tmp1859;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1859));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                            if (((panda$core$Bit) { t1858 == NULL }).value) {
                            {
                                $tmp1862 = NULL;
                                $returnValue1772 = $tmp1862;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
                                $tmp1857 = 0;
                                goto $l1855;
                                $l1863:;
                                $tmp1839 = 1;
                                goto $l1837;
                                $l1864:;
                                $tmp1766 = 5;
                                goto $l1764;
                                $l1865:;
                                return $returnValue1772;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1848, ((panda$core$Object*) t1858));
                            $l1867:;
                            panda$core$Int64$init$builtin_int64(&$tmp1871, 105);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1870, $tmp1871);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1872 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1870);
                            bool $tmp1869 = ((panda$core$Bit) { $tmp1872.nonnull }).value;
                            if (!$tmp1869) goto $l1868;
                            {
                                {
                                    $tmp1873 = t1858;
                                    org$pandalanguage$pandac$ASTNode* $tmp1876 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1875 = $tmp1876;
                                    $tmp1874 = $tmp1875;
                                    t1858 = $tmp1874;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1873));
                                }
                                if (((panda$core$Bit) { t1858 == NULL }).value) {
                                {
                                    $tmp1877 = NULL;
                                    $returnValue1772 = $tmp1877;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                                    $tmp1857 = 1;
                                    goto $l1855;
                                    $l1878:;
                                    $tmp1839 = 2;
                                    goto $l1837;
                                    $l1879:;
                                    $tmp1766 = 6;
                                    goto $l1764;
                                    $l1880:;
                                    return $returnValue1772;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1848, ((panda$core$Object*) t1858));
                            }
                            goto $l1867;
                            $l1868:;
                            panda$core$Int64$init$builtin_int64(&$tmp1883, 104);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1882, $tmp1883);
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1885 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1882, &$s1884);
                            if (((panda$core$Bit) { !$tmp1885.nonnull }).value) {
                            {
                                $tmp1886 = NULL;
                                $returnValue1772 = $tmp1886;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1886));
                                $tmp1857 = 2;
                                goto $l1855;
                                $l1887:;
                                $tmp1839 = 3;
                                goto $l1837;
                                $l1888:;
                                $tmp1766 = 7;
                                goto $l1764;
                                $l1889:;
                                return $returnValue1772;
                            }
                            }
                        }
                        $tmp1857 = -1;
                        goto $l1855;
                        $l1855:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1858));
                        t1858 = NULL;
                        switch ($tmp1857) {
                            case 1: goto $l1878;
                            case -1: goto $l1891;
                            case 2: goto $l1887;
                            case 0: goto $l1863;
                        }
                        $l1891:;
                    }
                    }
                    memset(&returnType1892, 0, sizeof(returnType1892));
                    panda$core$Int64 $tmp1893 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1848);
                    panda$core$Int64$init$builtin_int64(&$tmp1894, 0);
                    panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1893, $tmp1894);
                    if ($tmp1895.value) {
                    {
                        {
                            $tmp1896 = returnType1892;
                            $tmp1897 = NULL;
                            returnType1892 = $tmp1897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1897));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1898 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1848);
                    panda$core$Int64$init$builtin_int64(&$tmp1899, 1);
                    panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1898, $tmp1899);
                    if ($tmp1900.value) {
                    {
                        {
                            $tmp1901 = returnType1892;
                            panda$core$Int64$init$builtin_int64(&$tmp1904, 0);
                            panda$core$Object* $tmp1905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1848, $tmp1904);
                            $tmp1903 = $tmp1905;
                            $tmp1902 = ((org$pandalanguage$pandac$ASTNode*) $tmp1903);
                            returnType1892 = $tmp1902;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                            panda$core$Panda$unref$panda$core$Object($tmp1903);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1767.value), &$s1906);
                        $tmp1907 = NULL;
                        $returnValue1772 = $tmp1907;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                        $tmp1839 = 4;
                        goto $l1837;
                        $l1908:;
                        $tmp1766 = 8;
                        goto $l1764;
                        $l1909:;
                        return $returnValue1772;
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1913 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1914, 27);
                    panda$collections$ImmutableArray* $tmp1916 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1776);
                    $tmp1915 = $tmp1916;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1913, $tmp1914, ((org$pandalanguage$pandac$parser$Token) start1767.value).position, yields1817.kind, $tmp1915, returnType1892);
                    $tmp1912 = $tmp1913;
                    $tmp1911 = $tmp1912;
                    $returnValue1772 = $tmp1911;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                    $tmp1839 = 5;
                    goto $l1837;
                    $l1917:;
                    $tmp1766 = 9;
                    goto $l1764;
                    $l1918:;
                    return $returnValue1772;
                }
                $l1837:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1892));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1848));
                returnTypes1848 = NULL;
                switch ($tmp1839) {
                    case 5: goto $l1917;
                    case 4: goto $l1908;
                    case 1: goto $l1864;
                    case 2: goto $l1879;
                    case 0: goto $l1845;
                    case 3: goto $l1888;
                }
                $l1920:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1767.value), &$s1921);
                $tmp1922 = NULL;
                $returnValue1772 = $tmp1922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
                $tmp1766 = 10;
                goto $l1764;
                $l1923:;
                return $returnValue1772;
            }
            }
        }
    }
    $tmp1766 = -1;
    goto $l1764;
    $l1764:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1776));
    subtypes1776 = NULL;
    switch ($tmp1766) {
        case 1: goto $l1792;
        case -1: goto $l1925;
        case 6: goto $l1880;
        case 10: goto $l1923;
        case 3: goto $l1814;
        case 2: goto $l1806;
        case 8: goto $l1909;
        case 5: goto $l1865;
        case 7: goto $l1889;
        case 4: goto $l1846;
        case 9: goto $l1918;
        case 0: goto $l1774;
    }
    $l1925:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* result1929 = NULL;
    panda$core$Int64 $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1933;
    org$pandalanguage$pandac$ASTNode* $tmp1934;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    org$pandalanguage$pandac$ASTNode* $returnValue1937;
    org$pandalanguage$pandac$ASTNode* $tmp1938;
    org$pandalanguage$pandac$parser$Token$nullable start1944;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1945;
    panda$core$Int64 $tmp1946;
    org$pandalanguage$pandac$ASTNode* $tmp1949;
    panda$core$MutableString* name1953 = NULL;
    panda$core$MutableString* $tmp1954;
    panda$core$MutableString* $tmp1955;
    panda$core$String* $tmp1957;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1962;
    panda$core$Int64 $tmp1963;
    org$pandalanguage$pandac$parser$Token$nullable id1965;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1966;
    panda$core$Int64 $tmp1967;
    org$pandalanguage$pandac$ASTNode* $tmp1970;
    panda$core$Char8 $tmp1974;
    panda$core$UInt8 $tmp1975;
    panda$core$String* $tmp1976;
    panda$core$String* finalName1978 = NULL;
    panda$core$String* $tmp1979;
    panda$core$String* $tmp1980;
    org$pandalanguage$pandac$ASTNode* $tmp1982;
    org$pandalanguage$pandac$ASTNode* $tmp1983;
    org$pandalanguage$pandac$ASTNode* $tmp1984;
    panda$core$Int64 $tmp1986;
    panda$core$Int64 $tmp1988;
    panda$collections$Array* children1993 = NULL;
    panda$collections$Array* $tmp1994;
    panda$collections$Array* $tmp1995;
    org$pandalanguage$pandac$ASTNode* t1997 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1998;
    org$pandalanguage$pandac$ASTNode* $tmp1999;
    panda$core$Bit $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2002;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2015;
    panda$core$Int64 $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    org$pandalanguage$pandac$ASTNode* $tmp2019;
    org$pandalanguage$pandac$ASTNode* $tmp2020;
    panda$core$Bit $tmp2021;
    org$pandalanguage$pandac$ASTNode* $tmp2023;
    org$pandalanguage$pandac$ASTNode* $tmp2028;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2033;
    panda$core$Int64 $tmp2034;
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    org$pandalanguage$pandac$ASTNode* $tmp2042;
    org$pandalanguage$pandac$ASTNode* $tmp2047;
    org$pandalanguage$pandac$ASTNode* $tmp2048;
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    panda$core$Int64 $tmp2051;
    panda$collections$ImmutableArray* $tmp2052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2056;
    panda$core$Int64 $tmp2057;
    org$pandalanguage$pandac$ASTNode* $tmp2059;
    org$pandalanguage$pandac$ASTNode* $tmp2060;
    org$pandalanguage$pandac$ASTNode* $tmp2061;
    panda$core$Int64 $tmp2063;
    org$pandalanguage$pandac$ASTNode* $tmp2066;
    int $tmp1928;
    {
        memset(&result1929, 0, sizeof(result1929));
        org$pandalanguage$pandac$parser$Token $tmp1930 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp1931, 103);
        panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1930.kind.$rawValue, $tmp1931);
        if ($tmp1932.value) {
        {
            {
                $tmp1933 = result1929;
                org$pandalanguage$pandac$ASTNode* $tmp1936 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1935 = $tmp1936;
                $tmp1934 = $tmp1935;
                result1929 = $tmp1934;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
            }
            if (((panda$core$Bit) { result1929 == NULL }).value) {
            {
                $tmp1938 = NULL;
                $returnValue1937 = $tmp1938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1938));
                $tmp1928 = 0;
                goto $l1926;
                $l1939:;
                return $returnValue1937;
            }
            }
        }
        }
        else {
        {
            int $tmp1943;
            {
                panda$core$Int64$init$builtin_int64(&$tmp1946, 48);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1945, $tmp1946);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1948 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1945, &$s1947);
                start1944 = $tmp1948;
                if (((panda$core$Bit) { !start1944.nonnull }).value) {
                {
                    $tmp1949 = NULL;
                    $returnValue1937 = $tmp1949;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1949));
                    $tmp1943 = 0;
                    goto $l1941;
                    $l1950:;
                    $tmp1928 = 1;
                    goto $l1926;
                    $l1951:;
                    return $returnValue1937;
                }
                }
                panda$core$MutableString* $tmp1956 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1958 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1944.value));
                $tmp1957 = $tmp1958;
                panda$core$MutableString$init$panda$core$String($tmp1956, $tmp1957);
                $tmp1955 = $tmp1956;
                $tmp1954 = $tmp1955;
                name1953 = $tmp1954;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                $l1959:;
                panda$core$Int64$init$builtin_int64(&$tmp1963, 98);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1962, $tmp1963);
                org$pandalanguage$pandac$parser$Token$nullable $tmp1964 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1962);
                bool $tmp1961 = ((panda$core$Bit) { $tmp1964.nonnull }).value;
                if (!$tmp1961) goto $l1960;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1967, 48);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1966, $tmp1967);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1969 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1966, &$s1968);
                    id1965 = $tmp1969;
                    if (((panda$core$Bit) { !id1965.nonnull }).value) {
                    {
                        $tmp1970 = NULL;
                        $returnValue1937 = $tmp1970;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
                        $tmp1943 = 1;
                        goto $l1941;
                        $l1971:;
                        $tmp1928 = 2;
                        goto $l1926;
                        $l1972:;
                        return $returnValue1937;
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1975, 46);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1974, $tmp1975);
                    panda$core$MutableString$append$panda$core$Char8(name1953, $tmp1974);
                    panda$core$String* $tmp1977 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1965.value));
                    $tmp1976 = $tmp1977;
                    panda$core$MutableString$append$panda$core$String(name1953, $tmp1976);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1976));
                }
                goto $l1959;
                $l1960:;
                panda$core$String* $tmp1981 = panda$core$MutableString$finish$R$panda$core$String(name1953);
                $tmp1980 = $tmp1981;
                $tmp1979 = $tmp1980;
                finalName1978 = $tmp1979;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
                {
                    $tmp1982 = result1929;
                    org$pandalanguage$pandac$ASTNode* $tmp1985 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp1986, 42);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1985, $tmp1986, ((org$pandalanguage$pandac$parser$Token) start1944.value).position, finalName1978);
                    $tmp1984 = $tmp1985;
                    $tmp1983 = $tmp1984;
                    result1929 = $tmp1983;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
                }
                org$pandalanguage$pandac$parser$Token $tmp1987 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$Int64$init$builtin_int64(&$tmp1988, 62);
                panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1987.kind.$rawValue, $tmp1988);
                if ($tmp1989.value) {
                {
                    int $tmp1992;
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                        }
                        }
                        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                        panda$collections$Array* $tmp1996 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1996);
                        $tmp1995 = $tmp1996;
                        $tmp1994 = $tmp1995;
                        children1993 = $tmp1994;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1994));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
                        panda$core$Bit$init$builtin_bit(&$tmp2000, false);
                        org$pandalanguage$pandac$ASTNode* $tmp2001 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2000);
                        $tmp1999 = $tmp2001;
                        $tmp1998 = $tmp1999;
                        t1997 = $tmp1998;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1998));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
                        if (((panda$core$Bit) { t1997 == NULL }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2002 = result1929;
                                $returnValue1937 = $tmp2002;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
                                $tmp1992 = 0;
                                goto $l1990;
                                $l2003:;
                                $tmp1943 = 2;
                                goto $l1941;
                                $l2004:;
                                $tmp1928 = 3;
                                goto $l1926;
                                $l2005:;
                                return $returnValue1937;
                            }
                            }
                            $tmp2007 = NULL;
                            $returnValue1937 = $tmp2007;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2007));
                            $tmp1992 = 1;
                            goto $l1990;
                            $l2008:;
                            $tmp1943 = 3;
                            goto $l1941;
                            $l2009:;
                            $tmp1928 = 4;
                            goto $l1926;
                            $l2010:;
                            return $returnValue1937;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) t1997));
                        $l2012:;
                        panda$core$Int64$init$builtin_int64(&$tmp2016, 105);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2015, $tmp2016);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2017 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2015);
                        bool $tmp2014 = ((panda$core$Bit) { $tmp2017.nonnull }).value;
                        if (!$tmp2014) goto $l2013;
                        {
                            {
                                $tmp2018 = t1997;
                                panda$core$Bit$init$builtin_bit(&$tmp2021, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2022 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2021);
                                $tmp2020 = $tmp2022;
                                $tmp2019 = $tmp2020;
                                t1997 = $tmp2019;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2018));
                            }
                            if (((panda$core$Bit) { t1997 == NULL }).value) {
                            {
                                if (p_needSpeculativeParse.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2023 = result1929;
                                    $returnValue1937 = $tmp2023;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                                    $tmp1992 = 2;
                                    goto $l1990;
                                    $l2024:;
                                    $tmp1943 = 4;
                                    goto $l1941;
                                    $l2025:;
                                    $tmp1928 = 5;
                                    goto $l1926;
                                    $l2026:;
                                    return $returnValue1937;
                                }
                                }
                                $tmp2028 = NULL;
                                $returnValue1937 = $tmp2028;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2028));
                                $tmp1992 = 3;
                                goto $l1990;
                                $l2029:;
                                $tmp1943 = 5;
                                goto $l1941;
                                $l2030:;
                                $tmp1928 = 6;
                                goto $l1926;
                                $l2031:;
                                return $returnValue1937;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) t1997));
                        }
                        goto $l2012;
                        $l2013:;
                        panda$core$Int64$init$builtin_int64(&$tmp2034, 63);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2033, $tmp2034);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2036 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2033, &$s2035);
                        if (((panda$core$Bit) { !$tmp2036.nonnull }).value) {
                        {
                            if (p_needSpeculativeParse.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$rewind(self);
                                $tmp2037 = result1929;
                                $returnValue1937 = $tmp2037;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
                                $tmp1992 = 4;
                                goto $l1990;
                                $l2038:;
                                $tmp1943 = 6;
                                goto $l1941;
                                $l2039:;
                                $tmp1928 = 7;
                                goto $l1926;
                                $l2040:;
                                return $returnValue1937;
                            }
                            }
                            $tmp2042 = NULL;
                            $returnValue1937 = $tmp2042;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
                            $tmp1992 = 5;
                            goto $l1990;
                            $l2043:;
                            $tmp1943 = 7;
                            goto $l1941;
                            $l2044:;
                            $tmp1928 = 8;
                            goto $l1926;
                            $l2045:;
                            return $returnValue1937;
                        }
                        }
                        {
                            $tmp2047 = result1929;
                            org$pandalanguage$pandac$ASTNode* $tmp2050 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2051, 19);
                            panda$collections$ImmutableArray* $tmp2053 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1993);
                            $tmp2052 = $tmp2053;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2050, $tmp2051, ((org$pandalanguage$pandac$parser$Token) start1944.value).position, finalName1978, $tmp2052);
                            $tmp2049 = $tmp2050;
                            $tmp2048 = $tmp2049;
                            result1929 = $tmp2048;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
                        }
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$accept(self);
                        }
                        }
                    }
                    $tmp1992 = -1;
                    goto $l1990;
                    $l1990:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1997));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1993));
                    children1993 = NULL;
                    t1997 = NULL;
                    switch ($tmp1992) {
                        case -1: goto $l2054;
                        case 3: goto $l2029;
                        case 1: goto $l2008;
                        case 2: goto $l2024;
                        case 5: goto $l2043;
                        case 4: goto $l2038;
                        case 0: goto $l2003;
                    }
                    $l2054:;
                }
                }
            }
            $tmp1943 = -1;
            goto $l1941;
            $l1941:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1978));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1953));
            name1953 = NULL;
            finalName1978 = NULL;
            switch ($tmp1943) {
                case 6: goto $l2039;
                case 4: goto $l2025;
                case 3: goto $l2009;
                case 0: goto $l1950;
                case -1: goto $l2055;
                case 7: goto $l2044;
                case 5: goto $l2030;
                case 1: goto $l1971;
                case 2: goto $l2004;
            }
            $l2055:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2057, 94);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2056, $tmp2057);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2058 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2056);
        if (((panda$core$Bit) { $tmp2058.nonnull }).value) {
        {
            {
                $tmp2059 = result1929;
                org$pandalanguage$pandac$ASTNode* $tmp2062 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2063, 29);
                org$pandalanguage$pandac$Position $tmp2065 = (($fn2064) result1929->$class->vtable[2])(result1929);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp2062, $tmp2063, $tmp2065, result1929);
                $tmp2061 = $tmp2062;
                $tmp2060 = $tmp2061;
                result1929 = $tmp2060;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2059));
            }
        }
        }
        $tmp2066 = result1929;
        $returnValue1937 = $tmp2066;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
        $tmp1928 = 9;
        goto $l1926;
        $l2067:;
        return $returnValue1937;
    }
    $l1926:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1929));
    switch ($tmp1928) {
        case 7: goto $l2040;
        case 1: goto $l1951;
        case 5: goto $l2026;
        case 9: goto $l2067;
        case 8: goto $l2045;
        case 4: goto $l2010;
        case 2: goto $l1972;
        case 6: goto $l2031;
        case 3: goto $l2005;
        case 0: goto $l1939;
    }
    $l2069:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2073 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    org$pandalanguage$pandac$ASTNode* $tmp2075;
    org$pandalanguage$pandac$ASTNode* $returnValue2077;
    org$pandalanguage$pandac$ASTNode* $tmp2078;
    org$pandalanguage$pandac$parser$Token token2083;
    org$pandalanguage$pandac$parser$Token$Kind $match$897_132085;
    panda$core$Int64 $tmp2086;
    panda$core$Object* $tmp2091;
    panda$core$Bit $tmp2092;
    panda$collections$Array* args2094 = NULL;
    panda$collections$Array* $tmp2095;
    panda$collections$Array* $tmp2096;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2098;
    panda$core$Int64 $tmp2099;
    org$pandalanguage$pandac$ASTNode* expr2104 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2105;
    org$pandalanguage$pandac$ASTNode* $tmp2106;
    panda$core$Object* $tmp2108;
    org$pandalanguage$pandac$ASTNode* $tmp2110;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2118;
    panda$core$Int64 $tmp2119;
    org$pandalanguage$pandac$ASTNode* $tmp2121;
    org$pandalanguage$pandac$ASTNode* $tmp2122;
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    panda$core$Object* $tmp2125;
    org$pandalanguage$pandac$ASTNode* $tmp2127;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2132;
    panda$core$Int64 $tmp2133;
    panda$core$Object* $tmp2136;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    panda$core$Object* $tmp2144;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2147;
    org$pandalanguage$pandac$ASTNode* $tmp2148;
    panda$core$Int64 $tmp2150;
    panda$collections$ImmutableArray* $tmp2151;
    panda$core$Int64 $tmp2154;
    org$pandalanguage$pandac$ASTNode* arg2159 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2160;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2163;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2167;
    panda$core$Int64 $tmp2168;
    org$pandalanguage$pandac$ASTNode* $tmp2171;
    org$pandalanguage$pandac$ASTNode* $tmp2175;
    org$pandalanguage$pandac$ASTNode* $tmp2176;
    org$pandalanguage$pandac$ASTNode* $tmp2177;
    panda$core$Int64 $tmp2179;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2180;
    panda$core$Int64 $tmp2181;
    panda$core$Int64 $tmp2183;
    panda$core$String* name2188 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2189;
    panda$core$Int64 $tmp2190;
    panda$core$String* $tmp2192;
    panda$core$String* $tmp2193;
    panda$core$String* $tmp2195;
    panda$core$String* $tmp2196;
    panda$core$String* $tmp2197;
    org$pandalanguage$pandac$ASTNode* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2203;
    org$pandalanguage$pandac$ASTNode* $tmp2204;
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    panda$core$Int64 $tmp2207;
    panda$core$Int64 $tmp2209;
    org$pandalanguage$pandac$ASTNode* target2214 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2215;
    org$pandalanguage$pandac$ASTNode* $tmp2216;
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    org$pandalanguage$pandac$ASTNode* $tmp2222;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    panda$core$Int64 $tmp2226;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2227;
    panda$core$Int64 $tmp2228;
    panda$core$Int64 $tmp2230;
    panda$core$String* name2235 = NULL;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$collections$Array* types2242 = NULL;
    panda$collections$Array* $tmp2243;
    panda$collections$Array* $tmp2244;
    org$pandalanguage$pandac$ASTNode* t2246 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    panda$core$Bit $tmp2249;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2259;
    panda$core$Int64 $tmp2260;
    org$pandalanguage$pandac$ASTNode* $tmp2262;
    org$pandalanguage$pandac$ASTNode* $tmp2263;
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    panda$core$Bit $tmp2265;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$parser$Token$nullable gt2272;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2273;
    panda$core$Int64 $tmp2274;
    org$pandalanguage$pandac$ASTNode* $tmp2277;
    panda$core$Bit shouldAccept2282;
    panda$core$Object* $tmp2283;
    panda$core$Int64 $tmp2284;
    org$pandalanguage$pandac$parser$Token n2286;
    org$pandalanguage$pandac$parser$Token$Kind $match$1010_292288;
    panda$core$Int64 $tmp2291;
    panda$core$Int64 $tmp2294;
    panda$core$Int64 $tmp2298;
    panda$core$Bit $tmp2301;
    panda$core$Int64 $tmp2302;
    panda$core$Int64 $tmp2307;
    panda$core$Bit $tmp2311;
    panda$core$Bit $tmp2312;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    org$pandalanguage$pandac$ASTNode* $tmp2314;
    org$pandalanguage$pandac$ASTNode* $tmp2315;
    panda$core$Int64 $tmp2317;
    panda$collections$ImmutableArray* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $tmp2324;
    org$pandalanguage$pandac$ASTNode* $tmp2330;
    org$pandalanguage$pandac$ASTNode* $tmp2335;
    int $tmp2072;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2076 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2075 = $tmp2076;
        $tmp2074 = $tmp2075;
        result2073 = $tmp2074;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
        if (((panda$core$Bit) { result2073 == NULL }).value) {
        {
            $tmp2078 = NULL;
            $returnValue2077 = $tmp2078;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2078));
            $tmp2072 = 0;
            goto $l2070;
            $l2079:;
            return $returnValue2077;
        }
        }
        $l2081:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2084 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token2083 = $tmp2084;
            {
                $match$897_132085 = token2083.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2086, 103);
                panda$core$Bit $tmp2087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$897_132085.$rawValue, $tmp2086);
                if ($tmp2087.value) {
                {
                    int $tmp2090;
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp2092, true);
                        panda$core$Bit$wrapper* $tmp2093;
                        $tmp2093 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp2093->value = $tmp2092;
                        $tmp2091 = ((panda$core$Object*) $tmp2093);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2091);
                        panda$core$Panda$unref$panda$core$Object($tmp2091);
                        panda$collections$Array* $tmp2097 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2097);
                        $tmp2096 = $tmp2097;
                        $tmp2095 = $tmp2096;
                        args2094 = $tmp2095;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2095));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                        panda$core$Int64$init$builtin_int64(&$tmp2099, 104);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2098, $tmp2099);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2100 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2098);
                        if (((panda$core$Bit) { !$tmp2100.nonnull }).value) {
                        {
                            int $tmp2103;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2107 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2106 = $tmp2107;
                                $tmp2105 = $tmp2106;
                                expr2104 = $tmp2105;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2105));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2106));
                                if (((panda$core$Bit) { expr2104 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp2109 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2108 = $tmp2109;
                                    panda$core$Panda$unref$panda$core$Object($tmp2108);
                                    $tmp2110 = NULL;
                                    $returnValue2077 = $tmp2110;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2110));
                                    $tmp2103 = 0;
                                    goto $l2101;
                                    $l2111:;
                                    $tmp2090 = 0;
                                    goto $l2088;
                                    $l2112:;
                                    $tmp2072 = 1;
                                    goto $l2070;
                                    $l2113:;
                                    return $returnValue2077;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args2094, ((panda$core$Object*) expr2104));
                                $l2115:;
                                panda$core$Int64$init$builtin_int64(&$tmp2119, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2118, $tmp2119);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2120 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2118);
                                bool $tmp2117 = ((panda$core$Bit) { $tmp2120.nonnull }).value;
                                if (!$tmp2117) goto $l2116;
                                {
                                    {
                                        $tmp2121 = expr2104;
                                        org$pandalanguage$pandac$ASTNode* $tmp2124 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp2123 = $tmp2124;
                                        $tmp2122 = $tmp2123;
                                        expr2104 = $tmp2122;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2122));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                                    }
                                    if (((panda$core$Bit) { expr2104 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp2126 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp2125 = $tmp2126;
                                        panda$core$Panda$unref$panda$core$Object($tmp2125);
                                        $tmp2127 = NULL;
                                        $returnValue2077 = $tmp2127;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
                                        $tmp2103 = 1;
                                        goto $l2101;
                                        $l2128:;
                                        $tmp2090 = 1;
                                        goto $l2088;
                                        $l2129:;
                                        $tmp2072 = 2;
                                        goto $l2070;
                                        $l2130:;
                                        return $returnValue2077;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args2094, ((panda$core$Object*) expr2104));
                                }
                                goto $l2115;
                                $l2116:;
                                panda$core$Int64$init$builtin_int64(&$tmp2133, 104);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2132, $tmp2133);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2135 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2132, &$s2134);
                                if (((panda$core$Bit) { !$tmp2135.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp2137 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp2136 = $tmp2137;
                                    panda$core$Panda$unref$panda$core$Object($tmp2136);
                                    $tmp2138 = NULL;
                                    $returnValue2077 = $tmp2138;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2138));
                                    $tmp2103 = 2;
                                    goto $l2101;
                                    $l2139:;
                                    $tmp2090 = 2;
                                    goto $l2088;
                                    $l2140:;
                                    $tmp2072 = 3;
                                    goto $l2070;
                                    $l2141:;
                                    return $returnValue2077;
                                }
                                }
                            }
                            $tmp2103 = -1;
                            goto $l2101;
                            $l2101:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2104));
                            expr2104 = NULL;
                            switch ($tmp2103) {
                                case 2: goto $l2139;
                                case 1: goto $l2128;
                                case 0: goto $l2111;
                                case -1: goto $l2143;
                            }
                            $l2143:;
                        }
                        }
                        panda$core$Object* $tmp2145 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2144 = $tmp2145;
                        panda$core$Panda$unref$panda$core$Object($tmp2144);
                        {
                            $tmp2146 = result2073;
                            org$pandalanguage$pandac$ASTNode* $tmp2149 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2150, 8);
                            panda$collections$ImmutableArray* $tmp2152 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2094);
                            $tmp2151 = $tmp2152;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2149, $tmp2150, token2083.position, result2073, $tmp2151);
                            $tmp2148 = $tmp2149;
                            $tmp2147 = $tmp2148;
                            result2073 = $tmp2147;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2147));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2148));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                        }
                    }
                    $tmp2090 = -1;
                    goto $l2088;
                    $l2088:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2094));
                    args2094 = NULL;
                    switch ($tmp2090) {
                        case 2: goto $l2140;
                        case 0: goto $l2112;
                        case 1: goto $l2129;
                        case -1: goto $l2153;
                    }
                    $l2153:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2154, 101);
                panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$897_132085.$rawValue, $tmp2154);
                if ($tmp2155.value) {
                {
                    int $tmp2158;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2162 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2161 = $tmp2162;
                        $tmp2160 = $tmp2161;
                        arg2159 = $tmp2160;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2160));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
                        if (((panda$core$Bit) { arg2159 == NULL }).value) {
                        {
                            $tmp2163 = NULL;
                            $returnValue2077 = $tmp2163;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
                            $tmp2158 = 0;
                            goto $l2156;
                            $l2164:;
                            $tmp2072 = 4;
                            goto $l2070;
                            $l2165:;
                            return $returnValue2077;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp2168, 102);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2167, $tmp2168);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2170 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2167, &$s2169);
                        if (((panda$core$Bit) { !$tmp2170.nonnull }).value) {
                        {
                            $tmp2171 = NULL;
                            $returnValue2077 = $tmp2171;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
                            $tmp2158 = 1;
                            goto $l2156;
                            $l2172:;
                            $tmp2072 = 5;
                            goto $l2070;
                            $l2173:;
                            return $returnValue2077;
                        }
                        }
                        {
                            $tmp2175 = result2073;
                            org$pandalanguage$pandac$ASTNode* $tmp2178 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2179, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2181, 101);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2180, $tmp2181);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2178, $tmp2179, token2083.position, result2073, $tmp2180, arg2159);
                            $tmp2177 = $tmp2178;
                            $tmp2176 = $tmp2177;
                            result2073 = $tmp2176;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2176));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
                        }
                    }
                    $tmp2158 = -1;
                    goto $l2156;
                    $l2156:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg2159));
                    arg2159 = NULL;
                    switch ($tmp2158) {
                        case 1: goto $l2172;
                        case -1: goto $l2182;
                        case 0: goto $l2164;
                    }
                    $l2182:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2183, 98);
                panda$core$Bit $tmp2184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$897_132085.$rawValue, $tmp2183);
                if ($tmp2184.value) {
                {
                    int $tmp2187;
                    {
                        memset(&name2188, 0, sizeof(name2188));
                        panda$core$Int64$init$builtin_int64(&$tmp2190, 22);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2189, $tmp2190);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2191 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2189);
                        if (((panda$core$Bit) { $tmp2191.nonnull }).value) {
                        {
                            {
                                $tmp2192 = name2188;
                                $tmp2193 = &$s2194;
                                name2188 = $tmp2193;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp2195 = name2188;
                                panda$core$String* $tmp2198 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp2197 = $tmp2198;
                                $tmp2196 = $tmp2197;
                                name2188 = $tmp2196;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
                            }
                            if (((panda$core$Bit) { name2188 == NULL }).value) {
                            {
                                $tmp2199 = NULL;
                                $returnValue2077 = $tmp2199;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                                $tmp2187 = 0;
                                goto $l2185;
                                $l2200:;
                                $tmp2072 = 6;
                                goto $l2070;
                                $l2201:;
                                return $returnValue2077;
                            }
                            }
                        }
                        }
                        {
                            $tmp2203 = result2073;
                            org$pandalanguage$pandac$ASTNode* $tmp2206 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2207, 15);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp2206, $tmp2207, token2083.position, result2073, name2188);
                            $tmp2205 = $tmp2206;
                            $tmp2204 = $tmp2205;
                            result2073 = $tmp2204;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2204));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
                        }
                    }
                    $tmp2187 = -1;
                    goto $l2185;
                    $l2185:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2188));
                    switch ($tmp2187) {
                        case 0: goto $l2200;
                        case -1: goto $l2208;
                    }
                    $l2208:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2209, 89);
                panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$897_132085.$rawValue, $tmp2209);
                if ($tmp2210.value) {
                {
                    int $tmp2213;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2217 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2216 = $tmp2217;
                        $tmp2215 = $tmp2216;
                        target2214 = $tmp2215;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2215));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2216));
                        if (((panda$core$Bit) { target2214 == NULL }).value) {
                        {
                            $tmp2218 = NULL;
                            $returnValue2077 = $tmp2218;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
                            $tmp2213 = 0;
                            goto $l2211;
                            $l2219:;
                            $tmp2072 = 7;
                            goto $l2070;
                            $l2220:;
                            return $returnValue2077;
                        }
                        }
                        {
                            $tmp2222 = result2073;
                            org$pandalanguage$pandac$ASTNode* $tmp2225 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2226, 4);
                            panda$core$Int64$init$builtin_int64(&$tmp2228, 89);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2227, $tmp2228);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2225, $tmp2226, token2083.position, result2073, $tmp2227, target2214);
                            $tmp2224 = $tmp2225;
                            $tmp2223 = $tmp2224;
                            result2073 = $tmp2223;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
                        }
                    }
                    $tmp2213 = -1;
                    goto $l2211;
                    $l2211:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2214));
                    target2214 = NULL;
                    switch ($tmp2213) {
                        case 0: goto $l2219;
                        case -1: goto $l2229;
                    }
                    $l2229:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2230, 62);
                panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$897_132085.$rawValue, $tmp2230);
                if ($tmp2231.value) {
                {
                    int $tmp2234;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2083);
                        panda$core$String* $tmp2238 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result2073);
                        $tmp2237 = $tmp2238;
                        $tmp2236 = $tmp2237;
                        name2235 = $tmp2236;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
                        if (((panda$core$Bit) { name2235 != NULL }).value) {
                        {
                            int $tmp2241;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp2245 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp2245);
                                $tmp2244 = $tmp2245;
                                $tmp2243 = $tmp2244;
                                types2242 = $tmp2243;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2243));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
                                panda$core$Bit$init$builtin_bit(&$tmp2249, false);
                                org$pandalanguage$pandac$ASTNode* $tmp2250 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2249);
                                $tmp2248 = $tmp2250;
                                $tmp2247 = $tmp2248;
                                t2246 = $tmp2247;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                                if (((panda$core$Bit) { t2246 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2251 = result2073;
                                    $returnValue2077 = $tmp2251;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
                                    $tmp2241 = 0;
                                    goto $l2239;
                                    $l2252:;
                                    $tmp2234 = 0;
                                    goto $l2232;
                                    $l2253:;
                                    $tmp2072 = 8;
                                    goto $l2070;
                                    $l2254:;
                                    return $returnValue2077;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types2242, ((panda$core$Object*) t2246));
                                $l2256:;
                                panda$core$Int64$init$builtin_int64(&$tmp2260, 105);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2259, $tmp2260);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2261 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2259);
                                bool $tmp2258 = ((panda$core$Bit) { $tmp2261.nonnull }).value;
                                if (!$tmp2258) goto $l2257;
                                {
                                    {
                                        $tmp2262 = t2246;
                                        panda$core$Bit$init$builtin_bit(&$tmp2265, false);
                                        org$pandalanguage$pandac$ASTNode* $tmp2266 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2265);
                                        $tmp2264 = $tmp2266;
                                        $tmp2263 = $tmp2264;
                                        t2246 = $tmp2263;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2263));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                                    }
                                    if (((panda$core$Bit) { t2246 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp2267 = result2073;
                                        $returnValue2077 = $tmp2267;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
                                        $tmp2241 = 1;
                                        goto $l2239;
                                        $l2268:;
                                        $tmp2234 = 1;
                                        goto $l2232;
                                        $l2269:;
                                        $tmp2072 = 9;
                                        goto $l2070;
                                        $l2270:;
                                        return $returnValue2077;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types2242, ((panda$core$Object*) t2246));
                                }
                                goto $l2256;
                                $l2257:;
                                panda$core$Int64$init$builtin_int64(&$tmp2274, 63);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2273, $tmp2274);
                                org$pandalanguage$pandac$parser$Token$nullable $tmp2276 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2273, &$s2275);
                                gt2272 = $tmp2276;
                                if (((panda$core$Bit) { !gt2272.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2277 = result2073;
                                    $returnValue2077 = $tmp2277;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
                                    $tmp2241 = 2;
                                    goto $l2239;
                                    $l2278:;
                                    $tmp2234 = 2;
                                    goto $l2232;
                                    $l2279:;
                                    $tmp2072 = 10;
                                    goto $l2070;
                                    $l2280:;
                                    return $returnValue2077;
                                }
                                }
                                memset(&shouldAccept2282, 0, sizeof(shouldAccept2282));
                                panda$core$Int64$init$builtin_int64(&$tmp2284, 0);
                                panda$core$Object* $tmp2285 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2284);
                                $tmp2283 = $tmp2285;
                                panda$core$Panda$unref$panda$core$Object($tmp2283);
                                if (((panda$core$Bit$wrapper*) $tmp2283)->value.value) {
                                {
                                    org$pandalanguage$pandac$parser$Token $tmp2287 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                    n2286 = $tmp2287;
                                    {
                                        $match$1010_292288 = n2286.kind;
                                        panda$core$Int64$init$builtin_int64(&$tmp2291, 98);
                                        panda$core$Bit $tmp2292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1010_292288.$rawValue, $tmp2291);
                                        bool $tmp2290 = $tmp2292.value;
                                        if ($tmp2290) goto $l2293;
                                        panda$core$Int64$init$builtin_int64(&$tmp2294, 105);
                                        panda$core$Bit $tmp2295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1010_292288.$rawValue, $tmp2294);
                                        $tmp2290 = $tmp2295.value;
                                        $l2293:;
                                        panda$core$Bit $tmp2296 = { $tmp2290 };
                                        bool $tmp2289 = $tmp2296.value;
                                        if ($tmp2289) goto $l2297;
                                        panda$core$Int64$init$builtin_int64(&$tmp2298, 89);
                                        panda$core$Bit $tmp2299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1010_292288.$rawValue, $tmp2298);
                                        $tmp2289 = $tmp2299.value;
                                        $l2297:;
                                        panda$core$Bit $tmp2300 = { $tmp2289 };
                                        if ($tmp2300.value) {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2301, true);
                                            shouldAccept2282 = $tmp2301;
                                        }
                                        }
                                        else {
                                        panda$core$Int64$init$builtin_int64(&$tmp2302, 103);
                                        panda$core$Bit $tmp2303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1010_292288.$rawValue, $tmp2302);
                                        if ($tmp2303.value) {
                                        {
                                            panda$core$Bit $tmp2305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2286.position.line, ((org$pandalanguage$pandac$parser$Token) gt2272.value).position.line);
                                            bool $tmp2304 = $tmp2305.value;
                                            if (!$tmp2304) goto $l2306;
                                            panda$core$Int64$init$builtin_int64(&$tmp2307, 1);
                                            panda$core$Int64 $tmp2308 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((org$pandalanguage$pandac$parser$Token) gt2272.value).position.column, $tmp2307);
                                            panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(n2286.position.column, $tmp2308);
                                            $tmp2304 = $tmp2309.value;
                                            $l2306:;
                                            panda$core$Bit $tmp2310 = { $tmp2304 };
                                            shouldAccept2282 = $tmp2310;
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Bit$init$builtin_bit(&$tmp2311, false);
                                            shouldAccept2282 = $tmp2311;
                                        }
                                        }
                                        }
                                    }
                                    if (shouldAccept2282.value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, n2286);
                                    }
                                    }
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp2312, true);
                                    shouldAccept2282 = $tmp2312;
                                }
                                }
                                if (shouldAccept2282.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp2313 = result2073;
                                        org$pandalanguage$pandac$ASTNode* $tmp2316 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        panda$core$Int64$init$builtin_int64(&$tmp2317, 19);
                                        org$pandalanguage$pandac$Position $tmp2319 = (($fn2318) result2073->$class->vtable[2])(result2073);
                                        panda$collections$ImmutableArray* $tmp2321 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types2242);
                                        $tmp2320 = $tmp2321;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2316, $tmp2317, $tmp2319, name2235, $tmp2320);
                                        $tmp2315 = $tmp2316;
                                        $tmp2314 = $tmp2315;
                                        result2073 = $tmp2314;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
                                    }
                                    $tmp2241 = 3;
                                    goto $l2239;
                                    $l2322:;
                                    $tmp2234 = 3;
                                    goto $l2232;
                                    $l2323:;
                                    goto $l2081;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp2324 = result2073;
                                    $returnValue2077 = $tmp2324;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2324));
                                    $tmp2241 = 4;
                                    goto $l2239;
                                    $l2325:;
                                    $tmp2234 = 4;
                                    goto $l2232;
                                    $l2326:;
                                    $tmp2072 = 11;
                                    goto $l2070;
                                    $l2327:;
                                    return $returnValue2077;
                                }
                                }
                            }
                            $tmp2241 = -1;
                            goto $l2239;
                            $l2239:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2246));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types2242));
                            types2242 = NULL;
                            t2246 = NULL;
                            switch ($tmp2241) {
                                case -1: goto $l2329;
                                case 1: goto $l2268;
                                case 2: goto $l2278;
                                case 4: goto $l2325;
                                case 3: goto $l2322;
                                case 0: goto $l2252;
                            }
                            $l2329:;
                        }
                        }
                        $tmp2330 = result2073;
                        $returnValue2077 = $tmp2330;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2330));
                        $tmp2234 = 5;
                        goto $l2232;
                        $l2331:;
                        $tmp2072 = 12;
                        goto $l2070;
                        $l2332:;
                        return $returnValue2077;
                    }
                    $l2232:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2235));
                    name2235 = NULL;
                    switch ($tmp2234) {
                        case 4: goto $l2326;
                        case 3: goto $l2323;
                        case 0: goto $l2253;
                        case 2: goto $l2279;
                        case 5: goto $l2331;
                        case 1: goto $l2269;
                    }
                    $l2334:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token2083);
                    $tmp2335 = result2073;
                    $returnValue2077 = $tmp2335;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2335));
                    $tmp2072 = 13;
                    goto $l2070;
                    $l2336:;
                    return $returnValue2077;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l2082:;
    }
    $tmp2072 = -1;
    goto $l2070;
    $l2070:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2073));
    result2073 = NULL;
    switch ($tmp2072) {
        case -1: goto $l2338;
        case 7: goto $l2220;
        case 8: goto $l2254;
        case 13: goto $l2336;
        case 3: goto $l2141;
        case 9: goto $l2270;
        case 11: goto $l2327;
        case 12: goto $l2332;
        case 4: goto $l2165;
        case 5: goto $l2173;
        case 1: goto $l2113;
        case 10: goto $l2280;
        case 6: goto $l2201;
        case 0: goto $l2079;
        case 2: goto $l2130;
    }
    $l2338:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2342 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2343;
    org$pandalanguage$pandac$ASTNode* $tmp2344;
    org$pandalanguage$pandac$ASTNode* $returnValue2346;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$parser$Token$nullable op2355;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2356;
    panda$core$Int64 $tmp2357;
    org$pandalanguage$pandac$ASTNode* next2360 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2361;
    org$pandalanguage$pandac$ASTNode* $tmp2362;
    org$pandalanguage$pandac$ASTNode* $tmp2364;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    org$pandalanguage$pandac$ASTNode* $tmp2369;
    org$pandalanguage$pandac$ASTNode* $tmp2370;
    panda$core$Int64 $tmp2372;
    org$pandalanguage$pandac$ASTNode* $tmp2374;
    int $tmp2341;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2345 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2344 = $tmp2345;
        $tmp2343 = $tmp2344;
        result2342 = $tmp2343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
        if (((panda$core$Bit) { result2342 == NULL }).value) {
        {
            $tmp2347 = NULL;
            $returnValue2346 = $tmp2347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
            $tmp2341 = 0;
            goto $l2339;
            $l2348:;
            return $returnValue2346;
        }
        }
        $l2350:;
        while (true) {
        {
            int $tmp2354;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2357, 57);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2356, $tmp2357);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2358 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2356);
                op2355 = $tmp2358;
                if (((panda$core$Bit) { !op2355.nonnull }).value) {
                {
                    $tmp2354 = 0;
                    goto $l2352;
                    $l2359:;
                    goto $l2351;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2363 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2362 = $tmp2363;
                $tmp2361 = $tmp2362;
                next2360 = $tmp2361;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2361));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
                if (((panda$core$Bit) { next2360 == NULL }).value) {
                {
                    $tmp2364 = NULL;
                    $returnValue2346 = $tmp2364;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2364));
                    $tmp2354 = 1;
                    goto $l2352;
                    $l2365:;
                    $tmp2341 = 1;
                    goto $l2339;
                    $l2366:;
                    return $returnValue2346;
                }
                }
                {
                    $tmp2368 = result2342;
                    org$pandalanguage$pandac$ASTNode* $tmp2371 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2372, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2371, $tmp2372, ((org$pandalanguage$pandac$parser$Token) op2355.value).position, result2342, ((org$pandalanguage$pandac$parser$Token) op2355.value).kind, next2360);
                    $tmp2370 = $tmp2371;
                    $tmp2369 = $tmp2370;
                    result2342 = $tmp2369;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2369));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2370));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
                }
            }
            $tmp2354 = -1;
            goto $l2352;
            $l2352:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2360));
            next2360 = NULL;
            switch ($tmp2354) {
                case 0: goto $l2359;
                case 1: goto $l2365;
                case -1: goto $l2373;
            }
            $l2373:;
        }
        }
        $l2351:;
        $tmp2374 = result2342;
        $returnValue2346 = $tmp2374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
        $tmp2341 = 2;
        goto $l2339;
        $l2375:;
        return $returnValue2346;
    }
    $l2339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2342));
    result2342 = NULL;
    switch ($tmp2341) {
        case 2: goto $l2375;
        case 1: goto $l2366;
        case 0: goto $l2348;
    }
    $l2377:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op2378;
    org$pandalanguage$pandac$parser$Token$Kind $match$1071_92380;
    panda$core$Int64 $tmp2383;
    panda$core$Int64 $tmp2386;
    panda$core$Int64 $tmp2390;
    org$pandalanguage$pandac$ASTNode* base2396 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    org$pandalanguage$pandac$ASTNode* $returnValue2400;
    org$pandalanguage$pandac$ASTNode* $tmp2401;
    org$pandalanguage$pandac$ASTNode* $tmp2404;
    org$pandalanguage$pandac$ASTNode* $tmp2405;
    panda$core$Int64 $tmp2407;
    org$pandalanguage$pandac$ASTNode* $tmp2411;
    org$pandalanguage$pandac$ASTNode* $tmp2412;
    org$pandalanguage$pandac$parser$Token $tmp2379 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op2378 = $tmp2379;
    {
        $match$1071_92380 = op2378.kind;
        panda$core$Int64$init$builtin_int64(&$tmp2383, 52);
        panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1071_92380.$rawValue, $tmp2383);
        bool $tmp2382 = $tmp2384.value;
        if ($tmp2382) goto $l2385;
        panda$core$Int64$init$builtin_int64(&$tmp2386, 49);
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1071_92380.$rawValue, $tmp2386);
        $tmp2382 = $tmp2387.value;
        $l2385:;
        panda$core$Bit $tmp2388 = { $tmp2382 };
        bool $tmp2381 = $tmp2388.value;
        if ($tmp2381) goto $l2389;
        panda$core$Int64$init$builtin_int64(&$tmp2390, 50);
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1071_92380.$rawValue, $tmp2390);
        $tmp2381 = $tmp2391.value;
        $l2389:;
        panda$core$Bit $tmp2392 = { $tmp2381 };
        if ($tmp2392.value) {
        {
            int $tmp2395;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2399 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2398 = $tmp2399;
                $tmp2397 = $tmp2398;
                base2396 = $tmp2397;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
                if (((panda$core$Bit) { base2396 == NULL }).value) {
                {
                    $tmp2401 = NULL;
                    $returnValue2400 = $tmp2401;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
                    $tmp2395 = 0;
                    goto $l2393;
                    $l2402:;
                    return $returnValue2400;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2406 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp2407, 32);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2406, $tmp2407, op2378.position, op2378.kind, base2396);
                $tmp2405 = $tmp2406;
                $tmp2404 = $tmp2405;
                $returnValue2400 = $tmp2404;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
                $tmp2395 = 1;
                goto $l2393;
                $l2408:;
                return $returnValue2400;
            }
            $l2393:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base2396));
            base2396 = NULL;
            switch ($tmp2395) {
                case 1: goto $l2408;
                case 0: goto $l2402;
            }
            $l2410:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2378);
            org$pandalanguage$pandac$ASTNode* $tmp2413 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2412 = $tmp2413;
            $tmp2411 = $tmp2412;
            $returnValue2400 = $tmp2411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2412));
            return $returnValue2400;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2418 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2419;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $returnValue2422;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    org$pandalanguage$pandac$parser$Token op2428;
    org$pandalanguage$pandac$parser$Token$Kind $match$1097_132430;
    panda$core$Int64 $tmp2437;
    panda$core$Int64 $tmp2440;
    panda$core$Int64 $tmp2444;
    panda$core$Int64 $tmp2448;
    panda$core$Int64 $tmp2452;
    panda$core$Int64 $tmp2456;
    panda$core$Int64 $tmp2460;
    org$pandalanguage$pandac$ASTNode* next2466 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2467;
    org$pandalanguage$pandac$ASTNode* $tmp2468;
    org$pandalanguage$pandac$ASTNode* $tmp2470;
    org$pandalanguage$pandac$ASTNode* $tmp2474;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $tmp2476;
    panda$core$Int64 $tmp2478;
    panda$core$Int64 $tmp2480;
    org$pandalanguage$pandac$parser$Token nextToken2482;
    panda$core$Int64 $tmp2484;
    org$pandalanguage$pandac$ASTNode* next2489 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2490;
    org$pandalanguage$pandac$ASTNode* $tmp2491;
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$ASTNode* $tmp2497;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    panda$core$Int64 $tmp2501;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2502;
    panda$core$Int64 $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2505;
    org$pandalanguage$pandac$ASTNode* $tmp2508;
    int $tmp2417;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2421 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2420 = $tmp2421;
        $tmp2419 = $tmp2420;
        result2418 = $tmp2419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
        if (((panda$core$Bit) { result2418 == NULL }).value) {
        {
            $tmp2423 = NULL;
            $returnValue2422 = $tmp2423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
            $tmp2417 = 0;
            goto $l2415;
            $l2424:;
            return $returnValue2422;
        }
        }
        $l2426:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2429 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2428 = $tmp2429;
            {
                $match$1097_132430 = op2428.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2437, 53);
                panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2437);
                bool $tmp2436 = $tmp2438.value;
                if ($tmp2436) goto $l2439;
                panda$core$Int64$init$builtin_int64(&$tmp2440, 54);
                panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2440);
                $tmp2436 = $tmp2441.value;
                $l2439:;
                panda$core$Bit $tmp2442 = { $tmp2436 };
                bool $tmp2435 = $tmp2442.value;
                if ($tmp2435) goto $l2443;
                panda$core$Int64$init$builtin_int64(&$tmp2444, 55);
                panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2444);
                $tmp2435 = $tmp2445.value;
                $l2443:;
                panda$core$Bit $tmp2446 = { $tmp2435 };
                bool $tmp2434 = $tmp2446.value;
                if ($tmp2434) goto $l2447;
                panda$core$Int64$init$builtin_int64(&$tmp2448, 56);
                panda$core$Bit $tmp2449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2448);
                $tmp2434 = $tmp2449.value;
                $l2447:;
                panda$core$Bit $tmp2450 = { $tmp2434 };
                bool $tmp2433 = $tmp2450.value;
                if ($tmp2433) goto $l2451;
                panda$core$Int64$init$builtin_int64(&$tmp2452, 72);
                panda$core$Bit $tmp2453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2452);
                $tmp2433 = $tmp2453.value;
                $l2451:;
                panda$core$Bit $tmp2454 = { $tmp2433 };
                bool $tmp2432 = $tmp2454.value;
                if ($tmp2432) goto $l2455;
                panda$core$Int64$init$builtin_int64(&$tmp2456, 67);
                panda$core$Bit $tmp2457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2456);
                $tmp2432 = $tmp2457.value;
                $l2455:;
                panda$core$Bit $tmp2458 = { $tmp2432 };
                bool $tmp2431 = $tmp2458.value;
                if ($tmp2431) goto $l2459;
                panda$core$Int64$init$builtin_int64(&$tmp2460, 69);
                panda$core$Bit $tmp2461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2460);
                $tmp2431 = $tmp2461.value;
                $l2459:;
                panda$core$Bit $tmp2462 = { $tmp2431 };
                if ($tmp2462.value) {
                {
                    int $tmp2465;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2469 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2468 = $tmp2469;
                        $tmp2467 = $tmp2468;
                        next2466 = $tmp2467;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
                        if (((panda$core$Bit) { next2466 == NULL }).value) {
                        {
                            $tmp2470 = NULL;
                            $returnValue2422 = $tmp2470;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2470));
                            $tmp2465 = 0;
                            goto $l2463;
                            $l2471:;
                            $tmp2417 = 1;
                            goto $l2415;
                            $l2472:;
                            return $returnValue2422;
                        }
                        }
                        {
                            $tmp2474 = result2418;
                            org$pandalanguage$pandac$ASTNode* $tmp2477 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2478, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2477, $tmp2478, op2428.position, result2418, op2428.kind, next2466);
                            $tmp2476 = $tmp2477;
                            $tmp2475 = $tmp2476;
                            result2418 = $tmp2475;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2474));
                        }
                    }
                    $tmp2465 = -1;
                    goto $l2463;
                    $l2463:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2466));
                    next2466 = NULL;
                    switch ($tmp2465) {
                        case 0: goto $l2471;
                        case -1: goto $l2479;
                    }
                    $l2479:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp2480, 63);
                panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1097_132430.$rawValue, $tmp2480);
                if ($tmp2481.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2483 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken2482 = $tmp2483;
                    panda$core$Int64$init$builtin_int64(&$tmp2484, 63);
                    panda$core$Bit $tmp2485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken2482.kind.$rawValue, $tmp2484);
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
                                $returnValue2422 = $tmp2493;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                                $tmp2488 = 0;
                                goto $l2486;
                                $l2494:;
                                $tmp2417 = 2;
                                goto $l2415;
                                $l2495:;
                                return $returnValue2422;
                            }
                            }
                            {
                                $tmp2497 = result2418;
                                org$pandalanguage$pandac$ASTNode* $tmp2500 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$Int64$init$builtin_int64(&$tmp2501, 4);
                                panda$core$Int64$init$builtin_int64(&$tmp2503, 1);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2502, $tmp2503);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2500, $tmp2501, op2428.position, result2418, $tmp2502, next2489);
                                $tmp2499 = $tmp2500;
                                $tmp2498 = $tmp2499;
                                result2418 = $tmp2498;
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
                            case -1: goto $l2504;
                            case 0: goto $l2494;
                        }
                        $l2504:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken2482);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2428);
                        $tmp2505 = result2418;
                        $returnValue2422 = $tmp2505;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
                        $tmp2417 = 3;
                        goto $l2415;
                        $l2506:;
                        return $returnValue2422;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2428);
                    $tmp2508 = result2418;
                    $returnValue2422 = $tmp2508;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2508));
                    $tmp2417 = 4;
                    goto $l2415;
                    $l2509:;
                    return $returnValue2422;
                }
                }
                }
            }
        }
        }
        $l2427:;
    }
    $tmp2417 = -1;
    goto $l2415;
    $l2415:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2418));
    result2418 = NULL;
    switch ($tmp2417) {
        case 2: goto $l2495;
        case -1: goto $l2511;
        case 1: goto $l2472;
        case 3: goto $l2506;
        case 0: goto $l2424;
        case 4: goto $l2509;
    }
    $l2511:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2515 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $tmp2517;
    org$pandalanguage$pandac$ASTNode* $returnValue2519;
    org$pandalanguage$pandac$ASTNode* $tmp2520;
    org$pandalanguage$pandac$parser$Token op2525;
    org$pandalanguage$pandac$parser$Token$Kind $match$1138_132527;
    panda$core$Int64 $tmp2530;
    panda$core$Int64 $tmp2533;
    panda$core$Int64 $tmp2537;
    org$pandalanguage$pandac$ASTNode* next2543 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2544;
    org$pandalanguage$pandac$ASTNode* $tmp2545;
    org$pandalanguage$pandac$ASTNode* $tmp2547;
    org$pandalanguage$pandac$ASTNode* $tmp2551;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    panda$core$Int64 $tmp2555;
    org$pandalanguage$pandac$ASTNode* $tmp2557;
    int $tmp2514;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2518 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2517 = $tmp2518;
        $tmp2516 = $tmp2517;
        result2515 = $tmp2516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
        if (((panda$core$Bit) { result2515 == NULL }).value) {
        {
            $tmp2520 = NULL;
            $returnValue2519 = $tmp2520;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2520));
            $tmp2514 = 0;
            goto $l2512;
            $l2521:;
            return $returnValue2519;
        }
        }
        $l2523:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2526 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2525 = $tmp2526;
            {
                $match$1138_132527 = op2525.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2530, 51);
                panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1138_132527.$rawValue, $tmp2530);
                bool $tmp2529 = $tmp2531.value;
                if ($tmp2529) goto $l2532;
                panda$core$Int64$init$builtin_int64(&$tmp2533, 52);
                panda$core$Bit $tmp2534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1138_132527.$rawValue, $tmp2533);
                $tmp2529 = $tmp2534.value;
                $l2532:;
                panda$core$Bit $tmp2535 = { $tmp2529 };
                bool $tmp2528 = $tmp2535.value;
                if ($tmp2528) goto $l2536;
                panda$core$Int64$init$builtin_int64(&$tmp2537, 71);
                panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1138_132527.$rawValue, $tmp2537);
                $tmp2528 = $tmp2538.value;
                $l2536:;
                panda$core$Bit $tmp2539 = { $tmp2528 };
                if ($tmp2539.value) {
                {
                    int $tmp2542;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2546 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2545 = $tmp2546;
                        $tmp2544 = $tmp2545;
                        next2543 = $tmp2544;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2544));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2545));
                        if (((panda$core$Bit) { next2543 == NULL }).value) {
                        {
                            $tmp2547 = NULL;
                            $returnValue2519 = $tmp2547;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2547));
                            $tmp2542 = 0;
                            goto $l2540;
                            $l2548:;
                            $tmp2514 = 1;
                            goto $l2512;
                            $l2549:;
                            return $returnValue2519;
                        }
                        }
                        {
                            $tmp2551 = result2515;
                            org$pandalanguage$pandac$ASTNode* $tmp2554 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2555, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2554, $tmp2555, op2525.position, result2515, op2525.kind, next2543);
                            $tmp2553 = $tmp2554;
                            $tmp2552 = $tmp2553;
                            result2515 = $tmp2552;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
                        }
                    }
                    $tmp2542 = -1;
                    goto $l2540;
                    $l2540:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2543));
                    next2543 = NULL;
                    switch ($tmp2542) {
                        case -1: goto $l2556;
                        case 0: goto $l2548;
                    }
                    $l2556:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2525);
                    $tmp2557 = result2515;
                    $returnValue2519 = $tmp2557;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2557));
                    $tmp2514 = 2;
                    goto $l2512;
                    $l2558:;
                    return $returnValue2519;
                }
                }
            }
        }
        }
        $l2524:;
    }
    $tmp2514 = -1;
    goto $l2512;
    $l2512:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2515));
    result2515 = NULL;
    switch ($tmp2514) {
        case 1: goto $l2549;
        case -1: goto $l2560;
        case 2: goto $l2558;
        case 0: goto $l2521;
    }
    $l2560:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2564 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1158_92565;
    panda$core$Int64 $tmp2568;
    panda$core$Int64 $tmp2571;
    org$pandalanguage$pandac$ASTNode* $tmp2574;
    org$pandalanguage$pandac$ASTNode* $tmp2575;
    org$pandalanguage$pandac$ASTNode* $tmp2576;
    org$pandalanguage$pandac$ASTNode* $tmp2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$ASTNode* $returnValue2580;
    org$pandalanguage$pandac$ASTNode* $tmp2581;
    org$pandalanguage$pandac$parser$Token op2584;
    org$pandalanguage$pandac$parser$Token$Kind $match$1168_92586;
    panda$core$Int64 $tmp2588;
    panda$core$Int64 $tmp2591;
    org$pandalanguage$pandac$parser$Token next2597;
    org$pandalanguage$pandac$ASTNode* right2599 = NULL;
    panda$core$Int64 $tmp2602;
    panda$core$Int64 $tmp2605;
    panda$core$Int64 $tmp2609;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    org$pandalanguage$pandac$ASTNode* $tmp2613;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $tmp2616;
    org$pandalanguage$pandac$ASTNode* $tmp2620;
    org$pandalanguage$pandac$ASTNode* $tmp2621;
    org$pandalanguage$pandac$ASTNode* step2622 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2623;
    panda$core$Int64 $tmp2624;
    org$pandalanguage$pandac$ASTNode* $tmp2626;
    org$pandalanguage$pandac$ASTNode* $tmp2627;
    org$pandalanguage$pandac$ASTNode* $tmp2628;
    org$pandalanguage$pandac$ASTNode* $tmp2630;
    org$pandalanguage$pandac$ASTNode* $tmp2634;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    panda$core$Int64 $tmp2639;
    panda$core$Int64 $tmp2640;
    org$pandalanguage$pandac$ASTNode* $tmp2646;
    int $tmp2563;
    {
        memset(&result2564, 0, sizeof(result2564));
        {
            org$pandalanguage$pandac$parser$Token $tmp2566 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1158_92565 = $tmp2566.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2568, 97);
            panda$core$Bit $tmp2569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1158_92565.$rawValue, $tmp2568);
            bool $tmp2567 = $tmp2569.value;
            if ($tmp2567) goto $l2570;
            panda$core$Int64$init$builtin_int64(&$tmp2571, 96);
            panda$core$Bit $tmp2572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1158_92565.$rawValue, $tmp2571);
            $tmp2567 = $tmp2572.value;
            $l2570:;
            panda$core$Bit $tmp2573 = { $tmp2567 };
            if ($tmp2573.value) {
            {
                {
                    $tmp2574 = result2564;
                    $tmp2575 = NULL;
                    result2564 = $tmp2575;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2575));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2574));
                }
            }
            }
            else {
            {
                {
                    $tmp2576 = result2564;
                    org$pandalanguage$pandac$ASTNode* $tmp2579 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2578 = $tmp2579;
                    $tmp2577 = $tmp2578;
                    result2564 = $tmp2577;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2577));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                }
                if (((panda$core$Bit) { result2564 == NULL }).value) {
                {
                    $tmp2581 = NULL;
                    $returnValue2580 = $tmp2581;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2581));
                    $tmp2563 = 0;
                    goto $l2561;
                    $l2582:;
                    return $returnValue2580;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2585 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2584 = $tmp2585;
        {
            $match$1168_92586 = op2584.kind;
            panda$core$Int64$init$builtin_int64(&$tmp2588, 97);
            panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1168_92586.$rawValue, $tmp2588);
            bool $tmp2587 = $tmp2589.value;
            if ($tmp2587) goto $l2590;
            panda$core$Int64$init$builtin_int64(&$tmp2591, 96);
            panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1168_92586.$rawValue, $tmp2591);
            $tmp2587 = $tmp2592.value;
            $l2590:;
            panda$core$Bit $tmp2593 = { $tmp2587 };
            if ($tmp2593.value) {
            {
                int $tmp2596;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2598 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2597 = $tmp2598;
                    memset(&right2599, 0, sizeof(right2599));
                    panda$core$Int64$init$builtin_int64(&$tmp2602, 102);
                    panda$core$Bit $tmp2603 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2597.kind.$rawValue, $tmp2602);
                    bool $tmp2601 = $tmp2603.value;
                    if (!$tmp2601) goto $l2604;
                    panda$core$Int64$init$builtin_int64(&$tmp2605, 104);
                    panda$core$Bit $tmp2606 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2597.kind.$rawValue, $tmp2605);
                    $tmp2601 = $tmp2606.value;
                    $l2604:;
                    panda$core$Bit $tmp2607 = { $tmp2601 };
                    bool $tmp2600 = $tmp2607.value;
                    if (!$tmp2600) goto $l2608;
                    panda$core$Int64$init$builtin_int64(&$tmp2609, 33);
                    panda$core$Bit $tmp2610 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2597.kind.$rawValue, $tmp2609);
                    $tmp2600 = $tmp2610.value;
                    $l2608:;
                    panda$core$Bit $tmp2611 = { $tmp2600 };
                    if ($tmp2611.value) {
                    {
                        {
                            $tmp2612 = right2599;
                            org$pandalanguage$pandac$ASTNode* $tmp2615 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2614 = $tmp2615;
                            $tmp2613 = $tmp2614;
                            right2599 = $tmp2613;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
                        }
                        if (((panda$core$Bit) { right2599 == NULL }).value) {
                        {
                            $tmp2616 = NULL;
                            $returnValue2580 = $tmp2616;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2616));
                            $tmp2596 = 0;
                            goto $l2594;
                            $l2617:;
                            $tmp2563 = 1;
                            goto $l2561;
                            $l2618:;
                            return $returnValue2580;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2620 = right2599;
                            $tmp2621 = NULL;
                            right2599 = $tmp2621;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2621));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2620));
                        }
                    }
                    }
                    memset(&step2622, 0, sizeof(step2622));
                    panda$core$Int64$init$builtin_int64(&$tmp2624, 33);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2623, $tmp2624);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2625 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2623);
                    if (((panda$core$Bit) { $tmp2625.nonnull }).value) {
                    {
                        {
                            $tmp2626 = step2622;
                            org$pandalanguage$pandac$ASTNode* $tmp2629 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2628 = $tmp2629;
                            $tmp2627 = $tmp2628;
                            step2622 = $tmp2627;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2627));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2626));
                        }
                        if (((panda$core$Bit) { step2622 == NULL }).value) {
                        {
                            $tmp2630 = NULL;
                            $returnValue2580 = $tmp2630;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2630));
                            $tmp2596 = 1;
                            goto $l2594;
                            $l2631:;
                            $tmp2563 = 2;
                            goto $l2561;
                            $l2632:;
                            return $returnValue2580;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2634 = step2622;
                            $tmp2635 = NULL;
                            step2622 = $tmp2635;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2635));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2634));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2638 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2639, 33);
                    panda$core$Int64$init$builtin_int64(&$tmp2640, 96);
                    panda$core$Bit $tmp2641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2584.kind.$rawValue, $tmp2640);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2638, $tmp2639, op2584.position, result2564, right2599, $tmp2641, step2622);
                    $tmp2637 = $tmp2638;
                    $tmp2636 = $tmp2637;
                    $returnValue2580 = $tmp2636;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                    $tmp2596 = 2;
                    goto $l2594;
                    $l2642:;
                    $tmp2563 = 3;
                    goto $l2561;
                    $l2643:;
                    return $returnValue2580;
                }
                $l2594:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2599));
                switch ($tmp2596) {
                    case 2: goto $l2642;
                    case 0: goto $l2617;
                    case 1: goto $l2631;
                }
                $l2645:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2584);
                $tmp2646 = result2564;
                $returnValue2580 = $tmp2646;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2646));
                $tmp2563 = 4;
                goto $l2561;
                $l2647:;
                return $returnValue2580;
            }
            }
        }
    }
    $tmp2563 = -1;
    goto $l2561;
    $l2561:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2564));
    switch ($tmp2563) {
        case 4: goto $l2647;
        case 2: goto $l2632;
        case -1: goto $l2649;
        case 0: goto $l2582;
        case 1: goto $l2618;
        case 3: goto $l2643;
    }
    $l2649:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2653 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2654;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    org$pandalanguage$pandac$ASTNode* $returnValue2657;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$parser$Token op2663;
    org$pandalanguage$pandac$parser$Token$Kind $match$1211_132665;
    panda$core$Int64 $tmp2673;
    panda$core$Int64 $tmp2676;
    panda$core$Int64 $tmp2680;
    panda$core$Int64 $tmp2684;
    panda$core$Int64 $tmp2688;
    panda$core$Int64 $tmp2692;
    panda$core$Int64 $tmp2696;
    panda$core$Int64 $tmp2700;
    org$pandalanguage$pandac$ASTNode* next2706 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2707;
    org$pandalanguage$pandac$ASTNode* $tmp2708;
    org$pandalanguage$pandac$ASTNode* $tmp2710;
    org$pandalanguage$pandac$ASTNode* $tmp2714;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    org$pandalanguage$pandac$ASTNode* $tmp2716;
    panda$core$Int64 $tmp2718;
    org$pandalanguage$pandac$ASTNode* $tmp2720;
    int $tmp2652;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2656 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2655 = $tmp2656;
        $tmp2654 = $tmp2655;
        result2653 = $tmp2654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2655));
        if (((panda$core$Bit) { result2653 == NULL }).value) {
        {
            $tmp2658 = NULL;
            $returnValue2657 = $tmp2658;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
            $tmp2652 = 0;
            goto $l2650;
            $l2659:;
            return $returnValue2657;
        }
        }
        $l2661:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2664 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2663 = $tmp2664;
            {
                $match$1211_132665 = op2663.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2673, 58);
                panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2673);
                bool $tmp2672 = $tmp2674.value;
                if ($tmp2672) goto $l2675;
                panda$core$Int64$init$builtin_int64(&$tmp2676, 59);
                panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2676);
                $tmp2672 = $tmp2677.value;
                $l2675:;
                panda$core$Bit $tmp2678 = { $tmp2672 };
                bool $tmp2671 = $tmp2678.value;
                if ($tmp2671) goto $l2679;
                panda$core$Int64$init$builtin_int64(&$tmp2680, 60);
                panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2680);
                $tmp2671 = $tmp2681.value;
                $l2679:;
                panda$core$Bit $tmp2682 = { $tmp2671 };
                bool $tmp2670 = $tmp2682.value;
                if ($tmp2670) goto $l2683;
                panda$core$Int64$init$builtin_int64(&$tmp2684, 61);
                panda$core$Bit $tmp2685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2684);
                $tmp2670 = $tmp2685.value;
                $l2683:;
                panda$core$Bit $tmp2686 = { $tmp2670 };
                bool $tmp2669 = $tmp2686.value;
                if ($tmp2669) goto $l2687;
                panda$core$Int64$init$builtin_int64(&$tmp2688, 62);
                panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2688);
                $tmp2669 = $tmp2689.value;
                $l2687:;
                panda$core$Bit $tmp2690 = { $tmp2669 };
                bool $tmp2668 = $tmp2690.value;
                if ($tmp2668) goto $l2691;
                panda$core$Int64$init$builtin_int64(&$tmp2692, 63);
                panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2692);
                $tmp2668 = $tmp2693.value;
                $l2691:;
                panda$core$Bit $tmp2694 = { $tmp2668 };
                bool $tmp2667 = $tmp2694.value;
                if ($tmp2667) goto $l2695;
                panda$core$Int64$init$builtin_int64(&$tmp2696, 64);
                panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2696);
                $tmp2667 = $tmp2697.value;
                $l2695:;
                panda$core$Bit $tmp2698 = { $tmp2667 };
                bool $tmp2666 = $tmp2698.value;
                if ($tmp2666) goto $l2699;
                panda$core$Int64$init$builtin_int64(&$tmp2700, 65);
                panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1211_132665.$rawValue, $tmp2700);
                $tmp2666 = $tmp2701.value;
                $l2699:;
                panda$core$Bit $tmp2702 = { $tmp2666 };
                if ($tmp2702.value) {
                {
                    int $tmp2705;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2709 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2708 = $tmp2709;
                        $tmp2707 = $tmp2708;
                        next2706 = $tmp2707;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2707));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2708));
                        if (((panda$core$Bit) { next2706 == NULL }).value) {
                        {
                            $tmp2710 = NULL;
                            $returnValue2657 = $tmp2710;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2710));
                            $tmp2705 = 0;
                            goto $l2703;
                            $l2711:;
                            $tmp2652 = 1;
                            goto $l2650;
                            $l2712:;
                            return $returnValue2657;
                        }
                        }
                        {
                            $tmp2714 = result2653;
                            org$pandalanguage$pandac$ASTNode* $tmp2717 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2718, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2717, $tmp2718, op2663.position, result2653, op2663.kind, next2706);
                            $tmp2716 = $tmp2717;
                            $tmp2715 = $tmp2716;
                            result2653 = $tmp2715;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2715));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2716));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2714));
                        }
                    }
                    $tmp2705 = -1;
                    goto $l2703;
                    $l2703:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2706));
                    next2706 = NULL;
                    switch ($tmp2705) {
                        case 0: goto $l2711;
                        case -1: goto $l2719;
                    }
                    $l2719:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2663);
                    $tmp2720 = result2653;
                    $returnValue2657 = $tmp2720;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2720));
                    $tmp2652 = 2;
                    goto $l2650;
                    $l2721:;
                    return $returnValue2657;
                }
                }
            }
        }
        }
        $l2662:;
    }
    $tmp2652 = -1;
    goto $l2650;
    $l2650:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2653));
    result2653 = NULL;
    switch ($tmp2652) {
        case 2: goto $l2721;
        case -1: goto $l2723;
        case 0: goto $l2659;
        case 1: goto $l2712;
    }
    $l2723:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2727 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2728;
    org$pandalanguage$pandac$ASTNode* $tmp2729;
    org$pandalanguage$pandac$ASTNode* $returnValue2731;
    org$pandalanguage$pandac$ASTNode* $tmp2732;
    org$pandalanguage$pandac$parser$Token op2737;
    org$pandalanguage$pandac$parser$Token$Kind $match$1242_132739;
    panda$core$Int64 $tmp2741;
    panda$core$Int64 $tmp2744;
    org$pandalanguage$pandac$ASTNode* next2750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $tmp2752;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* $tmp2758;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    panda$core$Int64 $tmp2762;
    org$pandalanguage$pandac$ASTNode* $tmp2764;
    int $tmp2726;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2730 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2729 = $tmp2730;
        $tmp2728 = $tmp2729;
        result2727 = $tmp2728;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2729));
        if (((panda$core$Bit) { result2727 == NULL }).value) {
        {
            $tmp2732 = NULL;
            $returnValue2731 = $tmp2732;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2732));
            $tmp2726 = 0;
            goto $l2724;
            $l2733:;
            return $returnValue2731;
        }
        }
        $l2735:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2738 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2737 = $tmp2738;
            {
                $match$1242_132739 = op2737.kind;
                panda$core$Int64$init$builtin_int64(&$tmp2741, 66);
                panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1242_132739.$rawValue, $tmp2741);
                bool $tmp2740 = $tmp2742.value;
                if ($tmp2740) goto $l2743;
                panda$core$Int64$init$builtin_int64(&$tmp2744, 70);
                panda$core$Bit $tmp2745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1242_132739.$rawValue, $tmp2744);
                $tmp2740 = $tmp2745.value;
                $l2743:;
                panda$core$Bit $tmp2746 = { $tmp2740 };
                if ($tmp2746.value) {
                {
                    int $tmp2749;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2753 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2752 = $tmp2753;
                        $tmp2751 = $tmp2752;
                        next2750 = $tmp2751;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2752));
                        if (((panda$core$Bit) { next2750 == NULL }).value) {
                        {
                            $tmp2754 = NULL;
                            $returnValue2731 = $tmp2754;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2754));
                            $tmp2749 = 0;
                            goto $l2747;
                            $l2755:;
                            $tmp2726 = 1;
                            goto $l2724;
                            $l2756:;
                            return $returnValue2731;
                        }
                        }
                        {
                            $tmp2758 = result2727;
                            org$pandalanguage$pandac$ASTNode* $tmp2761 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$core$Int64$init$builtin_int64(&$tmp2762, 4);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2761, $tmp2762, op2737.position, result2727, op2737.kind, next2750);
                            $tmp2760 = $tmp2761;
                            $tmp2759 = $tmp2760;
                            result2727 = $tmp2759;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2759));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2760));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2758));
                        }
                    }
                    $tmp2749 = -1;
                    goto $l2747;
                    $l2747:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2750));
                    next2750 = NULL;
                    switch ($tmp2749) {
                        case -1: goto $l2763;
                        case 0: goto $l2755;
                    }
                    $l2763:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2737);
                    $tmp2764 = result2727;
                    $returnValue2731 = $tmp2764;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2764));
                    $tmp2726 = 2;
                    goto $l2724;
                    $l2765:;
                    return $returnValue2731;
                }
                }
            }
        }
        }
        $l2736:;
    }
    $tmp2726 = -1;
    goto $l2724;
    $l2724:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2727));
    result2727 = NULL;
    switch ($tmp2726) {
        case -1: goto $l2767;
        case 1: goto $l2756;
        case 2: goto $l2765;
        case 0: goto $l2733;
    }
    $l2767:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2771 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2772;
    org$pandalanguage$pandac$ASTNode* $tmp2773;
    org$pandalanguage$pandac$ASTNode* $returnValue2775;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$parser$Token$nullable op2784;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2785;
    panda$core$Int64 $tmp2786;
    org$pandalanguage$pandac$ASTNode* next2789 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2790;
    org$pandalanguage$pandac$ASTNode* $tmp2791;
    org$pandalanguage$pandac$ASTNode* $tmp2793;
    org$pandalanguage$pandac$ASTNode* $tmp2797;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    panda$core$Int64 $tmp2801;
    org$pandalanguage$pandac$ASTNode* $tmp2803;
    int $tmp2770;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2774 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2773 = $tmp2774;
        $tmp2772 = $tmp2773;
        result2771 = $tmp2772;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2772));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2773));
        if (((panda$core$Bit) { result2771 == NULL }).value) {
        {
            $tmp2776 = NULL;
            $returnValue2775 = $tmp2776;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2776));
            $tmp2770 = 0;
            goto $l2768;
            $l2777:;
            return $returnValue2775;
        }
        }
        $l2779:;
        while (true) {
        {
            int $tmp2783;
            {
                panda$core$Int64$init$builtin_int64(&$tmp2786, 68);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2785, $tmp2786);
                org$pandalanguage$pandac$parser$Token$nullable $tmp2787 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2785);
                op2784 = $tmp2787;
                if (((panda$core$Bit) { !op2784.nonnull }).value) {
                {
                    $tmp2783 = 0;
                    goto $l2781;
                    $l2788:;
                    goto $l2780;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2792 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2791 = $tmp2792;
                $tmp2790 = $tmp2791;
                next2789 = $tmp2790;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2791));
                if (((panda$core$Bit) { next2789 == NULL }).value) {
                {
                    $tmp2793 = NULL;
                    $returnValue2775 = $tmp2793;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2793));
                    $tmp2783 = 1;
                    goto $l2781;
                    $l2794:;
                    $tmp2770 = 1;
                    goto $l2768;
                    $l2795:;
                    return $returnValue2775;
                }
                }
                {
                    $tmp2797 = result2771;
                    org$pandalanguage$pandac$ASTNode* $tmp2800 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp2801, 4);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2800, $tmp2801, ((org$pandalanguage$pandac$parser$Token) op2784.value).position, result2771, ((org$pandalanguage$pandac$parser$Token) op2784.value).kind, next2789);
                    $tmp2799 = $tmp2800;
                    $tmp2798 = $tmp2799;
                    result2771 = $tmp2798;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2799));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2797));
                }
            }
            $tmp2783 = -1;
            goto $l2781;
            $l2781:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2789));
            next2789 = NULL;
            switch ($tmp2783) {
                case -1: goto $l2802;
                case 1: goto $l2794;
                case 0: goto $l2788;
            }
            $l2802:;
        }
        }
        $l2780:;
        $tmp2803 = result2771;
        $returnValue2775 = $tmp2803;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2803));
        $tmp2770 = 2;
        goto $l2768;
        $l2804:;
        return $returnValue2775;
    }
    $l2768:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2771));
    result2771 = NULL;
    switch ($tmp2770) {
        case 0: goto $l2777;
        case 2: goto $l2804;
        case 1: goto $l2795;
    }
    $l2806:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2810;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2811;
    panda$core$Int64 $tmp2812;
    org$pandalanguage$pandac$ASTNode* $returnValue2815;
    org$pandalanguage$pandac$ASTNode* $tmp2816;
    org$pandalanguage$pandac$ASTNode* test2819 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    org$pandalanguage$pandac$ASTNode* $tmp2821;
    org$pandalanguage$pandac$ASTNode* $tmp2823;
    panda$collections$ImmutableArray* ifTrue2826 = NULL;
    panda$collections$ImmutableArray* $tmp2827;
    panda$collections$ImmutableArray* $tmp2828;
    org$pandalanguage$pandac$ASTNode* $tmp2830;
    org$pandalanguage$pandac$ASTNode* ifFalse2833 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2834;
    panda$core$Int64 $tmp2835;
    panda$core$Int64 $tmp2838;
    org$pandalanguage$pandac$ASTNode* $tmp2840;
    org$pandalanguage$pandac$ASTNode* $tmp2841;
    org$pandalanguage$pandac$ASTNode* $tmp2842;
    org$pandalanguage$pandac$ASTNode* $tmp2844;
    org$pandalanguage$pandac$ASTNode* $tmp2847;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    org$pandalanguage$pandac$ASTNode* $tmp2849;
    org$pandalanguage$pandac$ASTNode* $tmp2851;
    org$pandalanguage$pandac$ASTNode* $tmp2854;
    org$pandalanguage$pandac$ASTNode* $tmp2855;
    org$pandalanguage$pandac$ASTNode* $tmp2856;
    org$pandalanguage$pandac$ASTNode* $tmp2857;
    panda$core$Int64 $tmp2859;
    int $tmp2809;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2812, 36);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2811, $tmp2812);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2814 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2811, &$s2813);
        start2810 = $tmp2814;
        if (((panda$core$Bit) { !start2810.nonnull }).value) {
        {
            $tmp2816 = NULL;
            $returnValue2815 = $tmp2816;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2816));
            $tmp2809 = 0;
            goto $l2807;
            $l2817:;
            return $returnValue2815;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2822 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2821 = $tmp2822;
        $tmp2820 = $tmp2821;
        test2819 = $tmp2820;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2820));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2821));
        if (((panda$core$Bit) { test2819 == NULL }).value) {
        {
            $tmp2823 = NULL;
            $returnValue2815 = $tmp2823;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2823));
            $tmp2809 = 1;
            goto $l2807;
            $l2824:;
            return $returnValue2815;
        }
        }
        panda$collections$ImmutableArray* $tmp2829 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2828 = $tmp2829;
        $tmp2827 = $tmp2828;
        ifTrue2826 = $tmp2827;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2827));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2828));
        if (((panda$core$Bit) { ifTrue2826 == NULL }).value) {
        {
            $tmp2830 = NULL;
            $returnValue2815 = $tmp2830;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2830));
            $tmp2809 = 2;
            goto $l2807;
            $l2831:;
            return $returnValue2815;
        }
        }
        memset(&ifFalse2833, 0, sizeof(ifFalse2833));
        panda$core$Int64$init$builtin_int64(&$tmp2835, 37);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2834, $tmp2835);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2836 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2834);
        if (((panda$core$Bit) { $tmp2836.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2837 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp2838, 36);
            panda$core$Bit $tmp2839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2837.kind.$rawValue, $tmp2838);
            if ($tmp2839.value) {
            {
                {
                    $tmp2840 = ifFalse2833;
                    org$pandalanguage$pandac$ASTNode* $tmp2843 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2842 = $tmp2843;
                    $tmp2841 = $tmp2842;
                    ifFalse2833 = $tmp2841;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2841));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2842));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2840));
                }
                if (((panda$core$Bit) { ifFalse2833 == NULL }).value) {
                {
                    $tmp2844 = NULL;
                    $returnValue2815 = $tmp2844;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2844));
                    $tmp2809 = 3;
                    goto $l2807;
                    $l2845:;
                    return $returnValue2815;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2847 = ifFalse2833;
                    org$pandalanguage$pandac$ASTNode* $tmp2850 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2849 = $tmp2850;
                    $tmp2848 = $tmp2849;
                    ifFalse2833 = $tmp2848;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2848));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2847));
                }
                if (((panda$core$Bit) { ifFalse2833 == NULL }).value) {
                {
                    $tmp2851 = NULL;
                    $returnValue2815 = $tmp2851;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2851));
                    $tmp2809 = 4;
                    goto $l2807;
                    $l2852:;
                    return $returnValue2815;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2854 = ifFalse2833;
                $tmp2855 = NULL;
                ifFalse2833 = $tmp2855;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2854));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2858 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2859, 21);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2858, $tmp2859, ((org$pandalanguage$pandac$parser$Token) start2810.value).position, test2819, ifTrue2826, ifFalse2833);
        $tmp2857 = $tmp2858;
        $tmp2856 = $tmp2857;
        $returnValue2815 = $tmp2856;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2856));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2857));
        $tmp2809 = 5;
        goto $l2807;
        $l2860:;
        return $returnValue2815;
    }
    $l2807:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2833));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2826));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2819));
    test2819 = NULL;
    ifTrue2826 = NULL;
    switch ($tmp2809) {
        case 4: goto $l2852;
        case 5: goto $l2860;
        case 1: goto $l2824;
        case 3: goto $l2845;
        case 2: goto $l2831;
        case 0: goto $l2817;
    }
    $l2862:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2863;
    panda$core$Int64 $tmp2864;
    org$pandalanguage$pandac$ASTNode* $returnValue2867;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    org$pandalanguage$pandac$ASTNode* $tmp2870;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    panda$core$Bit $tmp2872;
    panda$core$Int64$init$builtin_int64(&$tmp2864, 95);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2863, $tmp2864);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2866 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2863, &$s2865);
    if (((panda$core$Bit) { !$tmp2866.nonnull }).value) {
    {
        $tmp2868 = NULL;
        $returnValue2867 = $tmp2868;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2868));
        return $returnValue2867;
    }
    }
    panda$core$Bit$init$builtin_bit(&$tmp2872, false);
    org$pandalanguage$pandac$ASTNode* $tmp2873 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2872);
    $tmp2871 = $tmp2873;
    $tmp2870 = $tmp2871;
    $returnValue2867 = $tmp2870;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2870));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2871));
    return $returnValue2867;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2875;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2876;
    panda$core$Int64 $tmp2877;
    org$pandalanguage$pandac$ASTNode* $returnValue2880;
    org$pandalanguage$pandac$ASTNode* $tmp2881;
    panda$core$Int64 $tmp2884;
    org$pandalanguage$pandac$ASTNode* type2889 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2890;
    org$pandalanguage$pandac$ASTNode* $tmp2891;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    org$pandalanguage$pandac$ASTNode* $tmp2897;
    panda$core$Int64 $tmp2899;
    panda$core$String* $tmp2900;
    org$pandalanguage$pandac$ASTNode* $tmp2905;
    org$pandalanguage$pandac$ASTNode* $tmp2906;
    panda$core$Int64 $tmp2908;
    panda$core$String* $tmp2909;
    panda$core$Int64$init$builtin_int64(&$tmp2877, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2876, $tmp2877);
    org$pandalanguage$pandac$parser$Token$nullable $tmp2879 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2876, &$s2878);
    id2875 = $tmp2879;
    if (((panda$core$Bit) { !id2875.nonnull }).value) {
    {
        $tmp2881 = NULL;
        $returnValue2880 = $tmp2881;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2881));
        return $returnValue2880;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2883 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Int64$init$builtin_int64(&$tmp2884, 95);
    panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2883.kind.$rawValue, $tmp2884);
    if ($tmp2885.value) {
    {
        int $tmp2888;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2892 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2891 = $tmp2892;
            $tmp2890 = $tmp2891;
            type2889 = $tmp2890;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
            if (((panda$core$Bit) { type2889 == NULL }).value) {
            {
                $tmp2893 = NULL;
                $returnValue2880 = $tmp2893;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
                $tmp2888 = 0;
                goto $l2886;
                $l2894:;
                return $returnValue2880;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2898 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp2899, 44);
            panda$core$String* $tmp2901 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2875.value));
            $tmp2900 = $tmp2901;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2898, $tmp2899, ((org$pandalanguage$pandac$parser$Token) id2875.value).position, $tmp2900, type2889);
            $tmp2897 = $tmp2898;
            $tmp2896 = $tmp2897;
            $returnValue2880 = $tmp2896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2900));
            $tmp2888 = 1;
            goto $l2886;
            $l2902:;
            return $returnValue2880;
        }
        $l2886:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2889));
        type2889 = NULL;
        switch ($tmp2888) {
            case 1: goto $l2902;
            case 0: goto $l2894;
        }
        $l2904:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2907 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp2908, 20);
    panda$core$String* $tmp2910 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2875.value));
    $tmp2909 = $tmp2910;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2907, $tmp2908, ((org$pandalanguage$pandac$parser$Token) id2875.value).position, $tmp2909);
    $tmp2906 = $tmp2907;
    $tmp2905 = $tmp2906;
    $returnValue2880 = $tmp2905;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2905));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2906));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2909));
    return $returnValue2880;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2915;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2916;
    panda$core$Int64 $tmp2917;
    org$pandalanguage$pandac$ASTNode* $returnValue2920;
    org$pandalanguage$pandac$ASTNode* $tmp2921;
    org$pandalanguage$pandac$ASTNode* t2924 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2925;
    org$pandalanguage$pandac$ASTNode* $tmp2926;
    org$pandalanguage$pandac$ASTNode* $tmp2928;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2931;
    panda$core$Int64 $tmp2932;
    org$pandalanguage$pandac$ASTNode* $tmp2935;
    org$pandalanguage$pandac$ASTNode* list2938 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2939;
    org$pandalanguage$pandac$ASTNode* $tmp2940;
    org$pandalanguage$pandac$ASTNode* $tmp2942;
    panda$collections$ImmutableArray* block2945 = NULL;
    panda$collections$ImmutableArray* $tmp2946;
    panda$collections$ImmutableArray* $tmp2947;
    org$pandalanguage$pandac$ASTNode* $tmp2949;
    org$pandalanguage$pandac$ASTNode* $tmp2952;
    org$pandalanguage$pandac$ASTNode* $tmp2953;
    panda$core$Int64 $tmp2955;
    int $tmp2914;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2917, 32);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2916, $tmp2917);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2919 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2916, &$s2918);
        start2915 = $tmp2919;
        if (((panda$core$Bit) { !start2915.nonnull }).value) {
        {
            $tmp2921 = NULL;
            $returnValue2920 = $tmp2921;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2921));
            $tmp2914 = 0;
            goto $l2912;
            $l2922:;
            return $returnValue2920;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2927 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2926 = $tmp2927;
        $tmp2925 = $tmp2926;
        t2924 = $tmp2925;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2926));
        if (((panda$core$Bit) { t2924 == NULL }).value) {
        {
            $tmp2928 = NULL;
            $returnValue2920 = $tmp2928;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2928));
            $tmp2914 = 1;
            goto $l2912;
            $l2929:;
            return $returnValue2920;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp2932, 34);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2931, $tmp2932);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2934 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2931, &$s2933);
        if (((panda$core$Bit) { !$tmp2934.nonnull }).value) {
        {
            $tmp2935 = NULL;
            $returnValue2920 = $tmp2935;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2935));
            $tmp2914 = 2;
            goto $l2912;
            $l2936:;
            return $returnValue2920;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2941 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2940 = $tmp2941;
        $tmp2939 = $tmp2940;
        list2938 = $tmp2939;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2940));
        if (((panda$core$Bit) { list2938 == NULL }).value) {
        {
            $tmp2942 = NULL;
            $returnValue2920 = $tmp2942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2942));
            $tmp2914 = 3;
            goto $l2912;
            $l2943:;
            return $returnValue2920;
        }
        }
        panda$collections$ImmutableArray* $tmp2948 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2947 = $tmp2948;
        $tmp2946 = $tmp2947;
        block2945 = $tmp2946;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2947));
        if (((panda$core$Bit) { block2945 == NULL }).value) {
        {
            $tmp2949 = NULL;
            $returnValue2920 = $tmp2949;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2949));
            $tmp2914 = 4;
            goto $l2912;
            $l2950:;
            return $returnValue2920;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2954 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2955, 18);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2954, $tmp2955, ((org$pandalanguage$pandac$parser$Token) start2915.value).position, p_label, t2924, list2938, block2945);
        $tmp2953 = $tmp2954;
        $tmp2952 = $tmp2953;
        $returnValue2920 = $tmp2952;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2953));
        $tmp2914 = 5;
        goto $l2912;
        $l2956:;
        return $returnValue2920;
    }
    $l2912:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2945));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2938));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2924));
    t2924 = NULL;
    list2938 = NULL;
    block2945 = NULL;
    switch ($tmp2914) {
        case 3: goto $l2943;
        case 2: goto $l2936;
        case 1: goto $l2929;
        case 5: goto $l2956;
        case 4: goto $l2950;
        case 0: goto $l2922;
    }
    $l2958:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2962;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2963;
    panda$core$Int64 $tmp2964;
    org$pandalanguage$pandac$ASTNode* $returnValue2967;
    org$pandalanguage$pandac$ASTNode* $tmp2968;
    org$pandalanguage$pandac$ASTNode* test2971 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2973;
    org$pandalanguage$pandac$ASTNode* $tmp2975;
    panda$collections$ImmutableArray* body2978 = NULL;
    panda$collections$ImmutableArray* $tmp2979;
    panda$collections$ImmutableArray* $tmp2980;
    org$pandalanguage$pandac$ASTNode* $tmp2982;
    org$pandalanguage$pandac$ASTNode* $tmp2985;
    org$pandalanguage$pandac$ASTNode* $tmp2986;
    panda$core$Int64 $tmp2988;
    int $tmp2961;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2964, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2963, $tmp2964);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2966 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2963, &$s2965);
        start2962 = $tmp2966;
        if (((panda$core$Bit) { !start2962.nonnull }).value) {
        {
            $tmp2968 = NULL;
            $returnValue2967 = $tmp2968;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2968));
            $tmp2961 = 0;
            goto $l2959;
            $l2969:;
            return $returnValue2967;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2974 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2973 = $tmp2974;
        $tmp2972 = $tmp2973;
        test2971 = $tmp2972;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2972));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
        if (((panda$core$Bit) { test2971 == NULL }).value) {
        {
            $tmp2975 = NULL;
            $returnValue2967 = $tmp2975;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2975));
            $tmp2961 = 1;
            goto $l2959;
            $l2976:;
            return $returnValue2967;
        }
        }
        panda$collections$ImmutableArray* $tmp2981 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2980 = $tmp2981;
        $tmp2979 = $tmp2980;
        body2978 = $tmp2979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
        if (((panda$core$Bit) { body2978 == NULL }).value) {
        {
            $tmp2982 = NULL;
            $returnValue2967 = $tmp2982;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2982));
            $tmp2961 = 2;
            goto $l2959;
            $l2983:;
            return $returnValue2967;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2987 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp2988, 49);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2987, $tmp2988, ((org$pandalanguage$pandac$parser$Token) start2962.value).position, p_label, test2971, body2978);
        $tmp2986 = $tmp2987;
        $tmp2985 = $tmp2986;
        $returnValue2967 = $tmp2985;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2985));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2986));
        $tmp2961 = 3;
        goto $l2959;
        $l2989:;
        return $returnValue2967;
    }
    $l2959:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2978));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2971));
    test2971 = NULL;
    body2978 = NULL;
    switch ($tmp2961) {
        case 2: goto $l2983;
        case 1: goto $l2976;
        case 3: goto $l2989;
        case 0: goto $l2969;
    }
    $l2991:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2995;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2996;
    panda$core$Int64 $tmp2997;
    org$pandalanguage$pandac$ASTNode* $returnValue3000;
    org$pandalanguage$pandac$ASTNode* $tmp3001;
    panda$collections$ImmutableArray* body3004 = NULL;
    panda$collections$ImmutableArray* $tmp3005;
    panda$collections$ImmutableArray* $tmp3006;
    org$pandalanguage$pandac$ASTNode* $tmp3008;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3011;
    panda$core$Int64 $tmp3012;
    org$pandalanguage$pandac$ASTNode* $tmp3015;
    org$pandalanguage$pandac$ASTNode* test3018 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3019;
    org$pandalanguage$pandac$ASTNode* $tmp3020;
    org$pandalanguage$pandac$ASTNode* $tmp3022;
    org$pandalanguage$pandac$ASTNode* $tmp3025;
    org$pandalanguage$pandac$ASTNode* $tmp3026;
    panda$core$Int64 $tmp3028;
    int $tmp2994;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2997, 30);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2996, $tmp2997);
        org$pandalanguage$pandac$parser$Token$nullable $tmp2999 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2996, &$s2998);
        start2995 = $tmp2999;
        if (((panda$core$Bit) { !start2995.nonnull }).value) {
        {
            $tmp3001 = NULL;
            $returnValue3000 = $tmp3001;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3001));
            $tmp2994 = 0;
            goto $l2992;
            $l3002:;
            return $returnValue3000;
        }
        }
        panda$collections$ImmutableArray* $tmp3007 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3006 = $tmp3007;
        $tmp3005 = $tmp3006;
        body3004 = $tmp3005;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3006));
        if (((panda$core$Bit) { body3004 == NULL }).value) {
        {
            $tmp3008 = NULL;
            $returnValue3000 = $tmp3008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
            $tmp2994 = 1;
            goto $l2992;
            $l3009:;
            return $returnValue3000;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3012, 31);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3011, $tmp3012);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3014 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3011, &$s3013);
        if (((panda$core$Bit) { !$tmp3014.nonnull }).value) {
        {
            $tmp3015 = NULL;
            $returnValue3000 = $tmp3015;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3015));
            $tmp2994 = 2;
            goto $l2992;
            $l3016:;
            return $returnValue3000;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3021 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3020 = $tmp3021;
        $tmp3019 = $tmp3020;
        test3018 = $tmp3019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
        if (((panda$core$Bit) { test3018 == NULL }).value) {
        {
            $tmp3022 = NULL;
            $returnValue3000 = $tmp3022;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3022));
            $tmp2994 = 3;
            goto $l2992;
            $l3023:;
            return $returnValue3000;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3027 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3028, 14);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3027, $tmp3028, ((org$pandalanguage$pandac$parser$Token) start2995.value).position, p_label, body3004, test3018);
        $tmp3026 = $tmp3027;
        $tmp3025 = $tmp3026;
        $returnValue3000 = $tmp3025;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3026));
        $tmp2994 = 4;
        goto $l2992;
        $l3029:;
        return $returnValue3000;
    }
    $l2992:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test3018));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3004));
    body3004 = NULL;
    test3018 = NULL;
    switch ($tmp2994) {
        case 2: goto $l3016;
        case 3: goto $l3023;
        case 4: goto $l3029;
        case 1: goto $l3009;
        case 0: goto $l3002;
    }
    $l3031:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start3035;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3036;
    panda$core$Int64 $tmp3037;
    org$pandalanguage$pandac$ASTNode* $returnValue3040;
    org$pandalanguage$pandac$ASTNode* $tmp3041;
    panda$collections$ImmutableArray* body3044 = NULL;
    panda$collections$ImmutableArray* $tmp3045;
    panda$collections$ImmutableArray* $tmp3046;
    org$pandalanguage$pandac$ASTNode* $tmp3048;
    org$pandalanguage$pandac$ASTNode* $tmp3051;
    org$pandalanguage$pandac$ASTNode* $tmp3052;
    panda$core$Int64 $tmp3054;
    int $tmp3034;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3037, 35);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3036, $tmp3037);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3039 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3036, &$s3038);
        start3035 = $tmp3039;
        if (((panda$core$Bit) { !start3035.nonnull }).value) {
        {
            $tmp3041 = NULL;
            $returnValue3040 = $tmp3041;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3041));
            $tmp3034 = 0;
            goto $l3032;
            $l3042:;
            return $returnValue3040;
        }
        }
        panda$collections$ImmutableArray* $tmp3047 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3046 = $tmp3047;
        $tmp3045 = $tmp3046;
        body3044 = $tmp3045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
        if (((panda$core$Bit) { body3044 == NULL }).value) {
        {
            $tmp3048 = NULL;
            $returnValue3040 = $tmp3048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3048));
            $tmp3034 = 1;
            goto $l3032;
            $l3049:;
            return $returnValue3040;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3053 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3054, 24);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3053, $tmp3054, ((org$pandalanguage$pandac$parser$Token) start3035.value).position, p_label, body3044);
        $tmp3052 = $tmp3053;
        $tmp3051 = $tmp3052;
        $returnValue3040 = $tmp3051;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3051));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
        $tmp3034 = 2;
        goto $l3032;
        $l3055:;
        return $returnValue3040;
    }
    $l3032:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3044));
    body3044 = NULL;
    switch ($tmp3034) {
        case 1: goto $l3049;
        case 0: goto $l3042;
        case 2: goto $l3055;
    }
    $l3057:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3061;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3062;
    panda$core$Int64 $tmp3063;
    org$pandalanguage$pandac$ASTNode* $returnValue3066;
    org$pandalanguage$pandac$ASTNode* $tmp3067;
    org$pandalanguage$pandac$ASTNode* expr3070 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3072;
    org$pandalanguage$pandac$ASTNode* $tmp3074;
    org$pandalanguage$pandac$ASTNode* message3077 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3078;
    panda$core$Int64 $tmp3079;
    org$pandalanguage$pandac$ASTNode* $tmp3081;
    org$pandalanguage$pandac$ASTNode* $tmp3082;
    org$pandalanguage$pandac$ASTNode* $tmp3083;
    org$pandalanguage$pandac$ASTNode* $tmp3085;
    org$pandalanguage$pandac$ASTNode* $tmp3088;
    org$pandalanguage$pandac$ASTNode* $tmp3089;
    org$pandalanguage$pandac$ASTNode* $tmp3090;
    org$pandalanguage$pandac$ASTNode* $tmp3091;
    panda$core$Int64 $tmp3093;
    int $tmp3060;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3063, 44);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3062, $tmp3063);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3065 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3062, &$s3064);
        start3061 = $tmp3065;
        if (((panda$core$Bit) { !start3061.nonnull }).value) {
        {
            $tmp3067 = NULL;
            $returnValue3066 = $tmp3067;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3067));
            $tmp3060 = 0;
            goto $l3058;
            $l3068:;
            return $returnValue3066;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3073 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3072 = $tmp3073;
        $tmp3071 = $tmp3072;
        expr3070 = $tmp3071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3072));
        if (((panda$core$Bit) { expr3070 == NULL }).value) {
        {
            $tmp3074 = NULL;
            $returnValue3066 = $tmp3074;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
            $tmp3060 = 1;
            goto $l3058;
            $l3075:;
            return $returnValue3066;
        }
        }
        memset(&message3077, 0, sizeof(message3077));
        panda$core$Int64$init$builtin_int64(&$tmp3079, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3078, $tmp3079);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3080 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3078);
        if (((panda$core$Bit) { $tmp3080.nonnull }).value) {
        {
            {
                $tmp3081 = message3077;
                org$pandalanguage$pandac$ASTNode* $tmp3084 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3083 = $tmp3084;
                $tmp3082 = $tmp3083;
                message3077 = $tmp3082;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3081));
            }
            if (((panda$core$Bit) { message3077 == NULL }).value) {
            {
                $tmp3085 = NULL;
                $returnValue3066 = $tmp3085;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3085));
                $tmp3060 = 2;
                goto $l3058;
                $l3086:;
                return $returnValue3066;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3088 = message3077;
                $tmp3089 = NULL;
                message3077 = $tmp3089;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3092 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3093, 1);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3092, $tmp3093, ((org$pandalanguage$pandac$parser$Token) start3061.value).position, expr3070, message3077);
        $tmp3091 = $tmp3092;
        $tmp3090 = $tmp3091;
        $returnValue3066 = $tmp3090;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
        $tmp3060 = 3;
        goto $l3058;
        $l3094:;
        return $returnValue3066;
    }
    $l3058:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message3077));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3070));
    expr3070 = NULL;
    switch ($tmp3060) {
        case 3: goto $l3094;
        case 2: goto $l3086;
        case 1: goto $l3075;
        case 0: goto $l3068;
    }
    $l3096:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3108;
    panda$core$Int64 $tmp3109;
    org$pandalanguage$pandac$ASTNode* $returnValue3112;
    org$pandalanguage$pandac$ASTNode* $tmp3113;
    panda$core$Bit $tmp3117;
    panda$collections$Array* expressions3118 = NULL;
    panda$collections$Array* $tmp3119;
    panda$collections$Array* $tmp3120;
    org$pandalanguage$pandac$ASTNode* expr3122 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3123;
    org$pandalanguage$pandac$ASTNode* $tmp3124;
    panda$core$Bit $tmp3126;
    org$pandalanguage$pandac$ASTNode* $tmp3127;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3134;
    panda$core$Int64 $tmp3135;
    org$pandalanguage$pandac$ASTNode* $tmp3137;
    org$pandalanguage$pandac$ASTNode* $tmp3138;
    org$pandalanguage$pandac$ASTNode* $tmp3139;
    panda$core$Bit $tmp3141;
    org$pandalanguage$pandac$ASTNode* $tmp3142;
    panda$core$Bit $tmp3146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3147;
    panda$core$Int64 $tmp3148;
    org$pandalanguage$pandac$ASTNode* $tmp3151;
    panda$collections$Array* statements3155 = NULL;
    panda$collections$Array* $tmp3156;
    panda$collections$Array* $tmp3157;
    org$pandalanguage$pandac$parser$Token$Kind $match$1482_133161;
    panda$core$Int64 $tmp3165;
    panda$core$Int64 $tmp3168;
    panda$core$Int64 $tmp3172;
    panda$core$Int64 $tmp3177;
    panda$core$Int64 $tmp3180;
    panda$core$Int64 $tmp3184;
    org$pandalanguage$pandac$ASTNode* stmt3190 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3191;
    org$pandalanguage$pandac$ASTNode* $tmp3192;
    org$pandalanguage$pandac$ASTNode* $tmp3194;
    org$pandalanguage$pandac$ASTNode* stmt3204 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3205;
    org$pandalanguage$pandac$ASTNode* $tmp3206;
    org$pandalanguage$pandac$ASTNode* $tmp3208;
    org$pandalanguage$pandac$ASTNode* $tmp3214;
    org$pandalanguage$pandac$ASTNode* $tmp3215;
    panda$core$Int64 $tmp3217;
    panda$collections$ImmutableArray* $tmp3218;
    panda$collections$ImmutableArray* $tmp3220;
    int $tmp3099;
    {
        if (self->allowLambdas.value) goto $l3100; else goto $l3101;
        $l3101:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3102, (panda$core$Int64) { 1455 }, &$s3103);
        abort();
        $l3100:;
        int $tmp3106;
        {
            panda$core$Int64$init$builtin_int64(&$tmp3109, 39);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3108, $tmp3109);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3111 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3108, &$s3110);
            start3107 = $tmp3111;
            if (((panda$core$Bit) { !start3107.nonnull }).value) {
            {
                $tmp3113 = NULL;
                $returnValue3112 = $tmp3113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3113));
                $tmp3106 = 0;
                goto $l3104;
                $l3114:;
                $tmp3099 = 0;
                goto $l3097;
                $l3115:;
                return $returnValue3112;
            }
            }
            panda$core$Bit$init$builtin_bit(&$tmp3117, false);
            self->allowLambdas = $tmp3117;
            panda$collections$Array* $tmp3121 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3121);
            $tmp3120 = $tmp3121;
            $tmp3119 = $tmp3120;
            expressions3118 = $tmp3119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
            org$pandalanguage$pandac$ASTNode* $tmp3125 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3124 = $tmp3125;
            $tmp3123 = $tmp3124;
            expr3122 = $tmp3123;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
            if (((panda$core$Bit) { expr3122 == NULL }).value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp3126, true);
                self->allowLambdas = $tmp3126;
                $tmp3127 = NULL;
                $returnValue3112 = $tmp3127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
                $tmp3106 = 1;
                goto $l3104;
                $l3128:;
                $tmp3099 = 1;
                goto $l3097;
                $l3129:;
                return $returnValue3112;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions3118, ((panda$core$Object*) expr3122));
            $l3131:;
            panda$core$Int64$init$builtin_int64(&$tmp3135, 105);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3134, $tmp3135);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3136 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3134);
            bool $tmp3133 = ((panda$core$Bit) { $tmp3136.nonnull }).value;
            if (!$tmp3133) goto $l3132;
            {
                {
                    $tmp3137 = expr3122;
                    org$pandalanguage$pandac$ASTNode* $tmp3140 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3139 = $tmp3140;
                    $tmp3138 = $tmp3139;
                    expr3122 = $tmp3138;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
                }
                if (((panda$core$Bit) { expr3122 == NULL }).value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp3141, true);
                    self->allowLambdas = $tmp3141;
                    $tmp3142 = NULL;
                    $returnValue3112 = $tmp3142;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
                    $tmp3106 = 2;
                    goto $l3104;
                    $l3143:;
                    $tmp3099 = 2;
                    goto $l3097;
                    $l3144:;
                    return $returnValue3112;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions3118, ((panda$core$Object*) expr3122));
            }
            goto $l3131;
            $l3132:;
            panda$core$Bit$init$builtin_bit(&$tmp3146, true);
            self->allowLambdas = $tmp3146;
            panda$core$Int64$init$builtin_int64(&$tmp3148, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3147, $tmp3148);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3150 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3147, &$s3149);
            if (((panda$core$Bit) { !$tmp3150.nonnull }).value) {
            {
                $tmp3151 = NULL;
                $returnValue3112 = $tmp3151;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
                $tmp3106 = 3;
                goto $l3104;
                $l3152:;
                $tmp3099 = 3;
                goto $l3097;
                $l3153:;
                return $returnValue3112;
            }
            }
            panda$collections$Array* $tmp3158 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp3158);
            $tmp3157 = $tmp3158;
            $tmp3156 = $tmp3157;
            statements3155 = $tmp3156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3156));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3157));
            $l3159:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3162 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1482_133161 = $tmp3162.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp3165, 39);
                    panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1482_133161.$rawValue, $tmp3165);
                    bool $tmp3164 = $tmp3166.value;
                    if ($tmp3164) goto $l3167;
                    panda$core$Int64$init$builtin_int64(&$tmp3168, 40);
                    panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1482_133161.$rawValue, $tmp3168);
                    $tmp3164 = $tmp3169.value;
                    $l3167:;
                    panda$core$Bit $tmp3170 = { $tmp3164 };
                    bool $tmp3163 = $tmp3170.value;
                    if ($tmp3163) goto $l3171;
                    panda$core$Int64$init$builtin_int64(&$tmp3172, 100);
                    panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1482_133161.$rawValue, $tmp3172);
                    $tmp3163 = $tmp3173.value;
                    $l3171:;
                    panda$core$Bit $tmp3174 = { $tmp3163 };
                    if ($tmp3174.value) {
                    {
                        goto $l3160;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3177, 28);
                    panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1482_133161.$rawValue, $tmp3177);
                    bool $tmp3176 = $tmp3178.value;
                    if ($tmp3176) goto $l3179;
                    panda$core$Int64$init$builtin_int64(&$tmp3180, 29);
                    panda$core$Bit $tmp3181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1482_133161.$rawValue, $tmp3180);
                    $tmp3176 = $tmp3181.value;
                    $l3179:;
                    panda$core$Bit $tmp3182 = { $tmp3176 };
                    bool $tmp3175 = $tmp3182.value;
                    if ($tmp3175) goto $l3183;
                    panda$core$Int64$init$builtin_int64(&$tmp3184, 27);
                    panda$core$Bit $tmp3185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1482_133161.$rawValue, $tmp3184);
                    $tmp3175 = $tmp3185.value;
                    $l3183:;
                    panda$core$Bit $tmp3186 = { $tmp3175 };
                    if ($tmp3186.value) {
                    {
                        int $tmp3189;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp3193 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3192 = $tmp3193;
                            $tmp3191 = $tmp3192;
                            stmt3190 = $tmp3191;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3191));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3192));
                            if (((panda$core$Bit) { stmt3190 == NULL }).value) {
                            {
                                $tmp3194 = NULL;
                                $returnValue3112 = $tmp3194;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3194));
                                $tmp3189 = 0;
                                goto $l3187;
                                $l3195:;
                                $tmp3106 = 4;
                                goto $l3104;
                                $l3196:;
                                $tmp3099 = 4;
                                goto $l3097;
                                $l3197:;
                                return $returnValue3112;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements3155, ((panda$core$Object*) stmt3190));
                            $tmp3189 = 1;
                            goto $l3187;
                            $l3199:;
                            goto $l3160;
                        }
                        $l3187:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3190));
                        stmt3190 = NULL;
                        switch ($tmp3189) {
                            case 1: goto $l3199;
                            case 0: goto $l3195;
                        }
                        $l3200:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp3203;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp3207 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp3206 = $tmp3207;
                                $tmp3205 = $tmp3206;
                                stmt3204 = $tmp3205;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3205));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3206));
                                if (((panda$core$Bit) { stmt3204 == NULL }).value) {
                                {
                                    $tmp3208 = NULL;
                                    $returnValue3112 = $tmp3208;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
                                    $tmp3203 = 0;
                                    goto $l3201;
                                    $l3209:;
                                    $tmp3106 = 5;
                                    goto $l3104;
                                    $l3210:;
                                    $tmp3099 = 5;
                                    goto $l3097;
                                    $l3211:;
                                    return $returnValue3112;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements3155, ((panda$core$Object*) stmt3204));
                            }
                            $tmp3203 = -1;
                            goto $l3201;
                            $l3201:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3204));
                            stmt3204 = NULL;
                            switch ($tmp3203) {
                                case 0: goto $l3209;
                                case -1: goto $l3213;
                            }
                            $l3213:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l3160:;
            org$pandalanguage$pandac$ASTNode* $tmp3216 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3217, 48);
            panda$collections$ImmutableArray* $tmp3219 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions3118);
            $tmp3218 = $tmp3219;
            panda$collections$ImmutableArray* $tmp3221 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements3155);
            $tmp3220 = $tmp3221;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3216, $tmp3217, ((org$pandalanguage$pandac$parser$Token) start3107.value).position, $tmp3218, $tmp3220);
            $tmp3215 = $tmp3216;
            $tmp3214 = $tmp3215;
            $returnValue3112 = $tmp3214;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3214));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3215));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
            $tmp3106 = 6;
            goto $l3104;
            $l3222:;
            $tmp3099 = 6;
            goto $l3097;
            $l3223:;
            return $returnValue3112;
        }
        $l3104:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions3118));
        expressions3118 = NULL;
        expr3122 = NULL;
        statements3155 = NULL;
        switch ($tmp3106) {
            case 4: goto $l3196;
            case 2: goto $l3143;
            case 0: goto $l3114;
            case 3: goto $l3152;
            case 5: goto $l3210;
            case 6: goto $l3222;
            case 1: goto $l3128;
        }
        $l3225:;
    }
    $tmp3099 = -1;
    goto $l3097;
    $l3097:;
    if (self->allowLambdas.value) goto $l3227; else goto $l3228;
    $l3228:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s3229, (panda$core$Int64) { 1455 }, &$s3230);
    abort();
    $l3227:;
    switch ($tmp3099) {
        case 3: goto $l3153;
        case 5: goto $l3211;
        case 4: goto $l3197;
        case 1: goto $l3129;
        case 6: goto $l3223;
        case -1: goto $l3226;
        case 0: goto $l3115;
        case 2: goto $l3144;
    }
    $l3226:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3234;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3235;
    panda$core$Int64 $tmp3236;
    org$pandalanguage$pandac$ASTNode* $returnValue3239;
    org$pandalanguage$pandac$ASTNode* $tmp3240;
    org$pandalanguage$pandac$ASTNode* expr3243 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3244;
    org$pandalanguage$pandac$ASTNode* $tmp3245;
    org$pandalanguage$pandac$ASTNode* $tmp3247;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3250;
    panda$core$Int64 $tmp3251;
    org$pandalanguage$pandac$ASTNode* $tmp3254;
    panda$collections$Array* whens3257 = NULL;
    panda$collections$Array* $tmp3258;
    panda$collections$Array* $tmp3259;
    panda$collections$Array* other3261 = NULL;
    panda$collections$Array* $tmp3262;
    org$pandalanguage$pandac$parser$Token token3265;
    org$pandalanguage$pandac$parser$Token$Kind $match$1523_133267;
    panda$core$Int64 $tmp3268;
    panda$core$Int64 $tmp3270;
    org$pandalanguage$pandac$ASTNode* w3275 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3276;
    org$pandalanguage$pandac$ASTNode* $tmp3277;
    org$pandalanguage$pandac$ASTNode* $tmp3279;
    panda$core$Int64 $tmp3284;
    org$pandalanguage$pandac$parser$Token o3286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3288;
    panda$core$Int64 $tmp3289;
    org$pandalanguage$pandac$ASTNode* $tmp3292;
    panda$collections$Array* $tmp3295;
    panda$collections$Array* $tmp3296;
    panda$collections$Array* $tmp3297;
    org$pandalanguage$pandac$parser$Token$Kind $match$1539_253301;
    panda$core$Int64 $tmp3303;
    panda$core$Int64 $tmp3307;
    panda$core$Int64 $tmp3310;
    panda$core$Int64 $tmp3314;
    org$pandalanguage$pandac$ASTNode* stmt3320 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3321;
    org$pandalanguage$pandac$ASTNode* $tmp3322;
    org$pandalanguage$pandac$ASTNode* $tmp3324;
    org$pandalanguage$pandac$ASTNode* stmt3333 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3334;
    org$pandalanguage$pandac$ASTNode* $tmp3335;
    org$pandalanguage$pandac$ASTNode* $tmp3337;
    panda$core$String* $tmp3342;
    panda$core$String* $tmp3344;
    panda$core$String* $tmp3345;
    panda$core$String* $tmp3347;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3353;
    panda$core$Int64 $tmp3354;
    org$pandalanguage$pandac$ASTNode* $tmp3357;
    org$pandalanguage$pandac$ASTNode* $tmp3360;
    org$pandalanguage$pandac$ASTNode* $tmp3361;
    panda$core$Int64 $tmp3363;
    panda$collections$ImmutableArray* $tmp3364;
    panda$collections$ImmutableArray* $tmp3366;
    org$pandalanguage$pandac$ASTNode* $tmp3370;
    org$pandalanguage$pandac$ASTNode* $tmp3371;
    panda$core$Int64 $tmp3373;
    panda$collections$ImmutableArray* $tmp3374;
    int $tmp3233;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3236, 38);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3235, $tmp3236);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3238 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3235, &$s3237);
        start3234 = $tmp3238;
        if (((panda$core$Bit) { !start3234.nonnull }).value) {
        {
            $tmp3240 = NULL;
            $returnValue3239 = $tmp3240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3240));
            $tmp3233 = 0;
            goto $l3231;
            $l3241:;
            return $returnValue3239;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3246 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3245 = $tmp3246;
        $tmp3244 = $tmp3245;
        expr3243 = $tmp3244;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3245));
        if (((panda$core$Bit) { expr3243 == NULL }).value) {
        {
            $tmp3247 = NULL;
            $returnValue3239 = $tmp3247;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3247));
            $tmp3233 = 1;
            goto $l3231;
            $l3248:;
            return $returnValue3239;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3251, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3250, $tmp3251);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3253 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3250, &$s3252);
        if (((panda$core$Bit) { !$tmp3253.nonnull }).value) {
        {
            $tmp3254 = NULL;
            $returnValue3239 = $tmp3254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
            $tmp3233 = 2;
            goto $l3231;
            $l3255:;
            return $returnValue3239;
        }
        }
        panda$collections$Array* $tmp3260 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3260);
        $tmp3259 = $tmp3260;
        $tmp3258 = $tmp3259;
        whens3257 = $tmp3258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3259));
        $tmp3262 = NULL;
        other3261 = $tmp3262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3262));
        $l3263:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3266 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token3265 = $tmp3266;
            {
                $match$1523_133267 = token3265.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3268, 100);
                panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_133267.$rawValue, $tmp3268);
                if ($tmp3269.value) {
                {
                    goto $l3264;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3270, 39);
                panda$core$Bit $tmp3271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_133267.$rawValue, $tmp3270);
                if ($tmp3271.value) {
                {
                    int $tmp3274;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3278 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3277 = $tmp3278;
                        $tmp3276 = $tmp3277;
                        w3275 = $tmp3276;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3276));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3277));
                        if (((panda$core$Bit) { w3275 == NULL }).value) {
                        {
                            $tmp3279 = NULL;
                            $returnValue3239 = $tmp3279;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3279));
                            $tmp3274 = 0;
                            goto $l3272;
                            $l3280:;
                            $tmp3233 = 3;
                            goto $l3231;
                            $l3281:;
                            return $returnValue3239;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens3257, ((panda$core$Object*) w3275));
                    }
                    $tmp3274 = -1;
                    goto $l3272;
                    $l3272:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3275));
                    w3275 = NULL;
                    switch ($tmp3274) {
                        case 0: goto $l3280;
                        case -1: goto $l3283;
                    }
                    $l3283:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3284, 40);
                panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_133267.$rawValue, $tmp3284);
                if ($tmp3285.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp3287 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o3286 = $tmp3287;
                    panda$core$Int64$init$builtin_int64(&$tmp3289, 95);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3288, $tmp3289);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3291 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3288, &$s3290);
                    if (((panda$core$Bit) { !$tmp3291.nonnull }).value) {
                    {
                        $tmp3292 = NULL;
                        $returnValue3239 = $tmp3292;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3292));
                        $tmp3233 = 4;
                        goto $l3231;
                        $l3293:;
                        return $returnValue3239;
                    }
                    }
                    {
                        $tmp3295 = other3261;
                        panda$collections$Array* $tmp3298 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp3298);
                        $tmp3297 = $tmp3298;
                        $tmp3296 = $tmp3297;
                        other3261 = $tmp3296;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3297));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3295));
                    }
                    $l3299:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp3302 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1539_253301 = $tmp3302.kind;
                            panda$core$Int64$init$builtin_int64(&$tmp3303, 100);
                            panda$core$Bit $tmp3304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_253301.$rawValue, $tmp3303);
                            if ($tmp3304.value) {
                            {
                                goto $l3300;
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp3307, 28);
                            panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_253301.$rawValue, $tmp3307);
                            bool $tmp3306 = $tmp3308.value;
                            if ($tmp3306) goto $l3309;
                            panda$core$Int64$init$builtin_int64(&$tmp3310, 29);
                            panda$core$Bit $tmp3311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_253301.$rawValue, $tmp3310);
                            $tmp3306 = $tmp3311.value;
                            $l3309:;
                            panda$core$Bit $tmp3312 = { $tmp3306 };
                            bool $tmp3305 = $tmp3312.value;
                            if ($tmp3305) goto $l3313;
                            panda$core$Int64$init$builtin_int64(&$tmp3314, 27);
                            panda$core$Bit $tmp3315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_253301.$rawValue, $tmp3314);
                            $tmp3305 = $tmp3315.value;
                            $l3313:;
                            panda$core$Bit $tmp3316 = { $tmp3305 };
                            if ($tmp3316.value) {
                            {
                                int $tmp3319;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3323 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3322 = $tmp3323;
                                    $tmp3321 = $tmp3322;
                                    stmt3320 = $tmp3321;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3321));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
                                    if (((panda$core$Bit) { stmt3320 == NULL }).value) {
                                    {
                                        $tmp3324 = NULL;
                                        $returnValue3239 = $tmp3324;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3324));
                                        $tmp3319 = 0;
                                        goto $l3317;
                                        $l3325:;
                                        $tmp3233 = 5;
                                        goto $l3231;
                                        $l3326:;
                                        return $returnValue3239;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3261, ((panda$core$Object*) stmt3320));
                                    $tmp3319 = 1;
                                    goto $l3317;
                                    $l3328:;
                                    goto $l3300;
                                }
                                $l3317:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3320));
                                stmt3320 = NULL;
                                switch ($tmp3319) {
                                    case 0: goto $l3325;
                                    case 1: goto $l3328;
                                }
                                $l3329:;
                            }
                            }
                            else {
                            {
                                int $tmp3332;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp3336 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp3335 = $tmp3336;
                                    $tmp3334 = $tmp3335;
                                    stmt3333 = $tmp3334;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3334));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3335));
                                    if (((panda$core$Bit) { stmt3333 == NULL }).value) {
                                    {
                                        $tmp3337 = NULL;
                                        $returnValue3239 = $tmp3337;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3337));
                                        $tmp3332 = 0;
                                        goto $l3330;
                                        $l3338:;
                                        $tmp3233 = 6;
                                        goto $l3231;
                                        $l3339:;
                                        return $returnValue3239;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other3261, ((panda$core$Object*) stmt3333));
                                }
                                $tmp3332 = -1;
                                goto $l3330;
                                $l3330:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3333));
                                stmt3333 = NULL;
                                switch ($tmp3332) {
                                    case 0: goto $l3338;
                                    case -1: goto $l3341;
                                }
                                $l3341:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l3300:;
                    goto $l3264;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp3348 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3265);
                    $tmp3347 = $tmp3348;
                    panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3346, $tmp3347);
                    $tmp3345 = $tmp3349;
                    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3345, &$s3350);
                    $tmp3344 = $tmp3351;
                    panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3343, $tmp3344);
                    $tmp3342 = $tmp3352;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token3265, $tmp3342);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3344));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3345));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3347));
                    goto $l3264;
                }
                }
                }
                }
            }
        }
        }
        $l3264:;
        panda$core$Int64$init$builtin_int64(&$tmp3354, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3353, $tmp3354);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3356 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3353, &$s3355);
        if (((panda$core$Bit) { !$tmp3356.nonnull }).value) {
        {
            $tmp3357 = NULL;
            $returnValue3239 = $tmp3357;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3357));
            $tmp3233 = 7;
            goto $l3231;
            $l3358:;
            return $returnValue3239;
        }
        }
        if (((panda$core$Bit) { other3261 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3362 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3363, 25);
            panda$collections$ImmutableArray* $tmp3365 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3257);
            $tmp3364 = $tmp3365;
            panda$collections$ImmutableArray* $tmp3367 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other3261);
            $tmp3366 = $tmp3367;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3362, $tmp3363, ((org$pandalanguage$pandac$parser$Token) start3234.value).position, expr3243, $tmp3364, $tmp3366);
            $tmp3361 = $tmp3362;
            $tmp3360 = $tmp3361;
            $returnValue3239 = $tmp3360;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3364));
            $tmp3233 = 8;
            goto $l3231;
            $l3368:;
            return $returnValue3239;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3372 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3373, 25);
        panda$collections$ImmutableArray* $tmp3375 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens3257);
        $tmp3374 = $tmp3375;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3372, $tmp3373, ((org$pandalanguage$pandac$parser$Token) start3234.value).position, expr3243, $tmp3374, NULL);
        $tmp3371 = $tmp3372;
        $tmp3370 = $tmp3371;
        $returnValue3239 = $tmp3370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3374));
        $tmp3233 = 9;
        goto $l3231;
        $l3376:;
        return $returnValue3239;
    }
    $l3231:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other3261));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens3257));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3243));
    expr3243 = NULL;
    whens3257 = NULL;
    switch ($tmp3233) {
        case 4: goto $l3293;
        case 7: goto $l3358;
        case 1: goto $l3248;
        case 8: goto $l3368;
        case 3: goto $l3281;
        case 9: goto $l3376;
        case 2: goto $l3255;
        case 0: goto $l3241;
        case 6: goto $l3339;
        case 5: goto $l3326;
    }
    $l3378:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3382;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3383;
    panda$core$Int64 $tmp3384;
    panda$collections$ImmutableArray* $returnValue3387;
    panda$collections$ImmutableArray* $tmp3388;
    panda$collections$Array* result3391 = NULL;
    panda$collections$Array* $tmp3392;
    panda$collections$Array* $tmp3393;
    org$pandalanguage$pandac$parser$Token$Kind $match$1584_133397;
    panda$core$Int64 $tmp3399;
    panda$core$Int64 $tmp3403;
    panda$core$Int64 $tmp3406;
    panda$core$Int64 $tmp3410;
    org$pandalanguage$pandac$ASTNode* stmt3416 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3417;
    org$pandalanguage$pandac$ASTNode* $tmp3418;
    panda$collections$ImmutableArray* $tmp3420;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3424;
    panda$core$Int64 $tmp3425;
    panda$collections$ImmutableArray* $tmp3428;
    org$pandalanguage$pandac$ASTNode* stmt3437 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3438;
    org$pandalanguage$pandac$ASTNode* $tmp3439;
    panda$collections$ImmutableArray* $tmp3441;
    panda$collections$ImmutableArray* $tmp3446;
    panda$collections$ImmutableArray* $tmp3447;
    int $tmp3381;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3384, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3383, $tmp3384);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3386 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3383, &$s3385);
        start3382 = $tmp3386;
        if (((panda$core$Bit) { !start3382.nonnull }).value) {
        {
            $tmp3388 = NULL;
            $returnValue3387 = $tmp3388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3388));
            $tmp3381 = 0;
            goto $l3379;
            $l3389:;
            return $returnValue3387;
        }
        }
        panda$collections$Array* $tmp3394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3394);
        $tmp3393 = $tmp3394;
        $tmp3392 = $tmp3393;
        result3391 = $tmp3392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3393));
        $l3395:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp3398 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1584_133397 = $tmp3398.kind;
                panda$core$Int64$init$builtin_int64(&$tmp3399, 100);
                panda$core$Bit $tmp3400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1584_133397.$rawValue, $tmp3399);
                if ($tmp3400.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l3396;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp3403, 28);
                panda$core$Bit $tmp3404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1584_133397.$rawValue, $tmp3403);
                bool $tmp3402 = $tmp3404.value;
                if ($tmp3402) goto $l3405;
                panda$core$Int64$init$builtin_int64(&$tmp3406, 29);
                panda$core$Bit $tmp3407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1584_133397.$rawValue, $tmp3406);
                $tmp3402 = $tmp3407.value;
                $l3405:;
                panda$core$Bit $tmp3408 = { $tmp3402 };
                bool $tmp3401 = $tmp3408.value;
                if ($tmp3401) goto $l3409;
                panda$core$Int64$init$builtin_int64(&$tmp3410, 27);
                panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1584_133397.$rawValue, $tmp3410);
                $tmp3401 = $tmp3411.value;
                $l3409:;
                panda$core$Bit $tmp3412 = { $tmp3401 };
                if ($tmp3412.value) {
                {
                    int $tmp3415;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3419 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3418 = $tmp3419;
                        $tmp3417 = $tmp3418;
                        stmt3416 = $tmp3417;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3417));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3418));
                        if (((panda$core$Bit) { stmt3416 == NULL }).value) {
                        {
                            $tmp3420 = NULL;
                            $returnValue3387 = $tmp3420;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3420));
                            $tmp3415 = 0;
                            goto $l3413;
                            $l3421:;
                            $tmp3381 = 1;
                            goto $l3379;
                            $l3422:;
                            return $returnValue3387;
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp3425, 100);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3424, $tmp3425);
                        org$pandalanguage$pandac$parser$Token$nullable $tmp3427 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3424, &$s3426);
                        if (((panda$core$Bit) { !$tmp3427.nonnull }).value) {
                        {
                            $tmp3428 = NULL;
                            $returnValue3387 = $tmp3428;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3428));
                            $tmp3415 = 1;
                            goto $l3413;
                            $l3429:;
                            $tmp3381 = 2;
                            goto $l3379;
                            $l3430:;
                            return $returnValue3387;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3391, ((panda$core$Object*) stmt3416));
                        $tmp3415 = 2;
                        goto $l3413;
                        $l3432:;
                        goto $l3396;
                    }
                    $l3413:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3416));
                    stmt3416 = NULL;
                    switch ($tmp3415) {
                        case 1: goto $l3429;
                        case 0: goto $l3421;
                        case 2: goto $l3432;
                    }
                    $l3433:;
                }
                }
                else {
                {
                    int $tmp3436;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3440 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3439 = $tmp3440;
                        $tmp3438 = $tmp3439;
                        stmt3437 = $tmp3438;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
                        if (((panda$core$Bit) { stmt3437 == NULL }).value) {
                        {
                            $tmp3441 = NULL;
                            $returnValue3387 = $tmp3441;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3441));
                            $tmp3436 = 0;
                            goto $l3434;
                            $l3442:;
                            $tmp3381 = 3;
                            goto $l3379;
                            $l3443:;
                            return $returnValue3387;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result3391, ((panda$core$Object*) stmt3437));
                    }
                    $tmp3436 = -1;
                    goto $l3434;
                    $l3434:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt3437));
                    stmt3437 = NULL;
                    switch ($tmp3436) {
                        case -1: goto $l3445;
                        case 0: goto $l3442;
                    }
                    $l3445:;
                }
                }
                }
            }
        }
        }
        $l3396:;
        panda$collections$ImmutableArray* $tmp3448 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3391);
        $tmp3447 = $tmp3448;
        $tmp3446 = $tmp3447;
        $returnValue3387 = $tmp3446;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3447));
        $tmp3381 = 4;
        goto $l3379;
        $l3449:;
        return $returnValue3387;
    }
    $l3379:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3391));
    result3391 = NULL;
    switch ($tmp3381) {
        case 3: goto $l3443;
        case 2: goto $l3430;
        case 4: goto $l3449;
        case 0: goto $l3389;
        case 1: goto $l3422;
    }
    $l3451:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements3455 = NULL;
    panda$collections$ImmutableArray* $tmp3456;
    panda$collections$ImmutableArray* $tmp3457;
    org$pandalanguage$pandac$ASTNode* $returnValue3459;
    org$pandalanguage$pandac$ASTNode* $tmp3460;
    org$pandalanguage$pandac$ASTNode* $tmp3463;
    org$pandalanguage$pandac$ASTNode* $tmp3464;
    panda$core$Int64 $tmp3466;
    org$pandalanguage$pandac$Position $tmp3467;
    int $tmp3454;
    {
        panda$collections$ImmutableArray* $tmp3458 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3457 = $tmp3458;
        $tmp3456 = $tmp3457;
        statements3455 = $tmp3456;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3456));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3457));
        if (((panda$core$Bit) { statements3455 == NULL }).value) {
        {
            $tmp3460 = NULL;
            $returnValue3459 = $tmp3460;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3460));
            $tmp3454 = 0;
            goto $l3452;
            $l3461:;
            return $returnValue3459;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3465 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3466, 6);
        org$pandalanguage$pandac$Position$init(&$tmp3467);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3465, $tmp3466, $tmp3467, statements3455);
        $tmp3464 = $tmp3465;
        $tmp3463 = $tmp3464;
        $returnValue3459 = $tmp3463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3464));
        $tmp3454 = 1;
        goto $l3452;
        $l3468:;
        return $returnValue3459;
    }
    $l3452:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements3455));
    statements3455 = NULL;
    switch ($tmp3454) {
        case 0: goto $l3461;
        case 1: goto $l3468;
    }
    $l3470:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start3474 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3475;
    org$pandalanguage$pandac$ASTNode* $tmp3476;
    org$pandalanguage$pandac$ASTNode* $returnValue3478;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    org$pandalanguage$pandac$parser$Token$Kind $match$1628_93482;
    panda$core$Int64 $tmp3499;
    panda$core$Int64 $tmp3502;
    panda$core$Int64 $tmp3506;
    panda$core$Int64 $tmp3510;
    panda$core$Int64 $tmp3514;
    panda$core$Int64 $tmp3518;
    panda$core$Int64 $tmp3522;
    panda$core$Int64 $tmp3526;
    panda$core$Int64 $tmp3530;
    panda$core$Int64 $tmp3534;
    panda$core$Int64 $tmp3538;
    panda$core$Int64 $tmp3542;
    panda$core$Int64 $tmp3546;
    panda$core$Int64 $tmp3550;
    panda$core$Int64 $tmp3554;
    panda$core$Int64 $tmp3558;
    org$pandalanguage$pandac$parser$Token op3564;
    org$pandalanguage$pandac$ASTNode* rvalue3566 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3567;
    org$pandalanguage$pandac$ASTNode* $tmp3568;
    org$pandalanguage$pandac$ASTNode* $tmp3570;
    org$pandalanguage$pandac$ASTNode* $tmp3574;
    org$pandalanguage$pandac$ASTNode* $tmp3575;
    panda$core$Int64 $tmp3577;
    panda$core$Int64 $tmp3584;
    org$pandalanguage$pandac$parser$Token op3591;
    org$pandalanguage$pandac$ASTNode* rvalue3593 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3594;
    org$pandalanguage$pandac$ASTNode* $tmp3595;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$ASTNode* $tmp3601;
    org$pandalanguage$pandac$ASTNode* $tmp3602;
    panda$core$Int64 $tmp3604;
    org$pandalanguage$pandac$ASTNode* $tmp3611;
    int $tmp3473;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3477 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3476 = $tmp3477;
        $tmp3475 = $tmp3476;
        start3474 = $tmp3475;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3476));
        if (((panda$core$Bit) { start3474 == NULL }).value) {
        {
            $tmp3479 = NULL;
            $returnValue3478 = $tmp3479;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3479));
            $tmp3473 = 0;
            goto $l3471;
            $l3480:;
            return $returnValue3478;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3483 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1628_93482 = $tmp3483.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3499, 73);
            panda$core$Bit $tmp3500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3499);
            bool $tmp3498 = $tmp3500.value;
            if ($tmp3498) goto $l3501;
            panda$core$Int64$init$builtin_int64(&$tmp3502, 74);
            panda$core$Bit $tmp3503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3502);
            $tmp3498 = $tmp3503.value;
            $l3501:;
            panda$core$Bit $tmp3504 = { $tmp3498 };
            bool $tmp3497 = $tmp3504.value;
            if ($tmp3497) goto $l3505;
            panda$core$Int64$init$builtin_int64(&$tmp3506, 75);
            panda$core$Bit $tmp3507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3506);
            $tmp3497 = $tmp3507.value;
            $l3505:;
            panda$core$Bit $tmp3508 = { $tmp3497 };
            bool $tmp3496 = $tmp3508.value;
            if ($tmp3496) goto $l3509;
            panda$core$Int64$init$builtin_int64(&$tmp3510, 76);
            panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3510);
            $tmp3496 = $tmp3511.value;
            $l3509:;
            panda$core$Bit $tmp3512 = { $tmp3496 };
            bool $tmp3495 = $tmp3512.value;
            if ($tmp3495) goto $l3513;
            panda$core$Int64$init$builtin_int64(&$tmp3514, 77);
            panda$core$Bit $tmp3515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3514);
            $tmp3495 = $tmp3515.value;
            $l3513:;
            panda$core$Bit $tmp3516 = { $tmp3495 };
            bool $tmp3494 = $tmp3516.value;
            if ($tmp3494) goto $l3517;
            panda$core$Int64$init$builtin_int64(&$tmp3518, 78);
            panda$core$Bit $tmp3519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3518);
            $tmp3494 = $tmp3519.value;
            $l3517:;
            panda$core$Bit $tmp3520 = { $tmp3494 };
            bool $tmp3493 = $tmp3520.value;
            if ($tmp3493) goto $l3521;
            panda$core$Int64$init$builtin_int64(&$tmp3522, 79);
            panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3522);
            $tmp3493 = $tmp3523.value;
            $l3521:;
            panda$core$Bit $tmp3524 = { $tmp3493 };
            bool $tmp3492 = $tmp3524.value;
            if ($tmp3492) goto $l3525;
            panda$core$Int64$init$builtin_int64(&$tmp3526, 80);
            panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3526);
            $tmp3492 = $tmp3527.value;
            $l3525:;
            panda$core$Bit $tmp3528 = { $tmp3492 };
            bool $tmp3491 = $tmp3528.value;
            if ($tmp3491) goto $l3529;
            panda$core$Int64$init$builtin_int64(&$tmp3530, 81);
            panda$core$Bit $tmp3531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3530);
            $tmp3491 = $tmp3531.value;
            $l3529:;
            panda$core$Bit $tmp3532 = { $tmp3491 };
            bool $tmp3490 = $tmp3532.value;
            if ($tmp3490) goto $l3533;
            panda$core$Int64$init$builtin_int64(&$tmp3534, 82);
            panda$core$Bit $tmp3535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3534);
            $tmp3490 = $tmp3535.value;
            $l3533:;
            panda$core$Bit $tmp3536 = { $tmp3490 };
            bool $tmp3489 = $tmp3536.value;
            if ($tmp3489) goto $l3537;
            panda$core$Int64$init$builtin_int64(&$tmp3538, 83);
            panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3538);
            $tmp3489 = $tmp3539.value;
            $l3537:;
            panda$core$Bit $tmp3540 = { $tmp3489 };
            bool $tmp3488 = $tmp3540.value;
            if ($tmp3488) goto $l3541;
            panda$core$Int64$init$builtin_int64(&$tmp3542, 84);
            panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3542);
            $tmp3488 = $tmp3543.value;
            $l3541:;
            panda$core$Bit $tmp3544 = { $tmp3488 };
            bool $tmp3487 = $tmp3544.value;
            if ($tmp3487) goto $l3545;
            panda$core$Int64$init$builtin_int64(&$tmp3546, 85);
            panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3546);
            $tmp3487 = $tmp3547.value;
            $l3545:;
            panda$core$Bit $tmp3548 = { $tmp3487 };
            bool $tmp3486 = $tmp3548.value;
            if ($tmp3486) goto $l3549;
            panda$core$Int64$init$builtin_int64(&$tmp3550, 86);
            panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3550);
            $tmp3486 = $tmp3551.value;
            $l3549:;
            panda$core$Bit $tmp3552 = { $tmp3486 };
            bool $tmp3485 = $tmp3552.value;
            if ($tmp3485) goto $l3553;
            panda$core$Int64$init$builtin_int64(&$tmp3554, 87);
            panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3554);
            $tmp3485 = $tmp3555.value;
            $l3553:;
            panda$core$Bit $tmp3556 = { $tmp3485 };
            bool $tmp3484 = $tmp3556.value;
            if ($tmp3484) goto $l3557;
            panda$core$Int64$init$builtin_int64(&$tmp3558, 88);
            panda$core$Bit $tmp3559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3558);
            $tmp3484 = $tmp3559.value;
            $l3557:;
            panda$core$Bit $tmp3560 = { $tmp3484 };
            if ($tmp3560.value) {
            {
                int $tmp3563;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3565 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3564 = $tmp3565;
                    org$pandalanguage$pandac$ASTNode* $tmp3569 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3568 = $tmp3569;
                    $tmp3567 = $tmp3568;
                    rvalue3566 = $tmp3567;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3567));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3568));
                    if (((panda$core$Bit) { rvalue3566 == NULL }).value) {
                    {
                        $tmp3570 = NULL;
                        $returnValue3478 = $tmp3570;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3570));
                        $tmp3563 = 0;
                        goto $l3561;
                        $l3571:;
                        $tmp3473 = 1;
                        goto $l3471;
                        $l3572:;
                        return $returnValue3478;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3576 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3577, 4);
                    org$pandalanguage$pandac$Position $tmp3579 = (($fn3578) start3474->$class->vtable[2])(start3474);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3576, $tmp3577, $tmp3579, start3474, op3564.kind, rvalue3566);
                    $tmp3575 = $tmp3576;
                    $tmp3574 = $tmp3575;
                    $returnValue3478 = $tmp3574;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3574));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3575));
                    $tmp3563 = 1;
                    goto $l3561;
                    $l3580:;
                    $tmp3473 = 2;
                    goto $l3471;
                    $l3581:;
                    return $returnValue3478;
                }
                $l3561:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3566));
                rvalue3566 = NULL;
                switch ($tmp3563) {
                    case 0: goto $l3571;
                    case 1: goto $l3580;
                }
                $l3583:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3584, 58);
            panda$core$Bit $tmp3585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1628_93482.$rawValue, $tmp3584);
            if ($tmp3585.value) {
            {
                int $tmp3588;
                {
                    org$pandalanguage$pandac$parser$Token $tmp3589 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3589, &$s3590);
                    org$pandalanguage$pandac$parser$Token $tmp3592 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op3591 = $tmp3592;
                    org$pandalanguage$pandac$ASTNode* $tmp3596 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3595 = $tmp3596;
                    $tmp3594 = $tmp3595;
                    rvalue3593 = $tmp3594;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3594));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3595));
                    if (((panda$core$Bit) { rvalue3593 == NULL }).value) {
                    {
                        $tmp3597 = NULL;
                        $returnValue3478 = $tmp3597;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
                        $tmp3588 = 0;
                        goto $l3586;
                        $l3598:;
                        $tmp3473 = 3;
                        goto $l3471;
                        $l3599:;
                        return $returnValue3478;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3603 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp3604, 4);
                    org$pandalanguage$pandac$Position $tmp3606 = (($fn3605) start3474->$class->vtable[2])(start3474);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3603, $tmp3604, $tmp3606, start3474, op3591.kind, rvalue3593);
                    $tmp3602 = $tmp3603;
                    $tmp3601 = $tmp3602;
                    $returnValue3478 = $tmp3601;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3601));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3602));
                    $tmp3588 = 1;
                    goto $l3586;
                    $l3607:;
                    $tmp3473 = 4;
                    goto $l3471;
                    $l3608:;
                    return $returnValue3478;
                }
                $l3586:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue3593));
                rvalue3593 = NULL;
                switch ($tmp3588) {
                    case 1: goto $l3607;
                    case 0: goto $l3598;
                }
                $l3610:;
            }
            }
            else {
            {
                $tmp3611 = start3474;
                $returnValue3478 = $tmp3611;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3611));
                $tmp3473 = 5;
                goto $l3471;
                $l3612:;
                return $returnValue3478;
            }
            }
            }
        }
    }
    $tmp3473 = -1;
    goto $l3471;
    $l3471:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start3474));
    start3474 = NULL;
    switch ($tmp3473) {
        case 3: goto $l3599;
        case 1: goto $l3572;
        case 2: goto $l3581;
        case -1: goto $l3614;
        case 5: goto $l3612;
        case 4: goto $l3608;
        case 0: goto $l3480;
    }
    $l3614:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3619;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $returnValue3622;
    org$pandalanguage$pandac$ASTNode* $tmp3623;
    org$pandalanguage$pandac$ASTNode* value3626 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3627;
    panda$core$Int64 $tmp3628;
    org$pandalanguage$pandac$ASTNode* $tmp3630;
    org$pandalanguage$pandac$ASTNode* $tmp3631;
    org$pandalanguage$pandac$ASTNode* $tmp3632;
    org$pandalanguage$pandac$ASTNode* $tmp3634;
    panda$core$Int64 $tmp3638;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$ASTNode* $tmp3643;
    org$pandalanguage$pandac$ASTNode* $tmp3644;
    org$pandalanguage$pandac$ASTNode* $tmp3646;
    org$pandalanguage$pandac$ASTNode* $tmp3649;
    org$pandalanguage$pandac$ASTNode* $tmp3650;
    org$pandalanguage$pandac$ASTNode* $tmp3651;
    org$pandalanguage$pandac$ASTNode* $tmp3652;
    panda$core$Int64 $tmp3654;
    int $tmp3617;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3621 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3620 = $tmp3621;
        $tmp3619 = $tmp3620;
        t3618 = $tmp3619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3620));
        if (((panda$core$Bit) { t3618 == NULL }).value) {
        {
            $tmp3623 = NULL;
            $returnValue3622 = $tmp3623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3623));
            $tmp3617 = 0;
            goto $l3615;
            $l3624:;
            return $returnValue3622;
        }
        }
        memset(&value3626, 0, sizeof(value3626));
        panda$core$Int64$init$builtin_int64(&$tmp3628, 73);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3627, $tmp3628);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3627);
        if (((panda$core$Bit) { $tmp3629.nonnull }).value) {
        {
            {
                $tmp3630 = value3626;
                org$pandalanguage$pandac$ASTNode* $tmp3633 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3632 = $tmp3633;
                $tmp3631 = $tmp3632;
                value3626 = $tmp3631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3632));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
            }
            if (((panda$core$Bit) { value3626 == NULL }).value) {
            {
                $tmp3634 = NULL;
                $returnValue3622 = $tmp3634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3634));
                $tmp3617 = 1;
                goto $l3615;
                $l3635:;
                return $returnValue3622;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3637 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp3638, 58);
        panda$core$Bit $tmp3639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3637.kind.$rawValue, $tmp3638);
        if ($tmp3639.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3640 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3640, &$s3641);
            {
                $tmp3642 = value3626;
                org$pandalanguage$pandac$ASTNode* $tmp3645 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3644 = $tmp3645;
                $tmp3643 = $tmp3644;
                value3626 = $tmp3643;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3643));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3642));
            }
            if (((panda$core$Bit) { value3626 == NULL }).value) {
            {
                $tmp3646 = NULL;
                $returnValue3622 = $tmp3646;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3646));
                $tmp3617 = 2;
                goto $l3615;
                $l3647:;
                return $returnValue3622;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3649 = value3626;
                $tmp3650 = NULL;
                value3626 = $tmp3650;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3650));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3649));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3653 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3654, 13);
        org$pandalanguage$pandac$Position $tmp3656 = (($fn3655) t3618->$class->vtable[2])(t3618);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3653, $tmp3654, $tmp3656, t3618, value3626);
        $tmp3652 = $tmp3653;
        $tmp3651 = $tmp3652;
        $returnValue3622 = $tmp3651;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3652));
        $tmp3617 = 3;
        goto $l3615;
        $l3657:;
        return $returnValue3622;
    }
    $l3615:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3626));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3618));
    t3618 = NULL;
    switch ($tmp3617) {
        case 2: goto $l3647;
        case 3: goto $l3657;
        case 1: goto $l3635;
        case 0: goto $l3624;
    }
    $l3659:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3663;
    org$pandalanguage$pandac$Variable$Kind kind3665;
    org$pandalanguage$pandac$parser$Token$Kind $match$1687_93666;
    panda$core$Int64 $tmp3667;
    org$pandalanguage$pandac$Variable$Kind $tmp3669;
    panda$core$Int64 $tmp3670;
    panda$core$Int64 $tmp3671;
    org$pandalanguage$pandac$Variable$Kind $tmp3673;
    panda$core$Int64 $tmp3674;
    panda$core$Int64 $tmp3675;
    org$pandalanguage$pandac$Variable$Kind $tmp3677;
    panda$core$Int64 $tmp3678;
    panda$core$Int64 $tmp3679;
    org$pandalanguage$pandac$Variable$Kind $tmp3681;
    panda$core$Int64 $tmp3682;
    panda$collections$Array* declarations3684 = NULL;
    panda$collections$Array* $tmp3685;
    panda$collections$Array* $tmp3686;
    org$pandalanguage$pandac$ASTNode* decl3688 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3689;
    org$pandalanguage$pandac$ASTNode* $tmp3690;
    org$pandalanguage$pandac$ASTNode* $returnValue3692;
    org$pandalanguage$pandac$ASTNode* $tmp3693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3699;
    panda$core$Int64 $tmp3700;
    org$pandalanguage$pandac$ASTNode* decl3705 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3706;
    org$pandalanguage$pandac$ASTNode* $tmp3707;
    org$pandalanguage$pandac$ASTNode* $tmp3709;
    org$pandalanguage$pandac$ASTNode* $tmp3714;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    panda$core$Int64 $tmp3717;
    panda$collections$ImmutableArray* $tmp3718;
    int $tmp3662;
    {
        org$pandalanguage$pandac$parser$Token $tmp3664 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3663 = $tmp3664;
        memset(&kind3665, 0, sizeof(kind3665));
        {
            $match$1687_93666 = start3663.kind;
            panda$core$Int64$init$builtin_int64(&$tmp3667, 23);
            panda$core$Bit $tmp3668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1687_93666.$rawValue, $tmp3667);
            if ($tmp3668.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3670, 0);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3669, $tmp3670);
                kind3665 = $tmp3669;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3671, 24);
            panda$core$Bit $tmp3672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1687_93666.$rawValue, $tmp3671);
            if ($tmp3672.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3674, 1);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3673, $tmp3674);
                kind3665 = $tmp3673;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3675, 25);
            panda$core$Bit $tmp3676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1687_93666.$rawValue, $tmp3675);
            if ($tmp3676.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3678, 3);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3677, $tmp3678);
                kind3665 = $tmp3677;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3679, 26);
            panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1687_93666.$rawValue, $tmp3679);
            if ($tmp3680.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3682, 2);
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3681, $tmp3682);
                kind3665 = $tmp3681;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3663, &$s3683);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3687 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3687);
        $tmp3686 = $tmp3687;
        $tmp3685 = $tmp3686;
        declarations3684 = $tmp3685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3686));
        org$pandalanguage$pandac$ASTNode* $tmp3691 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3690 = $tmp3691;
        $tmp3689 = $tmp3690;
        decl3688 = $tmp3689;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3689));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3690));
        if (((panda$core$Bit) { decl3688 == NULL }).value) {
        {
            $tmp3693 = NULL;
            $returnValue3692 = $tmp3693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3693));
            $tmp3662 = 0;
            goto $l3660;
            $l3694:;
            return $returnValue3692;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3684, ((panda$core$Object*) decl3688));
        $l3696:;
        panda$core$Int64$init$builtin_int64(&$tmp3700, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3699, $tmp3700);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3701 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3699);
        bool $tmp3698 = ((panda$core$Bit) { $tmp3701.nonnull }).value;
        if (!$tmp3698) goto $l3697;
        {
            int $tmp3704;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3708 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3707 = $tmp3708;
                $tmp3706 = $tmp3707;
                decl3705 = $tmp3706;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3707));
                if (((panda$core$Bit) { decl3705 == NULL }).value) {
                {
                    $tmp3709 = NULL;
                    $returnValue3692 = $tmp3709;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3709));
                    $tmp3704 = 0;
                    goto $l3702;
                    $l3710:;
                    $tmp3662 = 1;
                    goto $l3660;
                    $l3711:;
                    return $returnValue3692;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3684, ((panda$core$Object*) decl3705));
            }
            $tmp3704 = -1;
            goto $l3702;
            $l3702:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3705));
            decl3705 = NULL;
            switch ($tmp3704) {
                case -1: goto $l3713;
                case 0: goto $l3710;
            }
            $l3713:;
        }
        goto $l3696;
        $l3697:;
        org$pandalanguage$pandac$ASTNode* $tmp3716 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3717, 47);
        panda$collections$ImmutableArray* $tmp3719 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3684);
        $tmp3718 = $tmp3719;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3716, $tmp3717, start3663.position, kind3665, $tmp3718);
        $tmp3715 = $tmp3716;
        $tmp3714 = $tmp3715;
        $returnValue3692 = $tmp3714;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3714));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3718));
        $tmp3662 = 2;
        goto $l3660;
        $l3720:;
        return $returnValue3692;
    }
    $l3660:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3688));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3684));
    declarations3684 = NULL;
    decl3688 = NULL;
    switch ($tmp3662) {
        case 1: goto $l3711;
        case 2: goto $l3720;
        case 0: goto $l3694;
    }
    $l3722:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3726;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3727;
    panda$core$Int64 $tmp3728;
    org$pandalanguage$pandac$ASTNode* $returnValue3731;
    org$pandalanguage$pandac$ASTNode* $tmp3732;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3735;
    panda$core$Int64 $tmp3736;
    org$pandalanguage$pandac$ASTNode* $tmp3739;
    panda$core$Object* $tmp3742;
    panda$core$Bit $tmp3743;
    org$pandalanguage$pandac$ASTNode* target3745 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3746;
    org$pandalanguage$pandac$ASTNode* $tmp3747;
    panda$core$Int64 $tmp3749;
    panda$core$String* $tmp3750;
    panda$collections$Array* args3752 = NULL;
    panda$collections$Array* $tmp3753;
    panda$collections$Array* $tmp3754;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3756;
    panda$core$Int64 $tmp3757;
    org$pandalanguage$pandac$ASTNode* expr3762 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3763;
    org$pandalanguage$pandac$ASTNode* $tmp3764;
    panda$core$Object* $tmp3766;
    org$pandalanguage$pandac$ASTNode* $tmp3768;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3775;
    panda$core$Int64 $tmp3776;
    org$pandalanguage$pandac$ASTNode* $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    panda$core$Object* $tmp3782;
    org$pandalanguage$pandac$ASTNode* $tmp3784;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3788;
    panda$core$Int64 $tmp3789;
    panda$core$Object* $tmp3792;
    org$pandalanguage$pandac$ASTNode* $tmp3794;
    panda$core$Object* $tmp3799;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    org$pandalanguage$pandac$ASTNode* $tmp3802;
    panda$core$Int64 $tmp3804;
    panda$collections$ImmutableArray* $tmp3805;
    int $tmp3725;
    {
        panda$core$Int64$init$builtin_int64(&$tmp3728, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3727, $tmp3728);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3730 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3727, &$s3729);
        start3726 = $tmp3730;
        if (((panda$core$Bit) { !start3726.nonnull }).value) {
        {
            $tmp3732 = NULL;
            $returnValue3731 = $tmp3732;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3732));
            $tmp3725 = 0;
            goto $l3723;
            $l3733:;
            return $returnValue3731;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3736, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3735, $tmp3736);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3738 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3735, &$s3737);
        if (((panda$core$Bit) { !$tmp3738.nonnull }).value) {
        {
            $tmp3739 = NULL;
            $returnValue3731 = $tmp3739;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3739));
            $tmp3725 = 1;
            goto $l3723;
            $l3740:;
            return $returnValue3731;
        }
        }
        panda$core$Bit$init$builtin_bit(&$tmp3743, true);
        panda$core$Bit$wrapper* $tmp3744;
        $tmp3744 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3744->value = $tmp3743;
        $tmp3742 = ((panda$core$Object*) $tmp3744);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3742);
        panda$core$Panda$unref$panda$core$Object($tmp3742);
        org$pandalanguage$pandac$ASTNode* $tmp3748 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3749, 20);
        panda$core$String* $tmp3751 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3726.value));
        $tmp3750 = $tmp3751;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3748, $tmp3749, ((org$pandalanguage$pandac$parser$Token) start3726.value).position, $tmp3750);
        $tmp3747 = $tmp3748;
        $tmp3746 = $tmp3747;
        target3745 = $tmp3746;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3750));
        panda$collections$Array* $tmp3755 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3755);
        $tmp3754 = $tmp3755;
        $tmp3753 = $tmp3754;
        args3752 = $tmp3753;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3753));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3754));
        panda$core$Int64$init$builtin_int64(&$tmp3757, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3756, $tmp3757);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3758 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3756);
        if (((panda$core$Bit) { !$tmp3758.nonnull }).value) {
        {
            int $tmp3761;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3765 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3764 = $tmp3765;
                $tmp3763 = $tmp3764;
                expr3762 = $tmp3763;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3764));
                if (((panda$core$Bit) { expr3762 == NULL }).value) {
                {
                    panda$core$Object* $tmp3767 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3766 = $tmp3767;
                    panda$core$Panda$unref$panda$core$Object($tmp3766);
                    $tmp3768 = NULL;
                    $returnValue3731 = $tmp3768;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3768));
                    $tmp3761 = 0;
                    goto $l3759;
                    $l3769:;
                    $tmp3725 = 2;
                    goto $l3723;
                    $l3770:;
                    return $returnValue3731;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3752, ((panda$core$Object*) expr3762));
                $l3772:;
                panda$core$Int64$init$builtin_int64(&$tmp3776, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3775, $tmp3776);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3777 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3775);
                bool $tmp3774 = ((panda$core$Bit) { $tmp3777.nonnull }).value;
                if (!$tmp3774) goto $l3773;
                {
                    {
                        $tmp3778 = expr3762;
                        org$pandalanguage$pandac$ASTNode* $tmp3781 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3780 = $tmp3781;
                        $tmp3779 = $tmp3780;
                        expr3762 = $tmp3779;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3779));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3780));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3778));
                    }
                    if (((panda$core$Bit) { expr3762 == NULL }).value) {
                    {
                        panda$core$Object* $tmp3783 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3782 = $tmp3783;
                        panda$core$Panda$unref$panda$core$Object($tmp3782);
                        $tmp3784 = NULL;
                        $returnValue3731 = $tmp3784;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3784));
                        $tmp3761 = 1;
                        goto $l3759;
                        $l3785:;
                        $tmp3725 = 3;
                        goto $l3723;
                        $l3786:;
                        return $returnValue3731;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3752, ((panda$core$Object*) expr3762));
                }
                goto $l3772;
                $l3773:;
                panda$core$Int64$init$builtin_int64(&$tmp3789, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3788, $tmp3789);
                org$pandalanguage$pandac$parser$Token$nullable $tmp3791 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3788, &$s3790);
                if (((panda$core$Bit) { !$tmp3791.nonnull }).value) {
                {
                    panda$core$Object* $tmp3793 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3792 = $tmp3793;
                    panda$core$Panda$unref$panda$core$Object($tmp3792);
                    $tmp3794 = NULL;
                    $returnValue3731 = $tmp3794;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3794));
                    $tmp3761 = 2;
                    goto $l3759;
                    $l3795:;
                    $tmp3725 = 4;
                    goto $l3723;
                    $l3796:;
                    return $returnValue3731;
                }
                }
            }
            $tmp3761 = -1;
            goto $l3759;
            $l3759:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3762));
            expr3762 = NULL;
            switch ($tmp3761) {
                case 0: goto $l3769;
                case -1: goto $l3798;
                case 1: goto $l3785;
                case 2: goto $l3795;
            }
            $l3798:;
        }
        }
        panda$core$Object* $tmp3800 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3799 = $tmp3800;
        panda$core$Panda$unref$panda$core$Object($tmp3799);
        org$pandalanguage$pandac$ASTNode* $tmp3803 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3804, 8);
        panda$collections$ImmutableArray* $tmp3806 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3752);
        $tmp3805 = $tmp3806;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3803, $tmp3804, ((org$pandalanguage$pandac$parser$Token) start3726.value).position, target3745, $tmp3805);
        $tmp3802 = $tmp3803;
        $tmp3801 = $tmp3802;
        $returnValue3731 = $tmp3801;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3801));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3805));
        $tmp3725 = 5;
        goto $l3723;
        $l3807:;
        return $returnValue3731;
    }
    $l3723:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3752));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3745));
    target3745 = NULL;
    args3752 = NULL;
    switch ($tmp3725) {
        case 5: goto $l3807;
        case 3: goto $l3786;
        case 4: goto $l3796;
        case 1: goto $l3740;
        case 2: goto $l3770;
        case 0: goto $l3733;
    }
    $l3809:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3810;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3811;
    panda$core$Int64 $tmp3812;
    org$pandalanguage$pandac$ASTNode* $returnValue3815;
    org$pandalanguage$pandac$ASTNode* $tmp3816;
    org$pandalanguage$pandac$parser$Token$nullable label3818;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3819;
    panda$core$Int64 $tmp3820;
    org$pandalanguage$pandac$ASTNode* $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3823;
    panda$core$Int64 $tmp3825;
    panda$core$String* $tmp3826;
    org$pandalanguage$pandac$ASTNode* $tmp3829;
    org$pandalanguage$pandac$ASTNode* $tmp3830;
    panda$core$Int64 $tmp3832;
    panda$core$Int64$init$builtin_int64(&$tmp3812, 28);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3811, $tmp3812);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3814 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3811, &$s3813);
    start3810 = $tmp3814;
    if (((panda$core$Bit) { !start3810.nonnull }).value) {
    {
        $tmp3816 = NULL;
        $returnValue3815 = $tmp3816;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3816));
        return $returnValue3815;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3820, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3819, $tmp3820);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3821 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3819);
    label3818 = $tmp3821;
    if (((panda$core$Bit) { label3818.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3824 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3825, 7);
        panda$core$String* $tmp3827 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3818.value));
        $tmp3826 = $tmp3827;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3824, $tmp3825, ((org$pandalanguage$pandac$parser$Token) start3810.value).position, $tmp3826);
        $tmp3823 = $tmp3824;
        $tmp3822 = $tmp3823;
        $returnValue3815 = $tmp3822;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3823));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3826));
        return $returnValue3815;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3831 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3832, 7);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3831, $tmp3832, ((org$pandalanguage$pandac$parser$Token) start3810.value).position, NULL);
    $tmp3830 = $tmp3831;
    $tmp3829 = $tmp3830;
    $returnValue3815 = $tmp3829;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3829));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3830));
    return $returnValue3815;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3834;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3835;
    panda$core$Int64 $tmp3836;
    org$pandalanguage$pandac$ASTNode* $returnValue3839;
    org$pandalanguage$pandac$ASTNode* $tmp3840;
    org$pandalanguage$pandac$parser$Token$nullable label3842;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3843;
    panda$core$Int64 $tmp3844;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    org$pandalanguage$pandac$ASTNode* $tmp3847;
    panda$core$Int64 $tmp3849;
    panda$core$String* $tmp3850;
    org$pandalanguage$pandac$ASTNode* $tmp3853;
    org$pandalanguage$pandac$ASTNode* $tmp3854;
    panda$core$Int64 $tmp3856;
    panda$core$Int64$init$builtin_int64(&$tmp3836, 29);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3835, $tmp3836);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3838 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3835, &$s3837);
    start3834 = $tmp3838;
    if (((panda$core$Bit) { !start3834.nonnull }).value) {
    {
        $tmp3840 = NULL;
        $returnValue3839 = $tmp3840;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3840));
        return $returnValue3839;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp3844, 48);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3843, $tmp3844);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3845 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3843);
    label3842 = $tmp3845;
    if (((panda$core$Bit) { label3842.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3848 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp3849, 12);
        panda$core$String* $tmp3851 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3842.value));
        $tmp3850 = $tmp3851;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3848, $tmp3849, ((org$pandalanguage$pandac$parser$Token) start3834.value).position, $tmp3850);
        $tmp3847 = $tmp3848;
        $tmp3846 = $tmp3847;
        $returnValue3839 = $tmp3846;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3847));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3850));
        return $returnValue3839;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp3856, 12);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3855, $tmp3856, ((org$pandalanguage$pandac$parser$Token) start3834.value).position, NULL);
    $tmp3854 = $tmp3855;
    $tmp3853 = $tmp3854;
    $returnValue3839 = $tmp3853;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3853));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3854));
    return $returnValue3839;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3858;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3859;
    panda$core$Int64 $tmp3860;
    org$pandalanguage$pandac$ASTNode* $returnValue3863;
    org$pandalanguage$pandac$ASTNode* $tmp3864;
    org$pandalanguage$pandac$parser$Token$Kind $match$1791_93866;
    panda$core$Int64 $tmp3870;
    panda$core$Int64 $tmp3873;
    panda$core$Int64 $tmp3877;
    org$pandalanguage$pandac$ASTNode* $tmp3880;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    panda$core$Int64 $tmp3883;
    panda$collections$Array* children3888 = NULL;
    panda$collections$Array* $tmp3889;
    panda$collections$Array* $tmp3890;
    org$pandalanguage$pandac$ASTNode* expr3892 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3893;
    org$pandalanguage$pandac$ASTNode* $tmp3894;
    org$pandalanguage$pandac$ASTNode* $tmp3896;
    org$pandalanguage$pandac$ASTNode* $tmp3899;
    org$pandalanguage$pandac$ASTNode* $tmp3900;
    panda$core$Int64 $tmp3902;
    panda$core$Int64$init$builtin_int64(&$tmp3860, 27);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3859, $tmp3860);
    org$pandalanguage$pandac$parser$Token$nullable $tmp3862 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3859, &$s3861);
    start3858 = $tmp3862;
    if (((panda$core$Bit) { !start3858.nonnull }).value) {
    {
        $tmp3864 = NULL;
        $returnValue3863 = $tmp3864;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3864));
        return $returnValue3863;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3867 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1791_93866 = $tmp3867.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3870, 100);
        panda$core$Bit $tmp3871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1791_93866.$rawValue, $tmp3870);
        bool $tmp3869 = $tmp3871.value;
        if ($tmp3869) goto $l3872;
        panda$core$Int64$init$builtin_int64(&$tmp3873, 39);
        panda$core$Bit $tmp3874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1791_93866.$rawValue, $tmp3873);
        $tmp3869 = $tmp3874.value;
        $l3872:;
        panda$core$Bit $tmp3875 = { $tmp3869 };
        bool $tmp3868 = $tmp3875.value;
        if ($tmp3868) goto $l3876;
        panda$core$Int64$init$builtin_int64(&$tmp3877, 40);
        panda$core$Bit $tmp3878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1791_93866.$rawValue, $tmp3877);
        $tmp3868 = $tmp3878.value;
        $l3876:;
        panda$core$Bit $tmp3879 = { $tmp3868 };
        if ($tmp3879.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3882 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp3883, 36);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3882, $tmp3883, ((org$pandalanguage$pandac$parser$Token) start3858.value).position, NULL);
            $tmp3881 = $tmp3882;
            $tmp3880 = $tmp3881;
            $returnValue3863 = $tmp3880;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3880));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3881));
            return $returnValue3863;
        }
        }
        else {
        {
            int $tmp3887;
            {
                panda$collections$Array* $tmp3891 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3891);
                $tmp3890 = $tmp3891;
                $tmp3889 = $tmp3890;
                children3888 = $tmp3889;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3890));
                org$pandalanguage$pandac$ASTNode* $tmp3895 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3894 = $tmp3895;
                $tmp3893 = $tmp3894;
                expr3892 = $tmp3893;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3893));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3894));
                if (((panda$core$Bit) { expr3892 == NULL }).value) {
                {
                    $tmp3896 = NULL;
                    $returnValue3863 = $tmp3896;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3896));
                    $tmp3887 = 0;
                    goto $l3885;
                    $l3897:;
                    return $returnValue3863;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3888, ((panda$core$Object*) expr3892));
                org$pandalanguage$pandac$ASTNode* $tmp3901 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp3902, 36);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3901, $tmp3902, ((org$pandalanguage$pandac$parser$Token) start3858.value).position, expr3892);
                $tmp3900 = $tmp3901;
                $tmp3899 = $tmp3900;
                $returnValue3863 = $tmp3899;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3899));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3900));
                $tmp3887 = 1;
                goto $l3885;
                $l3903:;
                return $returnValue3863;
            }
            $l3885:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3888));
            children3888 = NULL;
            expr3892 = NULL;
            switch ($tmp3887) {
                case 1: goto $l3903;
                case 0: goto $l3897;
            }
            $l3905:;
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1809_93906;
    panda$core$Int64 $tmp3908;
    org$pandalanguage$pandac$ASTNode* $returnValue3910;
    org$pandalanguage$pandac$ASTNode* $tmp3911;
    org$pandalanguage$pandac$ASTNode* $tmp3912;
    panda$core$Int64 $tmp3915;
    org$pandalanguage$pandac$ASTNode* $tmp3917;
    org$pandalanguage$pandac$ASTNode* $tmp3918;
    panda$core$Int64 $tmp3921;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    panda$core$Bit $tmp3927;
    {
        org$pandalanguage$pandac$parser$Token $tmp3907 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1809_93906 = $tmp3907.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3908, 28);
        panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1809_93906.$rawValue, $tmp3908);
        if ($tmp3909.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3913 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3912 = $tmp3913;
            $tmp3911 = $tmp3912;
            $returnValue3910 = $tmp3911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3912));
            return $returnValue3910;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3915, 29);
        panda$core$Bit $tmp3916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1809_93906.$rawValue, $tmp3915);
        if ($tmp3916.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3919 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3918 = $tmp3919;
            $tmp3917 = $tmp3918;
            $returnValue3910 = $tmp3917;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3918));
            return $returnValue3910;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3921, 27);
        panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1809_93906.$rawValue, $tmp3921);
        if ($tmp3922.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3925 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3924 = $tmp3925;
            $tmp3923 = $tmp3924;
            $returnValue3910 = $tmp3923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3923));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3924));
            return $returnValue3910;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3927, false);
            if ($tmp3927.value) goto $l3928; else goto $l3929;
            $l3929:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3930, (panda$core$Int64) { 1813 });
            abort();
            $l3928:;
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1821_93931;
    panda$core$Int64 $tmp3933;
    org$pandalanguage$pandac$ASTNode* $returnValue3935;
    org$pandalanguage$pandac$ASTNode* $tmp3936;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    panda$core$Int64 $tmp3940;
    org$pandalanguage$pandac$ASTNode* $tmp3942;
    org$pandalanguage$pandac$ASTNode* $tmp3943;
    panda$core$Int64 $tmp3946;
    org$pandalanguage$pandac$ASTNode* $tmp3948;
    org$pandalanguage$pandac$ASTNode* $tmp3949;
    panda$core$Int64 $tmp3952;
    org$pandalanguage$pandac$ASTNode* $tmp3954;
    org$pandalanguage$pandac$ASTNode* $tmp3955;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3958;
    panda$core$Int64 $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3961;
    {
        org$pandalanguage$pandac$parser$Token $tmp3932 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1821_93931 = $tmp3932.kind;
        panda$core$Int64$init$builtin_int64(&$tmp3933, 30);
        panda$core$Bit $tmp3934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93931.$rawValue, $tmp3933);
        if ($tmp3934.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3938 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3937 = $tmp3938;
            $tmp3936 = $tmp3937;
            $returnValue3935 = $tmp3936;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
            return $returnValue3935;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3940, 32);
        panda$core$Bit $tmp3941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93931.$rawValue, $tmp3940);
        if ($tmp3941.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3944 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3943 = $tmp3944;
            $tmp3942 = $tmp3943;
            $returnValue3935 = $tmp3942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3943));
            return $returnValue3935;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3946, 35);
        panda$core$Bit $tmp3947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93931.$rawValue, $tmp3946);
        if ($tmp3947.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3950 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3949 = $tmp3950;
            $tmp3948 = $tmp3949;
            $returnValue3935 = $tmp3948;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3949));
            return $returnValue3935;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3952, 31);
        panda$core$Bit $tmp3953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1821_93931.$rawValue, $tmp3952);
        if ($tmp3953.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3956 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3955 = $tmp3956;
            $tmp3954 = $tmp3955;
            $returnValue3935 = $tmp3954;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3955));
            return $returnValue3935;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3959, 30);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3958, $tmp3959);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3958, &$s3960);
            $tmp3961 = NULL;
            $returnValue3935 = $tmp3961;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3961));
            return $returnValue3935;
        }
        }
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3966;
    org$pandalanguage$pandac$parser$Token$nullable start3967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3968;
    panda$core$Int64 $tmp3969;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3971;
    panda$core$Int64 $tmp3972;
    org$pandalanguage$pandac$ASTNode* $returnValue3975;
    org$pandalanguage$pandac$ASTNode* $tmp3976;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3979;
    panda$core$Int64 $tmp3980;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3981;
    panda$core$Int64 $tmp3982;
    org$pandalanguage$pandac$parser$Token$nullable name3983;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3984;
    panda$core$Int64 $tmp3985;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    panda$collections$ImmutableArray* params3991 = NULL;
    panda$collections$ImmutableArray* $tmp3992;
    panda$collections$ImmutableArray* $tmp3993;
    org$pandalanguage$pandac$ASTNode* $tmp3995;
    org$pandalanguage$pandac$ASTNode* returnType3998 = NULL;
    panda$core$Int64 $tmp4000;
    org$pandalanguage$pandac$ASTNode* $tmp4002;
    org$pandalanguage$pandac$ASTNode* $tmp4003;
    org$pandalanguage$pandac$ASTNode* $tmp4004;
    org$pandalanguage$pandac$ASTNode* $tmp4006;
    org$pandalanguage$pandac$ASTNode* $tmp4009;
    org$pandalanguage$pandac$ASTNode* $tmp4010;
    panda$collections$ImmutableArray* body4011 = NULL;
    panda$collections$ImmutableArray* $tmp4012;
    panda$collections$ImmutableArray* $tmp4013;
    org$pandalanguage$pandac$ASTNode* $tmp4015;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    org$pandalanguage$pandac$ASTNode* $tmp4019;
    panda$core$Int64 $tmp4021;
    panda$collections$ImmutableArray* $tmp4022;
    panda$core$String* $tmp4024;
    int $tmp3965;
    {
        memset(&kind3966, 0, sizeof(kind3966));
        panda$core$Int64$init$builtin_int64(&$tmp3969, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3968, $tmp3969);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3970 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3968);
        start3967 = $tmp3970;
        if (((panda$core$Bit) { !start3967.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3972, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3971, $tmp3972);
            org$pandalanguage$pandac$parser$Token$nullable $tmp3974 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3971, &$s3973);
            start3967 = $tmp3974;
            if (((panda$core$Bit) { !start3967.nonnull }).value) {
            {
                $tmp3976 = NULL;
                $returnValue3975 = $tmp3976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3976));
                $tmp3965 = 0;
                goto $l3963;
                $l3977:;
                return $returnValue3975;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp3980, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3979, $tmp3980);
            kind3966 = $tmp3979;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp3982, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3981, $tmp3982);
            kind3966 = $tmp3981;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp3985, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3984, $tmp3985);
        org$pandalanguage$pandac$parser$Token$nullable $tmp3987 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3984, &$s3986);
        name3983 = $tmp3987;
        if (((panda$core$Bit) { !name3983.nonnull }).value) {
        {
            $tmp3988 = NULL;
            $returnValue3975 = $tmp3988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3988));
            $tmp3965 = 1;
            goto $l3963;
            $l3989:;
            return $returnValue3975;
        }
        }
        panda$collections$ImmutableArray* $tmp3994 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3993 = $tmp3994;
        $tmp3992 = $tmp3993;
        params3991 = $tmp3992;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3992));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3993));
        if (((panda$core$Bit) { params3991 == NULL }).value) {
        {
            $tmp3995 = NULL;
            $returnValue3975 = $tmp3995;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3995));
            $tmp3965 = 2;
            goto $l3963;
            $l3996:;
            return $returnValue3975;
        }
        }
        memset(&returnType3998, 0, sizeof(returnType3998));
        org$pandalanguage$pandac$parser$Token $tmp3999 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4000, 95);
        panda$core$Bit $tmp4001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3999.kind.$rawValue, $tmp4000);
        if ($tmp4001.value) {
        {
            {
                $tmp4002 = returnType3998;
                org$pandalanguage$pandac$ASTNode* $tmp4005 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4004 = $tmp4005;
                $tmp4003 = $tmp4004;
                returnType3998 = $tmp4003;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4002));
            }
            if (((panda$core$Bit) { returnType3998 == NULL }).value) {
            {
                $tmp4006 = NULL;
                $returnValue3975 = $tmp4006;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4006));
                $tmp3965 = 3;
                goto $l3963;
                $l4007:;
                return $returnValue3975;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4009 = returnType3998;
                $tmp4010 = NULL;
                returnType3998 = $tmp4010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4009));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4014 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4013 = $tmp4014;
        $tmp4012 = $tmp4013;
        body4011 = $tmp4012;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4013));
        if (((panda$core$Bit) { body4011 == NULL }).value) {
        {
            $tmp4015 = NULL;
            $returnValue3975 = $tmp4015;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4015));
            $tmp3965 = 4;
            goto $l3963;
            $l4016:;
            return $returnValue3975;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4021, 26);
        panda$collections$ImmutableArray* $tmp4023 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4023);
        $tmp4022 = $tmp4023;
        panda$core$String* $tmp4025 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3983.value));
        $tmp4024 = $tmp4025;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4020, $tmp4021, ((org$pandalanguage$pandac$parser$Token) start3967.value).position, NULL, $tmp4022, kind3966, $tmp4024, NULL, params3991, returnType3998, body4011);
        $tmp4019 = $tmp4020;
        $tmp4018 = $tmp4019;
        $returnValue3975 = $tmp4018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4022));
        $tmp3965 = 5;
        goto $l3963;
        $l4026:;
        return $returnValue3975;
    }
    $l3963:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4011));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3998));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3991));
    params3991 = NULL;
    body4011 = NULL;
    switch ($tmp3965) {
        case 4: goto $l4016;
        case 3: goto $l4007;
        case 5: goto $l4026;
        case 1: goto $l3989;
        case 2: goto $l3996;
        case 0: goto $l3977;
    }
    $l4028:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1880_94029;
    panda$core$Int64 $tmp4031;
    org$pandalanguage$pandac$ASTNode* $returnValue4033;
    org$pandalanguage$pandac$ASTNode* $tmp4034;
    org$pandalanguage$pandac$ASTNode* $tmp4035;
    panda$core$Int64 $tmp4038;
    org$pandalanguage$pandac$ASTNode* $tmp4040;
    org$pandalanguage$pandac$ASTNode* $tmp4041;
    panda$core$Int64 $tmp4044;
    org$pandalanguage$pandac$ASTNode* $tmp4046;
    org$pandalanguage$pandac$ASTNode* $tmp4047;
    panda$core$Int64 $tmp4050;
    org$pandalanguage$pandac$ASTNode* $tmp4052;
    org$pandalanguage$pandac$ASTNode* $tmp4053;
    panda$core$Int64 $tmp4056;
    org$pandalanguage$pandac$ASTNode* $tmp4058;
    org$pandalanguage$pandac$ASTNode* $tmp4059;
    panda$core$Int64 $tmp4062;
    org$pandalanguage$pandac$ASTNode* $tmp4064;
    org$pandalanguage$pandac$ASTNode* $tmp4065;
    panda$core$Int64 $tmp4068;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    panda$core$Int64 $tmp4074;
    org$pandalanguage$pandac$ASTNode* $tmp4076;
    org$pandalanguage$pandac$ASTNode* $tmp4077;
    panda$core$Int64 $tmp4080;
    org$pandalanguage$pandac$parser$Token id4082;
    org$pandalanguage$pandac$parser$Token$nullable colon4084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4085;
    panda$core$Int64 $tmp4086;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4088;
    panda$core$Int64 $tmp4089;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4091;
    panda$core$Int64 $tmp4092;
    org$pandalanguage$pandac$ASTNode* $tmp4094;
    org$pandalanguage$pandac$ASTNode* $tmp4095;
    panda$core$String* $tmp4096;
    org$pandalanguage$pandac$ASTNode* $tmp4100;
    org$pandalanguage$pandac$ASTNode* $tmp4101;
    panda$core$Int64 $tmp4105;
    panda$core$Int64 $tmp4108;
    org$pandalanguage$pandac$ASTNode* $tmp4111;
    org$pandalanguage$pandac$ASTNode* $tmp4112;
    panda$core$Int64 $tmp4118;
    panda$core$Int64 $tmp4121;
    panda$core$Int64 $tmp4125;
    panda$core$Int64 $tmp4129;
    org$pandalanguage$pandac$ASTNode* $tmp4132;
    org$pandalanguage$pandac$ASTNode* $tmp4133;
    panda$core$Int64 $tmp4136;
    org$pandalanguage$pandac$ASTNode* $tmp4138;
    org$pandalanguage$pandac$ASTNode* $tmp4139;
    panda$core$Int64 $tmp4143;
    panda$core$Int64 $tmp4146;
    org$pandalanguage$pandac$ASTNode* $tmp4149;
    org$pandalanguage$pandac$ASTNode* $tmp4150;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4153;
    panda$core$Int64 $tmp4154;
    org$pandalanguage$pandac$ASTNode* $tmp4156;
    {
        org$pandalanguage$pandac$parser$Token $tmp4030 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1880_94029 = $tmp4030.kind;
        panda$core$Int64$init$builtin_int64(&$tmp4031, 36);
        panda$core$Bit $tmp4032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4031);
        if ($tmp4032.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4036 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4035 = $tmp4036;
            $tmp4034 = $tmp4035;
            $returnValue4033 = $tmp4034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4034));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4035));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4038, 32);
        panda$core$Bit $tmp4039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4038);
        if ($tmp4039.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4042 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4041 = $tmp4042;
            $tmp4040 = $tmp4041;
            $returnValue4033 = $tmp4040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4040));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4041));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4044, 31);
        panda$core$Bit $tmp4045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4044);
        if ($tmp4045.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4048 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4047 = $tmp4048;
            $tmp4046 = $tmp4047;
            $returnValue4033 = $tmp4046;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4046));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4047));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4050, 30);
        panda$core$Bit $tmp4051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4050);
        if ($tmp4051.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4054 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4053 = $tmp4054;
            $tmp4052 = $tmp4053;
            $returnValue4033 = $tmp4052;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4052));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4053));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4056, 35);
        panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4056);
        if ($tmp4057.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4060 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp4059 = $tmp4060;
            $tmp4058 = $tmp4059;
            $returnValue4033 = $tmp4058;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4058));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4059));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4062, 44);
        panda$core$Bit $tmp4063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4062);
        if ($tmp4063.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4066 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4065 = $tmp4066;
            $tmp4064 = $tmp4065;
            $returnValue4033 = $tmp4064;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4064));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4065));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4068, 38);
        panda$core$Bit $tmp4069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4068);
        if ($tmp4069.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4072 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4071 = $tmp4072;
            $tmp4070 = $tmp4071;
            $returnValue4033 = $tmp4070;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4070));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4071));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4074, 99);
        panda$core$Bit $tmp4075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4074);
        if ($tmp4075.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4078 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4077 = $tmp4078;
            $tmp4076 = $tmp4077;
            $returnValue4033 = $tmp4076;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4076));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4077));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4080, 48);
        panda$core$Bit $tmp4081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4080);
        if ($tmp4081.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4083 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id4082 = $tmp4083;
            panda$core$Int64$init$builtin_int64(&$tmp4086, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4085, $tmp4086);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4087 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4085);
            colon4084 = $tmp4087;
            if (((panda$core$Bit) { colon4084.nonnull }).value) {
            {
                if (((panda$core$Bit) { self->syntaxHighlighter != NULL }).value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, ((org$pandalanguage$pandac$parser$Token) colon4084.value));
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4082);
                    panda$core$Int64$init$builtin_int64(&$tmp4089, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4088, $tmp4089);
                    (($fn4090) self->syntaxHighlighter->$class->vtable[3])(self->syntaxHighlighter, $tmp4088);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$Int64$init$builtin_int64(&$tmp4092, 12);
                    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4091, $tmp4092);
                    (($fn4093) self->syntaxHighlighter->$class->vtable[4])(self->syntaxHighlighter, $tmp4091);
                }
                }
                panda$core$String* $tmp4097 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id4082);
                $tmp4096 = $tmp4097;
                org$pandalanguage$pandac$ASTNode* $tmp4098 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp4096);
                $tmp4095 = $tmp4098;
                $tmp4094 = $tmp4095;
                $returnValue4033 = $tmp4094;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4096));
                return $returnValue4033;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id4082);
            org$pandalanguage$pandac$ASTNode* $tmp4102 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4101 = $tmp4102;
            $tmp4100 = $tmp4101;
            $returnValue4033 = $tmp4100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4101));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4105, 46);
        panda$core$Bit $tmp4106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4105);
        bool $tmp4104 = $tmp4106.value;
        if ($tmp4104) goto $l4107;
        panda$core$Int64$init$builtin_int64(&$tmp4108, 47);
        panda$core$Bit $tmp4109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4108);
        $tmp4104 = $tmp4109.value;
        $l4107:;
        panda$core$Bit $tmp4110 = { $tmp4104 };
        if ($tmp4110.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4113 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4112 = $tmp4113;
            $tmp4111 = $tmp4112;
            $returnValue4033 = $tmp4111;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4111));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4112));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4118, 23);
        panda$core$Bit $tmp4119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4118);
        bool $tmp4117 = $tmp4119.value;
        if ($tmp4117) goto $l4120;
        panda$core$Int64$init$builtin_int64(&$tmp4121, 24);
        panda$core$Bit $tmp4122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4121);
        $tmp4117 = $tmp4122.value;
        $l4120:;
        panda$core$Bit $tmp4123 = { $tmp4117 };
        bool $tmp4116 = $tmp4123.value;
        if ($tmp4116) goto $l4124;
        panda$core$Int64$init$builtin_int64(&$tmp4125, 25);
        panda$core$Bit $tmp4126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4125);
        $tmp4116 = $tmp4126.value;
        $l4124:;
        panda$core$Bit $tmp4127 = { $tmp4116 };
        bool $tmp4115 = $tmp4127.value;
        if ($tmp4115) goto $l4128;
        panda$core$Int64$init$builtin_int64(&$tmp4129, 26);
        panda$core$Bit $tmp4130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4129);
        $tmp4115 = $tmp4130.value;
        $l4128:;
        panda$core$Bit $tmp4131 = { $tmp4115 };
        if ($tmp4131.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4134 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4133 = $tmp4134;
            $tmp4132 = $tmp4133;
            $returnValue4033 = $tmp4132;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4133));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4136, 22);
        panda$core$Bit $tmp4137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4136);
        if ($tmp4137.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4140 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4139 = $tmp4140;
            $tmp4138 = $tmp4139;
            $returnValue4033 = $tmp4138;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4138));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4139));
            return $returnValue4033;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp4143, 21);
        panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4143);
        bool $tmp4142 = $tmp4144.value;
        if ($tmp4142) goto $l4145;
        panda$core$Int64$init$builtin_int64(&$tmp4146, 20);
        panda$core$Bit $tmp4147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1880_94029.$rawValue, $tmp4146);
        $tmp4142 = $tmp4147.value;
        $l4145:;
        panda$core$Bit $tmp4148 = { $tmp4142 };
        if ($tmp4148.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4151 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4150 = $tmp4151;
            $tmp4149 = $tmp4150;
            $returnValue4033 = $tmp4149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4150));
            return $returnValue4033;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4154, 36);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4153, $tmp4154);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4153, &$s4155);
            $tmp4156 = NULL;
            $returnValue4033 = $tmp4156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4156));
            return $returnValue4033;
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
    org$pandalanguage$pandac$parser$Token$nullable start4161;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4162;
    panda$core$Int64 $tmp4163;
    org$pandalanguage$pandac$ASTNode* $returnValue4166;
    org$pandalanguage$pandac$ASTNode* $tmp4167;
    org$pandalanguage$pandac$parser$Token$nullable next4170;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4171;
    panda$core$Int64 $tmp4172;
    org$pandalanguage$pandac$ASTNode* $tmp4175;
    panda$core$MutableString* name4178 = NULL;
    panda$core$MutableString* $tmp4179;
    panda$core$MutableString* $tmp4180;
    panda$core$String* $tmp4182;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4186;
    panda$core$Int64 $tmp4187;
    panda$core$Char8 $tmp4189;
    panda$core$UInt8 $tmp4190;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4191;
    panda$core$Int64 $tmp4192;
    org$pandalanguage$pandac$ASTNode* $tmp4195;
    panda$core$String* $tmp4198;
    org$pandalanguage$pandac$ASTNode* $tmp4200;
    org$pandalanguage$pandac$ASTNode* $tmp4201;
    panda$core$Int64 $tmp4203;
    panda$core$String* $tmp4204;
    int $tmp4160;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4163, 14);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4162, $tmp4163);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4165 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4162, &$s4164);
        start4161 = $tmp4165;
        if (((panda$core$Bit) { !start4161.nonnull }).value) {
        {
            $tmp4167 = NULL;
            $returnValue4166 = $tmp4167;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4167));
            $tmp4160 = 0;
            goto $l4158;
            $l4168:;
            return $returnValue4166;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4172, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4171, $tmp4172);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4174 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4171, &$s4173);
        next4170 = $tmp4174;
        if (((panda$core$Bit) { !next4170.nonnull }).value) {
        {
            $tmp4175 = NULL;
            $returnValue4166 = $tmp4175;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4175));
            $tmp4160 = 1;
            goto $l4158;
            $l4176:;
            return $returnValue4166;
        }
        }
        panda$core$MutableString* $tmp4181 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4183 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4170.value));
        $tmp4182 = $tmp4183;
        panda$core$MutableString$init$panda$core$String($tmp4181, $tmp4182);
        $tmp4180 = $tmp4181;
        $tmp4179 = $tmp4180;
        name4178 = $tmp4179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4182));
        $l4184:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4187, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4186, $tmp4187);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4188 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4186);
            next4170 = $tmp4188;
            if (((panda$core$Bit) { !next4170.nonnull }).value) {
            {
                goto $l4185;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4190, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4189, $tmp4190);
            panda$core$MutableString$append$panda$core$Char8(name4178, $tmp4189);
            panda$core$Int64$init$builtin_int64(&$tmp4192, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4191, $tmp4192);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4191, &$s4193);
            next4170 = $tmp4194;
            if (((panda$core$Bit) { !next4170.nonnull }).value) {
            {
                $tmp4195 = NULL;
                $returnValue4166 = $tmp4195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4195));
                $tmp4160 = 2;
                goto $l4158;
                $l4196:;
                return $returnValue4166;
            }
            }
            panda$core$String* $tmp4199 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4170.value));
            $tmp4198 = $tmp4199;
            panda$core$MutableString$append$panda$core$String(name4178, $tmp4198);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4198));
        }
        }
        $l4185:;
        org$pandalanguage$pandac$ASTNode* $tmp4202 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4203, 30);
        panda$core$String* $tmp4205 = panda$core$MutableString$finish$R$panda$core$String(name4178);
        $tmp4204 = $tmp4205;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4202, $tmp4203, ((org$pandalanguage$pandac$parser$Token) start4161.value).position, $tmp4204);
        $tmp4201 = $tmp4202;
        $tmp4200 = $tmp4201;
        $returnValue4166 = $tmp4200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4204));
        $tmp4160 = 3;
        goto $l4158;
        $l4206:;
        return $returnValue4166;
    }
    $l4158:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4178));
    name4178 = NULL;
    switch ($tmp4160) {
        case 2: goto $l4196;
        case 3: goto $l4206;
        case 1: goto $l4176;
        case 0: goto $l4168;
    }
    $l4208:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4212;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4213;
    panda$core$Int64 $tmp4214;
    org$pandalanguage$pandac$ASTNode* $returnValue4217;
    org$pandalanguage$pandac$ASTNode* $tmp4218;
    org$pandalanguage$pandac$parser$Token$nullable next4221;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4222;
    panda$core$Int64 $tmp4223;
    org$pandalanguage$pandac$ASTNode* $tmp4226;
    panda$core$MutableString* name4229 = NULL;
    panda$core$MutableString* $tmp4230;
    panda$core$MutableString* $tmp4231;
    panda$core$String* $tmp4233;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4237;
    panda$core$Int64 $tmp4238;
    panda$core$Char8 $tmp4240;
    panda$core$UInt8 $tmp4241;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4242;
    panda$core$Int64 $tmp4243;
    org$pandalanguage$pandac$ASTNode* $tmp4246;
    panda$core$String* $tmp4249;
    org$pandalanguage$pandac$ASTNode* $tmp4251;
    org$pandalanguage$pandac$ASTNode* $tmp4252;
    panda$core$Int64 $tmp4254;
    panda$core$String* $tmp4255;
    int $tmp4211;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4214, 15);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4213, $tmp4214);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4216 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4213, &$s4215);
        start4212 = $tmp4216;
        if (((panda$core$Bit) { !start4212.nonnull }).value) {
        {
            $tmp4218 = NULL;
            $returnValue4217 = $tmp4218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4218));
            $tmp4211 = 0;
            goto $l4209;
            $l4219:;
            return $returnValue4217;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4223, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4222, $tmp4223);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4225 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4222, &$s4224);
        next4221 = $tmp4225;
        if (((panda$core$Bit) { !next4221.nonnull }).value) {
        {
            $tmp4226 = NULL;
            $returnValue4217 = $tmp4226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4226));
            $tmp4211 = 1;
            goto $l4209;
            $l4227:;
            return $returnValue4217;
        }
        }
        panda$core$MutableString* $tmp4232 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp4234 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4221.value));
        $tmp4233 = $tmp4234;
        panda$core$MutableString$init$panda$core$String($tmp4232, $tmp4233);
        $tmp4231 = $tmp4232;
        $tmp4230 = $tmp4231;
        name4229 = $tmp4230;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4233));
        $l4235:;
        while (true) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4238, 98);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4237, $tmp4238);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4239 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4237);
            next4221 = $tmp4239;
            if (((panda$core$Bit) { !next4221.nonnull }).value) {
            {
                goto $l4236;
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp4241, 46);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4240, $tmp4241);
            panda$core$MutableString$append$panda$core$Char8(name4229, $tmp4240);
            panda$core$Int64$init$builtin_int64(&$tmp4243, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4242, $tmp4243);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4245 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4242, &$s4244);
            next4221 = $tmp4245;
            if (((panda$core$Bit) { !next4221.nonnull }).value) {
            {
                $tmp4246 = NULL;
                $returnValue4217 = $tmp4246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4246));
                $tmp4211 = 2;
                goto $l4209;
                $l4247:;
                return $returnValue4217;
            }
            }
            panda$core$String* $tmp4250 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next4221.value));
            $tmp4249 = $tmp4250;
            panda$core$MutableString$append$panda$core$String(name4229, $tmp4249);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4249));
        }
        }
        $l4236:;
        org$pandalanguage$pandac$ASTNode* $tmp4253 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4254, 46);
        panda$core$String* $tmp4256 = panda$core$MutableString$finish$R$panda$core$String(name4229);
        $tmp4255 = $tmp4256;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4253, $tmp4254, ((org$pandalanguage$pandac$parser$Token) start4212.value).position, $tmp4255);
        $tmp4252 = $tmp4253;
        $tmp4251 = $tmp4252;
        $returnValue4217 = $tmp4251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4255));
        $tmp4211 = 3;
        goto $l4209;
        $l4257:;
        return $returnValue4217;
    }
    $l4209:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4229));
    name4229 = NULL;
    switch ($tmp4211) {
        case 2: goto $l4247;
        case 3: goto $l4257;
        case 0: goto $l4219;
        case 1: goto $l4227;
    }
    $l4259:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4263;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4264;
    panda$core$Int64 $tmp4265;
    panda$collections$ImmutableArray* $returnValue4268;
    panda$collections$ImmutableArray* $tmp4269;
    org$pandalanguage$pandac$parser$Token$nullable id4272;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4273;
    panda$core$Int64 $tmp4274;
    panda$collections$ImmutableArray* $tmp4277;
    panda$collections$Array* parameters4280 = NULL;
    panda$collections$Array* $tmp4281;
    panda$collections$Array* $tmp4282;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4284;
    panda$core$Int64 $tmp4285;
    org$pandalanguage$pandac$ASTNode* t4290 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4291;
    org$pandalanguage$pandac$ASTNode* $tmp4292;
    panda$collections$ImmutableArray* $tmp4294;
    org$pandalanguage$pandac$ASTNode* $tmp4298;
    panda$core$Int64 $tmp4300;
    panda$core$String* $tmp4301;
    org$pandalanguage$pandac$ASTNode* $tmp4304;
    panda$core$Int64 $tmp4306;
    panda$core$String* $tmp4307;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4312;
    panda$core$Int64 $tmp4313;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4315;
    panda$core$Int64 $tmp4316;
    panda$collections$ImmutableArray* $tmp4319;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4322;
    panda$core$Int64 $tmp4323;
    org$pandalanguage$pandac$ASTNode* t4328 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4329;
    org$pandalanguage$pandac$ASTNode* $tmp4330;
    panda$collections$ImmutableArray* $tmp4332;
    org$pandalanguage$pandac$ASTNode* $tmp4336;
    panda$core$Int64 $tmp4338;
    panda$core$String* $tmp4339;
    org$pandalanguage$pandac$ASTNode* $tmp4342;
    panda$core$Int64 $tmp4344;
    panda$core$String* $tmp4345;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4347;
    panda$core$Int64 $tmp4348;
    panda$collections$ImmutableArray* $tmp4351;
    panda$collections$ImmutableArray* $tmp4354;
    panda$collections$ImmutableArray* $tmp4355;
    int $tmp4262;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4265, 62);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4264, $tmp4265);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4267 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4264, &$s4266);
        start4263 = $tmp4267;
        if (((panda$core$Bit) { !start4263.nonnull }).value) {
        {
            $tmp4269 = NULL;
            $returnValue4268 = $tmp4269;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4269));
            $tmp4262 = 0;
            goto $l4260;
            $l4270:;
            return $returnValue4268;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4274, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4273, $tmp4274);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4276 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4273, &$s4275);
        id4272 = $tmp4276;
        if (((panda$core$Bit) { !id4272.nonnull }).value) {
        {
            $tmp4277 = NULL;
            $returnValue4268 = $tmp4277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4277));
            $tmp4262 = 1;
            goto $l4260;
            $l4278:;
            return $returnValue4268;
        }
        }
        panda$collections$Array* $tmp4283 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4283);
        $tmp4282 = $tmp4283;
        $tmp4281 = $tmp4282;
        parameters4280 = $tmp4281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4282));
        panda$core$Int64$init$builtin_int64(&$tmp4285, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4284, $tmp4285);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4286 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4284);
        if (((panda$core$Bit) { $tmp4286.nonnull }).value) {
        {
            int $tmp4289;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4293 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4292 = $tmp4293;
                $tmp4291 = $tmp4292;
                t4290 = $tmp4291;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4292));
                if (((panda$core$Bit) { t4290 == NULL }).value) {
                {
                    $tmp4294 = NULL;
                    $returnValue4268 = $tmp4294;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4294));
                    $tmp4289 = 0;
                    goto $l4287;
                    $l4295:;
                    $tmp4262 = 2;
                    goto $l4260;
                    $l4296:;
                    return $returnValue4268;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp4299 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4300, 44);
                panda$core$String* $tmp4302 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4272.value));
                $tmp4301 = $tmp4302;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4299, $tmp4300, ((org$pandalanguage$pandac$parser$Token) id4272.value).position, $tmp4301, t4290);
                $tmp4298 = $tmp4299;
                panda$collections$Array$add$panda$collections$Array$T(parameters4280, ((panda$core$Object*) $tmp4298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4301));
            }
            $tmp4289 = -1;
            goto $l4287;
            $l4287:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4290));
            t4290 = NULL;
            switch ($tmp4289) {
                case -1: goto $l4303;
                case 0: goto $l4295;
            }
            $l4303:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4305 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$init$builtin_int64(&$tmp4306, 20);
            panda$core$String* $tmp4308 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4272.value));
            $tmp4307 = $tmp4308;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4305, $tmp4306, ((org$pandalanguage$pandac$parser$Token) id4272.value).position, $tmp4307);
            $tmp4304 = $tmp4305;
            panda$collections$Array$add$panda$collections$Array$T(parameters4280, ((panda$core$Object*) $tmp4304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
        }
        }
        $l4309:;
        panda$core$Int64$init$builtin_int64(&$tmp4313, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4312, $tmp4313);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4314 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4312);
        bool $tmp4311 = ((panda$core$Bit) { $tmp4314.nonnull }).value;
        if (!$tmp4311) goto $l4310;
        {
            panda$core$Int64$init$builtin_int64(&$tmp4316, 48);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4315, $tmp4316);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4318 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4315, &$s4317);
            id4272 = $tmp4318;
            if (((panda$core$Bit) { !id4272.nonnull }).value) {
            {
                $tmp4319 = NULL;
                $returnValue4268 = $tmp4319;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4319));
                $tmp4262 = 3;
                goto $l4260;
                $l4320:;
                return $returnValue4268;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4323, 95);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4322, $tmp4323);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4324 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4322);
            if (((panda$core$Bit) { $tmp4324.nonnull }).value) {
            {
                int $tmp4327;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4331 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4330 = $tmp4331;
                    $tmp4329 = $tmp4330;
                    t4328 = $tmp4329;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4329));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4330));
                    if (((panda$core$Bit) { t4328 == NULL }).value) {
                    {
                        $tmp4332 = NULL;
                        $returnValue4268 = $tmp4332;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4332));
                        $tmp4327 = 0;
                        goto $l4325;
                        $l4333:;
                        $tmp4262 = 4;
                        goto $l4260;
                        $l4334:;
                        return $returnValue4268;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp4337 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Int64$init$builtin_int64(&$tmp4338, 44);
                    panda$core$String* $tmp4340 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4272.value));
                    $tmp4339 = $tmp4340;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4337, $tmp4338, ((org$pandalanguage$pandac$parser$Token) id4272.value).position, $tmp4339, t4328);
                    $tmp4336 = $tmp4337;
                    panda$collections$Array$add$panda$collections$Array$T(parameters4280, ((panda$core$Object*) $tmp4336));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4336));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4339));
                }
                $tmp4327 = -1;
                goto $l4325;
                $l4325:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4328));
                t4328 = NULL;
                switch ($tmp4327) {
                    case -1: goto $l4341;
                    case 0: goto $l4333;
                }
                $l4341:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4343 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Int64$init$builtin_int64(&$tmp4344, 20);
                panda$core$String* $tmp4346 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4272.value));
                $tmp4345 = $tmp4346;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4343, $tmp4344, ((org$pandalanguage$pandac$parser$Token) id4272.value).position, $tmp4345);
                $tmp4342 = $tmp4343;
                panda$collections$Array$add$panda$collections$Array$T(parameters4280, ((panda$core$Object*) $tmp4342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4345));
            }
            }
        }
        goto $l4309;
        $l4310:;
        panda$core$Int64$init$builtin_int64(&$tmp4348, 63);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4347, $tmp4348);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4350 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4347, &$s4349);
        if (((panda$core$Bit) { !$tmp4350.nonnull }).value) {
        {
            $tmp4351 = NULL;
            $returnValue4268 = $tmp4351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4351));
            $tmp4262 = 5;
            goto $l4260;
            $l4352:;
            return $returnValue4268;
        }
        }
        panda$collections$ImmutableArray* $tmp4356 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters4280);
        $tmp4355 = $tmp4356;
        $tmp4354 = $tmp4355;
        $returnValue4268 = $tmp4354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4355));
        $tmp4262 = 6;
        goto $l4260;
        $l4357:;
        return $returnValue4268;
    }
    $l4260:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters4280));
    parameters4280 = NULL;
    switch ($tmp4262) {
        case 2: goto $l4296;
        case 4: goto $l4334;
        case 3: goto $l4320;
        case 1: goto $l4278;
        case 0: goto $l4270;
        case 5: goto $l4352;
        case 6: goto $l4357;
    }
    $l4359:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4363;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4364;
    panda$core$Int64 $tmp4365;
    panda$collections$ImmutableArray* $returnValue4368;
    panda$collections$ImmutableArray* $tmp4369;
    panda$collections$Array* result4372 = NULL;
    panda$collections$Array* $tmp4373;
    panda$collections$Array* $tmp4374;
    org$pandalanguage$pandac$ASTNode* t4376 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4377;
    org$pandalanguage$pandac$ASTNode* $tmp4378;
    panda$collections$ImmutableArray* $tmp4380;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4386;
    panda$core$Int64 $tmp4387;
    org$pandalanguage$pandac$ASTNode* $tmp4389;
    org$pandalanguage$pandac$ASTNode* $tmp4390;
    org$pandalanguage$pandac$ASTNode* $tmp4391;
    panda$collections$ImmutableArray* $tmp4393;
    panda$collections$ImmutableArray* $tmp4396;
    panda$collections$ImmutableArray* $tmp4397;
    int $tmp4362;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4365, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4364, $tmp4365);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4367 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4364, &$s4366);
        start4363 = $tmp4367;
        if (((panda$core$Bit) { !start4363.nonnull }).value) {
        {
            $tmp4369 = NULL;
            $returnValue4368 = $tmp4369;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4369));
            $tmp4362 = 0;
            goto $l4360;
            $l4370:;
            return $returnValue4368;
        }
        }
        panda$collections$Array* $tmp4375 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4375);
        $tmp4374 = $tmp4375;
        $tmp4373 = $tmp4374;
        result4372 = $tmp4373;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4374));
        org$pandalanguage$pandac$ASTNode* $tmp4379 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4378 = $tmp4379;
        $tmp4377 = $tmp4378;
        t4376 = $tmp4377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4378));
        if (((panda$core$Bit) { t4376 == NULL }).value) {
        {
            $tmp4380 = NULL;
            $returnValue4368 = $tmp4380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4380));
            $tmp4362 = 1;
            goto $l4360;
            $l4381:;
            return $returnValue4368;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result4372, ((panda$core$Object*) t4376));
        $l4383:;
        panda$core$Int64$init$builtin_int64(&$tmp4387, 105);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4386, $tmp4387);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4388 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4386);
        bool $tmp4385 = ((panda$core$Bit) { $tmp4388.nonnull }).value;
        if (!$tmp4385) goto $l4384;
        {
            {
                $tmp4389 = t4376;
                org$pandalanguage$pandac$ASTNode* $tmp4392 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4391 = $tmp4392;
                $tmp4390 = $tmp4391;
                t4376 = $tmp4390;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4390));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4391));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4389));
            }
            if (((panda$core$Bit) { t4376 == NULL }).value) {
            {
                $tmp4393 = NULL;
                $returnValue4368 = $tmp4393;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4393));
                $tmp4362 = 2;
                goto $l4360;
                $l4394:;
                return $returnValue4368;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result4372, ((panda$core$Object*) t4376));
        }
        goto $l4383;
        $l4384:;
        panda$collections$ImmutableArray* $tmp4398 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4372);
        $tmp4397 = $tmp4398;
        $tmp4396 = $tmp4397;
        $returnValue4368 = $tmp4396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4397));
        $tmp4362 = 3;
        goto $l4360;
        $l4399:;
        return $returnValue4368;
    }
    $l4360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4376));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4372));
    result4372 = NULL;
    t4376 = NULL;
    switch ($tmp4362) {
        case 2: goto $l4394;
        case 1: goto $l4381;
        case 3: goto $l4399;
        case 0: goto $l4370;
    }
    $l4401:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a4405;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4406;
    panda$core$Int64 $tmp4407;
    org$pandalanguage$pandac$ASTNode* expr4410 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4411;
    panda$core$Int64 $tmp4412;
    org$pandalanguage$pandac$ASTNode* $tmp4414;
    org$pandalanguage$pandac$ASTNode* $tmp4415;
    org$pandalanguage$pandac$ASTNode* $tmp4416;
    org$pandalanguage$pandac$ASTNode* $returnValue4418;
    org$pandalanguage$pandac$ASTNode* $tmp4419;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4422;
    panda$core$Int64 $tmp4423;
    org$pandalanguage$pandac$ASTNode* $tmp4425;
    org$pandalanguage$pandac$ASTNode* $tmp4426;
    panda$core$Int64 $tmp4428;
    panda$core$String* $tmp4429;
    int $tmp4404;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4407, 13);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4406, $tmp4407);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4409 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4406, &$s4408);
        a4405 = $tmp4409;
        memset(&expr4410, 0, sizeof(expr4410));
        panda$core$Int64$init$builtin_int64(&$tmp4412, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4411, $tmp4412);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4413 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4411);
        if (((panda$core$Bit) { $tmp4413.nonnull }).value) {
        {
            {
                $tmp4414 = expr4410;
                org$pandalanguage$pandac$ASTNode* $tmp4417 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4416 = $tmp4417;
                $tmp4415 = $tmp4416;
                expr4410 = $tmp4415;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4414));
            }
            if (((panda$core$Bit) { expr4410 == NULL }).value) {
            {
                $tmp4419 = NULL;
                $returnValue4418 = $tmp4419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4419));
                $tmp4404 = 0;
                goto $l4402;
                $l4420:;
                return $returnValue4418;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4423, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4422, $tmp4423);
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4422, &$s4424);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4427 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4428, 0);
        panda$core$String* $tmp4430 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a4405.value));
        $tmp4429 = $tmp4430;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp4427, $tmp4428, ((org$pandalanguage$pandac$parser$Token) a4405.value).position, $tmp4429, expr4410);
        $tmp4426 = $tmp4427;
        $tmp4425 = $tmp4426;
        $returnValue4418 = $tmp4425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4429));
        $tmp4404 = 1;
        goto $l4402;
        $l4431:;
        return $returnValue4418;
    }
    $l4402:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr4410));
    switch ($tmp4404) {
        case 1: goto $l4431;
        case 0: goto $l4420;
    }
    $l4433:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result4437 = NULL;
    panda$collections$Array* $tmp4438;
    panda$collections$Array* $tmp4439;
    panda$core$Int64 $tmp4445;
    org$pandalanguage$pandac$ASTNode* a4450 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4451;
    org$pandalanguage$pandac$ASTNode* $tmp4452;
    panda$collections$ImmutableArray* $returnValue4456;
    panda$collections$ImmutableArray* $tmp4457;
    panda$collections$ImmutableArray* $tmp4458;
    int $tmp4436;
    {
        panda$collections$Array* $tmp4440 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4440);
        $tmp4439 = $tmp4440;
        $tmp4438 = $tmp4439;
        result4437 = $tmp4438;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4438));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4439));
        $l4441:;
        org$pandalanguage$pandac$parser$Token $tmp4444 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4445, 13);
        panda$core$Bit $tmp4446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4444.kind.$rawValue, $tmp4445);
        bool $tmp4443 = $tmp4446.value;
        if (!$tmp4443) goto $l4442;
        {
            int $tmp4449;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4453 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4452 = $tmp4453;
                $tmp4451 = $tmp4452;
                a4450 = $tmp4451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4452));
                if (((panda$core$Bit) { a4450 == NULL }).value) {
                {
                    $tmp4449 = 0;
                    goto $l4447;
                    $l4454:;
                    goto $l4442;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4437, ((panda$core$Object*) a4450));
            }
            $tmp4449 = -1;
            goto $l4447;
            $l4447:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4450));
            a4450 = NULL;
            switch ($tmp4449) {
                case -1: goto $l4455;
                case 0: goto $l4454;
            }
            $l4455:;
        }
        goto $l4441;
        $l4442:;
        panda$collections$ImmutableArray* $tmp4459 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4437);
        $tmp4458 = $tmp4459;
        $tmp4457 = $tmp4458;
        $returnValue4456 = $tmp4457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4458));
        $tmp4436 = 0;
        goto $l4434;
        $l4460:;
        return $returnValue4456;
    }
    $l4434:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4437));
    result4437 = NULL;
    switch ($tmp4436) {
        case 0: goto $l4460;
    }
    $l4462:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4466;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4467;
    panda$core$Int64 $tmp4468;
    org$pandalanguage$pandac$ASTNode* $returnValue4471;
    org$pandalanguage$pandac$ASTNode* $tmp4472;
    panda$core$MutableString* result4475 = NULL;
    panda$core$MutableString* $tmp4476;
    panda$core$MutableString* $tmp4477;
    org$pandalanguage$pandac$parser$Token next4481;
    panda$core$Int64 $tmp4483;
    panda$core$Int64 $tmp4485;
    org$pandalanguage$pandac$ASTNode* $tmp4488;
    panda$core$String* $tmp4491;
    org$pandalanguage$pandac$ASTNode* $tmp4493;
    org$pandalanguage$pandac$ASTNode* $tmp4494;
    panda$core$Int64 $tmp4496;
    panda$core$String* $tmp4497;
    int $tmp4465;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4468, 11);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4467, $tmp4468);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4470 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4467, &$s4469);
        start4466 = $tmp4470;
        if (((panda$core$Bit) { !start4466.nonnull }).value) {
        {
            $tmp4472 = NULL;
            $returnValue4471 = $tmp4472;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4472));
            $tmp4465 = 0;
            goto $l4463;
            $l4473:;
            return $returnValue4471;
        }
        }
        panda$core$MutableString* $tmp4478 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp4478);
        $tmp4477 = $tmp4478;
        $tmp4476 = $tmp4477;
        result4475 = $tmp4476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4477));
        $l4479:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4482 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next4481 = $tmp4482;
            panda$core$Int64$init$builtin_int64(&$tmp4483, 11);
            panda$core$Bit $tmp4484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4481.kind.$rawValue, $tmp4483);
            if ($tmp4484.value) {
            {
                goto $l4480;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4485, 0);
            panda$core$Bit $tmp4486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next4481.kind.$rawValue, $tmp4485);
            if ($tmp4486.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start4466.value), &$s4487);
                $tmp4488 = NULL;
                $returnValue4471 = $tmp4488;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
                $tmp4465 = 1;
                goto $l4463;
                $l4489:;
                return $returnValue4471;
            }
            }
            panda$core$String* $tmp4492 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4481);
            $tmp4491 = $tmp4492;
            panda$core$MutableString$append$panda$core$String(result4475, $tmp4491);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4491));
        }
        }
        $l4480:;
        org$pandalanguage$pandac$ASTNode* $tmp4495 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4496, 38);
        panda$core$String* $tmp4498 = panda$core$MutableString$finish$R$panda$core$String(result4475);
        $tmp4497 = $tmp4498;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4495, $tmp4496, ((org$pandalanguage$pandac$parser$Token) start4466.value).position, $tmp4497);
        $tmp4494 = $tmp4495;
        $tmp4493 = $tmp4494;
        $returnValue4471 = $tmp4493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4497));
        $tmp4465 = 2;
        goto $l4463;
        $l4499:;
        return $returnValue4471;
    }
    $l4463:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4475));
    result4475 = NULL;
    switch ($tmp4465) {
        case 1: goto $l4489;
        case 2: goto $l4499;
        case 0: goto $l4473;
    }
    $l4501:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4505;
    panda$core$Int64 $tmp4506;
    org$pandalanguage$pandac$parser$Token$nullable id4507;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4508;
    panda$core$Int64 $tmp4509;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4512;
    panda$core$Int64 $tmp4513;
    org$pandalanguage$pandac$ASTNode* $returnValue4514;
    org$pandalanguage$pandac$ASTNode* $tmp4515;
    org$pandalanguage$pandac$ASTNode* t4518 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4519;
    org$pandalanguage$pandac$ASTNode* $tmp4520;
    org$pandalanguage$pandac$ASTNode* $tmp4522;
    org$pandalanguage$pandac$ASTNode* $tmp4525;
    org$pandalanguage$pandac$ASTNode* $tmp4526;
    panda$core$Int64 $tmp4528;
    panda$core$String* $tmp4529;
    int $tmp4504;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4506, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4505, $tmp4506);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4505);
        panda$core$Int64$init$builtin_int64(&$tmp4509, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4508, $tmp4509);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4511 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4508, &$s4510);
        id4507 = $tmp4511;
        panda$core$Int64$init$builtin_int64(&$tmp4513, 5);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4512, $tmp4513);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4512);
        if (((panda$core$Bit) { !id4507.nonnull }).value) {
        {
            $tmp4515 = NULL;
            $returnValue4514 = $tmp4515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4515));
            $tmp4504 = 0;
            goto $l4502;
            $l4516:;
            return $returnValue4514;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4521 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4520 = $tmp4521;
        $tmp4519 = $tmp4520;
        t4518 = $tmp4519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4520));
        if (((panda$core$Bit) { t4518 == NULL }).value) {
        {
            $tmp4522 = NULL;
            $returnValue4514 = $tmp4522;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4522));
            $tmp4504 = 1;
            goto $l4502;
            $l4523:;
            return $returnValue4514;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4527 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4528, 31);
        panda$core$String* $tmp4530 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id4507.value));
        $tmp4529 = $tmp4530;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp4527, $tmp4528, ((org$pandalanguage$pandac$parser$Token) id4507.value).position, $tmp4529, t4518);
        $tmp4526 = $tmp4527;
        $tmp4525 = $tmp4526;
        $returnValue4514 = $tmp4525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4529));
        $tmp4504 = 2;
        goto $l4502;
        $l4531:;
        return $returnValue4514;
    }
    $l4502:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4518));
    t4518 = NULL;
    switch ($tmp4504) {
        case 1: goto $l4523;
        case 2: goto $l4531;
        case 0: goto $l4516;
    }
    $l4533:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start4537;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4538;
    panda$core$Int64 $tmp4539;
    panda$collections$ImmutableArray* $returnValue4542;
    panda$collections$ImmutableArray* $tmp4543;
    panda$collections$Array* result4546 = NULL;
    panda$collections$Array* $tmp4547;
    panda$collections$Array* $tmp4548;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4550;
    panda$core$Int64 $tmp4551;
    org$pandalanguage$pandac$ASTNode* param4556 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4557;
    org$pandalanguage$pandac$ASTNode* $tmp4558;
    panda$collections$ImmutableArray* $tmp4560;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4567;
    panda$core$Int64 $tmp4568;
    org$pandalanguage$pandac$ASTNode* $tmp4570;
    org$pandalanguage$pandac$ASTNode* $tmp4571;
    org$pandalanguage$pandac$ASTNode* $tmp4572;
    panda$collections$ImmutableArray* $tmp4574;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4578;
    panda$core$Int64 $tmp4579;
    panda$collections$ImmutableArray* $tmp4582;
    panda$collections$ImmutableArray* $tmp4587;
    panda$collections$ImmutableArray* $tmp4588;
    int $tmp4536;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4539, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4538, $tmp4539);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4541 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4538, &$s4540);
        start4537 = $tmp4541;
        if (((panda$core$Bit) { !start4537.nonnull }).value) {
        {
            $tmp4543 = NULL;
            $returnValue4542 = $tmp4543;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4543));
            $tmp4536 = 0;
            goto $l4534;
            $l4544:;
            return $returnValue4542;
        }
        }
        panda$collections$Array* $tmp4549 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4549);
        $tmp4548 = $tmp4549;
        $tmp4547 = $tmp4548;
        result4546 = $tmp4547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4548));
        panda$core$Int64$init$builtin_int64(&$tmp4551, 104);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4550, $tmp4551);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4552 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4550);
        if (((panda$core$Bit) { !$tmp4552.nonnull }).value) {
        {
            int $tmp4555;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4559 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4558 = $tmp4559;
                $tmp4557 = $tmp4558;
                param4556 = $tmp4557;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4557));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4558));
                if (((panda$core$Bit) { param4556 == NULL }).value) {
                {
                    $tmp4560 = NULL;
                    $returnValue4542 = $tmp4560;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4560));
                    $tmp4555 = 0;
                    goto $l4553;
                    $l4561:;
                    $tmp4536 = 1;
                    goto $l4534;
                    $l4562:;
                    return $returnValue4542;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result4546, ((panda$core$Object*) param4556));
                $l4564:;
                panda$core$Int64$init$builtin_int64(&$tmp4568, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4567, $tmp4568);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4569 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4567);
                bool $tmp4566 = ((panda$core$Bit) { $tmp4569.nonnull }).value;
                if (!$tmp4566) goto $l4565;
                {
                    {
                        $tmp4570 = param4556;
                        org$pandalanguage$pandac$ASTNode* $tmp4573 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4572 = $tmp4573;
                        $tmp4571 = $tmp4572;
                        param4556 = $tmp4571;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4571));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4572));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4570));
                    }
                    if (((panda$core$Bit) { param4556 == NULL }).value) {
                    {
                        $tmp4574 = NULL;
                        $returnValue4542 = $tmp4574;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4574));
                        $tmp4555 = 1;
                        goto $l4553;
                        $l4575:;
                        $tmp4536 = 2;
                        goto $l4534;
                        $l4576:;
                        return $returnValue4542;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result4546, ((panda$core$Object*) param4556));
                }
                goto $l4564;
                $l4565:;
                panda$core$Int64$init$builtin_int64(&$tmp4579, 104);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4578, $tmp4579);
                org$pandalanguage$pandac$parser$Token$nullable $tmp4581 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4578, &$s4580);
                if (((panda$core$Bit) { !$tmp4581.nonnull }).value) {
                {
                    $tmp4582 = NULL;
                    $returnValue4542 = $tmp4582;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4582));
                    $tmp4555 = 2;
                    goto $l4553;
                    $l4583:;
                    $tmp4536 = 3;
                    goto $l4534;
                    $l4584:;
                    return $returnValue4542;
                }
                }
            }
            $tmp4555 = -1;
            goto $l4553;
            $l4553:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param4556));
            param4556 = NULL;
            switch ($tmp4555) {
                case -1: goto $l4586;
                case 0: goto $l4561;
                case 1: goto $l4575;
                case 2: goto $l4583;
            }
            $l4586:;
        }
        }
        panda$collections$ImmutableArray* $tmp4589 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result4546);
        $tmp4588 = $tmp4589;
        $tmp4587 = $tmp4588;
        $returnValue4542 = $tmp4587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4588));
        $tmp4536 = 4;
        goto $l4534;
        $l4590:;
        return $returnValue4542;
    }
    $l4534:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result4546));
    result4546 = NULL;
    switch ($tmp4536) {
        case 3: goto $l4584;
        case 2: goto $l4576;
        case 0: goto $l4544;
        case 4: goto $l4590;
        case 1: goto $l4562;
    }
    $l4592:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4596;
    org$pandalanguage$pandac$parser$Token$nullable start4597;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4598;
    panda$core$Int64 $tmp4599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4601;
    panda$core$Int64 $tmp4602;
    org$pandalanguage$pandac$ASTNode* $returnValue4605;
    org$pandalanguage$pandac$ASTNode* $tmp4606;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4609;
    panda$core$Int64 $tmp4610;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4611;
    panda$core$Int64 $tmp4612;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4613;
    panda$core$Int64 $tmp4614;
    panda$core$String* name4615 = NULL;
    panda$core$String* $tmp4616;
    panda$core$String* $tmp4617;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp4619;
    panda$core$Int64 $tmp4620;
    org$pandalanguage$pandac$ASTNode* $tmp4621;
    panda$collections$ImmutableArray* generics4624 = NULL;
    panda$core$Int64 $tmp4626;
    panda$collections$ImmutableArray* $tmp4628;
    panda$collections$ImmutableArray* $tmp4629;
    panda$collections$ImmutableArray* $tmp4630;
    panda$collections$ImmutableArray* $tmp4632;
    panda$collections$ImmutableArray* $tmp4633;
    panda$collections$ImmutableArray* params4634 = NULL;
    panda$collections$ImmutableArray* $tmp4635;
    panda$collections$ImmutableArray* $tmp4636;
    org$pandalanguage$pandac$ASTNode* $tmp4638;
    org$pandalanguage$pandac$ASTNode* returnType4641 = NULL;
    panda$core$Int64 $tmp4643;
    org$pandalanguage$pandac$ASTNode* $tmp4645;
    org$pandalanguage$pandac$ASTNode* $tmp4646;
    org$pandalanguage$pandac$ASTNode* $tmp4647;
    org$pandalanguage$pandac$ASTNode* $tmp4649;
    org$pandalanguage$pandac$ASTNode* $tmp4652;
    org$pandalanguage$pandac$ASTNode* $tmp4653;
    panda$collections$ImmutableArray* body4654 = NULL;
    panda$core$Int64 $tmp4656;
    panda$collections$ImmutableArray* $tmp4658;
    panda$collections$ImmutableArray* $tmp4659;
    panda$collections$ImmutableArray* $tmp4660;
    org$pandalanguage$pandac$ASTNode* $tmp4662;
    panda$collections$ImmutableArray* $tmp4665;
    panda$collections$ImmutableArray* $tmp4666;
    org$pandalanguage$pandac$ASTNode* $tmp4667;
    org$pandalanguage$pandac$ASTNode* $tmp4668;
    panda$core$Int64 $tmp4670;
    int $tmp4595;
    {
        memset(&kind4596, 0, sizeof(kind4596));
        panda$core$Int64$init$builtin_int64(&$tmp4599, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4598, $tmp4599);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4600 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4598);
        start4597 = $tmp4600;
        if (((panda$core$Bit) { !start4597.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4602, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4601, $tmp4602);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4604 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4601, &$s4603);
            start4597 = $tmp4604;
            if (((panda$core$Bit) { !start4597.nonnull }).value) {
            {
                $tmp4606 = NULL;
                $returnValue4605 = $tmp4606;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4606));
                $tmp4595 = 0;
                goto $l4593;
                $l4607:;
                return $returnValue4605;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4610, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4609, $tmp4610);
            kind4596 = $tmp4609;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4612, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4611, $tmp4612);
            kind4596 = $tmp4611;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4614, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4613, $tmp4614);
        org$pandalanguage$pandac$parser$Parser$open$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4613);
        panda$core$String* $tmp4618 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp4617 = $tmp4618;
        $tmp4616 = $tmp4617;
        name4615 = $tmp4616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4617));
        panda$core$Int64$init$builtin_int64(&$tmp4620, 4);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp4619, $tmp4620);
        org$pandalanguage$pandac$parser$Parser$close$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(self, $tmp4619);
        if (((panda$core$Bit) { name4615 == NULL }).value) {
        {
            $tmp4621 = NULL;
            $returnValue4605 = $tmp4621;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4621));
            $tmp4595 = 1;
            goto $l4593;
            $l4622:;
            return $returnValue4605;
        }
        }
        memset(&generics4624, 0, sizeof(generics4624));
        org$pandalanguage$pandac$parser$Token $tmp4625 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4626, 62);
        panda$core$Bit $tmp4627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4625.kind.$rawValue, $tmp4626);
        if ($tmp4627.value) {
        {
            {
                $tmp4628 = generics4624;
                panda$collections$ImmutableArray* $tmp4631 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4630 = $tmp4631;
                $tmp4629 = $tmp4630;
                generics4624 = $tmp4629;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
            }
        }
        }
        else {
        {
            {
                $tmp4632 = generics4624;
                $tmp4633 = NULL;
                generics4624 = $tmp4633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4632));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4637 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4636 = $tmp4637;
        $tmp4635 = $tmp4636;
        params4634 = $tmp4635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4636));
        if (((panda$core$Bit) { params4634 == NULL }).value) {
        {
            $tmp4638 = NULL;
            $returnValue4605 = $tmp4638;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4638));
            $tmp4595 = 2;
            goto $l4593;
            $l4639:;
            return $returnValue4605;
        }
        }
        memset(&returnType4641, 0, sizeof(returnType4641));
        org$pandalanguage$pandac$parser$Token $tmp4642 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4643, 95);
        panda$core$Bit $tmp4644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4642.kind.$rawValue, $tmp4643);
        if ($tmp4644.value) {
        {
            {
                $tmp4645 = returnType4641;
                org$pandalanguage$pandac$ASTNode* $tmp4648 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4647 = $tmp4648;
                $tmp4646 = $tmp4647;
                returnType4641 = $tmp4646;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4645));
            }
            if (((panda$core$Bit) { returnType4641 == NULL }).value) {
            {
                $tmp4649 = NULL;
                $returnValue4605 = $tmp4649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4649));
                $tmp4595 = 3;
                goto $l4593;
                $l4650:;
                return $returnValue4605;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4652 = returnType4641;
                $tmp4653 = NULL;
                returnType4641 = $tmp4653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4652));
            }
        }
        }
        memset(&body4654, 0, sizeof(body4654));
        org$pandalanguage$pandac$parser$Token $tmp4655 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4656, 99);
        panda$core$Bit $tmp4657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4655.kind.$rawValue, $tmp4656);
        if ($tmp4657.value) {
        {
            {
                $tmp4658 = body4654;
                panda$collections$ImmutableArray* $tmp4661 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4660 = $tmp4661;
                $tmp4659 = $tmp4660;
                body4654 = $tmp4659;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4658));
            }
            if (((panda$core$Bit) { body4654 == NULL }).value) {
            {
                $tmp4662 = NULL;
                $returnValue4605 = $tmp4662;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4662));
                $tmp4595 = 4;
                goto $l4593;
                $l4663:;
                return $returnValue4605;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4665 = body4654;
                $tmp4666 = NULL;
                body4654 = $tmp4666;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4665));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4669 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4670, 26);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4669, $tmp4670, ((org$pandalanguage$pandac$parser$Token) start4597.value).position, p_doccomment, p_annotations, kind4596, name4615, generics4624, params4634, returnType4641, body4654);
        $tmp4668 = $tmp4669;
        $tmp4667 = $tmp4668;
        $returnValue4605 = $tmp4667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4668));
        $tmp4595 = 5;
        goto $l4593;
        $l4671:;
        return $returnValue4605;
    }
    $l4593:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4654));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4641));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4634));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4624));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name4615));
    name4615 = NULL;
    params4634 = NULL;
    switch ($tmp4595) {
        case 5: goto $l4671;
        case 3: goto $l4650;
        case 4: goto $l4663;
        case 2: goto $l4639;
        case 1: goto $l4622;
        case 0: goto $l4607;
    }
    $l4673:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind4677;
    org$pandalanguage$pandac$parser$Token$nullable start4678;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4679;
    panda$core$Int64 $tmp4680;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4682;
    panda$core$Int64 $tmp4683;
    org$pandalanguage$pandac$ASTNode* $returnValue4686;
    org$pandalanguage$pandac$ASTNode* $tmp4687;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4690;
    panda$core$Int64 $tmp4691;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4692;
    panda$core$Int64 $tmp4693;
    panda$collections$ImmutableArray* params4694 = NULL;
    panda$collections$ImmutableArray* $tmp4695;
    panda$collections$ImmutableArray* $tmp4696;
    org$pandalanguage$pandac$ASTNode* $tmp4698;
    org$pandalanguage$pandac$ASTNode* returnType4701 = NULL;
    panda$core$Int64 $tmp4703;
    org$pandalanguage$pandac$ASTNode* $tmp4705;
    org$pandalanguage$pandac$ASTNode* $tmp4706;
    org$pandalanguage$pandac$ASTNode* $tmp4707;
    org$pandalanguage$pandac$ASTNode* $tmp4709;
    org$pandalanguage$pandac$ASTNode* $tmp4712;
    org$pandalanguage$pandac$ASTNode* $tmp4713;
    panda$collections$ImmutableArray* body4714 = NULL;
    panda$collections$ImmutableArray* $tmp4715;
    panda$collections$ImmutableArray* $tmp4716;
    org$pandalanguage$pandac$ASTNode* $tmp4718;
    org$pandalanguage$pandac$ASTNode* $tmp4721;
    org$pandalanguage$pandac$ASTNode* $tmp4722;
    panda$core$Int64 $tmp4724;
    panda$collections$ImmutableArray* $tmp4725;
    int $tmp4676;
    {
        memset(&kind4677, 0, sizeof(kind4677));
        panda$core$Int64$init$builtin_int64(&$tmp4680, 20);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4679, $tmp4680);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4681 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4679);
        start4678 = $tmp4681;
        if (((panda$core$Bit) { !start4678.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4683, 21);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4682, $tmp4683);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4685 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4682, &$s4684);
            start4678 = $tmp4685;
            if (((panda$core$Bit) { !start4678.nonnull }).value) {
            {
                $tmp4687 = NULL;
                $returnValue4686 = $tmp4687;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4687));
                $tmp4676 = 0;
                goto $l4674;
                $l4688:;
                return $returnValue4686;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4691, 0);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4690, $tmp4691);
            kind4677 = $tmp4690;
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp4693, 1);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4692, $tmp4693);
            kind4677 = $tmp4692;
        }
        }
        panda$collections$ImmutableArray* $tmp4697 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4696 = $tmp4697;
        $tmp4695 = $tmp4696;
        params4694 = $tmp4695;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4695));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4696));
        if (((panda$core$Bit) { params4694 == NULL }).value) {
        {
            $tmp4698 = NULL;
            $returnValue4686 = $tmp4698;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4698));
            $tmp4676 = 1;
            goto $l4674;
            $l4699:;
            return $returnValue4686;
        }
        }
        memset(&returnType4701, 0, sizeof(returnType4701));
        org$pandalanguage$pandac$parser$Token $tmp4702 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp4703, 95);
        panda$core$Bit $tmp4704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4702.kind.$rawValue, $tmp4703);
        if ($tmp4704.value) {
        {
            {
                $tmp4705 = returnType4701;
                org$pandalanguage$pandac$ASTNode* $tmp4708 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4707 = $tmp4708;
                $tmp4706 = $tmp4707;
                returnType4701 = $tmp4706;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4705));
            }
            if (((panda$core$Bit) { returnType4701 == NULL }).value) {
            {
                $tmp4709 = NULL;
                $returnValue4686 = $tmp4709;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4709));
                $tmp4676 = 2;
                goto $l4674;
                $l4710:;
                return $returnValue4686;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4712 = returnType4701;
                $tmp4713 = NULL;
                returnType4701 = $tmp4713;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4712));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4717 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4716 = $tmp4717;
        $tmp4715 = $tmp4716;
        body4714 = $tmp4715;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4715));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4716));
        if (((panda$core$Bit) { body4714 == NULL }).value) {
        {
            $tmp4718 = NULL;
            $returnValue4686 = $tmp4718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4718));
            $tmp4676 = 3;
            goto $l4674;
            $l4719:;
            return $returnValue4686;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4723 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4724, 26);
        panda$collections$ImmutableArray* $tmp4726 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4726);
        $tmp4725 = $tmp4726;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4723, $tmp4724, ((org$pandalanguage$pandac$parser$Token) start4678.value).position, NULL, $tmp4725, kind4677, &$s4727, NULL, params4694, returnType4701, body4714);
        $tmp4722 = $tmp4723;
        $tmp4721 = $tmp4722;
        $returnValue4686 = $tmp4721;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4721));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4725));
        $tmp4676 = 4;
        goto $l4674;
        $l4728:;
        return $returnValue4686;
    }
    $l4674:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body4714));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType4701));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4694));
    params4694 = NULL;
    body4714 = NULL;
    switch ($tmp4676) {
        case 4: goto $l4728;
        case 2: goto $l4710;
        case 1: goto $l4699;
        case 3: goto $l4719;
        case 0: goto $l4688;
    }
    $l4730:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4734;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4735;
    panda$core$Int64 $tmp4736;
    org$pandalanguage$pandac$ASTNode* $returnValue4739;
    org$pandalanguage$pandac$ASTNode* $tmp4740;
    panda$collections$ImmutableArray* params4743 = NULL;
    panda$collections$ImmutableArray* $tmp4744;
    panda$collections$ImmutableArray* $tmp4745;
    org$pandalanguage$pandac$ASTNode* $tmp4747;
    panda$collections$ImmutableArray* b4750 = NULL;
    panda$collections$ImmutableArray* $tmp4751;
    panda$collections$ImmutableArray* $tmp4752;
    org$pandalanguage$pandac$ASTNode* $tmp4754;
    org$pandalanguage$pandac$ASTNode* $tmp4757;
    org$pandalanguage$pandac$ASTNode* $tmp4758;
    panda$core$Int64 $tmp4760;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4761;
    panda$core$Int64 $tmp4762;
    int $tmp4733;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4736, 22);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4735, $tmp4736);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4738 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4735, &$s4737);
        start4734 = $tmp4738;
        if (((panda$core$Bit) { !start4734.nonnull }).value) {
        {
            $tmp4740 = NULL;
            $returnValue4739 = $tmp4740;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4740));
            $tmp4733 = 0;
            goto $l4731;
            $l4741:;
            return $returnValue4739;
        }
        }
        panda$collections$ImmutableArray* $tmp4746 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4745 = $tmp4746;
        $tmp4744 = $tmp4745;
        params4743 = $tmp4744;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4744));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4745));
        if (((panda$core$Bit) { params4743 == NULL }).value) {
        {
            $tmp4747 = NULL;
            $returnValue4739 = $tmp4747;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4747));
            $tmp4733 = 1;
            goto $l4731;
            $l4748:;
            return $returnValue4739;
        }
        }
        panda$collections$ImmutableArray* $tmp4753 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4752 = $tmp4753;
        $tmp4751 = $tmp4752;
        b4750 = $tmp4751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4752));
        if (((panda$core$Bit) { b4750 == NULL }).value) {
        {
            $tmp4754 = NULL;
            $returnValue4739 = $tmp4754;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4754));
            $tmp4733 = 2;
            goto $l4731;
            $l4755:;
            return $returnValue4739;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4759 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4760, 26);
        panda$core$Int64$init$builtin_int64(&$tmp4762, 2);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4761, $tmp4762);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4759, $tmp4760, ((org$pandalanguage$pandac$parser$Token) start4734.value).position, p_doccomment, p_annotations, $tmp4761, &$s4763, NULL, params4743, NULL, b4750);
        $tmp4758 = $tmp4759;
        $tmp4757 = $tmp4758;
        $returnValue4739 = $tmp4757;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4758));
        $tmp4733 = 3;
        goto $l4731;
        $l4764:;
        return $returnValue4739;
    }
    $l4731:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b4750));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params4743));
    params4743 = NULL;
    b4750 = NULL;
    switch ($tmp4733) {
        case 2: goto $l4755;
        case 3: goto $l4764;
        case 1: goto $l4748;
        case 0: goto $l4741;
    }
    $l4766:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4770 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4771;
    org$pandalanguage$pandac$ASTNode* $tmp4772;
    org$pandalanguage$pandac$ASTNode* $returnValue4774;
    org$pandalanguage$pandac$ASTNode* $tmp4775;
    org$pandalanguage$pandac$ASTNode* $tmp4778;
    org$pandalanguage$pandac$ASTNode* $tmp4779;
    panda$core$Int64 $tmp4781;
    int $tmp4769;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4773 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4772 = $tmp4773;
        $tmp4771 = $tmp4772;
        decl4770 = $tmp4771;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4771));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4772));
        if (((panda$core$Bit) { decl4770 == NULL }).value) {
        {
            $tmp4775 = NULL;
            $returnValue4774 = $tmp4775;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4775));
            $tmp4769 = 0;
            goto $l4767;
            $l4776:;
            return $returnValue4774;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4780 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4781, 16);
        org$pandalanguage$pandac$Position $tmp4783 = (($fn4782) decl4770->$class->vtable[2])(decl4770);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4780, $tmp4781, $tmp4783, p_doccomment, p_annotations, decl4770);
        $tmp4779 = $tmp4780;
        $tmp4778 = $tmp4779;
        $returnValue4774 = $tmp4778;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4778));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4779));
        $tmp4769 = 1;
        goto $l4767;
        $l4784:;
        return $returnValue4774;
    }
    $l4767:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4770));
    decl4770 = NULL;
    switch ($tmp4769) {
        case 1: goto $l4784;
        case 0: goto $l4776;
    }
    $l4786:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4790;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4791;
    panda$core$Int64 $tmp4792;
    org$pandalanguage$pandac$ASTNode* $returnValue4795;
    org$pandalanguage$pandac$ASTNode* $tmp4796;
    panda$collections$Array* fields4799 = NULL;
    panda$collections$Array* $tmp4800;
    panda$collections$Array* $tmp4801;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4803;
    panda$core$Int64 $tmp4804;
    panda$core$Int64 $tmp4807;
    org$pandalanguage$pandac$ASTNode* field4812 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4813;
    org$pandalanguage$pandac$ASTNode* $tmp4814;
    org$pandalanguage$pandac$ASTNode* $tmp4816;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4823;
    panda$core$Int64 $tmp4824;
    org$pandalanguage$pandac$ASTNode* $tmp4826;
    org$pandalanguage$pandac$ASTNode* $tmp4827;
    org$pandalanguage$pandac$ASTNode* $tmp4828;
    org$pandalanguage$pandac$ASTNode* $tmp4830;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4835;
    panda$core$Int64 $tmp4836;
    org$pandalanguage$pandac$ASTNode* $tmp4839;
    org$pandalanguage$pandac$ASTNode* $tmp4842;
    org$pandalanguage$pandac$ASTNode* $tmp4843;
    panda$core$Int64 $tmp4845;
    panda$core$String* $tmp4846;
    panda$collections$ImmutableArray* $tmp4848;
    int $tmp4789;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4792, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4791, $tmp4792);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4794 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4791, &$s4793);
        name4790 = $tmp4794;
        if (((panda$core$Bit) { !name4790.nonnull }).value) {
        {
            $tmp4796 = NULL;
            $returnValue4795 = $tmp4796;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4796));
            $tmp4789 = 0;
            goto $l4787;
            $l4797:;
            return $returnValue4795;
        }
        }
        panda$collections$Array* $tmp4802 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4802);
        $tmp4801 = $tmp4802;
        $tmp4800 = $tmp4801;
        fields4799 = $tmp4800;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4801));
        panda$core$Int64$init$builtin_int64(&$tmp4804, 103);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4803, $tmp4804);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4805 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4803);
        if (((panda$core$Bit) { $tmp4805.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4806 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Int64$init$builtin_int64(&$tmp4807, 104);
            panda$core$Bit $tmp4808 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4806.kind.$rawValue, $tmp4807);
            if ($tmp4808.value) {
            {
                int $tmp4811;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4815 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4814 = $tmp4815;
                    $tmp4813 = $tmp4814;
                    field4812 = $tmp4813;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4813));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4814));
                    if (((panda$core$Bit) { field4812 == NULL }).value) {
                    {
                        $tmp4816 = NULL;
                        $returnValue4795 = $tmp4816;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4816));
                        $tmp4811 = 0;
                        goto $l4809;
                        $l4817:;
                        $tmp4789 = 1;
                        goto $l4787;
                        $l4818:;
                        return $returnValue4795;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4799, ((panda$core$Object*) field4812));
                    $l4820:;
                    panda$core$Int64$init$builtin_int64(&$tmp4824, 105);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4823, $tmp4824);
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4825 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4823);
                    bool $tmp4822 = ((panda$core$Bit) { $tmp4825.nonnull }).value;
                    if (!$tmp4822) goto $l4821;
                    {
                        {
                            $tmp4826 = field4812;
                            org$pandalanguage$pandac$ASTNode* $tmp4829 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4828 = $tmp4829;
                            $tmp4827 = $tmp4828;
                            field4812 = $tmp4827;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4827));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4828));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4826));
                        }
                        if (((panda$core$Bit) { field4812 == NULL }).value) {
                        {
                            $tmp4830 = NULL;
                            $returnValue4795 = $tmp4830;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4830));
                            $tmp4811 = 1;
                            goto $l4809;
                            $l4831:;
                            $tmp4789 = 2;
                            goto $l4787;
                            $l4832:;
                            return $returnValue4795;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4799, ((panda$core$Object*) field4812));
                    }
                    goto $l4820;
                    $l4821:;
                }
                $tmp4811 = -1;
                goto $l4809;
                $l4809:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4812));
                field4812 = NULL;
                switch ($tmp4811) {
                    case 1: goto $l4831;
                    case 0: goto $l4817;
                    case -1: goto $l4834;
                }
                $l4834:;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp4836, 104);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4835, $tmp4836);
            org$pandalanguage$pandac$parser$Token$nullable $tmp4838 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4835, &$s4837);
            if (((panda$core$Bit) { !$tmp4838.nonnull }).value) {
            {
                $tmp4839 = NULL;
                $returnValue4795 = $tmp4839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4839));
                $tmp4789 = 3;
                goto $l4787;
                $l4840:;
                return $returnValue4795;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4844 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp4845, 9);
        panda$core$String* $tmp4847 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4790.value));
        $tmp4846 = $tmp4847;
        panda$collections$ImmutableArray* $tmp4849 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4799);
        $tmp4848 = $tmp4849;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4844, $tmp4845, ((org$pandalanguage$pandac$parser$Token) name4790.value).position, p_doccomment, $tmp4846, $tmp4848);
        $tmp4843 = $tmp4844;
        $tmp4842 = $tmp4843;
        $returnValue4795 = $tmp4842;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4842));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4843));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4848));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4846));
        $tmp4789 = 4;
        goto $l4787;
        $l4850:;
        return $returnValue4795;
    }
    $l4787:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4799));
    fields4799 = NULL;
    switch ($tmp4789) {
        case 2: goto $l4832;
        case 3: goto $l4840;
        case 1: goto $l4818;
        case 0: goto $l4797;
        case 4: goto $l4850;
    }
    $l4852:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4856;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4857;
    panda$core$Int64 $tmp4858;
    org$pandalanguage$pandac$ASTNode* $returnValue4861;
    org$pandalanguage$pandac$ASTNode* $tmp4862;
    org$pandalanguage$pandac$parser$Token$nullable name4865;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4866;
    panda$core$Int64 $tmp4867;
    org$pandalanguage$pandac$ASTNode* $tmp4870;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4873;
    panda$core$Int64 $tmp4874;
    org$pandalanguage$pandac$ASTNode* $tmp4877;
    panda$collections$Array* members4880 = NULL;
    panda$collections$Array* $tmp4881;
    panda$collections$Array* $tmp4882;
    org$pandalanguage$pandac$ASTNode* dc4884 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4885;
    org$pandalanguage$pandac$parser$Token next4888;
    org$pandalanguage$pandac$parser$Token$Kind $match$2320_134890;
    panda$core$Int64 $tmp4900;
    panda$core$Int64 $tmp4903;
    panda$core$Int64 $tmp4907;
    panda$core$Int64 $tmp4911;
    panda$core$Int64 $tmp4915;
    panda$core$Int64 $tmp4919;
    panda$core$Int64 $tmp4923;
    panda$core$Int64 $tmp4927;
    panda$core$Int64 $tmp4931;
    panda$core$Int64 $tmp4935;
    panda$core$Int64 $tmp4938;
    panda$core$String* $tmp4940;
    panda$core$String* $tmp4941;
    panda$core$String* $tmp4943;
    org$pandalanguage$pandac$ASTNode* $tmp4948;
    org$pandalanguage$pandac$ASTNode* $tmp4949;
    org$pandalanguage$pandac$ASTNode* $tmp4950;
    panda$core$Int64 $tmp4952;
    org$pandalanguage$pandac$ASTNode* c4957 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4958;
    org$pandalanguage$pandac$ASTNode* $tmp4959;
    org$pandalanguage$pandac$ASTNode* $tmp4961;
    org$pandalanguage$pandac$ASTNode* $tmp4965;
    org$pandalanguage$pandac$ASTNode* $tmp4966;
    panda$collections$ImmutableArray* a4968 = NULL;
    panda$collections$ImmutableArray* $tmp4969;
    panda$collections$ImmutableArray* $tmp4970;
    org$pandalanguage$pandac$parser$Token next4974;
    org$pandalanguage$pandac$parser$Token$Kind $match$2344_134976;
    panda$core$Int64 $tmp4977;
    panda$core$Int64 $tmp4980;
    panda$core$String* $tmp4982;
    panda$core$String* $tmp4983;
    panda$core$String* $tmp4985;
    org$pandalanguage$pandac$ASTNode* $tmp4990;
    panda$collections$ImmutableArray* $tmp4993;
    panda$collections$ImmutableArray* $tmp4994;
    panda$collections$ImmutableArray* $tmp4995;
    panda$core$Int64 $tmp4997;
    panda$core$Int64 $tmp5002;
    panda$core$String* $tmp5005;
    panda$core$String* $tmp5006;
    panda$core$String* $tmp5008;
    org$pandalanguage$pandac$ASTNode* $tmp5013;
    org$pandalanguage$pandac$ASTNode* $tmp5016;
    org$pandalanguage$pandac$ASTNode* $tmp5017;
    org$pandalanguage$pandac$ASTNode* $tmp5018;
    panda$core$Int64 $tmp5020;
    org$pandalanguage$pandac$ASTNode* decl5025 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5026;
    org$pandalanguage$pandac$ASTNode* $tmp5027;
    org$pandalanguage$pandac$ASTNode* $tmp5029;
    org$pandalanguage$pandac$ASTNode* $tmp5033;
    org$pandalanguage$pandac$ASTNode* $tmp5034;
    panda$collections$ImmutableArray* $tmp5035;
    panda$collections$ImmutableArray* $tmp5036;
    panda$collections$ImmutableArray* $tmp5037;
    panda$core$Int64 $tmp5040;
    org$pandalanguage$pandac$ASTNode* decl5045 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5046;
    org$pandalanguage$pandac$ASTNode* $tmp5047;
    org$pandalanguage$pandac$ASTNode* $tmp5049;
    org$pandalanguage$pandac$ASTNode* $tmp5053;
    org$pandalanguage$pandac$ASTNode* $tmp5054;
    panda$collections$ImmutableArray* $tmp5055;
    panda$collections$ImmutableArray* $tmp5056;
    panda$collections$ImmutableArray* $tmp5057;
    panda$core$Int64 $tmp5060;
    org$pandalanguage$pandac$ASTNode* decl5065 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5066;
    org$pandalanguage$pandac$ASTNode* $tmp5067;
    org$pandalanguage$pandac$ASTNode* $tmp5069;
    org$pandalanguage$pandac$ASTNode* $tmp5073;
    org$pandalanguage$pandac$ASTNode* $tmp5074;
    panda$collections$ImmutableArray* $tmp5075;
    panda$collections$ImmutableArray* $tmp5076;
    panda$collections$ImmutableArray* $tmp5077;
    panda$core$Int64 $tmp5081;
    panda$core$Int64 $tmp5084;
    org$pandalanguage$pandac$ASTNode* decl5090 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5091;
    org$pandalanguage$pandac$ASTNode* $tmp5092;
    org$pandalanguage$pandac$ASTNode* $tmp5094;
    org$pandalanguage$pandac$ASTNode* $tmp5098;
    org$pandalanguage$pandac$ASTNode* $tmp5099;
    panda$collections$ImmutableArray* $tmp5100;
    panda$collections$ImmutableArray* $tmp5101;
    panda$collections$ImmutableArray* $tmp5102;
    panda$core$Int64 $tmp5108;
    panda$core$Int64 $tmp5111;
    panda$core$Int64 $tmp5115;
    panda$core$Int64 $tmp5119;
    org$pandalanguage$pandac$ASTNode* decl5125 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5126;
    org$pandalanguage$pandac$ASTNode* $tmp5127;
    org$pandalanguage$pandac$ASTNode* $tmp5129;
    org$pandalanguage$pandac$ASTNode* $tmp5133;
    org$pandalanguage$pandac$ASTNode* $tmp5134;
    panda$collections$ImmutableArray* $tmp5135;
    panda$collections$ImmutableArray* $tmp5136;
    panda$collections$ImmutableArray* $tmp5137;
    panda$core$Int64 $tmp5140;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5142;
    panda$core$Int64 $tmp5143;
    panda$core$String* $tmp5145;
    panda$core$String* $tmp5146;
    panda$core$String* $tmp5148;
    org$pandalanguage$pandac$ASTNode* $tmp5153;
    org$pandalanguage$pandac$ASTNode* $tmp5156;
    org$pandalanguage$pandac$ASTNode* $tmp5157;
    panda$core$Int64 $tmp5159;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5160;
    panda$core$Int64 $tmp5161;
    panda$core$String* $tmp5162;
    panda$collections$ImmutableArray* $tmp5164;
    int $tmp4855;
    {
        panda$core$Int64$init$builtin_int64(&$tmp4858, 19);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4857, $tmp4858);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4860 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4857, &$s4859);
        start4856 = $tmp4860;
        if (((panda$core$Bit) { !start4856.nonnull }).value) {
        {
            $tmp4862 = NULL;
            $returnValue4861 = $tmp4862;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4862));
            $tmp4855 = 0;
            goto $l4853;
            $l4863:;
            return $returnValue4861;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4867, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4866, $tmp4867);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4869 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4866, &$s4868);
        name4865 = $tmp4869;
        if (((panda$core$Bit) { !name4865.nonnull }).value) {
        {
            $tmp4870 = NULL;
            $returnValue4861 = $tmp4870;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4870));
            $tmp4855 = 1;
            goto $l4853;
            $l4871:;
            return $returnValue4861;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp4874, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4873, $tmp4874);
        org$pandalanguage$pandac$parser$Token$nullable $tmp4876 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4873, &$s4875);
        if (((panda$core$Bit) { !$tmp4876.nonnull }).value) {
        {
            $tmp4877 = NULL;
            $returnValue4861 = $tmp4877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4877));
            $tmp4855 = 2;
            goto $l4853;
            $l4878:;
            return $returnValue4861;
        }
        }
        panda$collections$Array* $tmp4883 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4883);
        $tmp4882 = $tmp4883;
        $tmp4881 = $tmp4882;
        members4880 = $tmp4881;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4881));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4882));
        $tmp4885 = NULL;
        dc4884 = $tmp4885;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4885));
        $l4886:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4889 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4888 = $tmp4889;
            {
                $match$2320_134890 = next4888.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4900, 17);
                panda$core$Bit $tmp4901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4900);
                bool $tmp4899 = $tmp4901.value;
                if ($tmp4899) goto $l4902;
                panda$core$Int64$init$builtin_int64(&$tmp4903, 18);
                panda$core$Bit $tmp4904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4903);
                $tmp4899 = $tmp4904.value;
                $l4902:;
                panda$core$Bit $tmp4905 = { $tmp4899 };
                bool $tmp4898 = $tmp4905.value;
                if ($tmp4898) goto $l4906;
                panda$core$Int64$init$builtin_int64(&$tmp4907, 19);
                panda$core$Bit $tmp4908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4907);
                $tmp4898 = $tmp4908.value;
                $l4906:;
                panda$core$Bit $tmp4909 = { $tmp4898 };
                bool $tmp4897 = $tmp4909.value;
                if ($tmp4897) goto $l4910;
                panda$core$Int64$init$builtin_int64(&$tmp4911, 21);
                panda$core$Bit $tmp4912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4911);
                $tmp4897 = $tmp4912.value;
                $l4910:;
                panda$core$Bit $tmp4913 = { $tmp4897 };
                bool $tmp4896 = $tmp4913.value;
                if ($tmp4896) goto $l4914;
                panda$core$Int64$init$builtin_int64(&$tmp4915, 20);
                panda$core$Bit $tmp4916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4915);
                $tmp4896 = $tmp4916.value;
                $l4914:;
                panda$core$Bit $tmp4917 = { $tmp4896 };
                bool $tmp4895 = $tmp4917.value;
                if ($tmp4895) goto $l4918;
                panda$core$Int64$init$builtin_int64(&$tmp4919, 13);
                panda$core$Bit $tmp4920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4919);
                $tmp4895 = $tmp4920.value;
                $l4918:;
                panda$core$Bit $tmp4921 = { $tmp4895 };
                bool $tmp4894 = $tmp4921.value;
                if ($tmp4894) goto $l4922;
                panda$core$Int64$init$builtin_int64(&$tmp4923, 23);
                panda$core$Bit $tmp4924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4923);
                $tmp4894 = $tmp4924.value;
                $l4922:;
                panda$core$Bit $tmp4925 = { $tmp4894 };
                bool $tmp4893 = $tmp4925.value;
                if ($tmp4893) goto $l4926;
                panda$core$Int64$init$builtin_int64(&$tmp4927, 24);
                panda$core$Bit $tmp4928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4927);
                $tmp4893 = $tmp4928.value;
                $l4926:;
                panda$core$Bit $tmp4929 = { $tmp4893 };
                bool $tmp4892 = $tmp4929.value;
                if ($tmp4892) goto $l4930;
                panda$core$Int64$init$builtin_int64(&$tmp4931, 25);
                panda$core$Bit $tmp4932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4931);
                $tmp4892 = $tmp4932.value;
                $l4930:;
                panda$core$Bit $tmp4933 = { $tmp4892 };
                bool $tmp4891 = $tmp4933.value;
                if ($tmp4891) goto $l4934;
                panda$core$Int64$init$builtin_int64(&$tmp4935, 26);
                panda$core$Bit $tmp4936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4935);
                $tmp4891 = $tmp4936.value;
                $l4934:;
                panda$core$Bit $tmp4937 = { $tmp4891 };
                if ($tmp4937.value) {
                {
                    goto $l4887;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4938, 11);
                panda$core$Bit $tmp4939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4938);
                if ($tmp4939.value) {
                {
                    if (((panda$core$Bit) { dc4884 != NULL }).value) {
                    {
                        panda$core$String* $tmp4944 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4888);
                        $tmp4943 = $tmp4944;
                        panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4942, $tmp4943);
                        $tmp4941 = $tmp4945;
                        panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4941, &$s4946);
                        $tmp4940 = $tmp4947;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4888, $tmp4940);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4940));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4941));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4943));
                    }
                    }
                    {
                        $tmp4948 = dc4884;
                        org$pandalanguage$pandac$ASTNode* $tmp4951 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4950 = $tmp4951;
                        $tmp4949 = $tmp4950;
                        dc4884 = $tmp4949;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4949));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4950));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4948));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4952, 48);
                panda$core$Bit $tmp4953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2320_134890.$rawValue, $tmp4952);
                if ($tmp4953.value) {
                {
                    int $tmp4956;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4960 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4884);
                        $tmp4959 = $tmp4960;
                        $tmp4958 = $tmp4959;
                        c4957 = $tmp4958;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4958));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4959));
                        if (((panda$core$Bit) { c4957 == NULL }).value) {
                        {
                            $tmp4961 = NULL;
                            $returnValue4861 = $tmp4961;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4961));
                            $tmp4956 = 0;
                            goto $l4954;
                            $l4962:;
                            $tmp4855 = 3;
                            goto $l4853;
                            $l4963:;
                            return $returnValue4861;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4880, ((panda$core$Object*) c4957));
                        {
                            $tmp4965 = dc4884;
                            $tmp4966 = NULL;
                            dc4884 = $tmp4966;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4966));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4965));
                        }
                    }
                    $tmp4956 = -1;
                    goto $l4954;
                    $l4954:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4957));
                    c4957 = NULL;
                    switch ($tmp4956) {
                        case 0: goto $l4962;
                        case -1: goto $l4967;
                    }
                    $l4967:;
                }
                }
                else {
                {
                    goto $l4887;
                }
                }
                }
                }
            }
        }
        }
        $l4887:;
        panda$collections$ImmutableArray* $tmp4971 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4971);
        $tmp4970 = $tmp4971;
        $tmp4969 = $tmp4970;
        a4968 = $tmp4969;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4970));
        $l4972:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4975 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4974 = $tmp4975;
            {
                $match$2344_134976 = next4974.kind;
                panda$core$Int64$init$builtin_int64(&$tmp4977, 13);
                panda$core$Bit $tmp4978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp4977);
                if ($tmp4978.value) {
                {
                    panda$core$Int64 $tmp4979 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4968);
                    panda$core$Int64$init$builtin_int64(&$tmp4980, 0);
                    panda$core$Bit $tmp4981 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4979, $tmp4980);
                    if ($tmp4981.value) {
                    {
                        panda$core$String* $tmp4986 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4974);
                        $tmp4985 = $tmp4986;
                        panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4984, $tmp4985);
                        $tmp4983 = $tmp4987;
                        panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4988);
                        $tmp4982 = $tmp4989;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4974, $tmp4982);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4982));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4983));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4985));
                        $tmp4990 = NULL;
                        $returnValue4861 = $tmp4990;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4990));
                        $tmp4855 = 4;
                        goto $l4853;
                        $l4991:;
                        return $returnValue4861;
                    }
                    }
                    {
                        $tmp4993 = a4968;
                        panda$collections$ImmutableArray* $tmp4996 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4995 = $tmp4996;
                        $tmp4994 = $tmp4995;
                        a4968 = $tmp4994;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4994));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4995));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4993));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp4997, 11);
                panda$core$Bit $tmp4998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp4997);
                if ($tmp4998.value) {
                {
                    bool $tmp4999 = ((panda$core$Bit) { dc4884 != NULL }).value;
                    if ($tmp4999) goto $l5000;
                    panda$core$Int64 $tmp5001 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4968);
                    panda$core$Int64$init$builtin_int64(&$tmp5002, 0);
                    panda$core$Bit $tmp5003 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5001, $tmp5002);
                    $tmp4999 = $tmp5003.value;
                    $l5000:;
                    panda$core$Bit $tmp5004 = { $tmp4999 };
                    if ($tmp5004.value) {
                    {
                        panda$core$String* $tmp5009 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4974);
                        $tmp5008 = $tmp5009;
                        panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5007, $tmp5008);
                        $tmp5006 = $tmp5010;
                        panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, &$s5011);
                        $tmp5005 = $tmp5012;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4974, $tmp5005);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5005));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5006));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5008));
                        $tmp5013 = NULL;
                        $returnValue4861 = $tmp5013;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5013));
                        $tmp4855 = 5;
                        goto $l4853;
                        $l5014:;
                        return $returnValue4861;
                    }
                    }
                    {
                        $tmp5016 = dc4884;
                        org$pandalanguage$pandac$ASTNode* $tmp5019 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5018 = $tmp5019;
                        $tmp5017 = $tmp5018;
                        dc4884 = $tmp5017;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5017));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5018));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5016));
                    }
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5020, 17);
                panda$core$Bit $tmp5021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5020);
                if ($tmp5021.value) {
                {
                    int $tmp5024;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5028 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4884, a4968);
                        $tmp5027 = $tmp5028;
                        $tmp5026 = $tmp5027;
                        decl5025 = $tmp5026;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5026));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5027));
                        if (((panda$core$Bit) { decl5025 == NULL }).value) {
                        {
                            $tmp5029 = NULL;
                            $returnValue4861 = $tmp5029;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5029));
                            $tmp5024 = 0;
                            goto $l5022;
                            $l5030:;
                            $tmp4855 = 6;
                            goto $l4853;
                            $l5031:;
                            return $returnValue4861;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4880, ((panda$core$Object*) decl5025));
                        {
                            $tmp5033 = dc4884;
                            $tmp5034 = NULL;
                            dc4884 = $tmp5034;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5034));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5033));
                        }
                        {
                            $tmp5035 = a4968;
                            panda$collections$ImmutableArray* $tmp5038 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5038);
                            $tmp5037 = $tmp5038;
                            $tmp5036 = $tmp5037;
                            a4968 = $tmp5036;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5036));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5037));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5035));
                        }
                    }
                    $tmp5024 = -1;
                    goto $l5022;
                    $l5022:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5025));
                    decl5025 = NULL;
                    switch ($tmp5024) {
                        case -1: goto $l5039;
                        case 0: goto $l5030;
                    }
                    $l5039:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5040, 18);
                panda$core$Bit $tmp5041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5040);
                if ($tmp5041.value) {
                {
                    int $tmp5044;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5048 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4884, a4968);
                        $tmp5047 = $tmp5048;
                        $tmp5046 = $tmp5047;
                        decl5045 = $tmp5046;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5046));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5047));
                        if (((panda$core$Bit) { decl5045 == NULL }).value) {
                        {
                            $tmp5049 = NULL;
                            $returnValue4861 = $tmp5049;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5049));
                            $tmp5044 = 0;
                            goto $l5042;
                            $l5050:;
                            $tmp4855 = 7;
                            goto $l4853;
                            $l5051:;
                            return $returnValue4861;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4880, ((panda$core$Object*) decl5045));
                        {
                            $tmp5053 = dc4884;
                            $tmp5054 = NULL;
                            dc4884 = $tmp5054;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5054));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5053));
                        }
                        {
                            $tmp5055 = a4968;
                            panda$collections$ImmutableArray* $tmp5058 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5058);
                            $tmp5057 = $tmp5058;
                            $tmp5056 = $tmp5057;
                            a4968 = $tmp5056;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5056));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5057));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5055));
                        }
                    }
                    $tmp5044 = -1;
                    goto $l5042;
                    $l5042:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5045));
                    decl5045 = NULL;
                    switch ($tmp5044) {
                        case -1: goto $l5059;
                        case 0: goto $l5050;
                    }
                    $l5059:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5060, 19);
                panda$core$Bit $tmp5061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5060);
                if ($tmp5061.value) {
                {
                    int $tmp5064;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5068 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4884, a4968);
                        $tmp5067 = $tmp5068;
                        $tmp5066 = $tmp5067;
                        decl5065 = $tmp5066;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5066));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5067));
                        if (((panda$core$Bit) { decl5065 == NULL }).value) {
                        {
                            $tmp5069 = NULL;
                            $returnValue4861 = $tmp5069;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5069));
                            $tmp5064 = 0;
                            goto $l5062;
                            $l5070:;
                            $tmp4855 = 8;
                            goto $l4853;
                            $l5071:;
                            return $returnValue4861;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4880, ((panda$core$Object*) decl5065));
                        {
                            $tmp5073 = dc4884;
                            $tmp5074 = NULL;
                            dc4884 = $tmp5074;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5074));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5073));
                        }
                        {
                            $tmp5075 = a4968;
                            panda$collections$ImmutableArray* $tmp5078 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5078);
                            $tmp5077 = $tmp5078;
                            $tmp5076 = $tmp5077;
                            a4968 = $tmp5076;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5076));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5077));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5075));
                        }
                    }
                    $tmp5064 = -1;
                    goto $l5062;
                    $l5062:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5065));
                    decl5065 = NULL;
                    switch ($tmp5064) {
                        case -1: goto $l5079;
                        case 0: goto $l5070;
                    }
                    $l5079:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5081, 21);
                panda$core$Bit $tmp5082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5081);
                bool $tmp5080 = $tmp5082.value;
                if ($tmp5080) goto $l5083;
                panda$core$Int64$init$builtin_int64(&$tmp5084, 20);
                panda$core$Bit $tmp5085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5084);
                $tmp5080 = $tmp5085.value;
                $l5083:;
                panda$core$Bit $tmp5086 = { $tmp5080 };
                if ($tmp5086.value) {
                {
                    int $tmp5089;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5093 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4884, a4968);
                        $tmp5092 = $tmp5093;
                        $tmp5091 = $tmp5092;
                        decl5090 = $tmp5091;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5091));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5092));
                        if (((panda$core$Bit) { decl5090 == NULL }).value) {
                        {
                            $tmp5094 = NULL;
                            $returnValue4861 = $tmp5094;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5094));
                            $tmp5089 = 0;
                            goto $l5087;
                            $l5095:;
                            $tmp4855 = 9;
                            goto $l4853;
                            $l5096:;
                            return $returnValue4861;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4880, ((panda$core$Object*) decl5090));
                        {
                            $tmp5098 = dc4884;
                            $tmp5099 = NULL;
                            dc4884 = $tmp5099;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5099));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5098));
                        }
                        {
                            $tmp5100 = a4968;
                            panda$collections$ImmutableArray* $tmp5103 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5103);
                            $tmp5102 = $tmp5103;
                            $tmp5101 = $tmp5102;
                            a4968 = $tmp5101;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5101));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5102));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5100));
                        }
                    }
                    $tmp5089 = -1;
                    goto $l5087;
                    $l5087:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5090));
                    decl5090 = NULL;
                    switch ($tmp5089) {
                        case -1: goto $l5104;
                        case 0: goto $l5095;
                    }
                    $l5104:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5108, 23);
                panda$core$Bit $tmp5109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5108);
                bool $tmp5107 = $tmp5109.value;
                if ($tmp5107) goto $l5110;
                panda$core$Int64$init$builtin_int64(&$tmp5111, 24);
                panda$core$Bit $tmp5112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5111);
                $tmp5107 = $tmp5112.value;
                $l5110:;
                panda$core$Bit $tmp5113 = { $tmp5107 };
                bool $tmp5106 = $tmp5113.value;
                if ($tmp5106) goto $l5114;
                panda$core$Int64$init$builtin_int64(&$tmp5115, 25);
                panda$core$Bit $tmp5116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5115);
                $tmp5106 = $tmp5116.value;
                $l5114:;
                panda$core$Bit $tmp5117 = { $tmp5106 };
                bool $tmp5105 = $tmp5117.value;
                if ($tmp5105) goto $l5118;
                panda$core$Int64$init$builtin_int64(&$tmp5119, 26);
                panda$core$Bit $tmp5120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5119);
                $tmp5105 = $tmp5120.value;
                $l5118:;
                panda$core$Bit $tmp5121 = { $tmp5105 };
                if ($tmp5121.value) {
                {
                    int $tmp5124;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp5128 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4884, a4968);
                        $tmp5127 = $tmp5128;
                        $tmp5126 = $tmp5127;
                        decl5125 = $tmp5126;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5126));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5127));
                        if (((panda$core$Bit) { decl5125 == NULL }).value) {
                        {
                            $tmp5129 = NULL;
                            $returnValue4861 = $tmp5129;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5129));
                            $tmp5124 = 0;
                            goto $l5122;
                            $l5130:;
                            $tmp4855 = 10;
                            goto $l4853;
                            $l5131:;
                            return $returnValue4861;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4880, ((panda$core$Object*) decl5125));
                        {
                            $tmp5133 = dc4884;
                            $tmp5134 = NULL;
                            dc4884 = $tmp5134;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5134));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5133));
                        }
                        {
                            $tmp5135 = a4968;
                            panda$collections$ImmutableArray* $tmp5138 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp5138);
                            $tmp5137 = $tmp5138;
                            $tmp5136 = $tmp5137;
                            a4968 = $tmp5136;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5136));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5137));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5135));
                        }
                    }
                    $tmp5124 = -1;
                    goto $l5122;
                    $l5122:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl5125));
                    decl5125 = NULL;
                    switch ($tmp5124) {
                        case -1: goto $l5139;
                        case 0: goto $l5130;
                    }
                    $l5139:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp5140, 100);
                panda$core$Bit $tmp5141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2344_134976.$rawValue, $tmp5140);
                if ($tmp5141.value) {
                {
                    panda$core$Int64$init$builtin_int64(&$tmp5143, 100);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5142, $tmp5143);
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5142, &$s5144);
                    goto $l4973;
                }
                }
                else {
                {
                    panda$core$String* $tmp5149 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4974);
                    $tmp5148 = $tmp5149;
                    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5147, $tmp5148);
                    $tmp5146 = $tmp5150;
                    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, &$s5151);
                    $tmp5145 = $tmp5152;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4974, $tmp5145);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5145));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5146));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5148));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp5153 = NULL;
                    $returnValue4861 = $tmp5153;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5153));
                    $tmp4855 = 11;
                    goto $l4853;
                    $l5154:;
                    return $returnValue4861;
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
        $l4973:;
        org$pandalanguage$pandac$ASTNode* $tmp5158 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5159, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5161, 2);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5160, $tmp5161);
        panda$core$String* $tmp5163 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4865.value));
        $tmp5162 = $tmp5163;
        panda$collections$ImmutableArray* $tmp5165 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4880);
        $tmp5164 = $tmp5165;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5158, $tmp5159, ((org$pandalanguage$pandac$parser$Token) start4856.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp5160, $tmp5162, NULL, NULL, $tmp5164);
        $tmp5157 = $tmp5158;
        $tmp5156 = $tmp5157;
        $returnValue4861 = $tmp5156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5162));
        $tmp4855 = 12;
        goto $l4853;
        $l5166:;
        return $returnValue4861;
    }
    $l4853:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4968));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4884));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4880));
    members4880 = NULL;
    a4968 = NULL;
    switch ($tmp4855) {
        case 1: goto $l4871;
        case 8: goto $l5071;
        case 7: goto $l5051;
        case 12: goto $l5166;
        case 4: goto $l4991;
        case 9: goto $l5096;
        case 5: goto $l5014;
        case 6: goto $l5031;
        case 3: goto $l4963;
        case 10: goto $l5131;
        case 2: goto $l4878;
        case 11: goto $l5154;
        case 0: goto $l4863;
    }
    $l5168:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start5172;
    org$pandalanguage$pandac$ASTNode* dc5174 = NULL;
    panda$core$Int64 $tmp5175;
    org$pandalanguage$pandac$ASTNode* $tmp5177;
    org$pandalanguage$pandac$ASTNode* $tmp5178;
    org$pandalanguage$pandac$ASTNode* $tmp5179;
    org$pandalanguage$pandac$ASTNode* $returnValue5181;
    org$pandalanguage$pandac$ASTNode* $tmp5182;
    org$pandalanguage$pandac$ASTNode* $tmp5185;
    org$pandalanguage$pandac$ASTNode* $tmp5186;
    panda$collections$ImmutableArray* a5187 = NULL;
    panda$collections$ImmutableArray* $tmp5188;
    panda$collections$ImmutableArray* $tmp5189;
    org$pandalanguage$pandac$ASTNode* $tmp5191;
    org$pandalanguage$pandac$parser$Token$Kind $match$2430_95194;
    panda$core$Int64 $tmp5196;
    org$pandalanguage$pandac$ASTNode* $tmp5198;
    org$pandalanguage$pandac$ASTNode* $tmp5199;
    panda$core$Int64 $tmp5203;
    org$pandalanguage$pandac$ASTNode* $tmp5205;
    org$pandalanguage$pandac$ASTNode* $tmp5206;
    panda$core$Int64 $tmp5210;
    org$pandalanguage$pandac$ASTNode* $tmp5212;
    org$pandalanguage$pandac$ASTNode* $tmp5213;
    panda$core$Int64 $tmp5218;
    panda$core$Int64 $tmp5221;
    org$pandalanguage$pandac$ASTNode* $tmp5224;
    org$pandalanguage$pandac$ASTNode* $tmp5225;
    panda$core$Int64 $tmp5229;
    org$pandalanguage$pandac$ASTNode* $tmp5231;
    org$pandalanguage$pandac$ASTNode* $tmp5232;
    panda$core$Int64 $tmp5239;
    panda$core$Int64 $tmp5242;
    panda$core$Int64 $tmp5246;
    panda$core$Int64 $tmp5250;
    org$pandalanguage$pandac$ASTNode* $tmp5253;
    org$pandalanguage$pandac$ASTNode* $tmp5254;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5258;
    panda$core$Int64 $tmp5259;
    org$pandalanguage$pandac$ASTNode* $tmp5261;
    int $tmp5171;
    {
        org$pandalanguage$pandac$parser$Token $tmp5173 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start5172 = $tmp5173;
        memset(&dc5174, 0, sizeof(dc5174));
        panda$core$Int64$init$builtin_int64(&$tmp5175, 11);
        panda$core$Bit $tmp5176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start5172.kind.$rawValue, $tmp5175);
        if ($tmp5176.value) {
        {
            {
                $tmp5177 = dc5174;
                org$pandalanguage$pandac$ASTNode* $tmp5180 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5179 = $tmp5180;
                $tmp5178 = $tmp5179;
                dc5174 = $tmp5178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5177));
            }
            if (((panda$core$Bit) { dc5174 == NULL }).value) {
            {
                $tmp5182 = NULL;
                $returnValue5181 = $tmp5182;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5182));
                $tmp5171 = 0;
                goto $l5169;
                $l5183:;
                return $returnValue5181;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5185 = dc5174;
                $tmp5186 = NULL;
                dc5174 = $tmp5186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5185));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp5190 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp5189 = $tmp5190;
        $tmp5188 = $tmp5189;
        a5187 = $tmp5188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5189));
        if (((panda$core$Bit) { a5187 == NULL }).value) {
        {
            $tmp5191 = NULL;
            $returnValue5181 = $tmp5191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5191));
            $tmp5171 = 1;
            goto $l5169;
            $l5192:;
            return $returnValue5181;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp5195 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2430_95194 = $tmp5195.kind;
            panda$core$Int64$init$builtin_int64(&$tmp5196, 17);
            panda$core$Bit $tmp5197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5196);
            if ($tmp5197.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5200 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5174, a5187);
                $tmp5199 = $tmp5200;
                $tmp5198 = $tmp5199;
                $returnValue5181 = $tmp5198;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5199));
                $tmp5171 = 2;
                goto $l5169;
                $l5201:;
                return $returnValue5181;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5203, 18);
            panda$core$Bit $tmp5204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5203);
            if ($tmp5204.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5207 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5174, a5187);
                $tmp5206 = $tmp5207;
                $tmp5205 = $tmp5206;
                $returnValue5181 = $tmp5205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5206));
                $tmp5171 = 3;
                goto $l5169;
                $l5208:;
                return $returnValue5181;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5210, 19);
            panda$core$Bit $tmp5211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5210);
            if ($tmp5211.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5214 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5174, a5187);
                $tmp5213 = $tmp5214;
                $tmp5212 = $tmp5213;
                $returnValue5181 = $tmp5212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5213));
                $tmp5171 = 4;
                goto $l5169;
                $l5215:;
                return $returnValue5181;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5218, 21);
            panda$core$Bit $tmp5219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5218);
            bool $tmp5217 = $tmp5219.value;
            if ($tmp5217) goto $l5220;
            panda$core$Int64$init$builtin_int64(&$tmp5221, 20);
            panda$core$Bit $tmp5222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5221);
            $tmp5217 = $tmp5222.value;
            $l5220:;
            panda$core$Bit $tmp5223 = { $tmp5217 };
            if ($tmp5223.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5226 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5174, a5187);
                $tmp5225 = $tmp5226;
                $tmp5224 = $tmp5225;
                $returnValue5181 = $tmp5224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5225));
                $tmp5171 = 5;
                goto $l5169;
                $l5227:;
                return $returnValue5181;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5229, 22);
            panda$core$Bit $tmp5230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5229);
            if ($tmp5230.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5233 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5174, a5187);
                $tmp5232 = $tmp5233;
                $tmp5231 = $tmp5232;
                $returnValue5181 = $tmp5231;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5231));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5232));
                $tmp5171 = 6;
                goto $l5169;
                $l5234:;
                return $returnValue5181;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp5239, 23);
            panda$core$Bit $tmp5240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5239);
            bool $tmp5238 = $tmp5240.value;
            if ($tmp5238) goto $l5241;
            panda$core$Int64$init$builtin_int64(&$tmp5242, 24);
            panda$core$Bit $tmp5243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5242);
            $tmp5238 = $tmp5243.value;
            $l5241:;
            panda$core$Bit $tmp5244 = { $tmp5238 };
            bool $tmp5237 = $tmp5244.value;
            if ($tmp5237) goto $l5245;
            panda$core$Int64$init$builtin_int64(&$tmp5246, 25);
            panda$core$Bit $tmp5247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5246);
            $tmp5237 = $tmp5247.value;
            $l5245:;
            panda$core$Bit $tmp5248 = { $tmp5237 };
            bool $tmp5236 = $tmp5248.value;
            if ($tmp5236) goto $l5249;
            panda$core$Int64$init$builtin_int64(&$tmp5250, 26);
            panda$core$Bit $tmp5251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2430_95194.$rawValue, $tmp5250);
            $tmp5236 = $tmp5251.value;
            $l5249:;
            panda$core$Bit $tmp5252 = { $tmp5236 };
            if ($tmp5252.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp5255 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc5174, a5187);
                $tmp5254 = $tmp5255;
                $tmp5253 = $tmp5254;
                $returnValue5181 = $tmp5253;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5253));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5254));
                $tmp5171 = 7;
                goto $l5169;
                $l5256:;
                return $returnValue5181;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp5259, 17);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5258, $tmp5259);
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5258, &$s5260);
                $tmp5261 = NULL;
                $returnValue5181 = $tmp5261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5261));
                $tmp5171 = 8;
                goto $l5169;
                $l5262:;
                return $returnValue5181;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp5171 = -1;
    goto $l5169;
    $l5169:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a5187));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc5174));
    a5187 = NULL;
    switch ($tmp5171) {
        case -1: goto $l5264;
        case 5: goto $l5227;
        case 2: goto $l5201;
        case 4: goto $l5215;
        case 1: goto $l5192;
        case 7: goto $l5256;
        case 6: goto $l5234;
        case 3: goto $l5208;
        case 0: goto $l5183;
        case 8: goto $l5262;
    }
    $l5264:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5268;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5269;
    panda$core$Int64 $tmp5270;
    org$pandalanguage$pandac$ASTNode* $returnValue5273;
    org$pandalanguage$pandac$ASTNode* $tmp5274;
    org$pandalanguage$pandac$parser$Token$nullable name5277;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5278;
    panda$core$Int64 $tmp5279;
    org$pandalanguage$pandac$ASTNode* $tmp5282;
    panda$collections$ImmutableArray* generics5285 = NULL;
    panda$core$Int64 $tmp5287;
    panda$collections$ImmutableArray* $tmp5289;
    panda$collections$ImmutableArray* $tmp5290;
    panda$collections$ImmutableArray* $tmp5291;
    org$pandalanguage$pandac$ASTNode* $tmp5293;
    panda$collections$ImmutableArray* $tmp5296;
    panda$collections$ImmutableArray* $tmp5297;
    panda$collections$ImmutableArray* stypes5298 = NULL;
    panda$core$Int64 $tmp5300;
    panda$collections$ImmutableArray* $tmp5302;
    panda$collections$ImmutableArray* $tmp5303;
    panda$collections$ImmutableArray* $tmp5304;
    org$pandalanguage$pandac$ASTNode* $tmp5306;
    panda$collections$ImmutableArray* $tmp5309;
    panda$collections$ImmutableArray* $tmp5310;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5311;
    panda$core$Int64 $tmp5312;
    org$pandalanguage$pandac$ASTNode* $tmp5315;
    panda$collections$Array* members5318 = NULL;
    panda$collections$Array* $tmp5319;
    panda$collections$Array* $tmp5320;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5325;
    panda$core$Int64 $tmp5326;
    org$pandalanguage$pandac$ASTNode* member5331 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5332;
    org$pandalanguage$pandac$ASTNode* $tmp5333;
    org$pandalanguage$pandac$ASTNode* $tmp5335;
    org$pandalanguage$pandac$ASTNode* $tmp5340;
    org$pandalanguage$pandac$ASTNode* $tmp5341;
    panda$core$Int64 $tmp5343;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5344;
    panda$core$Int64 $tmp5345;
    panda$core$String* $tmp5346;
    panda$collections$ImmutableArray* $tmp5348;
    int $tmp5267;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5270, 17);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5269, $tmp5270);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5272 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5269, &$s5271);
        start5268 = $tmp5272;
        if (((panda$core$Bit) { !start5268.nonnull }).value) {
        {
            $tmp5274 = NULL;
            $returnValue5273 = $tmp5274;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5274));
            $tmp5267 = 0;
            goto $l5265;
            $l5275:;
            return $returnValue5273;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5279, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5278, $tmp5279);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5281 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5278, &$s5280);
        name5277 = $tmp5281;
        if (((panda$core$Bit) { !name5277.nonnull }).value) {
        {
            $tmp5282 = NULL;
            $returnValue5273 = $tmp5282;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5282));
            $tmp5267 = 1;
            goto $l5265;
            $l5283:;
            return $returnValue5273;
        }
        }
        memset(&generics5285, 0, sizeof(generics5285));
        org$pandalanguage$pandac$parser$Token $tmp5286 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5287, 62);
        panda$core$Bit $tmp5288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5286.kind.$rawValue, $tmp5287);
        if ($tmp5288.value) {
        {
            {
                $tmp5289 = generics5285;
                panda$collections$ImmutableArray* $tmp5292 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5291 = $tmp5292;
                $tmp5290 = $tmp5291;
                generics5285 = $tmp5290;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5289));
            }
            if (((panda$core$Bit) { generics5285 == NULL }).value) {
            {
                $tmp5293 = NULL;
                $returnValue5273 = $tmp5293;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5293));
                $tmp5267 = 2;
                goto $l5265;
                $l5294:;
                return $returnValue5273;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5296 = generics5285;
                $tmp5297 = NULL;
                generics5285 = $tmp5297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5296));
            }
        }
        }
        memset(&stypes5298, 0, sizeof(stypes5298));
        org$pandalanguage$pandac$parser$Token $tmp5299 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5300, 95);
        panda$core$Bit $tmp5301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5299.kind.$rawValue, $tmp5300);
        if ($tmp5301.value) {
        {
            {
                $tmp5302 = stypes5298;
                panda$collections$ImmutableArray* $tmp5305 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5304 = $tmp5305;
                $tmp5303 = $tmp5304;
                stypes5298 = $tmp5303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5302));
            }
            if (((panda$core$Bit) { stypes5298 == NULL }).value) {
            {
                $tmp5306 = NULL;
                $returnValue5273 = $tmp5306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5306));
                $tmp5267 = 3;
                goto $l5265;
                $l5307:;
                return $returnValue5273;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5309 = stypes5298;
                $tmp5310 = NULL;
                stypes5298 = $tmp5310;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5310));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5309));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5312, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5311, $tmp5312);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5314 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5311, &$s5313);
        if (((panda$core$Bit) { !$tmp5314.nonnull }).value) {
        {
            $tmp5315 = NULL;
            $returnValue5273 = $tmp5315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5315));
            $tmp5267 = 4;
            goto $l5265;
            $l5316:;
            return $returnValue5273;
        }
        }
        panda$collections$Array* $tmp5321 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5321);
        $tmp5320 = $tmp5321;
        $tmp5319 = $tmp5320;
        members5318 = $tmp5319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5320));
        $l5322:;
        panda$core$Int64$init$builtin_int64(&$tmp5326, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5325, $tmp5326);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5327 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5325);
        bool $tmp5324 = ((panda$core$Bit) { !$tmp5327.nonnull }).value;
        if (!$tmp5324) goto $l5323;
        {
            int $tmp5330;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5334 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5333 = $tmp5334;
                $tmp5332 = $tmp5333;
                member5331 = $tmp5332;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5333));
                if (((panda$core$Bit) { member5331 == NULL }).value) {
                {
                    $tmp5335 = NULL;
                    $returnValue5273 = $tmp5335;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5335));
                    $tmp5330 = 0;
                    goto $l5328;
                    $l5336:;
                    $tmp5267 = 5;
                    goto $l5265;
                    $l5337:;
                    return $returnValue5273;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5318, ((panda$core$Object*) member5331));
            }
            $tmp5330 = -1;
            goto $l5328;
            $l5328:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5331));
            member5331 = NULL;
            switch ($tmp5330) {
                case 0: goto $l5336;
                case -1: goto $l5339;
            }
            $l5339:;
        }
        goto $l5322;
        $l5323:;
        org$pandalanguage$pandac$ASTNode* $tmp5342 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5343, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5345, 0);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5344, $tmp5345);
        panda$core$String* $tmp5347 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5277.value));
        $tmp5346 = $tmp5347;
        panda$collections$ImmutableArray* $tmp5349 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5318);
        $tmp5348 = $tmp5349;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5342, $tmp5343, ((org$pandalanguage$pandac$parser$Token) start5268.value).position, p_doccomment, p_annotations, $tmp5344, $tmp5346, generics5285, stypes5298, $tmp5348);
        $tmp5341 = $tmp5342;
        $tmp5340 = $tmp5341;
        $returnValue5273 = $tmp5340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5346));
        $tmp5267 = 6;
        goto $l5265;
        $l5350:;
        return $returnValue5273;
    }
    $l5265:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5318));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes5298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5285));
    members5318 = NULL;
    switch ($tmp5267) {
        case 2: goto $l5294;
        case 6: goto $l5350;
        case 1: goto $l5283;
        case 5: goto $l5337;
        case 4: goto $l5316;
        case 3: goto $l5307;
        case 0: goto $l5275;
    }
    $l5352:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start5356;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5357;
    panda$core$Int64 $tmp5358;
    org$pandalanguage$pandac$ASTNode* $returnValue5361;
    org$pandalanguage$pandac$ASTNode* $tmp5362;
    org$pandalanguage$pandac$parser$Token$nullable name5365;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5366;
    panda$core$Int64 $tmp5367;
    org$pandalanguage$pandac$ASTNode* $tmp5370;
    panda$collections$ImmutableArray* generics5373 = NULL;
    panda$core$Int64 $tmp5375;
    panda$collections$ImmutableArray* $tmp5377;
    panda$collections$ImmutableArray* $tmp5378;
    panda$collections$ImmutableArray* $tmp5379;
    org$pandalanguage$pandac$ASTNode* $tmp5381;
    panda$collections$ImmutableArray* $tmp5384;
    panda$collections$ImmutableArray* $tmp5385;
    panda$collections$ImmutableArray* $tmp5386;
    panda$collections$Array* intfs5388 = NULL;
    panda$collections$Array* $tmp5389;
    panda$collections$Array* $tmp5390;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5392;
    panda$core$Int64 $tmp5393;
    org$pandalanguage$pandac$ASTNode* t5398 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5399;
    org$pandalanguage$pandac$ASTNode* $tmp5400;
    org$pandalanguage$pandac$ASTNode* $tmp5402;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5409;
    panda$core$Int64 $tmp5410;
    org$pandalanguage$pandac$ASTNode* $tmp5412;
    org$pandalanguage$pandac$ASTNode* $tmp5413;
    org$pandalanguage$pandac$ASTNode* $tmp5414;
    org$pandalanguage$pandac$ASTNode* $tmp5416;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5421;
    panda$core$Int64 $tmp5422;
    org$pandalanguage$pandac$ASTNode* $tmp5425;
    panda$collections$Array* members5428 = NULL;
    panda$collections$Array* $tmp5429;
    panda$collections$Array* $tmp5430;
    org$pandalanguage$pandac$parser$Token$Kind $tmp5435;
    panda$core$Int64 $tmp5436;
    org$pandalanguage$pandac$ASTNode* member5441 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5442;
    org$pandalanguage$pandac$ASTNode* $tmp5443;
    org$pandalanguage$pandac$ASTNode* $tmp5445;
    org$pandalanguage$pandac$ASTNode* $tmp5450;
    org$pandalanguage$pandac$ASTNode* $tmp5451;
    panda$core$Int64 $tmp5453;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp5454;
    panda$core$Int64 $tmp5455;
    panda$core$String* $tmp5456;
    panda$collections$ImmutableArray* $tmp5458;
    panda$collections$ImmutableArray* $tmp5460;
    int $tmp5355;
    {
        panda$core$Int64$init$builtin_int64(&$tmp5358, 18);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5357, $tmp5358);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5360 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5357, &$s5359);
        start5356 = $tmp5360;
        if (((panda$core$Bit) { !start5356.nonnull }).value) {
        {
            $tmp5362 = NULL;
            $returnValue5361 = $tmp5362;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5362));
            $tmp5355 = 0;
            goto $l5353;
            $l5363:;
            return $returnValue5361;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5367, 48);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5366, $tmp5367);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5369 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5366, &$s5368);
        name5365 = $tmp5369;
        if (((panda$core$Bit) { !name5365.nonnull }).value) {
        {
            $tmp5370 = NULL;
            $returnValue5361 = $tmp5370;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5370));
            $tmp5355 = 1;
            goto $l5353;
            $l5371:;
            return $returnValue5361;
        }
        }
        memset(&generics5373, 0, sizeof(generics5373));
        org$pandalanguage$pandac$parser$Token $tmp5374 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5375, 62);
        panda$core$Bit $tmp5376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5374.kind.$rawValue, $tmp5375);
        if ($tmp5376.value) {
        {
            {
                $tmp5377 = generics5373;
                panda$collections$ImmutableArray* $tmp5380 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp5379 = $tmp5380;
                $tmp5378 = $tmp5379;
                generics5373 = $tmp5378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5377));
            }
            if (((panda$core$Bit) { generics5373 == NULL }).value) {
            {
                $tmp5381 = NULL;
                $returnValue5361 = $tmp5381;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5381));
                $tmp5355 = 2;
                goto $l5353;
                $l5382:;
                return $returnValue5361;
            }
            }
        }
        }
        else {
        {
            {
                $tmp5384 = generics5373;
                panda$collections$ImmutableArray* $tmp5387 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp5387);
                $tmp5386 = $tmp5387;
                $tmp5385 = $tmp5386;
                generics5373 = $tmp5385;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5385));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5384));
            }
        }
        }
        panda$collections$Array* $tmp5391 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5391);
        $tmp5390 = $tmp5391;
        $tmp5389 = $tmp5390;
        intfs5388 = $tmp5389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5390));
        panda$core$Int64$init$builtin_int64(&$tmp5393, 95);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5392, $tmp5393);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5394 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5392);
        if (((panda$core$Bit) { $tmp5394.nonnull }).value) {
        {
            int $tmp5397;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5401 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5400 = $tmp5401;
                $tmp5399 = $tmp5400;
                t5398 = $tmp5399;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5400));
                if (((panda$core$Bit) { t5398 == NULL }).value) {
                {
                    $tmp5402 = NULL;
                    $returnValue5361 = $tmp5402;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5402));
                    $tmp5397 = 0;
                    goto $l5395;
                    $l5403:;
                    $tmp5355 = 3;
                    goto $l5353;
                    $l5404:;
                    return $returnValue5361;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs5388, ((panda$core$Object*) t5398));
                $l5406:;
                panda$core$Int64$init$builtin_int64(&$tmp5410, 105);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5409, $tmp5410);
                org$pandalanguage$pandac$parser$Token$nullable $tmp5411 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5409);
                bool $tmp5408 = ((panda$core$Bit) { $tmp5411.nonnull }).value;
                if (!$tmp5408) goto $l5407;
                {
                    {
                        $tmp5412 = t5398;
                        org$pandalanguage$pandac$ASTNode* $tmp5415 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp5414 = $tmp5415;
                        $tmp5413 = $tmp5414;
                        t5398 = $tmp5413;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5413));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5414));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5412));
                    }
                    if (((panda$core$Bit) { t5398 == NULL }).value) {
                    {
                        $tmp5416 = NULL;
                        $returnValue5361 = $tmp5416;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5416));
                        $tmp5397 = 1;
                        goto $l5395;
                        $l5417:;
                        $tmp5355 = 4;
                        goto $l5353;
                        $l5418:;
                        return $returnValue5361;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs5388, ((panda$core$Object*) t5398));
                }
                goto $l5406;
                $l5407:;
            }
            $tmp5397 = -1;
            goto $l5395;
            $l5395:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t5398));
            t5398 = NULL;
            switch ($tmp5397) {
                case 1: goto $l5417;
                case -1: goto $l5420;
                case 0: goto $l5403;
            }
            $l5420:;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp5422, 99);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5421, $tmp5422);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5424 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5421, &$s5423);
        if (((panda$core$Bit) { !$tmp5424.nonnull }).value) {
        {
            $tmp5425 = NULL;
            $returnValue5361 = $tmp5425;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5425));
            $tmp5355 = 5;
            goto $l5353;
            $l5426:;
            return $returnValue5361;
        }
        }
        panda$collections$Array* $tmp5431 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5431);
        $tmp5430 = $tmp5431;
        $tmp5429 = $tmp5430;
        members5428 = $tmp5429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5430));
        $l5432:;
        panda$core$Int64$init$builtin_int64(&$tmp5436, 100);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp5435, $tmp5436);
        org$pandalanguage$pandac$parser$Token$nullable $tmp5437 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp5435);
        bool $tmp5434 = ((panda$core$Bit) { !$tmp5437.nonnull }).value;
        if (!$tmp5434) goto $l5433;
        {
            int $tmp5440;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5444 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5443 = $tmp5444;
                $tmp5442 = $tmp5443;
                member5441 = $tmp5442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5443));
                if (((panda$core$Bit) { member5441 == NULL }).value) {
                {
                    $tmp5445 = NULL;
                    $returnValue5361 = $tmp5445;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5445));
                    $tmp5440 = 0;
                    goto $l5438;
                    $l5446:;
                    $tmp5355 = 6;
                    goto $l5353;
                    $l5447:;
                    return $returnValue5361;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members5428, ((panda$core$Object*) member5441));
            }
            $tmp5440 = -1;
            goto $l5438;
            $l5438:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member5441));
            member5441 = NULL;
            switch ($tmp5440) {
                case -1: goto $l5449;
                case 0: goto $l5446;
            }
            $l5449:;
        }
        goto $l5432;
        $l5433:;
        org$pandalanguage$pandac$ASTNode* $tmp5452 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5453, 11);
        panda$core$Int64$init$builtin_int64(&$tmp5455, 1);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp5454, $tmp5455);
        panda$core$String* $tmp5457 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name5365.value));
        $tmp5456 = $tmp5457;
        panda$collections$ImmutableArray* $tmp5459 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs5388);
        $tmp5458 = $tmp5459;
        panda$collections$ImmutableArray* $tmp5461 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members5428);
        $tmp5460 = $tmp5461;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5452, $tmp5453, ((org$pandalanguage$pandac$parser$Token) start5356.value).position, p_doccomment, p_annotations, $tmp5454, $tmp5456, generics5373, $tmp5458, $tmp5460);
        $tmp5451 = $tmp5452;
        $tmp5450 = $tmp5451;
        $returnValue5361 = $tmp5450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5456));
        $tmp5355 = 7;
        goto $l5353;
        $l5462:;
        return $returnValue5361;
    }
    $l5353:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members5428));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs5388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics5373));
    intfs5388 = NULL;
    members5428 = NULL;
    switch ($tmp5355) {
        case 3: goto $l5404;
        case 4: goto $l5418;
        case 6: goto $l5447;
        case 7: goto $l5462;
        case 5: goto $l5426;
        case 2: goto $l5382;
        case 0: goto $l5363;
        case 1: goto $l5371;
    }
    $l5464:;
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2554_95465;
    panda$core$Int64 $tmp5467;
    org$pandalanguage$pandac$ASTNode* $returnValue5469;
    org$pandalanguage$pandac$ASTNode* $tmp5470;
    org$pandalanguage$pandac$ASTNode* $tmp5471;
    panda$core$Int64 $tmp5474;
    org$pandalanguage$pandac$ASTNode* $tmp5476;
    org$pandalanguage$pandac$ASTNode* $tmp5477;
    org$pandalanguage$pandac$ASTNode* $tmp5480;
    org$pandalanguage$pandac$ASTNode* $tmp5481;
    {
        org$pandalanguage$pandac$parser$Token $tmp5466 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2554_95465 = $tmp5466.kind;
        panda$core$Int64$init$builtin_int64(&$tmp5467, 15);
        panda$core$Bit $tmp5468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2554_95465.$rawValue, $tmp5467);
        if ($tmp5468.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5472 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5471 = $tmp5472;
            $tmp5470 = $tmp5471;
            $returnValue5469 = $tmp5470;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5470));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5471));
            return $returnValue5469;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp5474, 14);
        panda$core$Bit $tmp5475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2554_95465.$rawValue, $tmp5474);
        if ($tmp5475.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5478 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5477 = $tmp5478;
            $tmp5476 = $tmp5477;
            $returnValue5469 = $tmp5476;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5476));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5477));
            return $returnValue5469;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp5482 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp5481 = $tmp5482;
            $tmp5480 = $tmp5481;
            $returnValue5469 = $tmp5480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5481));
            return $returnValue5469;
        }
        }
        }
    }
    abort();
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries5487 = NULL;
    panda$collections$Array* $tmp5488;
    panda$collections$Array* $tmp5489;
    panda$core$Int64 $tmp5495;
    org$pandalanguage$pandac$ASTNode* entry5500 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp5501;
    org$pandalanguage$pandac$ASTNode* $tmp5502;
    org$pandalanguage$pandac$ASTNode* $returnValue5504;
    org$pandalanguage$pandac$ASTNode* $tmp5505;
    org$pandalanguage$pandac$ASTNode* $tmp5514;
    org$pandalanguage$pandac$ASTNode* $tmp5515;
    panda$core$Int64 $tmp5517;
    panda$collections$ImmutableArray* $tmp5518;
    int $tmp5486;
    {
        panda$collections$Array* $tmp5490 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp5490);
        $tmp5489 = $tmp5490;
        $tmp5488 = $tmp5489;
        entries5487 = $tmp5488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5489));
        $l5491:;
        org$pandalanguage$pandac$parser$Token $tmp5494 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Int64$init$builtin_int64(&$tmp5495, 0);
        panda$core$Bit $tmp5496 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp5494.kind.$rawValue, $tmp5495);
        bool $tmp5493 = $tmp5496.value;
        if (!$tmp5493) goto $l5492;
        {
            int $tmp5499;
            {
                org$pandalanguage$pandac$ASTNode* $tmp5503 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp5502 = $tmp5503;
                $tmp5501 = $tmp5502;
                entry5500 = $tmp5501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5502));
                if (((panda$core$Bit) { entry5500 == NULL }).value) {
                {
                    $tmp5505 = NULL;
                    $returnValue5504 = $tmp5505;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5505));
                    $tmp5499 = 0;
                    goto $l5497;
                    $l5506:;
                    $tmp5486 = 0;
                    goto $l5484;
                    $l5507:;
                    return $returnValue5504;
                }
                }
                panda$core$Bit $tmp5509 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                if ($tmp5509.value) goto $l5510; else goto $l5511;
                $l5511:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s5512, (panda$core$Int64) { 2574 });
                abort();
                $l5510:;
                panda$collections$Array$add$panda$collections$Array$T(entries5487, ((panda$core$Object*) entry5500));
            }
            $tmp5499 = -1;
            goto $l5497;
            $l5497:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry5500));
            entry5500 = NULL;
            switch ($tmp5499) {
                case -1: goto $l5513;
                case 0: goto $l5506;
            }
            $l5513:;
        }
        goto $l5491;
        $l5492:;
        org$pandalanguage$pandac$ASTNode* $tmp5516 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$Int64$init$builtin_int64(&$tmp5517, 17);
        panda$collections$ImmutableArray* $tmp5519 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries5487);
        $tmp5518 = $tmp5519;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp5516, $tmp5517, $tmp5518);
        $tmp5515 = $tmp5516;
        $tmp5514 = $tmp5515;
        $returnValue5504 = $tmp5514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5518));
        $tmp5486 = 1;
        goto $l5484;
        $l5520:;
        return $returnValue5504;
    }
    $l5484:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries5487));
    entries5487 = NULL;
    switch ($tmp5486) {
        case 1: goto $l5520;
        case 0: goto $l5507;
    }
    $l5522:;
    abort();
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp5525;
    {
    }
    $tmp5525 = -1;
    goto $l5523;
    $l5523:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp5525) {
        case -1: goto $l5526;
    }
    $l5526:;
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

